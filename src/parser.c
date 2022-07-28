#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 14,
  [23] = 23,
  [24] = 24,
  [25] = 13,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 12,
  [39] = 11,
  [40] = 10,
  [41] = 31,
  [42] = 30,
  [43] = 24,
  [44] = 29,
  [45] = 28,
  [46] = 46,
  [47] = 27,
  [48] = 46,
  [49] = 36,
  [50] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_headline_token2);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 1},
  [2] = {.lex_state = 13, .external_lex_state = 1},
  [3] = {.lex_state = 13, .external_lex_state = 1},
  [4] = {.lex_state = 13, .external_lex_state = 1},
  [5] = {.lex_state = 13, .external_lex_state = 1},
  [6] = {.lex_state = 13, .external_lex_state = 1},
  [7] = {.lex_state = 13, .external_lex_state = 1},
  [8] = {.lex_state = 13, .external_lex_state = 1},
  [9] = {.lex_state = 13, .external_lex_state = 1},
  [10] = {.lex_state = 13, .external_lex_state = 1},
  [11] = {.lex_state = 13, .external_lex_state = 1},
  [12] = {.lex_state = 13, .external_lex_state = 1},
  [13] = {.lex_state = 13, .external_lex_state = 1},
  [14] = {.lex_state = 13, .external_lex_state = 1},
  [15] = {.lex_state = 13, .external_lex_state = 1},
  [16] = {.lex_state = 13, .external_lex_state = 1},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 13, .external_lex_state = 2},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_help_file] = STATE(34),
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
    [sym_code_block] = ACTIONS(3),
  },
  [2] = {
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
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
    [aux_sym_headline_token1] = ACTIONS(28),
    [aux_sym_headline_token2] = ACTIONS(28),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(43),
    [sym_word] = ACTIONS(46),
    [sym_column_name] = ACTIONS(49),
    [sym_uppercase_name] = ACTIONS(52),
    [sym_code_block] = ACTIONS(25),
  },
  [3] = {
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
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LF] = ACTIONS(57),
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
    [sym_code_block] = ACTIONS(57),
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
    [sym_code_block] = ACTIONS(65),
  },
  [5] = {
    [sym__atom] = STATE(5),
    [sym_tag] = STATE(5),
    [sym_option] = STATE(5),
    [sym_hotlink] = STATE(5),
    [sym_backtick] = STATE(5),
    [sym_argument] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LF] = ACTIONS(67),
    [aux_sym_headline_token1] = ACTIONS(67),
    [aux_sym_headline_token2] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(81),
    [sym_word] = ACTIONS(84),
    [sym_column_name] = ACTIONS(67),
    [sym_uppercase_name] = ACTIONS(67),
    [sym_code_block] = ACTIONS(67),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
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
  [16] = 1,
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
  [32] = 1,
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
  [48] = 1,
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
  [64] = 1,
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
  [80] = 1,
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
  [96] = 1,
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
  [112] = 1,
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
  [128] = 1,
    ACTIONS(103), 13,
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
  [144] = 1,
    ACTIONS(105), 13,
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
  [160] = 2,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(87), 12,
      sym_word,
      sym_column_name,
      sym_uppercase_name,
      sym_code_block,
      ts_builtin_sym_end,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [178] = 7,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_word,
    STATE(41), 6,
      sym__atom,
      sym_tag,
      sym_option,
      sym_hotlink,
      sym_backtick,
      sym_argument,
  [205] = 7,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      sym_word,
    STATE(31), 6,
      sym__atom,
      sym_tag,
      sym_option,
      sym_hotlink,
      sym_backtick,
      sym_argument,
  [232] = 4,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      sym_word,
    STATE(21), 1,
      aux_sym_headline_repeat1,
    STATE(33), 1,
      sym_tag,
  [245] = 3,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(125), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym_tag,
  [255] = 3,
    ACTIONS(127), 1,
      anon_sym_STAR,
    ACTIONS(129), 1,
      sym_word,
    STATE(21), 1,
      aux_sym_headline_repeat1,
  [265] = 1,
    ACTIONS(103), 2,
      anon_sym_LF,
      anon_sym_STAR2,
  [270] = 2,
    ACTIONS(132), 1,
      sym_word,
    STATE(19), 1,
      aux_sym_headline_repeat1,
  [277] = 1,
    ACTIONS(134), 1,
      anon_sym_PIPE2,
  [281] = 1,
    ACTIONS(101), 1,
      anon_sym_STAR2,
  [285] = 1,
    ACTIONS(136), 1,
      anon_sym_LF,
  [289] = 1,
    ACTIONS(138), 1,
      sym_word,
  [293] = 1,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
  [297] = 1,
    ACTIONS(142), 1,
      anon_sym_BQUOTE2,
  [301] = 1,
    ACTIONS(144), 1,
      anon_sym_SQUOTE2,
  [305] = 1,
    ACTIONS(146), 1,
      anon_sym_STAR2,
  [309] = 1,
    ACTIONS(148), 1,
      anon_sym_LF,
  [313] = 1,
    ACTIONS(150), 1,
      anon_sym_LF,
  [317] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [321] = 1,
    ACTIONS(154), 1,
      sym_word,
  [325] = 1,
    ACTIONS(156), 1,
      sym_word,
  [329] = 1,
    ACTIONS(125), 1,
      anon_sym_LF,
  [333] = 1,
    ACTIONS(99), 1,
      anon_sym_STAR2,
  [337] = 1,
    ACTIONS(97), 1,
      anon_sym_STAR2,
  [341] = 1,
    ACTIONS(95), 1,
      anon_sym_STAR2,
  [345] = 1,
    ACTIONS(158), 1,
      anon_sym_STAR2,
  [349] = 1,
    ACTIONS(160), 1,
      anon_sym_SQUOTE2,
  [353] = 1,
    ACTIONS(162), 1,
      anon_sym_PIPE2,
  [357] = 1,
    ACTIONS(164), 1,
      anon_sym_BQUOTE2,
  [361] = 1,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
  [365] = 1,
    ACTIONS(168), 1,
      sym_word,
  [369] = 1,
    ACTIONS(170), 1,
      sym_word,
  [373] = 1,
    ACTIONS(172), 1,
      sym_word,
  [377] = 1,
    ACTIONS(174), 1,
      sym_word,
  [381] = 1,
    ACTIONS(176), 1,
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
  [SMALL_STATE(16)] = 160,
  [SMALL_STATE(17)] = 178,
  [SMALL_STATE(18)] = 205,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 255,
  [SMALL_STATE(22)] = 265,
  [SMALL_STATE(23)] = 270,
  [SMALL_STATE(24)] = 277,
  [SMALL_STATE(25)] = 281,
  [SMALL_STATE(26)] = 285,
  [SMALL_STATE(27)] = 289,
  [SMALL_STATE(28)] = 293,
  [SMALL_STATE(29)] = 297,
  [SMALL_STATE(30)] = 301,
  [SMALL_STATE(31)] = 305,
  [SMALL_STATE(32)] = 309,
  [SMALL_STATE(33)] = 313,
  [SMALL_STATE(34)] = 317,
  [SMALL_STATE(35)] = 321,
  [SMALL_STATE(36)] = 325,
  [SMALL_STATE(37)] = 329,
  [SMALL_STATE(38)] = 333,
  [SMALL_STATE(39)] = 337,
  [SMALL_STATE(40)] = 341,
  [SMALL_STATE(41)] = 345,
  [SMALL_STATE(42)] = 349,
  [SMALL_STATE(43)] = 353,
  [SMALL_STATE(44)] = 357,
  [SMALL_STATE(45)] = 361,
  [SMALL_STATE(46)] = 365,
  [SMALL_STATE(47)] = 369,
  [SMALL_STATE(48)] = 373,
  [SMALL_STATE(49)] = 377,
  [SMALL_STATE(50)] = 381,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(26),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(18),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(27),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(46),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(36),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(35),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(18),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(27),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(46),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(36),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(35),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 5, .production_id = 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotlink, 3, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(21),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
