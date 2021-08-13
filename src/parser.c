#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LF = 1,
  aux_sym_headline_token1 = 2,
  aux_sym_headline_token2 = 3,
  aux_sym_uppercase_name_token1 = 4,
  anon_sym_TILDE = 5,
  sym_word = 6,
  anon_sym_STAR = 7,
  anon_sym_SQUOTE = 8,
  anon_sym_PIPE = 9,
  sym_code_block = 10,
  sym_help_file = 11,
  sym_headline = 12,
  sym_line = 13,
  sym__atom = 14,
  sym_uppercase_name = 15,
  sym_column_name = 16,
  sym_column_heading = 17,
  sym_tag = 18,
  aux_sym_help_file_repeat1 = 19,
  aux_sym_headline_repeat1 = 20,
  aux_sym_line_repeat1 = 21,
  aux_sym_uppercase_name_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_headline_token1] = "headline_token1",
  [aux_sym_headline_token2] = "headline_token2",
  [aux_sym_uppercase_name_token1] = "uppercase_name_token1",
  [anon_sym_TILDE] = "~",
  [sym_word] = "word",
  [anon_sym_STAR] = "*",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PIPE] = "|",
  [sym_code_block] = "code_block",
  [sym_help_file] = "help_file",
  [sym_headline] = "headline",
  [sym_line] = "line",
  [sym__atom] = "_atom",
  [sym_uppercase_name] = "uppercase_name",
  [sym_column_name] = "column_name",
  [sym_column_heading] = "column_heading",
  [sym_tag] = "tag",
  [aux_sym_help_file_repeat1] = "help_file_repeat1",
  [aux_sym_headline_repeat1] = "headline_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym_uppercase_name_repeat1] = "uppercase_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_headline_token1] = aux_sym_headline_token1,
  [aux_sym_headline_token2] = aux_sym_headline_token2,
  [aux_sym_uppercase_name_token1] = aux_sym_uppercase_name_token1,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_word] = sym_word,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_code_block] = sym_code_block,
  [sym_help_file] = sym_help_file,
  [sym_headline] = sym_headline,
  [sym_line] = sym_line,
  [sym__atom] = sym__atom,
  [sym_uppercase_name] = sym_uppercase_name,
  [sym_column_name] = sym_column_name,
  [sym_column_heading] = sym_column_heading,
  [sym_tag] = sym_tag,
  [aux_sym_help_file_repeat1] = aux_sym_help_file_repeat1,
  [aux_sym_headline_repeat1] = aux_sym_headline_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [aux_sym_uppercase_name_repeat1] = aux_sym_uppercase_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_headline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_headline_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_help_file] = {
    .visible = true,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_uppercase_name] = {
    .visible = true,
    .named = true,
  },
  [sym_column_name] = {
    .visible = true,
    .named = true,
  },
  [sym_column_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_help_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_headline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_delimiter = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_delimiter] = "delimiter",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_delimiter, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '~') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '~') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '|') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '~') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(29);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '~') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_headline_token2);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_headline_token2);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '~') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(29);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '~') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '~') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '~') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
};

enum {
  ts_external_token_code_block = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_block] = sym_code_block,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_block] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_headline_token1] = ACTIONS(1),
    [aux_sym_headline_token2] = ACTIONS(1),
    [aux_sym_uppercase_name_token1] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_code_block] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(23),
    [sym_headline] = STATE(2),
    [sym_line] = STATE(2),
    [sym__atom] = STATE(5),
    [sym_uppercase_name] = STATE(17),
    [sym_column_name] = STATE(22),
    [sym_column_heading] = STATE(2),
    [sym_tag] = STATE(5),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_headline_repeat1] = STATE(16),
    [aux_sym_line_repeat1] = STATE(5),
    [aux_sym_uppercase_name_repeat1] = STATE(14),
    [anon_sym_LF] = ACTIONS(3),
    [aux_sym_headline_token1] = ACTIONS(5),
    [aux_sym_headline_token2] = ACTIONS(5),
    [aux_sym_uppercase_name_token1] = ACTIONS(7),
    [sym_word] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_code_block] = ACTIONS(13),
  },
  [2] = {
    [sym_headline] = STATE(3),
    [sym_line] = STATE(3),
    [sym__atom] = STATE(5),
    [sym_uppercase_name] = STATE(17),
    [sym_column_name] = STATE(22),
    [sym_column_heading] = STATE(3),
    [sym_tag] = STATE(5),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_headline_repeat1] = STATE(16),
    [aux_sym_line_repeat1] = STATE(5),
    [aux_sym_uppercase_name_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(17),
    [aux_sym_headline_token1] = ACTIONS(5),
    [aux_sym_headline_token2] = ACTIONS(5),
    [aux_sym_uppercase_name_token1] = ACTIONS(7),
    [sym_word] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_code_block] = ACTIONS(13),
  },
  [3] = {
    [sym_headline] = STATE(3),
    [sym_line] = STATE(3),
    [sym__atom] = STATE(5),
    [sym_uppercase_name] = STATE(17),
    [sym_column_name] = STATE(22),
    [sym_column_heading] = STATE(3),
    [sym_tag] = STATE(5),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_headline_repeat1] = STATE(16),
    [aux_sym_line_repeat1] = STATE(5),
    [aux_sym_uppercase_name_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [aux_sym_headline_token1] = ACTIONS(24),
    [aux_sym_headline_token2] = ACTIONS(24),
    [aux_sym_uppercase_name_token1] = ACTIONS(27),
    [sym_word] = ACTIONS(30),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_code_block] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(41), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(43), 1,
      sym_word,
    ACTIONS(46), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_code_block,
    STATE(4), 3,
      sym__atom,
      sym_tag,
      aux_sym_line_repeat1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
  [24] = 7,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(56), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(58), 1,
      sym_word,
    ACTIONS(60), 1,
      sym_code_block,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
    STATE(4), 3,
      sym__atom,
      sym_tag,
      aux_sym_line_repeat1,
  [50] = 4,
    ACTIONS(64), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(66), 1,
      anon_sym_TILDE,
    ACTIONS(68), 1,
      sym_word,
    ACTIONS(62), 6,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
  [68] = 2,
    ACTIONS(73), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(71), 6,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
  [81] = 2,
    ACTIONS(77), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(75), 6,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
  [94] = 2,
    ACTIONS(81), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(79), 6,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
  [107] = 2,
    ACTIONS(85), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(83), 6,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
  [120] = 2,
    ACTIONS(89), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(87), 6,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
  [133] = 4,
    ACTIONS(91), 1,
      sym_word,
    ACTIONS(93), 1,
      anon_sym_STAR,
    STATE(13), 1,
      aux_sym_headline_repeat1,
    STATE(24), 1,
      sym_tag,
  [146] = 4,
    ACTIONS(95), 1,
      anon_sym_TILDE,
    ACTIONS(97), 1,
      sym_word,
    ACTIONS(100), 1,
      anon_sym_STAR,
    STATE(13), 1,
      aux_sym_headline_repeat1,
  [159] = 3,
    ACTIONS(104), 1,
      aux_sym_uppercase_name_token1,
    STATE(15), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(102), 2,
      anon_sym_LF,
      anon_sym_STAR,
  [170] = 3,
    ACTIONS(108), 1,
      aux_sym_uppercase_name_token1,
    STATE(15), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(106), 2,
      anon_sym_LF,
      anon_sym_STAR,
  [181] = 3,
    ACTIONS(91), 1,
      sym_word,
    ACTIONS(111), 1,
      anon_sym_TILDE,
    STATE(13), 1,
      aux_sym_headline_repeat1,
  [191] = 3,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(113), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_tag,
  [201] = 2,
    ACTIONS(115), 1,
      sym_word,
    STATE(12), 1,
      aux_sym_headline_repeat1,
  [208] = 1,
    ACTIONS(117), 1,
      anon_sym_STAR,
  [212] = 1,
    ACTIONS(119), 1,
      anon_sym_LF,
  [216] = 1,
    ACTIONS(121), 1,
      anon_sym_LF,
  [220] = 1,
    ACTIONS(123), 1,
      anon_sym_TILDE,
  [224] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [228] = 1,
    ACTIONS(127), 1,
      anon_sym_LF,
  [232] = 1,
    ACTIONS(129), 1,
      sym_word,
  [236] = 1,
    ACTIONS(83), 1,
      anon_sym_LF,
  [240] = 1,
    ACTIONS(131), 1,
      anon_sym_STAR,
  [244] = 1,
    ACTIONS(133), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 81,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 107,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 133,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 170,
  [SMALL_STATE(16)] = 181,
  [SMALL_STATE(17)] = 191,
  [SMALL_STATE(18)] = 201,
  [SMALL_STATE(19)] = 208,
  [SMALL_STATE(20)] = 212,
  [SMALL_STATE(21)] = 216,
  [SMALL_STATE(22)] = 220,
  [SMALL_STATE(23)] = 224,
  [SMALL_STATE(24)] = 228,
  [SMALL_STATE(25)] = 232,
  [SMALL_STATE(26)] = 236,
  [SMALL_STATE(27)] = 240,
  [SMALL_STATE(28)] = 244,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(20),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(25),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(25),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headline_repeat1, 1),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atom, 1), REDUCE(aux_sym_headline_repeat1, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 5, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 5, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headline_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(13),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(15),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_name, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_help_external_scanner_create(void);
void tree_sitter_help_external_scanner_destroy(void *);
bool tree_sitter_help_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_help_external_scanner_serialize(void *, char *);
void tree_sitter_help_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_help(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_help_external_scanner_create,
      tree_sitter_help_external_scanner_destroy,
      tree_sitter_help_external_scanner_scan,
      tree_sitter_help_external_scanner_serialize,
      tree_sitter_help_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
