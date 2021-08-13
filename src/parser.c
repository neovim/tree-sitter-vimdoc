#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  aux_sym_uppercase_name_token1 = 2,
  anon_sym_TILDE = 3,
  sym_word = 4,
  anon_sym_STAR = 5,
  anon_sym_SQUOTE = 6,
  anon_sym_PIPE = 7,
  sym_code_block = 8,
  sym_help_file = 9,
  sym_line = 10,
  sym__atom = 11,
  sym_uppercase_name = 12,
  sym_column_name = 13,
  sym_column_heading = 14,
  sym_tag = 15,
  aux_sym_help_file_repeat1 = 16,
  aux_sym_line_repeat1 = 17,
  aux_sym_uppercase_name_repeat1 = 18,
  aux_sym_column_name_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_uppercase_name_token1] = "uppercase_name_token1",
  [anon_sym_TILDE] = "~",
  [sym_word] = "word",
  [anon_sym_STAR] = "*",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PIPE] = "|",
  [sym_code_block] = "code_block",
  [sym_help_file] = "help_file",
  [sym_line] = "line",
  [sym__atom] = "_atom",
  [sym_uppercase_name] = "uppercase_name",
  [sym_column_name] = "column_name",
  [sym_column_heading] = "column_heading",
  [sym_tag] = "tag",
  [aux_sym_help_file_repeat1] = "help_file_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym_uppercase_name_repeat1] = "uppercase_name_repeat1",
  [aux_sym_column_name_repeat1] = "column_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_uppercase_name_token1] = aux_sym_uppercase_name_token1,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_word] = sym_word,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_code_block] = sym_code_block,
  [sym_help_file] = sym_help_file,
  [sym_line] = sym_line,
  [sym__atom] = sym__atom,
  [sym_uppercase_name] = sym_uppercase_name,
  [sym_column_name] = sym_column_name,
  [sym_column_heading] = sym_column_heading,
  [sym_tag] = sym_tag,
  [aux_sym_help_file_repeat1] = aux_sym_help_file_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [aux_sym_uppercase_name_repeat1] = aux_sym_uppercase_name_repeat1,
  [aux_sym_column_name_repeat1] = aux_sym_column_name_repeat1,
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
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
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
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '~') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '~') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '~') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(7);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '~') ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '~') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '~') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 10:
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
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
    [aux_sym_uppercase_name_token1] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_code_block] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(20),
    [sym_line] = STATE(3),
    [sym__atom] = STATE(4),
    [sym_uppercase_name] = STATE(15),
    [sym_column_name] = STATE(19),
    [sym_column_heading] = STATE(3),
    [sym_tag] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym_uppercase_name_repeat1] = STATE(12),
    [aux_sym_column_name_repeat1] = STATE(14),
    [anon_sym_LF] = ACTIONS(3),
    [aux_sym_uppercase_name_token1] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(9),
    [sym_code_block] = ACTIONS(11),
  },
  [2] = {
    [sym_line] = STATE(2),
    [sym__atom] = STATE(4),
    [sym_uppercase_name] = STATE(15),
    [sym_column_name] = STATE(19),
    [sym_column_heading] = STATE(2),
    [sym_tag] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym_uppercase_name_repeat1] = STATE(12),
    [aux_sym_column_name_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [aux_sym_uppercase_name_token1] = ACTIONS(18),
    [sym_word] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(24),
    [sym_code_block] = ACTIONS(27),
  },
  [3] = {
    [sym_line] = STATE(2),
    [sym__atom] = STATE(4),
    [sym_uppercase_name] = STATE(15),
    [sym_column_name] = STATE(19),
    [sym_column_heading] = STATE(2),
    [sym_tag] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym_uppercase_name_repeat1] = STATE(12),
    [aux_sym_column_name_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_LF] = ACTIONS(32),
    [aux_sym_uppercase_name_token1] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(9),
    [sym_code_block] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_LF,
    ACTIONS(38), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(40), 1,
      sym_word,
    ACTIONS(42), 1,
      sym_code_block,
    STATE(5), 3,
      sym__atom,
      sym_tag,
      aux_sym_line_repeat1,
  [24] = 6,
    ACTIONS(46), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(48), 1,
      sym_word,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      sym_code_block,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(5), 3,
      sym__atom,
      sym_tag,
      aux_sym_line_repeat1,
  [46] = 4,
    ACTIONS(59), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(61), 1,
      anon_sym_TILDE,
    ACTIONS(63), 1,
      sym_word,
    ACTIONS(57), 4,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_STAR,
  [62] = 2,
    ACTIONS(68), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(66), 4,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_STAR,
  [73] = 2,
    ACTIONS(72), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(70), 4,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_STAR,
  [84] = 2,
    ACTIONS(76), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(74), 4,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_STAR,
  [95] = 2,
    ACTIONS(80), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(78), 4,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_STAR,
  [106] = 3,
    ACTIONS(84), 1,
      aux_sym_uppercase_name_token1,
    STATE(11), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(82), 2,
      anon_sym_LF,
      anon_sym_STAR,
  [117] = 3,
    ACTIONS(89), 1,
      aux_sym_uppercase_name_token1,
    STATE(11), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(87), 2,
      anon_sym_LF,
      anon_sym_STAR,
  [128] = 3,
    ACTIONS(91), 1,
      anon_sym_TILDE,
    ACTIONS(93), 1,
      sym_word,
    STATE(13), 1,
      aux_sym_column_name_repeat1,
  [138] = 3,
    ACTIONS(96), 1,
      anon_sym_TILDE,
    ACTIONS(98), 1,
      sym_word,
    STATE(13), 1,
      aux_sym_column_name_repeat1,
  [148] = 3,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      anon_sym_STAR,
    STATE(16), 1,
      sym_tag,
  [158] = 1,
    ACTIONS(104), 1,
      anon_sym_LF,
  [162] = 1,
    ACTIONS(106), 1,
      sym_word,
  [166] = 1,
    ACTIONS(108), 1,
      anon_sym_STAR,
  [170] = 1,
    ACTIONS(110), 1,
      anon_sym_TILDE,
  [174] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [178] = 1,
    ACTIONS(70), 1,
      anon_sym_LF,
  [182] = 1,
    ACTIONS(114), 1,
      anon_sym_STAR,
  [186] = 1,
    ACTIONS(116), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 73,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 117,
  [SMALL_STATE(13)] = 128,
  [SMALL_STATE(14)] = 138,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 158,
  [SMALL_STATE(17)] = 162,
  [SMALL_STATE(18)] = 166,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 174,
  [SMALL_STATE(21)] = 178,
  [SMALL_STATE(22)] = 182,
  [SMALL_STATE(23)] = 186,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(12),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(6),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(17),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(17),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_column_name_repeat1, 1),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atom, 1), REDUCE(aux_sym_column_name_repeat1, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_column_name_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_name_repeat1, 2), SHIFT_REPEAT(13),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_name, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
