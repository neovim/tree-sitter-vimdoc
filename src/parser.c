#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  sym_word = 2,
  anon_sym_STAR = 3,
  sym_option = 4,
  sym_help_file = 5,
  sym_line = 6,
  sym__atom = 7,
  sym_tag = 8,
  aux_sym_help_file_repeat1 = 9,
  aux_sym_line_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_word] = "word",
  [anon_sym_STAR] = "*",
  [sym_option] = "option",
  [sym_help_file] = "help_file",
  [sym_line] = "line",
  [sym__atom] = "_atom",
  [sym_tag] = "tag",
  [aux_sym_help_file_repeat1] = "help_file_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_word] = sym_word,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_option] = sym_option,
  [sym_help_file] = sym_help_file,
  [sym_line] = sym_line,
  [sym__atom] = sym__atom,
  [sym_tag] = sym_tag,
  [aux_sym_help_file_repeat1] = aux_sym_help_file_repeat1,
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
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_option] = {
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '|') ADVANCE(3);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 4:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '|') ADVANCE(3);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_word);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '|') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '\'' ||
          lookahead == '*' ||
          lookahead == '|') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_option);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_option] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(11),
    [sym_line] = STATE(6),
    [sym__atom] = STATE(2),
    [sym_tag] = STATE(2),
    [aux_sym_line_repeat1] = STATE(2),
    [sym_word] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__atom] = STATE(3),
    [sym_tag] = STATE(3),
    [aux_sym_line_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [sym_word] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym__atom] = STATE(3),
    [sym_tag] = STATE(3),
    [aux_sym_line_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [sym_word] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(20),
  },
  [4] = {
    [sym_line] = STATE(9),
    [sym__atom] = STATE(2),
    [sym_tag] = STATE(2),
    [aux_sym_line_repeat1] = STATE(2),
    [sym_word] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_word,
    ACTIONS(25), 2,
      anon_sym_LF,
      anon_sym_STAR,
  [9] = 3,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_LF,
    STATE(7), 1,
      aux_sym_help_file_repeat1,
  [19] = 3,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_help_file_repeat1,
  [29] = 3,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_help_file_repeat1,
  [39] = 1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [44] = 1,
    ACTIONS(38), 1,
      sym_word,
  [48] = 1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
  [52] = 1,
    ACTIONS(42), 1,
      anon_sym_STAR,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 9,
  [SMALL_STATE(7)] = 19,
  [SMALL_STATE(8)] = 29,
  [SMALL_STATE(9)] = 39,
  [SMALL_STATE(10)] = 44,
  [SMALL_STATE(11)] = 48,
  [SMALL_STATE(12)] = 52,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
