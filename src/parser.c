#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_LT = 15,
  aux_sym_codeblock_token1 = 16,
  anon_sym_LF = 17,
  aux_sym_line_li_token1 = 18,
  aux_sym_line_code_token1 = 19,
  aux_sym_column_heading_token1 = 20,
  aux_sym_h1_token1 = 21,
  aux_sym_h2_token1 = 22,
  anon_sym_STAR = 23,
  aux_sym_tag_token1 = 24,
  anon_sym_STAR2 = 25,
  sym_url_word = 26,
  aux_sym_optionlink_token1 = 27,
  anon_sym_PIPE = 28,
  aux_sym_taglink_token1 = 29,
  anon_sym_PIPE2 = 30,
  anon_sym_BQUOTE = 31,
  aux_sym_codespan_token1 = 32,
  anon_sym_BQUOTE2 = 33,
  anon_sym_LBRACE = 34,
  aux_sym_argument_token1 = 35,
  anon_sym_RBRACE = 36,
  sym_help_file = 37,
  sym__atom = 38,
  sym_word = 39,
  sym_uppercase_name = 40,
  sym_block = 41,
  sym_block_end = 42,
  sym_codeblock = 43,
  sym__blank = 44,
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
  [anon_sym_LT] = "<",
  [aux_sym_codeblock_token1] = "codeblock_token1",
  [anon_sym_LF] = "\n",
  [aux_sym_line_li_token1] = "line_li_token1",
  [aux_sym_line_code_token1] = "line_code_token1",
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
  [sym__blank] = "_blank",
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
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_codeblock_token1] = aux_sym_codeblock_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_line_li_token1] = aux_sym_line_li_token1,
  [aux_sym_line_code_token1] = aux_sym_line_code_token1,
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
  [sym__blank] = sym__blank,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_codeblock_token1] = {
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
  [sym__blank] = {
    .visible = false,
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 19,
  [25] = 16,
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
  [37] = 30,
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
  [69] = 67,
  [70] = 64,
  [71] = 62,
  [72] = 60,
  [73] = 61,
  [74] = 66,
  [75] = 65,
  [76] = 63,
  [77] = 64,
  [78] = 67,
  [79] = 62,
  [80] = 66,
  [81] = 65,
  [82] = 61,
  [83] = 60,
  [84] = 63,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 88,
  [90] = 90,
  [91] = 90,
  [92] = 90,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 94,
  [105] = 105,
  [106] = 106,
  [107] = 93,
  [108] = 102,
  [109] = 103,
  [110] = 110,
  [111] = 105,
  [112] = 106,
  [113] = 93,
  [114] = 102,
  [115] = 103,
  [116] = 94,
  [117] = 105,
  [118] = 106,
  [119] = 119,
  [120] = 95,
  [121] = 110,
  [122] = 97,
  [123] = 98,
  [124] = 124,
  [125] = 95,
  [126] = 110,
  [127] = 97,
  [128] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == '`') ADVANCE(160);
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(156);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '~') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '`') ADVANCE(158);
      if (lookahead == 'h') ADVANCE(43);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '~') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(55);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '`') ADVANCE(160);
      if (lookahead == '|') ADVANCE(156);
      if (lookahead == '}') ADVANCE(164);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(163);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(139);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(159);
      END_STATE();
    case 22:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 23:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 24:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(55);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(55);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '~') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(55);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_help_file_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t') ADVANCE(16);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '|') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '|') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '|') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(45);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(53);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(141);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(45);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(50);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(51);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '|') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '|') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '|') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(97);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_token3);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_token3);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_token4);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_token4);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_token6);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (lookahead == 't') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(108);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_token7);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_token7);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_token8);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_token8);
      if (lookahead == '|') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_token9);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_token9);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t') ADVANCE(16);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(99);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(53);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(141);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 's') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 'p') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 't') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(108);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '|') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '|') ADVANCE(122);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '|') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(99);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '}') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(123);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 22},
  [66] = {.lex_state = 22},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 24},
  [79] = {.lex_state = 24},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 17},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 21},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 18},
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
    [aux_sym_word_token9] = ACTIONS(1),
    [aux_sym_uppercase_name_token1] = ACTIONS(1),
    [aux_sym_uppercase_name_token2] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_codeblock_token1] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_column_heading_token1] = ACTIONS(1),
    [aux_sym_h1_token1] = ACTIONS(1),
    [aux_sym_h2_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [sym_url_word] = ACTIONS(1),
    [aux_sym_optionlink_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(99),
    [sym__atom] = STATE(13),
    [sym_word] = STATE(13),
    [sym_uppercase_name] = STATE(85),
    [sym_block] = STATE(3),
    [sym_block_end] = STATE(100),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(5),
    [sym_line_noeol] = STATE(101),
    [sym_line_li] = STATE(5),
    [sym_line_li_noeol] = STATE(101),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(13),
    [sym_url] = STATE(13),
    [sym_optionlink] = STATE(13),
    [sym_taglink] = STATE(13),
    [sym_codespan] = STATE(13),
    [sym_argument] = STATE(13),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(5),
    [aux_sym_line_repeat1] = STATE(13),
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
    [sym__atom] = STATE(13),
    [sym_word] = STATE(13),
    [sym_uppercase_name] = STATE(85),
    [sym_block] = STATE(4),
    [sym_block_end] = STATE(119),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(5),
    [sym_line_noeol] = STATE(101),
    [sym_line_li] = STATE(5),
    [sym_line_li_noeol] = STATE(101),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(13),
    [sym_url] = STATE(13),
    [sym_optionlink] = STATE(13),
    [sym_taglink] = STATE(13),
    [sym_codespan] = STATE(13),
    [sym_argument] = STATE(13),
    [aux_sym_help_file_repeat1] = STATE(42),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(5),
    [aux_sym_line_repeat1] = STATE(13),
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
    [sym__atom] = STATE(13),
    [sym_word] = STATE(13),
    [sym_uppercase_name] = STATE(85),
    [sym_block] = STATE(6),
    [sym_block_end] = STATE(119),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(5),
    [sym_line_noeol] = STATE(101),
    [sym_line_li] = STATE(5),
    [sym_line_li_noeol] = STATE(101),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(13),
    [sym_url] = STATE(13),
    [sym_optionlink] = STATE(13),
    [sym_taglink] = STATE(13),
    [sym_codespan] = STATE(13),
    [sym_argument] = STATE(13),
    [aux_sym_help_file_repeat2] = STATE(6),
    [aux_sym_block_repeat1] = STATE(5),
    [aux_sym_line_repeat1] = STATE(13),
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
    [sym__atom] = STATE(13),
    [sym_word] = STATE(13),
    [sym_uppercase_name] = STATE(85),
    [sym_block] = STATE(6),
    [sym_block_end] = STATE(96),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(5),
    [sym_line_noeol] = STATE(101),
    [sym_line_li] = STATE(5),
    [sym_line_li_noeol] = STATE(101),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(13),
    [sym_url] = STATE(13),
    [sym_optionlink] = STATE(13),
    [sym_taglink] = STATE(13),
    [sym_codespan] = STATE(13),
    [sym_argument] = STATE(13),
    [aux_sym_help_file_repeat2] = STATE(6),
    [aux_sym_block_repeat1] = STATE(5),
    [aux_sym_line_repeat1] = STATE(13),
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
    [sym__atom] = STATE(13),
    [sym_word] = STATE(13),
    [sym_uppercase_name] = STATE(85),
    [sym_codeblock] = STATE(48),
    [sym__blank] = STATE(31),
    [sym_line] = STATE(8),
    [sym_line_noeol] = STATE(124),
    [sym_line_li] = STATE(8),
    [sym_line_li_noeol] = STATE(124),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(13),
    [sym_url] = STATE(13),
    [sym_optionlink] = STATE(13),
    [sym_taglink] = STATE(13),
    [sym_codespan] = STATE(13),
    [sym_argument] = STATE(13),
    [aux_sym_block_repeat1] = STATE(8),
    [aux_sym_line_repeat1] = STATE(13),
    [aux_sym_help_file_token1] = ACTIONS(39),
    [aux_sym_word_token1] = ACTIONS(7),
    [aux_sym_word_token2] = ACTIONS(7),
    [aux_sym_word_token3] = ACTIONS(9),
    [aux_sym_word_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_word_token7] = ACTIONS(9),
    [aux_sym_word_token8] = ACTIONS(7),
    [aux_sym_word_token9] = ACTIONS(9),
    [aux_sym_uppercase_name_token1] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(41),
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
  [6] = {
    [sym__atom] = STATE(17),
    [sym_word] = STATE(17),
    [sym_uppercase_name] = STATE(85),
    [sym_block] = STATE(6),
    [sym_codeblock] = STATE(51),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(7),
    [sym_column_heading] = STATE(51),
    [sym_h1] = STATE(51),
    [sym_h2] = STATE(51),
    [sym_h3] = STATE(51),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_help_file_repeat2] = STATE(6),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_line_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_token1] = ACTIONS(45),
    [aux_sym_word_token2] = ACTIONS(45),
    [aux_sym_word_token3] = ACTIONS(48),
    [aux_sym_word_token4] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_word_token7] = ACTIONS(48),
    [aux_sym_word_token8] = ACTIONS(45),
    [aux_sym_word_token9] = ACTIONS(48),
    [aux_sym_uppercase_name_token1] = ACTIONS(54),
    [aux_sym_codeblock_token1] = ACTIONS(57),
    [aux_sym_line_li_token1] = ACTIONS(60),
    [aux_sym_h1_token1] = ACTIONS(63),
    [aux_sym_h2_token1] = ACTIONS(66),
    [anon_sym_STAR] = ACTIONS(69),
    [sym_url_word] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(81),
  },
  [7] = {
    [sym__atom] = STATE(17),
    [sym_word] = STATE(17),
    [sym_uppercase_name] = STATE(85),
    [sym_codeblock] = STATE(51),
    [sym__blank] = STATE(31),
    [sym_line] = STATE(8),
    [sym_line_li] = STATE(8),
    [sym_column_heading] = STATE(51),
    [sym_h1] = STATE(51),
    [sym_h2] = STATE(51),
    [sym_h3] = STATE(51),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_block_repeat1] = STATE(8),
    [aux_sym_line_repeat1] = STATE(17),
    [aux_sym_help_file_token1] = ACTIONS(39),
    [aux_sym_word_token1] = ACTIONS(7),
    [aux_sym_word_token2] = ACTIONS(7),
    [aux_sym_word_token3] = ACTIONS(9),
    [aux_sym_word_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_word_token7] = ACTIONS(9),
    [aux_sym_word_token8] = ACTIONS(7),
    [aux_sym_word_token9] = ACTIONS(9),
    [aux_sym_uppercase_name_token1] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(41),
    [aux_sym_codeblock_token1] = ACTIONS(86),
    [aux_sym_line_li_token1] = ACTIONS(88),
    [aux_sym_h1_token1] = ACTIONS(19),
    [aux_sym_h2_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [sym_url_word] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [8] = {
    [sym__atom] = STATE(17),
    [sym_word] = STATE(17),
    [sym_uppercase_name] = STATE(85),
    [sym_codeblock] = STATE(51),
    [sym_line] = STATE(8),
    [sym_line_li] = STATE(8),
    [sym_column_heading] = STATE(51),
    [sym_h1] = STATE(51),
    [sym_h2] = STATE(51),
    [sym_h3] = STATE(51),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_block_repeat1] = STATE(8),
    [aux_sym_line_repeat1] = STATE(17),
    [aux_sym_help_file_token1] = ACTIONS(90),
    [aux_sym_word_token1] = ACTIONS(92),
    [aux_sym_word_token2] = ACTIONS(92),
    [aux_sym_word_token3] = ACTIONS(95),
    [aux_sym_word_token4] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [aux_sym_word_token7] = ACTIONS(95),
    [aux_sym_word_token8] = ACTIONS(92),
    [aux_sym_word_token9] = ACTIONS(95),
    [aux_sym_uppercase_name_token1] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(90),
    [aux_sym_codeblock_token1] = ACTIONS(104),
    [aux_sym_line_li_token1] = ACTIONS(107),
    [aux_sym_h1_token1] = ACTIONS(110),
    [aux_sym_h2_token1] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(116),
    [sym_url_word] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(128),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(141), 1,
      sym_url_word,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      aux_sym_uppercase_name_repeat1,
    STATE(41), 1,
      sym_codeblock,
    ACTIONS(131), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(139), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
    ACTIONS(133), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(15), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [55] = 13,
    ACTIONS(86), 1,
      aux_sym_codeblock_token1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(141), 1,
      sym_url_word,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_uppercase_name_repeat1,
    STATE(58), 1,
      sym_codeblock,
    ACTIONS(131), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(139), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
    ACTIONS(133), 4,
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
  [110] = 13,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(141), 1,
      sym_url_word,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_codeblock,
    STATE(59), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(131), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(149), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
    ACTIONS(133), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(14), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [165] = 13,
    ACTIONS(86), 1,
      aux_sym_codeblock_token1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      aux_sym_uppercase_name_token2,
    ACTIONS(141), 1,
      sym_url_word,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_codeblock,
    STATE(59), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(131), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(149), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
    ACTIONS(133), 4,
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
  [220] = 14,
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
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      aux_sym_column_heading_token1,
    ACTIONS(157), 1,
      anon_sym_STAR,
    STATE(44), 1,
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
    STATE(16), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [276] = 13,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      sym_url_word,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      anon_sym_STAR,
    STATE(46), 1,
      sym_codeblock,
    ACTIONS(131), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(133), 4,
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
  [329] = 13,
    ACTIONS(15), 1,
      aux_sym_codeblock_token1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      sym_url_word,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym_codeblock,
    ACTIONS(131), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(133), 4,
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
  [382] = 10,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_STAR,
    ACTIONS(183), 1,
      sym_url_word,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(189), 1,
      anon_sym_BQUOTE,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(174), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(16), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [429] = 13,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym_url_word,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      aux_sym_codeblock_token1,
    ACTIONS(155), 1,
      aux_sym_column_heading_token1,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(195), 1,
      anon_sym_LF,
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
    STATE(16), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [482] = 10,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_STAR,
    ACTIONS(209), 1,
      sym_url_word,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_BQUOTE,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(197), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(200), 4,
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
  [528] = 5,
    ACTIONS(225), 1,
      anon_sym_LF,
    ACTIONS(228), 1,
      aux_sym_line_code_token1,
    STATE(19), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(223), 15,
      aux_sym_help_file_token1,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
      aux_sym_word_token4,
      anon_sym_SQUOTE,
      aux_sym_word_token7,
      aux_sym_word_token8,
      aux_sym_word_token9,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [564] = 12,
    ACTIONS(86), 1,
      aux_sym_codeblock_token1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      sym_url_word,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(231), 1,
      anon_sym_LF,
    STATE(55), 1,
      sym_codeblock,
    ACTIONS(131), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(133), 4,
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
  [614] = 12,
    ACTIONS(86), 1,
      aux_sym_codeblock_token1,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      sym_url_word,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_BQUOTE,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym_codeblock,
    ACTIONS(131), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(133), 4,
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
  [664] = 5,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      aux_sym_line_code_token1,
    STATE(19), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(235), 6,
      ts_builtin_sym_end,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(237), 15,
      aux_sym_help_file_token1,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
      aux_sym_word_token4,
      anon_sym_SQUOTE,
      aux_sym_word_token7,
      aux_sym_word_token8,
      aux_sym_word_token9,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [700] = 5,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(245), 1,
      aux_sym_line_code_token1,
    STATE(24), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(235), 5,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(237), 15,
      aux_sym_help_file_token1,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
      aux_sym_word_token4,
      anon_sym_SQUOTE,
      aux_sym_word_token7,
      aux_sym_word_token8,
      aux_sym_word_token9,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [735] = 5,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(250), 1,
      aux_sym_line_code_token1,
    STATE(24), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(221), 5,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(223), 15,
      aux_sym_help_file_token1,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
      aux_sym_word_token4,
      anon_sym_SQUOTE,
      aux_sym_word_token7,
      aux_sym_word_token8,
      aux_sym_word_token9,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [770] = 10,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(265), 1,
      sym_url_word,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_BQUOTE,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(253), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(256), 4,
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
  [815] = 11,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(287), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(281), 4,
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
  [862] = 10,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(287), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(281), 4,
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
  [906] = 10,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_LF,
    ACTIONS(279), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(281), 4,
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
  [950] = 10,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LF,
    ACTIONS(279), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(281), 4,
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
  [994] = 2,
    ACTIONS(301), 7,
      ts_builtin_sym_end,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(303), 16,
      aux_sym_help_file_token1,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
      aux_sym_word_token4,
      anon_sym_SQUOTE,
      aux_sym_word_token7,
      aux_sym_word_token8,
      aux_sym_word_token9,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1022] = 4,
    ACTIONS(39), 1,
      aux_sym_help_file_token1,
    STATE(35), 2,
      sym__blank,
      aux_sym_block_repeat2,
    ACTIONS(307), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(305), 12,
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
  [1053] = 9,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(281), 4,
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
  [1094] = 9,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(281), 4,
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
  [1135] = 9,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(281), 4,
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
  [1176] = 4,
    ACTIONS(39), 1,
      aux_sym_help_file_token1,
    STATE(38), 2,
      sym__blank,
      aux_sym_block_repeat2,
    ACTIONS(311), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(309), 12,
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
  [1207] = 9,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_BQUOTE,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(281), 4,
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
  [1248] = 2,
    ACTIONS(301), 6,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(303), 16,
      aux_sym_help_file_token1,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
      aux_sym_word_token4,
      anon_sym_SQUOTE,
      aux_sym_word_token7,
      aux_sym_word_token8,
      aux_sym_word_token9,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1275] = 4,
    ACTIONS(315), 1,
      aux_sym_help_file_token1,
    STATE(38), 2,
      sym__blank,
      aux_sym_block_repeat2,
    ACTIONS(318), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(313), 12,
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
  [1306] = 2,
    ACTIONS(322), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(320), 14,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1332] = 2,
    ACTIONS(326), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(324), 14,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1358] = 3,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(328), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1386] = 4,
    ACTIONS(334), 1,
      aux_sym_help_file_token1,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    ACTIONS(337), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(332), 12,
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
  [1416] = 2,
    ACTIONS(341), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(339), 14,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1442] = 3,
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
    ACTIONS(345), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1470] = 3,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(349), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1498] = 3,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(355), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1526] = 3,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(361), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1554] = 3,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(365), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1582] = 2,
    ACTIONS(371), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(369), 14,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1608] = 2,
    ACTIONS(375), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(373), 14,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1634] = 2,
    ACTIONS(367), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(365), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1659] = 2,
    ACTIONS(347), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(345), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1684] = 2,
    ACTIONS(379), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(377), 13,
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
  [1709] = 2,
    ACTIONS(351), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(349), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1734] = 2,
    ACTIONS(363), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(361), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1759] = 2,
    ACTIONS(357), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(355), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1784] = 2,
    ACTIONS(383), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(381), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1809] = 2,
    ACTIONS(330), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(328), 13,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1834] = 4,
    ACTIONS(389), 1,
      aux_sym_uppercase_name_token2,
    STATE(59), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(385), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(387), 10,
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
  [1861] = 2,
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
  [1883] = 2,
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
  [1905] = 2,
    ACTIONS(402), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(400), 11,
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
  [1927] = 2,
    ACTIONS(406), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(404), 11,
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
  [1949] = 2,
    ACTIONS(410), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(408), 11,
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
  [1971] = 2,
    ACTIONS(414), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(412), 11,
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
  [1993] = 2,
    ACTIONS(418), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(416), 11,
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
  [2015] = 2,
    ACTIONS(422), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(420), 11,
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
  [2037] = 2,
    ACTIONS(424), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(426), 11,
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
  [2059] = 2,
    ACTIONS(422), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(420), 10,
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
  [2080] = 2,
    ACTIONS(410), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(408), 10,
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
  [2101] = 2,
    ACTIONS(402), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(400), 10,
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
  [2122] = 2,
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
  [2143] = 2,
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
  [2164] = 2,
    ACTIONS(418), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(416), 10,
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
  [2185] = 2,
    ACTIONS(414), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(412), 10,
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
  [2206] = 2,
    ACTIONS(406), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(404), 10,
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
  [2227] = 2,
    ACTIONS(410), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(408), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2247] = 2,
    ACTIONS(422), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(420), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2267] = 2,
    ACTIONS(402), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(400), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2287] = 2,
    ACTIONS(418), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(416), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2307] = 2,
    ACTIONS(414), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(412), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2327] = 2,
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
  [2347] = 2,
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
  [2367] = 2,
    ACTIONS(406), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(404), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2387] = 4,
    ACTIONS(155), 1,
      aux_sym_column_heading_token1,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(428), 1,
      anon_sym_LF,
    STATE(87), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [2401] = 3,
    ACTIONS(430), 1,
      anon_sym_LF,
    ACTIONS(432), 1,
      anon_sym_STAR,
    STATE(86), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [2412] = 3,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(435), 1,
      anon_sym_LF,
    STATE(86), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [2423] = 3,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(245), 1,
      aux_sym_line_code_token1,
    STATE(23), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [2434] = 3,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      aux_sym_line_code_token1,
    STATE(22), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [2445] = 3,
    ACTIONS(437), 1,
      aux_sym_word_token5,
    ACTIONS(439), 1,
      aux_sym_word_token6,
    ACTIONS(441), 1,
      aux_sym_optionlink_token1,
  [2455] = 3,
    ACTIONS(443), 1,
      aux_sym_word_token5,
    ACTIONS(445), 1,
      aux_sym_word_token6,
    ACTIONS(447), 1,
      aux_sym_optionlink_token1,
  [2465] = 3,
    ACTIONS(449), 1,
      aux_sym_word_token5,
    ACTIONS(451), 1,
      aux_sym_word_token6,
    ACTIONS(453), 1,
      aux_sym_optionlink_token1,
  [2475] = 1,
    ACTIONS(455), 1,
      anon_sym_SQUOTE2,
  [2479] = 1,
    ACTIONS(457), 1,
      anon_sym_PIPE2,
  [2483] = 1,
    ACTIONS(459), 1,
      aux_sym_tag_token1,
  [2487] = 1,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
  [2491] = 1,
    ACTIONS(463), 1,
      aux_sym_codespan_token1,
  [2495] = 1,
    ACTIONS(465), 1,
      aux_sym_argument_token1,
  [2499] = 1,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
  [2503] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [2507] = 1,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
  [2511] = 1,
    ACTIONS(471), 1,
      anon_sym_SQUOTE2,
  [2515] = 1,
    ACTIONS(473), 1,
      anon_sym_STAR2,
  [2519] = 1,
    ACTIONS(475), 1,
      anon_sym_PIPE2,
  [2523] = 1,
    ACTIONS(477), 1,
      anon_sym_BQUOTE2,
  [2527] = 1,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
  [2531] = 1,
    ACTIONS(481), 1,
      anon_sym_SQUOTE2,
  [2535] = 1,
    ACTIONS(483), 1,
      anon_sym_SQUOTE2,
  [2539] = 1,
    ACTIONS(485), 1,
      anon_sym_STAR2,
  [2543] = 1,
    ACTIONS(487), 1,
      aux_sym_taglink_token1,
  [2547] = 1,
    ACTIONS(489), 1,
      anon_sym_BQUOTE2,
  [2551] = 1,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [2555] = 1,
    ACTIONS(493), 1,
      anon_sym_SQUOTE2,
  [2559] = 1,
    ACTIONS(495), 1,
      anon_sym_SQUOTE2,
  [2563] = 1,
    ACTIONS(497), 1,
      anon_sym_STAR2,
  [2567] = 1,
    ACTIONS(499), 1,
      anon_sym_PIPE2,
  [2571] = 1,
    ACTIONS(501), 1,
      anon_sym_BQUOTE2,
  [2575] = 1,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
  [2579] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [2583] = 1,
    ACTIONS(505), 1,
      aux_sym_tag_token1,
  [2587] = 1,
    ACTIONS(507), 1,
      aux_sym_taglink_token1,
  [2591] = 1,
    ACTIONS(509), 1,
      aux_sym_codespan_token1,
  [2595] = 1,
    ACTIONS(511), 1,
      aux_sym_argument_token1,
  [2599] = 1,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
  [2603] = 1,
    ACTIONS(515), 1,
      aux_sym_tag_token1,
  [2607] = 1,
    ACTIONS(517), 1,
      aux_sym_taglink_token1,
  [2611] = 1,
    ACTIONS(519), 1,
      aux_sym_codespan_token1,
  [2615] = 1,
    ACTIONS(521), 1,
      aux_sym_argument_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 55,
  [SMALL_STATE(11)] = 110,
  [SMALL_STATE(12)] = 165,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 276,
  [SMALL_STATE(15)] = 329,
  [SMALL_STATE(16)] = 382,
  [SMALL_STATE(17)] = 429,
  [SMALL_STATE(18)] = 482,
  [SMALL_STATE(19)] = 528,
  [SMALL_STATE(20)] = 564,
  [SMALL_STATE(21)] = 614,
  [SMALL_STATE(22)] = 664,
  [SMALL_STATE(23)] = 700,
  [SMALL_STATE(24)] = 735,
  [SMALL_STATE(25)] = 770,
  [SMALL_STATE(26)] = 815,
  [SMALL_STATE(27)] = 862,
  [SMALL_STATE(28)] = 906,
  [SMALL_STATE(29)] = 950,
  [SMALL_STATE(30)] = 994,
  [SMALL_STATE(31)] = 1022,
  [SMALL_STATE(32)] = 1053,
  [SMALL_STATE(33)] = 1094,
  [SMALL_STATE(34)] = 1135,
  [SMALL_STATE(35)] = 1176,
  [SMALL_STATE(36)] = 1207,
  [SMALL_STATE(37)] = 1248,
  [SMALL_STATE(38)] = 1275,
  [SMALL_STATE(39)] = 1306,
  [SMALL_STATE(40)] = 1332,
  [SMALL_STATE(41)] = 1358,
  [SMALL_STATE(42)] = 1386,
  [SMALL_STATE(43)] = 1416,
  [SMALL_STATE(44)] = 1442,
  [SMALL_STATE(45)] = 1470,
  [SMALL_STATE(46)] = 1498,
  [SMALL_STATE(47)] = 1526,
  [SMALL_STATE(48)] = 1554,
  [SMALL_STATE(49)] = 1582,
  [SMALL_STATE(50)] = 1608,
  [SMALL_STATE(51)] = 1634,
  [SMALL_STATE(52)] = 1659,
  [SMALL_STATE(53)] = 1684,
  [SMALL_STATE(54)] = 1709,
  [SMALL_STATE(55)] = 1734,
  [SMALL_STATE(56)] = 1759,
  [SMALL_STATE(57)] = 1784,
  [SMALL_STATE(58)] = 1809,
  [SMALL_STATE(59)] = 1834,
  [SMALL_STATE(60)] = 1861,
  [SMALL_STATE(61)] = 1883,
  [SMALL_STATE(62)] = 1905,
  [SMALL_STATE(63)] = 1927,
  [SMALL_STATE(64)] = 1949,
  [SMALL_STATE(65)] = 1971,
  [SMALL_STATE(66)] = 1993,
  [SMALL_STATE(67)] = 2015,
  [SMALL_STATE(68)] = 2037,
  [SMALL_STATE(69)] = 2059,
  [SMALL_STATE(70)] = 2080,
  [SMALL_STATE(71)] = 2101,
  [SMALL_STATE(72)] = 2122,
  [SMALL_STATE(73)] = 2143,
  [SMALL_STATE(74)] = 2164,
  [SMALL_STATE(75)] = 2185,
  [SMALL_STATE(76)] = 2206,
  [SMALL_STATE(77)] = 2227,
  [SMALL_STATE(78)] = 2247,
  [SMALL_STATE(79)] = 2267,
  [SMALL_STATE(80)] = 2287,
  [SMALL_STATE(81)] = 2307,
  [SMALL_STATE(82)] = 2327,
  [SMALL_STATE(83)] = 2347,
  [SMALL_STATE(84)] = 2367,
  [SMALL_STATE(85)] = 2387,
  [SMALL_STATE(86)] = 2401,
  [SMALL_STATE(87)] = 2412,
  [SMALL_STATE(88)] = 2423,
  [SMALL_STATE(89)] = 2434,
  [SMALL_STATE(90)] = 2445,
  [SMALL_STATE(91)] = 2455,
  [SMALL_STATE(92)] = 2465,
  [SMALL_STATE(93)] = 2475,
  [SMALL_STATE(94)] = 2479,
  [SMALL_STATE(95)] = 2483,
  [SMALL_STATE(96)] = 2487,
  [SMALL_STATE(97)] = 2491,
  [SMALL_STATE(98)] = 2495,
  [SMALL_STATE(99)] = 2499,
  [SMALL_STATE(100)] = 2503,
  [SMALL_STATE(101)] = 2507,
  [SMALL_STATE(102)] = 2511,
  [SMALL_STATE(103)] = 2515,
  [SMALL_STATE(104)] = 2519,
  [SMALL_STATE(105)] = 2523,
  [SMALL_STATE(106)] = 2527,
  [SMALL_STATE(107)] = 2531,
  [SMALL_STATE(108)] = 2535,
  [SMALL_STATE(109)] = 2539,
  [SMALL_STATE(110)] = 2543,
  [SMALL_STATE(111)] = 2547,
  [SMALL_STATE(112)] = 2551,
  [SMALL_STATE(113)] = 2555,
  [SMALL_STATE(114)] = 2559,
  [SMALL_STATE(115)] = 2563,
  [SMALL_STATE(116)] = 2567,
  [SMALL_STATE(117)] = 2571,
  [SMALL_STATE(118)] = 2575,
  [SMALL_STATE(119)] = 2579,
  [SMALL_STATE(120)] = 2583,
  [SMALL_STATE(121)] = 2587,
  [SMALL_STATE(122)] = 2591,
  [SMALL_STATE(123)] = 2595,
  [SMALL_STATE(124)] = 2599,
  [SMALL_STATE(125)] = 2603,
  [SMALL_STATE(126)] = 2607,
  [SMALL_STATE(127)] = 2611,
  [SMALL_STATE(128)] = 2615,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(65),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(65),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(90),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(10),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(32),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(34),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(36),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(95),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(110),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(97),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(98),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(95),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(97),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(98),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 3, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 2, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(65),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(65),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(90),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(95),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(66),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(110),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(97),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(98),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(75),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(75),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(91),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(120),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(74),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(121),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(122),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(123),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(30),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(30),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(37),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(37),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(81),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(81),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(92),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(125),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(80),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(126),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(127),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(128),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li_noeol, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(53),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2, .production_id = 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2, .production_id = 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(42),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3, .production_id = 6),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3, .production_id = 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 4, .production_id = 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4, .production_id = 6),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 4, .production_id = 6),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 3, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(68),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 5),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 5),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 5),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 5),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 5),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2), SHIFT_REPEAT(95),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [467] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
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
