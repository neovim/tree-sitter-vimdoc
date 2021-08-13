#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

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
  sym_option = 19,
  sym_hotlink = 20,
  aux_sym_help_file_repeat1 = 21,
  aux_sym_headline_repeat1 = 22,
  aux_sym_line_repeat1 = 23,
  aux_sym_uppercase_name_repeat1 = 24,
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
  [sym_option] = "option",
  [sym_hotlink] = "hotlink",
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
  [sym_option] = sym_option,
  [sym_hotlink] = sym_hotlink,
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
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_hotlink] = {
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
  field_destination = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_delimiter] = "delimiter",
  [field_destination] = "destination",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_destination, 1},
  [3] =
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
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
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
    [sym_help_file] = STATE(27),
    [sym_headline] = STATE(3),
    [sym_line] = STATE(3),
    [sym__atom] = STATE(4),
    [sym_uppercase_name] = STATE(18),
    [sym_column_name] = STATE(26),
    [sym_column_heading] = STATE(3),
    [sym_tag] = STATE(4),
    [sym_option] = STATE(4),
    [sym_hotlink] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(3),
    [aux_sym_headline_repeat1] = STATE(19),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym_uppercase_name_repeat1] = STATE(16),
    [anon_sym_LF] = ACTIONS(3),
    [aux_sym_headline_token1] = ACTIONS(5),
    [aux_sym_headline_token2] = ACTIONS(5),
    [aux_sym_uppercase_name_token1] = ACTIONS(7),
    [sym_word] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym_code_block] = ACTIONS(17),
  },
  [2] = {
    [sym_headline] = STATE(2),
    [sym_line] = STATE(2),
    [sym__atom] = STATE(4),
    [sym_uppercase_name] = STATE(18),
    [sym_column_name] = STATE(26),
    [sym_column_heading] = STATE(2),
    [sym_tag] = STATE(4),
    [sym_option] = STATE(4),
    [sym_hotlink] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_headline_repeat1] = STATE(19),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym_uppercase_name_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [aux_sym_headline_token1] = ACTIONS(24),
    [aux_sym_headline_token2] = ACTIONS(24),
    [aux_sym_uppercase_name_token1] = ACTIONS(27),
    [sym_word] = ACTIONS(30),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [anon_sym_PIPE] = ACTIONS(39),
    [sym_code_block] = ACTIONS(42),
  },
  [3] = {
    [sym_headline] = STATE(2),
    [sym_line] = STATE(2),
    [sym__atom] = STATE(4),
    [sym_uppercase_name] = STATE(18),
    [sym_column_name] = STATE(26),
    [sym_column_heading] = STATE(2),
    [sym_tag] = STATE(4),
    [sym_option] = STATE(4),
    [sym_hotlink] = STATE(4),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_headline_repeat1] = STATE(19),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym_uppercase_name_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(47),
    [aux_sym_headline_token1] = ACTIONS(5),
    [aux_sym_headline_token2] = ACTIONS(5),
    [aux_sym_uppercase_name_token1] = ACTIONS(7),
    [sym_word] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym_code_block] = ACTIONS(17),
  },
  [4] = {
    [sym__atom] = STATE(5),
    [sym_tag] = STATE(5),
    [sym_option] = STATE(5),
    [sym_hotlink] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [aux_sym_headline_token1] = ACTIONS(49),
    [aux_sym_headline_token2] = ACTIONS(49),
    [aux_sym_uppercase_name_token1] = ACTIONS(53),
    [sym_word] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(15),
    [sym_code_block] = ACTIONS(57),
  },
  [5] = {
    [sym__atom] = STATE(5),
    [sym_tag] = STATE(5),
    [sym_option] = STATE(5),
    [sym_hotlink] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(59),
    [aux_sym_headline_token1] = ACTIONS(59),
    [aux_sym_headline_token2] = ACTIONS(59),
    [aux_sym_uppercase_name_token1] = ACTIONS(61),
    [sym_word] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(66),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(72),
    [sym_code_block] = ACTIONS(75),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(80), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(82), 1,
      anon_sym_TILDE,
    ACTIONS(84), 1,
      sym_word,
    ACTIONS(78), 8,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
  [20] = 2,
    ACTIONS(89), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(87), 8,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
  [35] = 2,
    ACTIONS(93), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(91), 8,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
  [50] = 2,
    ACTIONS(97), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(95), 8,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
  [65] = 2,
    ACTIONS(101), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(99), 8,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
  [80] = 2,
    ACTIONS(105), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(103), 8,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
  [95] = 2,
    ACTIONS(109), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(107), 8,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
  [110] = 2,
    ACTIONS(113), 2,
      aux_sym_uppercase_name_token1,
      sym_word,
    ACTIONS(111), 8,
      sym_code_block,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_headline_token1,
      aux_sym_headline_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
  [125] = 4,
    ACTIONS(115), 1,
      sym_word,
    ACTIONS(117), 1,
      anon_sym_STAR,
    STATE(17), 1,
      aux_sym_headline_repeat1,
    STATE(30), 1,
      sym_tag,
  [138] = 3,
    ACTIONS(121), 1,
      aux_sym_uppercase_name_token1,
    STATE(15), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(119), 2,
      anon_sym_LF,
      anon_sym_STAR,
  [149] = 3,
    ACTIONS(126), 1,
      aux_sym_uppercase_name_token1,
    STATE(15), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(124), 2,
      anon_sym_LF,
      anon_sym_STAR,
  [160] = 4,
    ACTIONS(128), 1,
      anon_sym_TILDE,
    ACTIONS(130), 1,
      sym_word,
    ACTIONS(133), 1,
      anon_sym_STAR,
    STATE(17), 1,
      aux_sym_headline_repeat1,
  [173] = 3,
    ACTIONS(117), 1,
      anon_sym_STAR,
    ACTIONS(135), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym_tag,
  [183] = 3,
    ACTIONS(115), 1,
      sym_word,
    ACTIONS(137), 1,
      anon_sym_TILDE,
    STATE(17), 1,
      aux_sym_headline_repeat1,
  [193] = 2,
    ACTIONS(139), 1,
      sym_word,
    STATE(14), 1,
      aux_sym_headline_repeat1,
  [200] = 1,
    ACTIONS(141), 1,
      anon_sym_LF,
  [204] = 1,
    ACTIONS(143), 1,
      anon_sym_PIPE,
  [208] = 1,
    ACTIONS(145), 1,
      anon_sym_LF,
  [212] = 1,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
  [216] = 1,
    ACTIONS(149), 1,
      anon_sym_STAR,
  [220] = 1,
    ACTIONS(151), 1,
      anon_sym_TILDE,
  [224] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [228] = 1,
    ACTIONS(155), 1,
      sym_word,
  [232] = 1,
    ACTIONS(157), 1,
      sym_word,
  [236] = 1,
    ACTIONS(159), 1,
      anon_sym_LF,
  [240] = 1,
    ACTIONS(161), 1,
      sym_word,
  [244] = 1,
    ACTIONS(103), 1,
      anon_sym_LF,
  [248] = 1,
    ACTIONS(163), 1,
      anon_sym_STAR,
  [252] = 1,
    ACTIONS(165), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 35,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 65,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 95,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 125,
  [SMALL_STATE(15)] = 138,
  [SMALL_STATE(16)] = 149,
  [SMALL_STATE(17)] = 160,
  [SMALL_STATE(18)] = 173,
  [SMALL_STATE(19)] = 183,
  [SMALL_STATE(20)] = 193,
  [SMALL_STATE(21)] = 200,
  [SMALL_STATE(22)] = 204,
  [SMALL_STATE(23)] = 208,
  [SMALL_STATE(24)] = 212,
  [SMALL_STATE(25)] = 216,
  [SMALL_STATE(26)] = 220,
  [SMALL_STATE(27)] = 224,
  [SMALL_STATE(28)] = 228,
  [SMALL_STATE(29)] = 232,
  [SMALL_STATE(30)] = 236,
  [SMALL_STATE(31)] = 240,
  [SMALL_STATE(32)] = 244,
  [SMALL_STATE(33)] = 248,
  [SMALL_STATE(34)] = 252,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(23),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(16),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(31),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(29),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(28),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(31),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(29),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(28),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headline_repeat1, 1),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atom, 1), REDUCE(aux_sym_headline_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 5, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 5, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hotlink, 3, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hotlink, 3, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(15),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headline_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2), SHIFT_REPEAT(17),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headline_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_name, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
