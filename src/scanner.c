#include "stdio.h"
#include "stdlib.h"
#include <tree_sitter/parser.h>
#include <stdbool.h>
#include <string.h>
#include <wctype.h>
#include <assert.h>

enum TokenType {
  CODE_BLOCK,
  TOKENTYPE_NR
};

void *tree_sitter_help_external_scanner_create() {
  return NULL;
}

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

bool tree_sitter_help_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  skip_space_tabs(lexer);
  if (valid_symbols[CODE_BLOCK]) {
    if (lexer->lookahead == '>') {
      advance(lexer, false);
    } else {
      return false;
    }

    if (lexer->lookahead == '\n') {
      advance(lexer, false);
    } else {
      return false;
    }

    while (lexer->lookahead != EOF) {
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
  }
  return false;
}

// vim: tabstop=2
