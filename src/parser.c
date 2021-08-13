#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  sym_word = 2,
  anon_sym_STAR = 3,
  anon_sym_SQUOTE = 4,
  anon_sym_PIPE = 5,
  sym_help_file = 6,
  sym_line = 7,
  sym__atom = 8,
  sym_tag = 9,
  aux_sym_help_file_repeat1 = 10,
  aux_sym_line_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_word] = "word",
  [anon_sym_STAR] = "*",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PIPE] = "|",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
      if (eof) ADVANCE(1);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '*' &&
          lookahead != '|') ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 6:
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(9),
    [sym_line] = STATE(2),
    [sym__atom] = STATE(4),
    [sym_tag] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [sym_word] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym_line] = STATE(3),
    [sym__atom] = STATE(4),
    [sym_tag] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_word] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym_line] = STATE(3),
    [sym__atom] = STATE(4),
    [sym_tag] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_word] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(14),
  },
  [4] = {
    [sym__atom] = STATE(5),
    [sym_tag] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(19),
    [sym_word] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym__atom] = STATE(5),
    [sym_tag] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(23),
    [sym_word] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(28),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_word,
      anon_sym_STAR,
  [7] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_word,
      anon_sym_STAR,
  [13] = 1,
    ACTIONS(35), 1,
      sym_word,
  [17] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [21] = 1,
    ACTIONS(39), 1,
      anon_sym_STAR,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 7,
  [SMALL_STATE(8)] = 13,
  [SMALL_STATE(9)] = 17,
  [SMALL_STATE(10)] = 21,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
