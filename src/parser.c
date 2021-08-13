#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
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
  sym_help_file = 8,
  sym_line = 9,
  sym__atom = 10,
  sym_uppercase_name = 11,
  sym_column_name = 12,
  sym_column_heading = 13,
  sym_tag = 14,
  aux_sym_help_file_repeat1 = 15,
  aux_sym_line_repeat1 = 16,
  aux_sym_uppercase_name_repeat1 = 17,
  aux_sym_column_name_repeat1 = 18,
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
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_help_file] = STATE(20),
    [sym_line] = STATE(3),
    [sym__atom] = STATE(4),
    [sym_uppercase_name] = STATE(13),
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
  },
  [2] = {
    [sym_line] = STATE(2),
    [sym__atom] = STATE(4),
    [sym_uppercase_name] = STATE(13),
    [sym_column_name] = STATE(19),
    [sym_column_heading] = STATE(2),
    [sym_tag] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym_uppercase_name_repeat1] = STATE(12),
    [aux_sym_column_name_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [aux_sym_uppercase_name_token1] = ACTIONS(16),
    [sym_word] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(22),
  },
  [3] = {
    [sym_line] = STATE(2),
    [sym__atom] = STATE(4),
    [sym_uppercase_name] = STATE(13),
    [sym_column_name] = STATE(19),
    [sym_column_heading] = STATE(2),
    [sym_tag] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym_uppercase_name_repeat1] = STATE(12),
    [aux_sym_column_name_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(27),
    [aux_sym_uppercase_name_token1] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(35), 1,
      sym_word,
    STATE(5), 3,
      sym__atom,
      sym_tag,
      aux_sym_line_repeat1,
  [21] = 5,
    ACTIONS(39), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(41), 1,
      sym_word,
    ACTIONS(44), 1,
      anon_sym_STAR,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(5), 3,
      sym__atom,
      sym_tag,
      aux_sym_line_repeat1,
  [40] = 4,
    ACTIONS(49), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(51), 1,
      anon_sym_TILDE,
    ACTIONS(53), 1,
      sym_word,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_STAR,
  [55] = 2,
    ACTIONS(58), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_STAR,
  [65] = 2,
    ACTIONS(62), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_STAR,
  [75] = 2,
    ACTIONS(66), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_STAR,
  [85] = 2,
    ACTIONS(70), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_STAR,
  [95] = 3,
    ACTIONS(74), 1,
      aux_sym_uppercase_name_token1,
    STATE(11), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(72), 2,
      anon_sym_LF,
      anon_sym_STAR,
  [106] = 3,
    ACTIONS(79), 1,
      aux_sym_uppercase_name_token1,
    STATE(11), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(77), 2,
      anon_sym_LF,
      anon_sym_STAR,
  [117] = 3,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_tag,
  [127] = 3,
    ACTIONS(83), 1,
      anon_sym_TILDE,
    ACTIONS(85), 1,
      sym_word,
    STATE(15), 1,
      aux_sym_column_name_repeat1,
  [137] = 3,
    ACTIONS(87), 1,
      anon_sym_TILDE,
    ACTIONS(89), 1,
      sym_word,
    STATE(15), 1,
      aux_sym_column_name_repeat1,
  [147] = 1,
    ACTIONS(92), 1,
      anon_sym_LF,
  [151] = 1,
    ACTIONS(94), 1,
      sym_word,
  [155] = 1,
    ACTIONS(96), 1,
      anon_sym_STAR,
  [159] = 1,
    ACTIONS(98), 1,
      anon_sym_TILDE,
  [163] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 21,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 85,
  [SMALL_STATE(11)] = 95,
  [SMALL_STATE(12)] = 106,
  [SMALL_STATE(13)] = 117,
  [SMALL_STATE(14)] = 127,
  [SMALL_STATE(15)] = 137,
  [SMALL_STATE(16)] = 147,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 155,
  [SMALL_STATE(19)] = 159,
  [SMALL_STATE(20)] = 163,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(12),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(6),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_column_name_repeat1, 1),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atom, 1), REDUCE(aux_sym_column_name_repeat1, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_name, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_column_name_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_name_repeat1, 2), SHIFT_REPEAT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
