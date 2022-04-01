#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_LF = 1,
  aux_sym_headline_token1 = 2,
  aux_sym_headline_token2 = 3,
  anon_sym_STAR = 4,
  anon_sym_STAR2 = 5,
  anon_sym_SQUOTE = 6,
  anon_sym_SQUOTE2 = 7,
  anon_sym_PIPE = 8,
  anon_sym_PIPE2 = 9,
  anon_sym_BQUOTE = 10,
  anon_sym_BQUOTE2 = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  sym_word = 14,
  sym_column_name = 15,
  sym_uppercase_name = 16,
  sym_code_block = 17,
  sym_help_file = 18,
  sym_headline = 19,
  sym_line = 20,
  sym__atom = 21,
  sym_column_heading = 22,
  sym_tag = 23,
  sym_option = 24,
  sym_hotlink = 25,
  sym_backtick = 26,
  sym_argument = 27,
  aux_sym_help_file_repeat1 = 28,
  aux_sym_headline_repeat1 = 29,
  aux_sym_line_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_headline_token1] = "headline_token1",
  [aux_sym_headline_token2] = "headline_token2",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR2] = "*",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE2] = "|",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_BQUOTE2] = "`",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_word] = "word",
  [sym_column_name] = "column_name",
  [sym_uppercase_name] = "uppercase_name",
  [sym_code_block] = "code_block",
  [sym_help_file] = "help_file",
  [sym_headline] = "headline",
  [sym_line] = "line",
  [sym__atom] = "_atom",
  [sym_column_heading] = "column_heading",
  [sym_tag] = "tag",
  [sym_option] = "option",
  [sym_hotlink] = "hotlink",
  [sym_backtick] = "backtick",
  [sym_argument] = "argument",
  [aux_sym_help_file_repeat1] = "help_file_repeat1",
  [aux_sym_headline_repeat1] = "headline_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_headline_token1] = aux_sym_headline_token1,
  [aux_sym_headline_token2] = aux_sym_headline_token2,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR2] = anon_sym_STAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE2] = anon_sym_PIPE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_word] = sym_word,
  [sym_column_name] = sym_column_name,
  [sym_uppercase_name] = sym_uppercase_name,
  [sym_code_block] = sym_code_block,
  [sym_help_file] = sym_help_file,
  [sym_headline] = sym_headline,
  [sym_line] = sym_line,
  [sym__atom] = sym__atom,
  [sym_column_heading] = sym_column_heading,
  [sym_tag] = sym_tag,
  [sym_option] = sym_option,
  [sym_hotlink] = sym_hotlink,
  [sym_backtick] = sym_backtick,
  [sym_argument] = sym_argument,
  [aux_sym_help_file_repeat1] = aux_sym_help_file_repeat1,
  [aux_sym_headline_repeat1] = aux_sym_headline_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_column_name] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_name] = {
    .visible = true,
    .named = true,
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
  [sym_column_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_hotlink] = {
    .visible = true,
    .named = true,
  },
  [sym_backtick] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
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
};

enum {
  field_content = 1,
  field_delimiter = 2,
  field_destination = 3,
  field_name = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_delimiter] = "delimiter",
  [field_destination] = "destination",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_destination, 1},
  [3] =
    {field_content, 1},
  [4] =
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
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '|') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '`') ADVANCE(23);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_headline_token2);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 12, .external_lex_state = 1},
  [2] = {.lex_state = 12, .external_lex_state = 1},
  [3] = {.lex_state = 12, .external_lex_state = 1},
  [4] = {.lex_state = 12, .external_lex_state = 1},
  [5] = {.lex_state = 12, .external_lex_state = 1},
  [6] = {.lex_state = 12, .external_lex_state = 1},
  [7] = {.lex_state = 12, .external_lex_state = 1},
  [8] = {.lex_state = 12, .external_lex_state = 1},
  [9] = {.lex_state = 12, .external_lex_state = 1},
  [10] = {.lex_state = 12, .external_lex_state = 1},
  [11] = {.lex_state = 12, .external_lex_state = 1},
  [12] = {.lex_state = 12, .external_lex_state = 1},
  [13] = {.lex_state = 12, .external_lex_state = 1},
  [14] = {.lex_state = 12, .external_lex_state = 1},
  [15] = {.lex_state = 12, .external_lex_state = 2},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token_word = 0,
  ts_external_token_column_name = 1,
  ts_external_token_uppercase_name = 2,
  ts_external_token_code_block = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_word] = sym_word,
  [ts_external_token_column_name] = sym_column_name,
  [ts_external_token_uppercase_name] = sym_uppercase_name,
  [ts_external_token_code_block] = sym_code_block,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_word] = true,
    [ts_external_token_column_name] = true,
    [ts_external_token_uppercase_name] = true,
    [ts_external_token_code_block] = true,
  },
  [2] = {
    [ts_external_token_word] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_headline_token1] = ACTIONS(1),
    [aux_sym_headline_token2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_column_name] = ACTIONS(1),
    [sym_uppercase_name] = ACTIONS(1),
    [sym_code_block] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(27),
    [sym_headline] = STATE(2),
    [sym_line] = STATE(2),
    [sym__atom] = STATE(4),
    [sym_column_heading] = STATE(2),
    [sym_tag] = STATE(4),
    [sym_option] = STATE(4),
    [sym_hotlink] = STATE(4),
    [sym_backtick] = STATE(4),
    [sym_argument] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [anon_sym_LF] = ACTIONS(3),
    [aux_sym_headline_token1] = ACTIONS(5),
    [aux_sym_headline_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_word] = ACTIONS(17),
    [sym_column_name] = ACTIONS(19),
    [sym_uppercase_name] = ACTIONS(21),
    [sym_code_block] = ACTIONS(17),
  },
  [2] = {
    [sym_headline] = STATE(3),
    [sym_line] = STATE(3),
    [sym__atom] = STATE(4),
    [sym_column_heading] = STATE(3),
    [sym_tag] = STATE(4),
    [sym_option] = STATE(4),
    [sym_hotlink] = STATE(4),
    [sym_backtick] = STATE(4),
    [sym_argument] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
    [aux_sym_headline_token1] = ACTIONS(5),
    [aux_sym_headline_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_word] = ACTIONS(17),
    [sym_column_name] = ACTIONS(19),
    [sym_uppercase_name] = ACTIONS(21),
    [sym_code_block] = ACTIONS(17),
  },
  [3] = {
    [sym_headline] = STATE(3),
    [sym_line] = STATE(3),
    [sym__atom] = STATE(4),
    [sym_column_heading] = STATE(3),
    [sym_tag] = STATE(4),
    [sym_option] = STATE(4),
    [sym_hotlink] = STATE(4),
    [sym_backtick] = STATE(4),
    [sym_argument] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(29),
    [aux_sym_headline_token1] = ACTIONS(32),
    [aux_sym_headline_token2] = ACTIONS(32),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_word] = ACTIONS(50),
    [sym_column_name] = ACTIONS(53),
    [sym_uppercase_name] = ACTIONS(56),
    [sym_code_block] = ACTIONS(50),
  },
  [4] = {
    [sym__atom] = STATE(5),
    [sym_tag] = STATE(5),
    [sym_option] = STATE(5),
    [sym_hotlink] = STATE(5),
    [sym_backtick] = STATE(5),
    [sym_argument] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(61),
    [aux_sym_headline_token1] = ACTIONS(59),
    [aux_sym_headline_token2] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_word] = ACTIONS(63),
    [sym_column_name] = ACTIONS(59),
    [sym_uppercase_name] = ACTIONS(59),
    [sym_code_block] = ACTIONS(63),
  },
  [5] = {
    [sym__atom] = STATE(5),
    [sym_tag] = STATE(5),
    [sym_option] = STATE(5),
    [sym_hotlink] = STATE(5),
    [sym_backtick] = STATE(5),
    [sym_argument] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(65),
    [aux_sym_headline_token1] = ACTIONS(65),
    [aux_sym_headline_token2] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_BQUOTE] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_word] = ACTIONS(82),
    [sym_column_name] = ACTIONS(65),
    [sym_uppercase_name] = ACTIONS(65),
    [sym_code_block] = ACTIONS(82),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(85), 13,
      sym_word,
      sym_column_name,
      sym_uppercase_name,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [16] = 1,
    ACTIONS(87), 13,
      sym_word,
      sym_column_name,
      sym_uppercase_name,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [32] = 1,
    ACTIONS(89), 13,
      sym_word,
      sym_column_name,
      sym_uppercase_name,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [48] = 1,
    ACTIONS(91), 13,
      sym_word,
      sym_column_name,
      sym_uppercase_name,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [64] = 1,
    ACTIONS(93), 13,
      sym_word,
      sym_column_name,
      sym_uppercase_name,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [80] = 1,
    ACTIONS(95), 13,
      sym_word,
      sym_column_name,
      sym_uppercase_name,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [96] = 1,
    ACTIONS(97), 13,
      sym_word,
      sym_column_name,
      sym_uppercase_name,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [112] = 1,
    ACTIONS(99), 13,
      sym_word,
      sym_column_name,
      sym_uppercase_name,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [128] = 1,
    ACTIONS(101), 13,
      sym_word,
      sym_column_name,
      sym_uppercase_name,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [144] = 4,
    ACTIONS(103), 1,
      anon_sym_STAR,
    ACTIONS(105), 1,
      sym_word,
    STATE(17), 1,
      aux_sym_headline_repeat1,
    STATE(31), 1,
      sym_tag,
  [157] = 3,
    ACTIONS(103), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_tag,
  [167] = 3,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      sym_word,
    STATE(17), 1,
      aux_sym_headline_repeat1,
  [177] = 2,
    ACTIONS(114), 1,
      sym_word,
    STATE(15), 1,
      aux_sym_headline_repeat1,
  [184] = 1,
    ACTIONS(116), 1,
      sym_word,
  [188] = 1,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
  [192] = 1,
    ACTIONS(120), 1,
      anon_sym_PIPE2,
  [196] = 1,
    ACTIONS(122), 1,
      anon_sym_BQUOTE2,
  [200] = 1,
    ACTIONS(107), 1,
      anon_sym_LF,
  [204] = 1,
    ACTIONS(124), 1,
      anon_sym_SQUOTE2,
  [208] = 1,
    ACTIONS(126), 1,
      anon_sym_STAR2,
  [212] = 1,
    ACTIONS(128), 1,
      anon_sym_LF,
  [216] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [220] = 1,
    ACTIONS(132), 1,
      sym_word,
  [224] = 1,
    ACTIONS(134), 1,
      sym_word,
  [228] = 1,
    ACTIONS(136), 1,
      sym_word,
  [232] = 1,
    ACTIONS(138), 1,
      anon_sym_LF,
  [236] = 1,
    ACTIONS(140), 1,
      sym_word,
  [240] = 1,
    ACTIONS(142), 1,
      anon_sym_LF,
  [244] = 1,
    ACTIONS(97), 1,
      anon_sym_LF,
  [248] = 1,
    ACTIONS(144), 1,
      anon_sym_STAR2,
  [252] = 1,
    ACTIONS(146), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 16,
  [SMALL_STATE(8)] = 32,
  [SMALL_STATE(9)] = 48,
  [SMALL_STATE(10)] = 64,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 112,
  [SMALL_STATE(14)] = 128,
  [SMALL_STATE(15)] = 144,
  [SMALL_STATE(16)] = 157,
  [SMALL_STATE(17)] = 167,
  [SMALL_STATE(18)] = 177,
  [SMALL_STATE(19)] = 184,
  [SMALL_STATE(20)] = 188,
  [SMALL_STATE(21)] = 192,
  [SMALL_STATE(22)] = 196,
  [SMALL_STATE(23)] = 200,
  [SMALL_STATE(24)] = 204,
  [SMALL_STATE(25)] = 208,
  [SMALL_STATE(26)] = 212,
  [SMALL_STATE(27)] = 216,
  [SMALL_STATE(28)] = 220,
  [SMALL_STATE(29)] = 224,
  [SMALL_STATE(30)] = 228,
  [SMALL_STATE(31)] = 232,
  [SMALL_STATE(32)] = 236,
  [SMALL_STATE(33)] = 240,
  [SMALL_STATE(34)] = 244,
  [SMALL_STATE(35)] = 248,
  [SMALL_STATE(36)] = 252,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(33),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(32),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(30),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(29),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(28),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(19),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(4),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(23),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(32),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(30),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(29),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(28),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(19),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 5, .production_id = 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotlink, 3, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(17),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
