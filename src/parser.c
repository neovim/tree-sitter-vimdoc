#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_LF = 1,
  aux_sym_headline_token1 = 2,
  aux_sym_headline_token2 = 3,
  anon_sym_STAR = 4,
  anon_sym_SQUOTE = 5,
  anon_sym_PIPE = 6,
  anon_sym_BQUOTE = 7,
  sym_word = 8,
  sym_column_name = 9,
  sym_uppercase_name = 10,
  sym_code_block = 11,
  sym_help_file = 12,
  sym_headline = 13,
  sym_line = 14,
  sym__atom = 15,
  sym_column_heading = 16,
  sym_tag = 17,
  sym_option = 18,
  sym_hotlink = 19,
  sym_backtick = 20,
  aux_sym_help_file_repeat1 = 21,
  aux_sym_headline_repeat1 = 22,
  aux_sym_line_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_headline_token1] = "headline_token1",
  [aux_sym_headline_token2] = "headline_token2",
  [anon_sym_STAR] = "*",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PIPE] = "|",
  [anon_sym_BQUOTE] = "`",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
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
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
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
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_headline_token2);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
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
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_column_name] = ACTIONS(1),
    [sym_uppercase_name] = ACTIONS(1),
    [sym_code_block] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(25),
    [sym_headline] = STATE(2),
    [sym_line] = STATE(2),
    [sym__atom] = STATE(5),
    [sym_column_heading] = STATE(2),
    [sym_tag] = STATE(5),
    [sym_option] = STATE(5),
    [sym_hotlink] = STATE(5),
    [sym_backtick] = STATE(5),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(3),
    [aux_sym_headline_token1] = ACTIONS(5),
    [aux_sym_headline_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_word] = ACTIONS(15),
    [sym_column_name] = ACTIONS(17),
    [sym_uppercase_name] = ACTIONS(19),
    [sym_code_block] = ACTIONS(15),
  },
  [2] = {
    [sym_headline] = STATE(3),
    [sym_line] = STATE(3),
    [sym__atom] = STATE(5),
    [sym_column_heading] = STATE(3),
    [sym_tag] = STATE(5),
    [sym_option] = STATE(5),
    [sym_hotlink] = STATE(5),
    [sym_backtick] = STATE(5),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(23),
    [aux_sym_headline_token1] = ACTIONS(5),
    [aux_sym_headline_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_word] = ACTIONS(15),
    [sym_column_name] = ACTIONS(17),
    [sym_uppercase_name] = ACTIONS(19),
    [sym_code_block] = ACTIONS(15),
  },
  [3] = {
    [sym_headline] = STATE(3),
    [sym_line] = STATE(3),
    [sym__atom] = STATE(5),
    [sym_column_heading] = STATE(3),
    [sym_tag] = STATE(5),
    [sym_option] = STATE(5),
    [sym_hotlink] = STATE(5),
    [sym_backtick] = STATE(5),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [aux_sym_headline_token1] = ACTIONS(30),
    [aux_sym_headline_token2] = ACTIONS(30),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(42),
    [sym_word] = ACTIONS(45),
    [sym_column_name] = ACTIONS(48),
    [sym_uppercase_name] = ACTIONS(51),
    [sym_code_block] = ACTIONS(45),
  },
  [4] = {
    [sym__atom] = STATE(4),
    [sym_tag] = STATE(4),
    [sym_option] = STATE(4),
    [sym_hotlink] = STATE(4),
    [sym_backtick] = STATE(4),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_LF] = ACTIONS(54),
    [aux_sym_headline_token1] = ACTIONS(54),
    [aux_sym_headline_token2] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(65),
    [sym_word] = ACTIONS(68),
    [sym_column_name] = ACTIONS(54),
    [sym_uppercase_name] = ACTIONS(54),
    [sym_code_block] = ACTIONS(68),
  },
  [5] = {
    [sym__atom] = STATE(4),
    [sym_tag] = STATE(4),
    [sym_option] = STATE(4),
    [sym_hotlink] = STATE(4),
    [sym_backtick] = STATE(4),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(73),
    [aux_sym_headline_token1] = ACTIONS(71),
    [aux_sym_headline_token2] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [sym_word] = ACTIONS(75),
    [sym_column_name] = ACTIONS(71),
    [sym_uppercase_name] = ACTIONS(71),
    [sym_code_block] = ACTIONS(75),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(77), 12,
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
  [15] = 1,
    ACTIONS(79), 12,
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
  [30] = 1,
    ACTIONS(81), 12,
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
  [45] = 1,
    ACTIONS(83), 12,
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
  [60] = 1,
    ACTIONS(85), 12,
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
  [75] = 1,
    ACTIONS(87), 12,
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
  [90] = 1,
    ACTIONS(89), 12,
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
  [105] = 1,
    ACTIONS(91), 12,
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
  [120] = 4,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      sym_word,
    STATE(16), 1,
      aux_sym_headline_repeat1,
    STATE(28), 1,
      sym_tag,
  [133] = 3,
    ACTIONS(93), 1,
      anon_sym_STAR,
    ACTIONS(97), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_tag,
  [143] = 3,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      sym_word,
    STATE(16), 1,
      aux_sym_headline_repeat1,
  [153] = 2,
    ACTIONS(104), 1,
      sym_word,
    STATE(14), 1,
      aux_sym_headline_repeat1,
  [160] = 1,
    ACTIONS(106), 1,
      sym_word,
  [164] = 1,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
  [168] = 1,
    ACTIONS(110), 1,
      anon_sym_PIPE,
  [172] = 1,
    ACTIONS(112), 1,
      anon_sym_BQUOTE,
  [176] = 1,
    ACTIONS(97), 1,
      anon_sym_LF,
  [180] = 1,
    ACTIONS(114), 1,
      anon_sym_STAR,
  [184] = 1,
    ACTIONS(116), 1,
      anon_sym_LF,
  [188] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [192] = 1,
    ACTIONS(120), 1,
      sym_word,
  [196] = 1,
    ACTIONS(122), 1,
      sym_word,
  [200] = 1,
    ACTIONS(124), 1,
      anon_sym_LF,
  [204] = 1,
    ACTIONS(126), 1,
      sym_word,
  [208] = 1,
    ACTIONS(128), 1,
      anon_sym_LF,
  [212] = 1,
    ACTIONS(85), 1,
      anon_sym_LF,
  [216] = 1,
    ACTIONS(130), 1,
      anon_sym_STAR,
  [220] = 1,
    ACTIONS(132), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 15,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 45,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 90,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 143,
  [SMALL_STATE(17)] = 153,
  [SMALL_STATE(18)] = 160,
  [SMALL_STATE(19)] = 164,
  [SMALL_STATE(20)] = 168,
  [SMALL_STATE(21)] = 172,
  [SMALL_STATE(22)] = 176,
  [SMALL_STATE(23)] = 180,
  [SMALL_STATE(24)] = 184,
  [SMALL_STATE(25)] = 188,
  [SMALL_STATE(26)] = 192,
  [SMALL_STATE(27)] = 196,
  [SMALL_STATE(28)] = 200,
  [SMALL_STATE(29)] = 204,
  [SMALL_STATE(30)] = 208,
  [SMALL_STATE(31)] = 212,
  [SMALL_STATE(32)] = 216,
  [SMALL_STATE(33)] = 220,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(30),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(29),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(27),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(26),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(18),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(29),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(27),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(26),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(18),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 5, .production_id = 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotlink, 3, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
