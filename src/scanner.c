#include "stdio.h"
#include "stdlib.h"
#include <assert.h>
#include <stdbool.h>
#include <string.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  WORD,
  IMM_WORD,
  COLUMN_HEADING,
  UPPERCASE_NAME,
  CODE_BLOCK,
  TOKENTYPE_NR
};

void *tree_sitter_help_external_scanner_create() { return NULL; }

unsigned int tree_sitter_help_external_scanner_serialize(void *payload,
                                                         char *buffer) {
  return 0;
}

void tree_sitter_help_external_scanner_destroy(void *payload) {}
void tree_sitter_help_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {}

static void advance(TSLexer *lexer, bool skip) { lexer->advance(lexer, skip); }

void skip_space_tabs(TSLexer *lexer) {
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    advance(lexer, true);
  }
}

#define IS_SPECIAL(c)                                                          \
  ((c) == '*' || (c) == '|' || (c) == '`' || (c) == '\'' || (c) == '{' ||      \
   (c) == '}')

bool tree_sitter_help_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  if (!valid_symbols[IMM_WORD]) {
    skip_space_tabs(lexer);
  } else {
    if (iswspace(lexer->lookahead)) {
      return false;
    }
  }
  if (lexer->lookahead == '\0' || lexer->lookahead == EOF ||
      lexer->lookahead == '\n') {
    return false;
  }

  if (lexer->get_column(lexer) == 0 &&
      (lexer->lookahead == '-' || lexer->lookahead == '=')) {
    return false;
  }

  if (valid_symbols[COLUMN_HEADING] && iswalpha(lexer->lookahead) &&
      lexer->get_column(lexer) == 0) {
    assert(valid_symbols[WORD] && valid_symbols[UPPERCASE_NAME]);
    advance(lexer, false);

    bool all_uppercase = true;

    // Now consume a word, without the ending ~ if any
    while (!iswspace(lexer->lookahead) && lexer->lookahead != '\0' &&
           lexer->lookahead != '~') {
      if (all_uppercase && iswlower(lexer->lookahead)) {
        all_uppercase = false;
      }
      advance(lexer, false);
    }

    // Tricky: we will move forward until we find a ~
    //         If we find it before a `\n` and it is followed `\n`
    //         then its a column heading.
    //         Otherwise it's either a word or an UPPERCASE column heading
    lexer->mark_end(lexer);

    while (lexer->lookahead != '*' && lexer->lookahead != '~' &&
           lexer->lookahead != '\n' && lexer->lookahead != '\0') {
      if (all_uppercase && iswlower(lexer->lookahead)) {
        all_uppercase = false;
      }
      advance(lexer, false);
    }

    if (lexer->lookahead == '~') {
      advance(lexer, false);
      all_uppercase = false;
      if (lexer->lookahead == '\n') {
        // Matched a column heading
        lexer->mark_end(lexer);
        advance(lexer, false);
        lexer->result_symbol = COLUMN_HEADING;
        return true;
      }
    }

    if (all_uppercase) {
      lexer->mark_end(lexer);
      lexer->result_symbol = UPPERCASE_NAME;
    } else {
      lexer->result_symbol = WORD;
    }
    return true;
  } else if (valid_symbols[CODE_BLOCK] && lexer->lookahead == '>') {
    advance(lexer, false);

    if (lexer->lookahead == '\n') {
      advance(lexer, false);
    } else {
      return false;
    }

    while (lexer->lookahead != '\0') {
      // Match lines one by one

      if (!iswspace(lexer->lookahead)) {
        if (lexer->lookahead == '<') {
          advance(lexer, false);
        }
        lexer->result_symbol = CODE_BLOCK;
        return true;
      }
      while (lexer->lookahead != '\n') {
        advance(lexer, false);
      }
      advance(lexer, false);
    }
  } else if ((valid_symbols[WORD] || valid_symbols[IMM_WORD]) &&
             !IS_SPECIAL(lexer->lookahead)) {
    TSSymbol result = valid_symbols[IMM_WORD] ? IMM_WORD : WORD;
    advance(lexer, false); // We are sure this is part of the word
    while (lexer->lookahead && !iswspace(lexer->lookahead)) {
      if (IS_SPECIAL(lexer->lookahead)) {
        lexer->mark_end(lexer);
        advance(lexer, false);

        if (iswspace(lexer->lookahead) || iswpunct(lexer->lookahead) ||
            !lexer->lookahead) {
          // Indeed this is an end marker, lex the word and return
          lexer->result_symbol = result;
          return true;
        }
        // Otherwise continue searching, this is not an end marker
        continue;
      }
      // If we come here, the character is a part of the word
      advance(lexer, false);
    }
    lexer->mark_end(lexer);
    lexer->result_symbol = result;
    return true;
  }
  return false;
}

// vim: tabstop=2
