#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym__imm_word = 15,
  sym_column_name = 16,
  sym_uppercase_name = 17,
  sym_code_block = 18,
  sym_help_file = 19,
  sym_headline = 20,
  sym_line = 21,
  sym__atom = 22,
  sym_column_heading = 23,
  sym_tag = 24,
  sym_option = 25,
  sym_hotlink = 26,
  sym_backtick = 27,
  sym_argument = 28,
  aux_sym_help_file_repeat1 = 29,
  aux_sym_headline_repeat1 = 30,
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
  [sym__imm_word] = "word",
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
  [sym__imm_word] = sym_word,
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
  [sym__imm_word] = {
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
  [1] = {.lex_state = 13, .external_lex_state = 2},
  [2] = {.lex_state = 13, .external_lex_state = 2},
  [3] = {.lex_state = 13, .external_lex_state = 2},
  [4] = {.lex_state = 13, .external_lex_state = 2},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 3},
  [7] = {.lex_state = 13, .external_lex_state = 3},
  [8] = {.lex_state = 13, .external_lex_state = 3},
  [9] = {.lex_state = 13, .external_lex_state = 2},
  [10] = {.lex_state = 13, .external_lex_state = 2},
  [11] = {.lex_state = 13, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 13, .external_lex_state = 2},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 13, .external_lex_state = 2},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 13, .external_lex_state = 3},
  [21] = {.lex_state = 13, .external_lex_state = 3},
  [22] = {.lex_state = 13, .external_lex_state = 3},
  [23] = {.lex_state = 13, .external_lex_state = 3},
  [24] = {.lex_state = 13, .external_lex_state = 3},
  [25] = {.lex_state = 13, .external_lex_state = 3},
  [26] = {.lex_state = 13, .external_lex_state = 3},
  [27] = {.lex_state = 13, .external_lex_state = 3},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0, .external_lex_state = 3},
  [43] = {.lex_state = 0, .external_lex_state = 4},
  [44] = {.lex_state = 0, .external_lex_state = 4},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0, .external_lex_state = 4},
  [56] = {.lex_state = 0, .external_lex_state = 4},
  [57] = {.lex_state = 0, .external_lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 4},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0, .external_lex_state = 4},
  [62] = {.lex_state = 0, .external_lex_state = 4},
  [63] = {.lex_state = 0, .external_lex_state = 4},
  [64] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token_word = 0,
  ts_external_token__imm_word = 1,
  ts_external_token_column_name = 2,
  ts_external_token_uppercase_name = 3,
  ts_external_token_code_block = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_word] = sym_word,
  [ts_external_token__imm_word] = sym__imm_word,
  [ts_external_token_column_name] = sym_column_name,
  [ts_external_token_uppercase_name] = sym_uppercase_name,
  [ts_external_token_code_block] = sym_code_block,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_word] = true,
    [ts_external_token__imm_word] = true,
    [ts_external_token_column_name] = true,
    [ts_external_token_uppercase_name] = true,
    [ts_external_token_code_block] = true,
  },
  [2] = {
    [ts_external_token_word] = true,
    [ts_external_token_column_name] = true,
    [ts_external_token_uppercase_name] = true,
    [ts_external_token_code_block] = true,
  },
  [3] = {
    [ts_external_token_word] = true,
  },
  [4] = {
    [ts_external_token__imm_word] = true,
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
    [sym__imm_word] = ACTIONS(1),
    [sym_column_name] = ACTIONS(1),
    [sym_uppercase_name] = ACTIONS(1),
    [sym_code_block] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(41),
    [sym_headline] = STATE(2),
    [sym_line] = STATE(2),
    [sym__atom] = STATE(5),
    [sym_column_heading] = STATE(2),
    [sym_tag] = STATE(5),
    [sym_option] = STATE(5),
    [sym_hotlink] = STATE(5),
    [sym_backtick] = STATE(5),
    [sym_argument] = STATE(5),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_headline_repeat1] = STATE(5),
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
    [sym_headline] = STATE(3),
    [sym_line] = STATE(3),
    [sym__atom] = STATE(5),
    [sym_column_heading] = STATE(3),
    [sym_tag] = STATE(5),
    [sym_option] = STATE(5),
    [sym_hotlink] = STATE(5),
    [sym_backtick] = STATE(5),
    [sym_argument] = STATE(5),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_headline_repeat1] = STATE(5),
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
    [sym_code_block] = ACTIONS(25),
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
    [sym_argument] = STATE(5),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_headline_repeat1] = STATE(5),
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
    [sym_code_block] = ACTIONS(29),
  },
  [4] = {
    [sym__atom] = STATE(4),
    [sym_tag] = STATE(4),
    [sym_option] = STATE(4),
    [sym_hotlink] = STATE(4),
    [sym_backtick] = STATE(4),
    [sym_argument] = STATE(4),
    [aux_sym_headline_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(59),
    [aux_sym_headline_token1] = ACTIONS(59),
    [aux_sym_headline_token2] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_BQUOTE] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_word] = ACTIONS(76),
    [sym_column_name] = ACTIONS(59),
    [sym_uppercase_name] = ACTIONS(59),
    [sym_code_block] = ACTIONS(59),
  },
  [5] = {
    [sym__atom] = STATE(4),
    [sym_tag] = STATE(4),
    [sym_option] = STATE(4),
    [sym_hotlink] = STATE(4),
    [sym_backtick] = STATE(4),
    [sym_argument] = STATE(4),
    [aux_sym_headline_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_LF] = ACTIONS(81),
    [aux_sym_headline_token1] = ACTIONS(79),
    [aux_sym_headline_token2] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [sym_word] = ACTIONS(83),
    [sym_column_name] = ACTIONS(79),
    [sym_uppercase_name] = ACTIONS(79),
    [sym_code_block] = ACTIONS(85),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(87), 1,
      anon_sym_STAR,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(96), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      sym_word,
    STATE(6), 7,
      sym__atom,
      sym_tag,
      sym_option,
      sym_hotlink,
      sym_backtick,
      sym_argument,
      aux_sym_headline_repeat1,
  [31] = 8,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      sym_word,
    STATE(6), 7,
      sym__atom,
      sym_tag,
      sym_option,
      sym_hotlink,
      sym_backtick,
      sym_argument,
      aux_sym_headline_repeat1,
  [62] = 7,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_word,
    STATE(7), 7,
      sym__atom,
      sym_tag,
      sym_option,
      sym_hotlink,
      sym_backtick,
      sym_argument,
      aux_sym_headline_repeat1,
  [90] = 1,
    ACTIONS(121), 13,
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
  [106] = 1,
    ACTIONS(123), 13,
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
  [122] = 1,
    ACTIONS(125), 13,
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
  [138] = 1,
    ACTIONS(127), 13,
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
  [154] = 1,
    ACTIONS(129), 13,
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
  [170] = 1,
    ACTIONS(131), 13,
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
  [186] = 1,
    ACTIONS(133), 13,
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
  [202] = 1,
    ACTIONS(135), 13,
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
  [218] = 1,
    ACTIONS(137), 13,
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
  [234] = 1,
    ACTIONS(139), 13,
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
  [250] = 2,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(131), 12,
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
  [268] = 7,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(149), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_word,
    STATE(50), 6,
      sym__atom,
      sym_tag,
      sym_option,
      sym_hotlink,
      sym_backtick,
      sym_argument,
  [295] = 7,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(149), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_word,
    STATE(30), 6,
      sym__atom,
      sym_tag,
      sym_option,
      sym_hotlink,
      sym_backtick,
      sym_argument,
  [322] = 7,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(149), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      sym_word,
    STATE(45), 6,
      sym__atom,
      sym_tag,
      sym_option,
      sym_hotlink,
      sym_backtick,
      sym_argument,
  [349] = 1,
    ACTIONS(121), 7,
      sym_word,
      anon_sym_LF,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [359] = 1,
    ACTIONS(123), 7,
      sym_word,
      anon_sym_LF,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [369] = 1,
    ACTIONS(129), 7,
      sym_word,
      anon_sym_LF,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [379] = 1,
    ACTIONS(139), 7,
      sym_word,
      anon_sym_LF,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [389] = 1,
    ACTIONS(137), 7,
      sym_word,
      anon_sym_LF,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [399] = 3,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym_tag,
  [409] = 1,
    ACTIONS(123), 2,
      anon_sym_LF,
      anon_sym_STAR2,
  [414] = 1,
    ACTIONS(161), 1,
      anon_sym_STAR2,
  [418] = 1,
    ACTIONS(163), 1,
      anon_sym_PIPE2,
  [422] = 1,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
  [426] = 1,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
  [430] = 1,
    ACTIONS(169), 1,
      anon_sym_PIPE2,
  [434] = 1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE2,
  [438] = 1,
    ACTIONS(129), 1,
      anon_sym_STAR2,
  [442] = 1,
    ACTIONS(139), 1,
      anon_sym_STAR2,
  [446] = 1,
    ACTIONS(121), 1,
      anon_sym_STAR2,
  [450] = 1,
    ACTIONS(137), 1,
      anon_sym_STAR2,
  [454] = 1,
    ACTIONS(173), 1,
      anon_sym_LF,
  [458] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [462] = 1,
    ACTIONS(177), 1,
      sym_word,
  [466] = 1,
    ACTIONS(179), 1,
      sym__imm_word,
  [470] = 1,
    ACTIONS(181), 1,
      sym__imm_word,
  [474] = 1,
    ACTIONS(183), 1,
      anon_sym_STAR2,
  [478] = 1,
    ACTIONS(185), 1,
      anon_sym_SQUOTE2,
  [482] = 1,
    ACTIONS(159), 1,
      anon_sym_LF,
  [486] = 1,
    ACTIONS(187), 1,
      anon_sym_BQUOTE2,
  [490] = 1,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
  [494] = 1,
    ACTIONS(191), 1,
      anon_sym_STAR2,
  [498] = 1,
    ACTIONS(193), 1,
      anon_sym_SQUOTE2,
  [502] = 1,
    ACTIONS(195), 1,
      anon_sym_PIPE2,
  [506] = 1,
    ACTIONS(197), 1,
      anon_sym_BQUOTE2,
  [510] = 1,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
  [514] = 1,
    ACTIONS(201), 1,
      sym__imm_word,
  [518] = 1,
    ACTIONS(203), 1,
      sym__imm_word,
  [522] = 1,
    ACTIONS(205), 1,
      sym__imm_word,
  [526] = 1,
    ACTIONS(207), 1,
      sym__imm_word,
  [530] = 1,
    ACTIONS(209), 1,
      sym_word,
  [534] = 1,
    ACTIONS(211), 1,
      anon_sym_LF,
  [538] = 1,
    ACTIONS(213), 1,
      sym__imm_word,
  [542] = 1,
    ACTIONS(215), 1,
      sym__imm_word,
  [546] = 1,
    ACTIONS(217), 1,
      sym__imm_word,
  [550] = 1,
    ACTIONS(219), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 31,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 122,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 154,
  [SMALL_STATE(14)] = 170,
  [SMALL_STATE(15)] = 186,
  [SMALL_STATE(16)] = 202,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 234,
  [SMALL_STATE(19)] = 250,
  [SMALL_STATE(20)] = 268,
  [SMALL_STATE(21)] = 295,
  [SMALL_STATE(22)] = 322,
  [SMALL_STATE(23)] = 349,
  [SMALL_STATE(24)] = 359,
  [SMALL_STATE(25)] = 369,
  [SMALL_STATE(26)] = 379,
  [SMALL_STATE(27)] = 389,
  [SMALL_STATE(28)] = 399,
  [SMALL_STATE(29)] = 409,
  [SMALL_STATE(30)] = 414,
  [SMALL_STATE(31)] = 418,
  [SMALL_STATE(32)] = 422,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 430,
  [SMALL_STATE(35)] = 434,
  [SMALL_STATE(36)] = 438,
  [SMALL_STATE(37)] = 442,
  [SMALL_STATE(38)] = 446,
  [SMALL_STATE(39)] = 450,
  [SMALL_STATE(40)] = 454,
  [SMALL_STATE(41)] = 458,
  [SMALL_STATE(42)] = 462,
  [SMALL_STATE(43)] = 466,
  [SMALL_STATE(44)] = 470,
  [SMALL_STATE(45)] = 474,
  [SMALL_STATE(46)] = 478,
  [SMALL_STATE(47)] = 482,
  [SMALL_STATE(48)] = 486,
  [SMALL_STATE(49)] = 490,
  [SMALL_STATE(50)] = 494,
  [SMALL_STATE(51)] = 498,
  [SMALL_STATE(52)] = 502,
  [SMALL_STATE(53)] = 506,
  [SMALL_STATE(54)] = 510,
  [SMALL_STATE(55)] = 514,
  [SMALL_STATE(56)] = 518,
  [SMALL_STATE(57)] = 522,
  [SMALL_STATE(58)] = 526,
  [SMALL_STATE(59)] = 530,
  [SMALL_STATE(60)] = 534,
  [SMALL_STATE(61)] = 538,
  [SMALL_STATE(62)] = 542,
  [SMALL_STATE(63)] = 546,
  [SMALL_STATE(64)] = 550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(60),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(21),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(55),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(44),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(43),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(42),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(47),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(28),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(21),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(55),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(44),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(43),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(42),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(20),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(61),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(62),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(63),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(64),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(6),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, .production_id = 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 4, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotlink, 3, .production_id = 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
