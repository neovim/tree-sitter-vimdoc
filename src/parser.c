#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum {
  aux_sym_help_file_token1 = 1,
  aux_sym_word_token1 = 2,
  aux_sym_word_token2 = 3,
  aux_sym_word_token3 = 4,
  aux_sym_word_token4 = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_word_token5 = 7,
  anon_sym_SQUOTE2 = 8,
  aux_sym_word_token6 = 9,
  aux_sym_word_token7 = 10,
  aux_sym_word_token8 = 11,
  aux_sym_word_token9 = 12,
  aux_sym_uppercase_name_token1 = 13,
  aux_sym_uppercase_name_token2 = 14,
  aux_sym_codeblock_token1 = 15,
  aux_sym_codeblock_token2 = 16,
  anon_sym_LF = 17,
  aux_sym_line_li_token1 = 18,
  aux_sym_line_code_token1 = 19,
  aux_sym_line_code_token2 = 20,
  aux_sym_column_heading_token1 = 21,
  aux_sym_h1_token1 = 22,
  aux_sym_h2_token1 = 23,
  anon_sym_STAR = 24,
  aux_sym_tag_token1 = 25,
  anon_sym_STAR2 = 26,
  sym_url_word = 27,
  aux_sym_optionlink_token1 = 28,
  anon_sym_PIPE = 29,
  aux_sym_taglink_token1 = 30,
  anon_sym_PIPE2 = 31,
  anon_sym_BQUOTE = 32,
  aux_sym_codespan_token1 = 33,
  anon_sym_BQUOTE2 = 34,
  anon_sym_LBRACE = 35,
  aux_sym_argument_token1 = 36,
  anon_sym_RBRACE = 37,
  sym_help_file = 38,
  sym__atom = 39,
  sym_word = 40,
  sym_uppercase_name = 41,
  sym_block = 42,
  sym_block_end = 43,
  sym_codeblock = 44,
  sym_line = 45,
  sym_line_noeol = 46,
  sym_line_li = 47,
  sym_line_li_noeol = 48,
  sym_line_code = 49,
  sym_column_heading = 50,
  sym_h1 = 51,
  sym_h2 = 52,
  sym_h3 = 53,
  sym_tag = 54,
  sym_url = 55,
  sym_optionlink = 56,
  sym_taglink = 57,
  sym_codespan = 58,
  sym_argument = 59,
  aux_sym_help_file_repeat1 = 60,
  aux_sym_help_file_repeat2 = 61,
  aux_sym_uppercase_name_repeat1 = 62,
  aux_sym_block_repeat1 = 63,
  aux_sym_block_repeat2 = 64,
  aux_sym_codeblock_repeat1 = 65,
  aux_sym_line_repeat1 = 66,
  aux_sym_h3_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_help_file_token1] = "help_file_token1",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_word_token2] = "word_token2",
  [aux_sym_word_token3] = "word_token3",
  [aux_sym_word_token4] = "word_token4",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_word_token5] = "word_token5",
  [anon_sym_SQUOTE2] = "'",
  [aux_sym_word_token6] = "word_token6",
  [aux_sym_word_token7] = "word_token7",
  [aux_sym_word_token8] = "word_token8",
  [aux_sym_word_token9] = "word_token9",
  [aux_sym_uppercase_name_token1] = "uppercase_name_token1",
  [aux_sym_uppercase_name_token2] = "uppercase_name_token2",
  [aux_sym_codeblock_token1] = "codeblock_token1",
  [aux_sym_codeblock_token2] = "codeblock_token2",
  [anon_sym_LF] = "\n",
  [aux_sym_line_li_token1] = "line_li_token1",
  [aux_sym_line_code_token1] = "line_code_token1",
  [aux_sym_line_code_token2] = "line_code_token2",
  [aux_sym_column_heading_token1] = "column_heading_token1",
  [aux_sym_h1_token1] = "h1_token1",
  [aux_sym_h2_token1] = "h2_token1",
  [anon_sym_STAR] = "*",
  [aux_sym_tag_token1] = "word",
  [anon_sym_STAR2] = "*",
  [sym_url_word] = "word",
  [aux_sym_optionlink_token1] = "word",
  [anon_sym_PIPE] = "|",
  [aux_sym_taglink_token1] = "word",
  [anon_sym_PIPE2] = "|",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_codespan_token1] = "word",
  [anon_sym_BQUOTE2] = "`",
  [anon_sym_LBRACE] = "{",
  [aux_sym_argument_token1] = "word",
  [anon_sym_RBRACE] = "}",
  [sym_help_file] = "help_file",
  [sym__atom] = "_atom",
  [sym_word] = "word",
  [sym_uppercase_name] = "uppercase_name",
  [sym_block] = "block",
  [sym_block_end] = "block",
  [sym_codeblock] = "codeblock",
  [sym_line] = "line",
  [sym_line_noeol] = "line",
  [sym_line_li] = "line_li",
  [sym_line_li_noeol] = "line_li",
  [sym_line_code] = "line",
  [sym_column_heading] = "column_heading",
  [sym_h1] = "h1",
  [sym_h2] = "h2",
  [sym_h3] = "h3",
  [sym_tag] = "tag",
  [sym_url] = "url",
  [sym_optionlink] = "optionlink",
  [sym_taglink] = "taglink",
  [sym_codespan] = "codespan",
  [sym_argument] = "argument",
  [aux_sym_help_file_repeat1] = "help_file_repeat1",
  [aux_sym_help_file_repeat2] = "help_file_repeat2",
  [aux_sym_uppercase_name_repeat1] = "uppercase_name_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
  [aux_sym_codeblock_repeat1] = "codeblock_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym_h3_repeat1] = "h3_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_help_file_token1] = aux_sym_help_file_token1,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [aux_sym_word_token2] = aux_sym_word_token2,
  [aux_sym_word_token3] = aux_sym_word_token3,
  [aux_sym_word_token4] = aux_sym_word_token4,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_word_token5] = aux_sym_word_token5,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym_word_token6] = aux_sym_word_token6,
  [aux_sym_word_token7] = aux_sym_word_token7,
  [aux_sym_word_token8] = aux_sym_word_token8,
  [aux_sym_word_token9] = aux_sym_word_token9,
  [aux_sym_uppercase_name_token1] = aux_sym_uppercase_name_token1,
  [aux_sym_uppercase_name_token2] = aux_sym_uppercase_name_token2,
  [aux_sym_codeblock_token1] = aux_sym_codeblock_token1,
  [aux_sym_codeblock_token2] = aux_sym_codeblock_token2,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_line_li_token1] = aux_sym_line_li_token1,
  [aux_sym_line_code_token1] = aux_sym_line_code_token1,
  [aux_sym_line_code_token2] = aux_sym_line_code_token2,
  [aux_sym_column_heading_token1] = aux_sym_column_heading_token1,
  [aux_sym_h1_token1] = aux_sym_h1_token1,
  [aux_sym_h2_token1] = aux_sym_h2_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_tag_token1] = sym_word,
  [anon_sym_STAR2] = anon_sym_STAR,
  [sym_url_word] = sym_word,
  [aux_sym_optionlink_token1] = sym_word,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_taglink_token1] = sym_word,
  [anon_sym_PIPE2] = anon_sym_PIPE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_codespan_token1] = sym_word,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_argument_token1] = sym_word,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_help_file] = sym_help_file,
  [sym__atom] = sym__atom,
  [sym_word] = sym_word,
  [sym_uppercase_name] = sym_uppercase_name,
  [sym_block] = sym_block,
  [sym_block_end] = sym_block,
  [sym_codeblock] = sym_codeblock,
  [sym_line] = sym_line,
  [sym_line_noeol] = sym_line,
  [sym_line_li] = sym_line_li,
  [sym_line_li_noeol] = sym_line_li,
  [sym_line_code] = sym_line,
  [sym_column_heading] = sym_column_heading,
  [sym_h1] = sym_h1,
  [sym_h2] = sym_h2,
  [sym_h3] = sym_h3,
  [sym_tag] = sym_tag,
  [sym_url] = sym_url,
  [sym_optionlink] = sym_optionlink,
  [sym_taglink] = sym_taglink,
  [sym_codespan] = sym_codespan,
  [sym_argument] = sym_argument,
  [aux_sym_help_file_repeat1] = aux_sym_help_file_repeat1,
  [aux_sym_help_file_repeat2] = aux_sym_help_file_repeat2,
  [aux_sym_uppercase_name_repeat1] = aux_sym_uppercase_name_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
  [aux_sym_codeblock_repeat1] = aux_sym_codeblock_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [aux_sym_h3_repeat1] = aux_sym_h3_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_help_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codeblock_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codeblock_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_li_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_code_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_heading_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_h1_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_h2_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = false,
  },
  [sym_url_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_optionlink_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_taglink_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_codespan_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_argument_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_help_file] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_name] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_codeblock] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_line_noeol] = {
    .visible = true,
    .named = true,
  },
  [sym_line_li] = {
    .visible = true,
    .named = true,
  },
  [sym_line_li_noeol] = {
    .visible = true,
    .named = true,
  },
  [sym_line_code] = {
    .visible = true,
    .named = true,
  },
  [sym_column_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_h1] = {
    .visible = true,
    .named = true,
  },
  [sym_h2] = {
    .visible = true,
    .named = true,
  },
  [sym_h3] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_optionlink] = {
    .visible = true,
    .named = true,
  },
  [sym_taglink] = {
    .visible = true,
    .named = true,
  },
  [sym_codespan] = {
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
  [aux_sym_help_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codeblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_h3_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_blank = 1,
  field_name = 2,
  field_text = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blank] = "blank",
  [field_name] = "name",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_text, 0},
  [1] =
    {field_name, 0},
  [2] =
    {field_blank, 0},
  [3] =
    {field_text, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_word,
  },
  [6] = {
    [0] = sym_word,
    [1] = sym_word,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_uppercase_name_repeat1, 2,
    aux_sym_uppercase_name_repeat1,
    sym_word,
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
  [13] = 12,
  [14] = 11,
  [15] = 10,
  [16] = 9,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 19,
  [25] = 19,
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 68,
  [72] = 55,
  [73] = 56,
  [74] = 65,
  [75] = 70,
  [76] = 67,
  [77] = 57,
  [78] = 58,
  [79] = 65,
  [80] = 68,
  [81] = 67,
  [82] = 70,
  [83] = 58,
  [84] = 57,
  [85] = 56,
  [86] = 55,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 94,
  [97] = 94,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 99,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 101,
  [115] = 102,
  [116] = 98,
  [117] = 117,
  [118] = 108,
  [119] = 109,
  [120] = 101,
  [121] = 102,
  [122] = 98,
  [123] = 99,
  [124] = 108,
  [125] = 109,
  [126] = 126,
  [127] = 107,
  [128] = 100,
  [129] = 126,
  [130] = 112,
  [131] = 131,
  [132] = 107,
  [133] = 100,
  [134] = 126,
  [135] = 112,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '`') ADVANCE(117);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '~') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '|') ADVANCE(112);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(33);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '`') ADVANCE(117);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(121);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(120);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(113);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(116);
      END_STATE();
    case 22:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 23:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(33);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(63);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(33);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_help_file_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(75);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token3);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token4);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token6);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(82);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token7);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token8);
      if (lookahead == '|') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token9);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_codeblock_token2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_codeblock_token2);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_line_code_token2);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(82);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '|') ADVANCE(88);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(89);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 23},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 26},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 26},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 24},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 24},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 15},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 15},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 15},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 17},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 18},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 21},
  [135] = {.lex_state = 18},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_help_file_token1] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_token4] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym_word_token6] = ACTIONS(1),
    [aux_sym_word_token7] = ACTIONS(1),
    [aux_sym_codeblock_token2] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_line_code_token2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(104),
    [sym__atom] = STATE(17),
    [sym_word] = STATE(17),
    [sym_uppercase_name] = STATE(88),
    [sym_block] = STATE(3),
    [sym_block_end] = STATE(131),
    [sym_codeblock] = STATE(53),
    [sym_line] = STATE(6),
    [sym_line_noeol] = STATE(117),
    [sym_line_li] = STATE(6),
    [sym_line_li_noeol] = STATE(117),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(3),
    [sym_h2] = STATE(3),
    [sym_h3] = STATE(3),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_help_file_token1] = ACTIONS(5),
    [aux_sym_word_token1] = ACTIONS(7),
    [aux_sym_word_token2] = ACTIONS(7),
    [aux_sym_word_token3] = ACTIONS(9),
    [aux_sym_word_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_word_token7] = ACTIONS(9),
    [aux_sym_word_token8] = ACTIONS(7),
    [aux_sym_word_token9] = ACTIONS(9),
    [aux_sym_uppercase_name_token1] = ACTIONS(13),
    [aux_sym_codeblock_token1] = ACTIONS(15),
    [aux_sym_line_li_token1] = ACTIONS(17),
    [aux_sym_h1_token1] = ACTIONS(19),
    [aux_sym_h2_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [sym_url_word] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [2] = {
    [sym__atom] = STATE(17),
    [sym_word] = STATE(17),
    [sym_uppercase_name] = STATE(88),
    [sym_block] = STATE(4),
    [sym_block_end] = STATE(110),
    [sym_codeblock] = STATE(53),
    [sym_line] = STATE(6),
    [sym_line_noeol] = STATE(117),
    [sym_line_li] = STATE(6),
    [sym_line_li_noeol] = STATE(117),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(4),
    [sym_h2] = STATE(4),
    [sym_h3] = STATE(4),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_help_file_repeat1] = STATE(41),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_help_file_token1] = ACTIONS(35),
    [aux_sym_word_token1] = ACTIONS(7),
    [aux_sym_word_token2] = ACTIONS(7),
    [aux_sym_word_token3] = ACTIONS(9),
    [aux_sym_word_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_word_token7] = ACTIONS(9),
    [aux_sym_word_token8] = ACTIONS(7),
    [aux_sym_word_token9] = ACTIONS(9),
    [aux_sym_uppercase_name_token1] = ACTIONS(13),
    [aux_sym_codeblock_token1] = ACTIONS(15),
    [aux_sym_line_li_token1] = ACTIONS(17),
    [aux_sym_h1_token1] = ACTIONS(19),
    [aux_sym_h2_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [sym_url_word] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [3] = {
    [sym__atom] = STATE(17),
    [sym_word] = STATE(17),
    [sym_uppercase_name] = STATE(88),
    [sym_block] = STATE(5),
    [sym_block_end] = STATE(110),
    [sym_codeblock] = STATE(53),
    [sym_line] = STATE(6),
    [sym_line_noeol] = STATE(117),
    [sym_line_li] = STATE(6),
    [sym_line_li_noeol] = STATE(117),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(5),
    [sym_h2] = STATE(5),
    [sym_h3] = STATE(5),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_word_token1] = ACTIONS(7),
    [aux_sym_word_token2] = ACTIONS(7),
    [aux_sym_word_token3] = ACTIONS(9),
    [aux_sym_word_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_word_token7] = ACTIONS(9),
    [aux_sym_word_token8] = ACTIONS(7),
    [aux_sym_word_token9] = ACTIONS(9),
    [aux_sym_uppercase_name_token1] = ACTIONS(13),
    [aux_sym_codeblock_token1] = ACTIONS(15),
    [aux_sym_line_li_token1] = ACTIONS(17),
    [aux_sym_h1_token1] = ACTIONS(19),
    [aux_sym_h2_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [sym_url_word] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [4] = {
    [sym__atom] = STATE(17),
    [sym_word] = STATE(17),
    [sym_uppercase_name] = STATE(88),
    [sym_block] = STATE(5),
    [sym_block_end] = STATE(106),
    [sym_codeblock] = STATE(53),
    [sym_line] = STATE(6),
    [sym_line_noeol] = STATE(117),
    [sym_line_li] = STATE(6),
    [sym_line_li_noeol] = STATE(117),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(5),
    [sym_h2] = STATE(5),
    [sym_h3] = STATE(5),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_word_token1] = ACTIONS(7),
    [aux_sym_word_token2] = ACTIONS(7),
    [aux_sym_word_token3] = ACTIONS(9),
    [aux_sym_word_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_word_token7] = ACTIONS(9),
    [aux_sym_word_token8] = ACTIONS(7),
    [aux_sym_word_token9] = ACTIONS(9),
    [aux_sym_uppercase_name_token1] = ACTIONS(13),
    [aux_sym_codeblock_token1] = ACTIONS(15),
    [aux_sym_line_li_token1] = ACTIONS(17),
    [aux_sym_h1_token1] = ACTIONS(19),
    [aux_sym_h2_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [sym_url_word] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [5] = {
    [sym__atom] = STATE(21),
    [sym_word] = STATE(21),
    [sym_uppercase_name] = STATE(88),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(69),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(7),
    [sym_column_heading] = STATE(69),
    [sym_h1] = STATE(5),
    [sym_h2] = STATE(5),
    [sym_h3] = STATE(5),
    [sym_tag] = STATE(21),
    [sym_url] = STATE(21),
    [sym_optionlink] = STATE(21),
    [sym_taglink] = STATE(21),
    [sym_codespan] = STATE(21),
    [sym_argument] = STATE(21),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_line_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_word_token1] = ACTIONS(41),
    [aux_sym_word_token2] = ACTIONS(41),
    [aux_sym_word_token3] = ACTIONS(44),
    [aux_sym_word_token4] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_word_token7] = ACTIONS(44),
    [aux_sym_word_token8] = ACTIONS(41),
    [aux_sym_word_token9] = ACTIONS(44),
    [aux_sym_uppercase_name_token1] = ACTIONS(50),
    [aux_sym_codeblock_token1] = ACTIONS(53),
    [aux_sym_line_li_token1] = ACTIONS(56),
    [aux_sym_h1_token1] = ACTIONS(59),
    [aux_sym_h2_token1] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(65),
    [sym_url_word] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(77),
  },
  [6] = {
    [sym__atom] = STATE(17),
    [sym_word] = STATE(17),
    [sym_uppercase_name] = STATE(111),
    [sym_codeblock] = STATE(53),
    [sym_line] = STATE(8),
    [sym_line_noeol] = STATE(113),
    [sym_line_li] = STATE(8),
    [sym_line_li_noeol] = STATE(113),
    [sym_column_heading] = STATE(53),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_block_repeat1] = STATE(8),
    [aux_sym_block_repeat2] = STATE(43),
    [aux_sym_line_repeat1] = STATE(17),
    [aux_sym_help_file_token1] = ACTIONS(80),
    [aux_sym_word_token1] = ACTIONS(7),
    [aux_sym_word_token2] = ACTIONS(7),
    [aux_sym_word_token3] = ACTIONS(9),
    [aux_sym_word_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_word_token7] = ACTIONS(9),
    [aux_sym_word_token8] = ACTIONS(7),
    [aux_sym_word_token9] = ACTIONS(9),
    [aux_sym_uppercase_name_token1] = ACTIONS(82),
    [aux_sym_codeblock_token1] = ACTIONS(15),
    [aux_sym_line_li_token1] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(23),
    [sym_url_word] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      sym_url_word,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    ACTIONS(84), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(86), 1,
      aux_sym_line_li_token1,
    STATE(43), 1,
      aux_sym_block_repeat2,
    STATE(111), 1,
      sym_uppercase_name,
    STATE(69), 2,
      sym_codeblock,
      sym_column_heading,
    ACTIONS(7), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    STATE(8), 3,
      sym_line,
      sym_line_li,
      aux_sym_block_repeat1,
    ACTIONS(9), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(21), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [68] = 16,
    ACTIONS(88), 1,
      aux_sym_help_file_token1,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(102), 1,
      aux_sym_codeblock_token1,
    ACTIONS(105), 1,
      aux_sym_line_li_token1,
    ACTIONS(108), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      sym_url_word,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_BQUOTE,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_uppercase_name,
    STATE(69), 2,
      sym_codeblock,
      sym_column_heading,
    ACTIONS(90), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    STATE(8), 3,
      sym_line,
      sym_line_li,
      aux_sym_block_repeat1,
    ACTIONS(93), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(21), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [133] = 13,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      aux_sym_uppercase_name_repeat1,
    STATE(46), 1,
      sym_codeblock,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(131), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(20), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [188] = 13,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_codeblock,
    STATE(54), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(141), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(18), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [243] = 13,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_uppercase_name_repeat1,
    STATE(64), 1,
      sym_codeblock,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(131), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(22), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [298] = 13,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      aux_sym_uppercase_name_repeat1,
    STATE(63), 1,
      sym_codeblock,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(141), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(23), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [353] = 14,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      aux_sym_column_heading_token1,
    ACTIONS(143), 1,
      anon_sym_STAR,
    STATE(54), 1,
      aux_sym_uppercase_name_repeat1,
    STATE(63), 1,
      sym_codeblock,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(23), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [409] = 14,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(131), 1,
      aux_sym_column_heading_token1,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_STAR,
    STATE(13), 1,
      aux_sym_uppercase_name_repeat1,
    STATE(64), 1,
      sym_codeblock,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(22), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [465] = 14,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      aux_sym_column_heading_token1,
    ACTIONS(143), 1,
      anon_sym_STAR,
    STATE(48), 1,
      sym_codeblock,
    STATE(54), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(18), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [521] = 14,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(131), 1,
      aux_sym_column_heading_token1,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_STAR,
    STATE(15), 1,
      aux_sym_uppercase_name_repeat1,
    STATE(46), 1,
      sym_codeblock,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(20), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [577] = 14,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(25), 1,
      sym_url_word,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      aux_sym_column_heading_token1,
    ACTIONS(151), 1,
      anon_sym_STAR,
    STATE(52), 1,
      sym_codeblock,
    ACTIONS(7), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(9), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(19), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [633] = 13,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym_codeblock,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(24), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [686] = 10,
    ACTIONS(165), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      anon_sym_STAR,
    ACTIONS(171), 1,
      sym_url_word,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    ACTIONS(177), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(162), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(19), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [733] = 13,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym_codeblock,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(24), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [786] = 13,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(25), 1,
      sym_url_word,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      aux_sym_column_heading_token1,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(187), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym_codeblock,
    ACTIONS(7), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(9), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(19), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [839] = 12,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym_codeblock,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(24), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [889] = 12,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      sym_url_word,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_BQUOTE,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_codeblock,
    ACTIONS(123), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(125), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(24), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [939] = 10,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      sym_url_word,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      anon_sym_BQUOTE,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(193), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(196), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(24), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [985] = 10,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      anon_sym_STAR,
    ACTIONS(229), 1,
      sym_url_word,
    ACTIONS(232), 1,
      anon_sym_PIPE,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(217), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(220), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(25), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [1030] = 11,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(251), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      sym_url_word,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(245), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(25), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [1077] = 10,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      sym_url_word,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(243), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(245), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(25), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [1121] = 10,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_LF,
    ACTIONS(251), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      sym_url_word,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(245), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(25), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [1165] = 10,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      sym_url_word,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      anon_sym_LF,
    ACTIONS(243), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(245), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(25), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [1209] = 9,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      sym_url_word,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(245), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(27), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [1250] = 9,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      sym_url_word,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(245), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(29), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [1291] = 9,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      sym_url_word,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(245), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(26), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [1332] = 9,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      sym_url_word,
    ACTIONS(255), 1,
      anon_sym_PIPE,
    ACTIONS(257), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(245), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(28), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [1373] = 4,
    ACTIONS(267), 1,
      aux_sym_help_file_token1,
    STATE(34), 1,
      aux_sym_block_repeat2,
    ACTIONS(270), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(265), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1403] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(34), 1,
      aux_sym_block_repeat2,
    ACTIONS(274), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(272), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1433] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(35), 1,
      aux_sym_block_repeat2,
    ACTIONS(278), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(276), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1463] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(34), 1,
      aux_sym_block_repeat2,
    ACTIONS(278), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(276), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1493] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(37), 1,
      aux_sym_block_repeat2,
    ACTIONS(282), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(280), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1523] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(44), 1,
      aux_sym_block_repeat2,
    ACTIONS(286), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(284), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1553] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(42), 1,
      aux_sym_block_repeat2,
    ACTIONS(290), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(288), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1583] = 4,
    ACTIONS(294), 1,
      aux_sym_help_file_token1,
    STATE(41), 1,
      aux_sym_help_file_repeat1,
    ACTIONS(297), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(292), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1613] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(34), 1,
      aux_sym_block_repeat2,
    ACTIONS(301), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(299), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1643] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(34), 1,
      aux_sym_block_repeat2,
    ACTIONS(305), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(303), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1673] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(34), 1,
      aux_sym_block_repeat2,
    ACTIONS(309), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(307), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1703] = 2,
    ACTIONS(313), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(311), 13,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1728] = 3,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(315), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1753] = 2,
    ACTIONS(321), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(319), 11,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1776] = 3,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(323), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1801] = 3,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(329), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1826] = 2,
    ACTIONS(335), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(333), 11,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1849] = 3,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(339), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1874] = 3,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(345), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1899] = 3,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(349), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1924] = 4,
    ACTIONS(357), 1,
      aux_sym_uppercase_name_token2,
    STATE(54), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(353), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(355), 10,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1951] = 2,
    ACTIONS(362), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(360), 11,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1973] = 2,
    ACTIONS(366), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(364), 11,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1995] = 2,
    ACTIONS(370), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(368), 11,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2017] = 2,
    ACTIONS(374), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(372), 11,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2039] = 2,
    ACTIONS(347), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(345), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2061] = 2,
    ACTIONS(341), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(339), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2083] = 2,
    ACTIONS(331), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(329), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2105] = 2,
    ACTIONS(378), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(376), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2127] = 2,
    ACTIONS(325), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(323), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2149] = 2,
    ACTIONS(317), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(315), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2171] = 2,
    ACTIONS(382), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(380), 11,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2193] = 2,
    ACTIONS(384), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(386), 11,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2215] = 2,
    ACTIONS(390), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(388), 11,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2237] = 2,
    ACTIONS(394), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(392), 11,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2259] = 2,
    ACTIONS(351), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(349), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2281] = 2,
    ACTIONS(398), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(396), 11,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2303] = 2,
    ACTIONS(394), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(392), 10,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2324] = 2,
    ACTIONS(362), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(360), 10,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2345] = 2,
    ACTIONS(366), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(364), 10,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2366] = 2,
    ACTIONS(382), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(380), 10,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2387] = 2,
    ACTIONS(398), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(396), 10,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2408] = 2,
    ACTIONS(390), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(388), 10,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2429] = 2,
    ACTIONS(370), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(368), 10,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2450] = 2,
    ACTIONS(374), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(372), 10,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2471] = 2,
    ACTIONS(382), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2491] = 2,
    ACTIONS(394), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(392), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2511] = 2,
    ACTIONS(390), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(388), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2531] = 2,
    ACTIONS(398), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(396), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2551] = 2,
    ACTIONS(374), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2571] = 2,
    ACTIONS(370), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(368), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2591] = 2,
    ACTIONS(366), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2611] = 2,
    ACTIONS(362), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(360), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2631] = 4,
    ACTIONS(400), 1,
      aux_sym_codeblock_token2,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(404), 1,
      aux_sym_line_code_token1,
    STATE(89), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [2645] = 4,
    ACTIONS(149), 1,
      aux_sym_column_heading_token1,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(406), 1,
      anon_sym_LF,
    STATE(92), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [2659] = 4,
    ACTIONS(408), 1,
      aux_sym_codeblock_token2,
    ACTIONS(410), 1,
      anon_sym_LF,
    ACTIONS(413), 1,
      aux_sym_line_code_token1,
    STATE(89), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [2673] = 3,
    ACTIONS(402), 1,
      anon_sym_LF,
    ACTIONS(404), 1,
      aux_sym_line_code_token1,
    STATE(87), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [2684] = 3,
    ACTIONS(416), 1,
      anon_sym_LF,
    ACTIONS(418), 1,
      anon_sym_STAR,
    STATE(91), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [2695] = 3,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(421), 1,
      anon_sym_LF,
    STATE(91), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [2706] = 2,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(423), 2,
      aux_sym_codeblock_token2,
      aux_sym_line_code_token1,
  [2714] = 3,
    ACTIONS(427), 1,
      aux_sym_word_token5,
    ACTIONS(429), 1,
      aux_sym_word_token6,
    ACTIONS(431), 1,
      aux_sym_optionlink_token1,
  [2724] = 2,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(433), 2,
      aux_sym_codeblock_token2,
      aux_sym_line_code_token1,
  [2732] = 3,
    ACTIONS(437), 1,
      aux_sym_word_token5,
    ACTIONS(439), 1,
      aux_sym_word_token6,
    ACTIONS(441), 1,
      aux_sym_optionlink_token1,
  [2742] = 3,
    ACTIONS(443), 1,
      aux_sym_word_token5,
    ACTIONS(445), 1,
      aux_sym_word_token6,
    ACTIONS(447), 1,
      aux_sym_optionlink_token1,
  [2752] = 1,
    ACTIONS(449), 1,
      anon_sym_STAR2,
  [2756] = 1,
    ACTIONS(451), 1,
      anon_sym_PIPE2,
  [2760] = 1,
    ACTIONS(453), 1,
      aux_sym_taglink_token1,
  [2764] = 1,
    ACTIONS(455), 1,
      anon_sym_SQUOTE2,
  [2768] = 1,
    ACTIONS(457), 1,
      anon_sym_SQUOTE2,
  [2772] = 1,
    ACTIONS(459), 1,
      aux_sym_line_code_token2,
  [2776] = 1,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
  [2780] = 1,
    ACTIONS(463), 1,
      anon_sym_PIPE2,
  [2784] = 1,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
  [2788] = 1,
    ACTIONS(467), 1,
      aux_sym_tag_token1,
  [2792] = 1,
    ACTIONS(469), 1,
      anon_sym_BQUOTE2,
  [2796] = 1,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
  [2800] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [2804] = 1,
    ACTIONS(149), 1,
      aux_sym_column_heading_token1,
  [2808] = 1,
    ACTIONS(473), 1,
      aux_sym_argument_token1,
  [2812] = 1,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [2816] = 1,
    ACTIONS(477), 1,
      anon_sym_SQUOTE2,
  [2820] = 1,
    ACTIONS(479), 1,
      anon_sym_SQUOTE2,
  [2824] = 1,
    ACTIONS(481), 1,
      anon_sym_STAR2,
  [2828] = 1,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
  [2832] = 1,
    ACTIONS(485), 1,
      anon_sym_BQUOTE2,
  [2836] = 1,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
  [2840] = 1,
    ACTIONS(489), 1,
      anon_sym_SQUOTE2,
  [2844] = 1,
    ACTIONS(491), 1,
      anon_sym_SQUOTE2,
  [2848] = 1,
    ACTIONS(493), 1,
      anon_sym_STAR2,
  [2852] = 1,
    ACTIONS(495), 1,
      anon_sym_PIPE2,
  [2856] = 1,
    ACTIONS(497), 1,
      anon_sym_BQUOTE2,
  [2860] = 1,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
  [2864] = 1,
    ACTIONS(501), 1,
      aux_sym_codespan_token1,
  [2868] = 1,
    ACTIONS(503), 1,
      aux_sym_tag_token1,
  [2872] = 1,
    ACTIONS(505), 1,
      aux_sym_taglink_token1,
  [2876] = 1,
    ACTIONS(507), 1,
      aux_sym_codespan_token1,
  [2880] = 1,
    ACTIONS(509), 1,
      aux_sym_argument_token1,
  [2884] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [2888] = 1,
    ACTIONS(511), 1,
      aux_sym_tag_token1,
  [2892] = 1,
    ACTIONS(513), 1,
      aux_sym_taglink_token1,
  [2896] = 1,
    ACTIONS(515), 1,
      aux_sym_codespan_token1,
  [2900] = 1,
    ACTIONS(517), 1,
      aux_sym_argument_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 243,
  [SMALL_STATE(12)] = 298,
  [SMALL_STATE(13)] = 353,
  [SMALL_STATE(14)] = 409,
  [SMALL_STATE(15)] = 465,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 577,
  [SMALL_STATE(18)] = 633,
  [SMALL_STATE(19)] = 686,
  [SMALL_STATE(20)] = 733,
  [SMALL_STATE(21)] = 786,
  [SMALL_STATE(22)] = 839,
  [SMALL_STATE(23)] = 889,
  [SMALL_STATE(24)] = 939,
  [SMALL_STATE(25)] = 985,
  [SMALL_STATE(26)] = 1030,
  [SMALL_STATE(27)] = 1077,
  [SMALL_STATE(28)] = 1121,
  [SMALL_STATE(29)] = 1165,
  [SMALL_STATE(30)] = 1209,
  [SMALL_STATE(31)] = 1250,
  [SMALL_STATE(32)] = 1291,
  [SMALL_STATE(33)] = 1332,
  [SMALL_STATE(34)] = 1373,
  [SMALL_STATE(35)] = 1403,
  [SMALL_STATE(36)] = 1433,
  [SMALL_STATE(37)] = 1463,
  [SMALL_STATE(38)] = 1493,
  [SMALL_STATE(39)] = 1523,
  [SMALL_STATE(40)] = 1553,
  [SMALL_STATE(41)] = 1583,
  [SMALL_STATE(42)] = 1613,
  [SMALL_STATE(43)] = 1643,
  [SMALL_STATE(44)] = 1673,
  [SMALL_STATE(45)] = 1703,
  [SMALL_STATE(46)] = 1728,
  [SMALL_STATE(47)] = 1753,
  [SMALL_STATE(48)] = 1776,
  [SMALL_STATE(49)] = 1801,
  [SMALL_STATE(50)] = 1826,
  [SMALL_STATE(51)] = 1849,
  [SMALL_STATE(52)] = 1874,
  [SMALL_STATE(53)] = 1899,
  [SMALL_STATE(54)] = 1924,
  [SMALL_STATE(55)] = 1951,
  [SMALL_STATE(56)] = 1973,
  [SMALL_STATE(57)] = 1995,
  [SMALL_STATE(58)] = 2017,
  [SMALL_STATE(59)] = 2039,
  [SMALL_STATE(60)] = 2061,
  [SMALL_STATE(61)] = 2083,
  [SMALL_STATE(62)] = 2105,
  [SMALL_STATE(63)] = 2127,
  [SMALL_STATE(64)] = 2149,
  [SMALL_STATE(65)] = 2171,
  [SMALL_STATE(66)] = 2193,
  [SMALL_STATE(67)] = 2215,
  [SMALL_STATE(68)] = 2237,
  [SMALL_STATE(69)] = 2259,
  [SMALL_STATE(70)] = 2281,
  [SMALL_STATE(71)] = 2303,
  [SMALL_STATE(72)] = 2324,
  [SMALL_STATE(73)] = 2345,
  [SMALL_STATE(74)] = 2366,
  [SMALL_STATE(75)] = 2387,
  [SMALL_STATE(76)] = 2408,
  [SMALL_STATE(77)] = 2429,
  [SMALL_STATE(78)] = 2450,
  [SMALL_STATE(79)] = 2471,
  [SMALL_STATE(80)] = 2491,
  [SMALL_STATE(81)] = 2511,
  [SMALL_STATE(82)] = 2531,
  [SMALL_STATE(83)] = 2551,
  [SMALL_STATE(84)] = 2571,
  [SMALL_STATE(85)] = 2591,
  [SMALL_STATE(86)] = 2611,
  [SMALL_STATE(87)] = 2631,
  [SMALL_STATE(88)] = 2645,
  [SMALL_STATE(89)] = 2659,
  [SMALL_STATE(90)] = 2673,
  [SMALL_STATE(91)] = 2684,
  [SMALL_STATE(92)] = 2695,
  [SMALL_STATE(93)] = 2706,
  [SMALL_STATE(94)] = 2714,
  [SMALL_STATE(95)] = 2724,
  [SMALL_STATE(96)] = 2732,
  [SMALL_STATE(97)] = 2742,
  [SMALL_STATE(98)] = 2752,
  [SMALL_STATE(99)] = 2756,
  [SMALL_STATE(100)] = 2760,
  [SMALL_STATE(101)] = 2764,
  [SMALL_STATE(102)] = 2768,
  [SMALL_STATE(103)] = 2772,
  [SMALL_STATE(104)] = 2776,
  [SMALL_STATE(105)] = 2780,
  [SMALL_STATE(106)] = 2784,
  [SMALL_STATE(107)] = 2788,
  [SMALL_STATE(108)] = 2792,
  [SMALL_STATE(109)] = 2796,
  [SMALL_STATE(110)] = 2800,
  [SMALL_STATE(111)] = 2804,
  [SMALL_STATE(112)] = 2808,
  [SMALL_STATE(113)] = 2812,
  [SMALL_STATE(114)] = 2816,
  [SMALL_STATE(115)] = 2820,
  [SMALL_STATE(116)] = 2824,
  [SMALL_STATE(117)] = 2828,
  [SMALL_STATE(118)] = 2832,
  [SMALL_STATE(119)] = 2836,
  [SMALL_STATE(120)] = 2840,
  [SMALL_STATE(121)] = 2844,
  [SMALL_STATE(122)] = 2848,
  [SMALL_STATE(123)] = 2852,
  [SMALL_STATE(124)] = 2856,
  [SMALL_STATE(125)] = 2860,
  [SMALL_STATE(126)] = 2864,
  [SMALL_STATE(127)] = 2868,
  [SMALL_STATE(128)] = 2872,
  [SMALL_STATE(129)] = 2876,
  [SMALL_STATE(130)] = 2880,
  [SMALL_STATE(131)] = 2884,
  [SMALL_STATE(132)] = 2888,
  [SMALL_STATE(133)] = 2892,
  [SMALL_STATE(134)] = 2896,
  [SMALL_STATE(135)] = 2900,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(67),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(67),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(97),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(11),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(90),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(33),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(31),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(107),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(70),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(100),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(126),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(112),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(97),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(100),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(126),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 3, .production_id = 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(67),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(67),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(97),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(107),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(70),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(100),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(126),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(112),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 2, .production_id = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(76),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(76),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(96),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(127),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(75),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(128),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(129),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(130),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(81),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(81),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(94),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(132),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(82),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(133),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(134),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(135),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li_noeol, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(45),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, .production_id = 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, .production_id = 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(41),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 1, .production_id = 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 1, .production_id = 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, .production_id = 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, .production_id = 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3, .production_id = 6),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3, .production_id = 6),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 4, .production_id = 6),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4, .production_id = 6),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 4, .production_id = 6),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 3, .production_id = 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3, .production_id = 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(66),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 5),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 5),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 5),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 5),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 5),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 5),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(93),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(103),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2), SHIFT_REPEAT(107),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [461] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
