#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

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
  aux_sym_codeblock_token1 = 13,
  aux_sym_codeblock_token2 = 14,
  anon_sym_LF = 15,
  aux_sym_line_li_token1 = 16,
  aux_sym_line_code_token1 = 17,
  aux_sym_line_code_token2 = 18,
  aux_sym_column_heading_token1 = 19,
  aux_sym_h1_token1 = 20,
  aux_sym_h2_token1 = 21,
  aux_sym_uppercase_name_token1 = 22,
  aux_sym_uppercase_name_token2 = 23,
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
  sym_block = 41,
  sym_block_end = 42,
  sym_codeblock = 43,
  sym_line = 44,
  sym_line_noeol = 45,
  sym_line_li = 46,
  sym_line_li_noeol = 47,
  sym_line_code = 48,
  sym_column_heading = 49,
  sym_h1 = 50,
  sym_h2 = 51,
  sym_uppercase_name = 52,
  sym_h3 = 53,
  sym_tag = 54,
  sym_url = 55,
  sym_optionlink = 56,
  sym_taglink = 57,
  sym_codespan = 58,
  sym_argument = 59,
  aux_sym_help_file_repeat1 = 60,
  aux_sym_help_file_repeat2 = 61,
  aux_sym_block_repeat1 = 62,
  aux_sym_block_repeat2 = 63,
  aux_sym_codeblock_repeat1 = 64,
  aux_sym_line_repeat1 = 65,
  aux_sym_uppercase_name_repeat1 = 66,
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
  [aux_sym_codeblock_token1] = "codeblock_token1",
  [aux_sym_codeblock_token2] = "codeblock_token2",
  [anon_sym_LF] = "\n",
  [aux_sym_line_li_token1] = "line_li_token1",
  [aux_sym_line_code_token1] = "line_code_token1",
  [aux_sym_line_code_token2] = "line_code_token2",
  [aux_sym_column_heading_token1] = "column_heading_token1",
  [aux_sym_h1_token1] = "h1_token1",
  [aux_sym_h2_token1] = "h2_token1",
  [aux_sym_uppercase_name_token1] = "uppercase_name_token1",
  [aux_sym_uppercase_name_token2] = "uppercase_name_token2",
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
  [sym_uppercase_name] = "uppercase_name",
  [sym_h3] = "h3",
  [sym_tag] = "tag",
  [sym_url] = "url",
  [sym_optionlink] = "optionlink",
  [sym_taglink] = "taglink",
  [sym_codespan] = "codespan",
  [sym_argument] = "argument",
  [aux_sym_help_file_repeat1] = "help_file_repeat1",
  [aux_sym_help_file_repeat2] = "help_file_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
  [aux_sym_codeblock_repeat1] = "codeblock_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym_uppercase_name_repeat1] = "uppercase_name_repeat1",
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
  [aux_sym_codeblock_token1] = aux_sym_codeblock_token1,
  [aux_sym_codeblock_token2] = aux_sym_codeblock_token2,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_line_li_token1] = aux_sym_line_li_token1,
  [aux_sym_line_code_token1] = aux_sym_line_code_token1,
  [aux_sym_line_code_token2] = aux_sym_line_code_token2,
  [aux_sym_column_heading_token1] = aux_sym_column_heading_token1,
  [aux_sym_h1_token1] = aux_sym_h1_token1,
  [aux_sym_h2_token1] = aux_sym_h2_token1,
  [aux_sym_uppercase_name_token1] = aux_sym_uppercase_name_token1,
  [aux_sym_uppercase_name_token2] = aux_sym_uppercase_name_token2,
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
  [sym_uppercase_name] = sym_uppercase_name,
  [sym_h3] = sym_h3,
  [sym_tag] = sym_tag,
  [sym_url] = sym_url,
  [sym_optionlink] = sym_optionlink,
  [sym_taglink] = sym_taglink,
  [sym_codespan] = sym_codespan,
  [sym_argument] = sym_argument,
  [aux_sym_help_file_repeat1] = aux_sym_help_file_repeat1,
  [aux_sym_help_file_repeat2] = aux_sym_help_file_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
  [aux_sym_codeblock_repeat1] = aux_sym_codeblock_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [aux_sym_uppercase_name_repeat1] = aux_sym_uppercase_name_repeat1,
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
  [aux_sym_uppercase_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uppercase_name_token2] = {
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
  [sym_uppercase_name] = {
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
  [aux_sym_uppercase_name_repeat1] = {
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
  field_delimiter = 2,
  field_name = 3,
  field_text = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blank] = "blank",
  [field_delimiter] = "delimiter",
  [field_name] = "name",
  [field_text] = "text",
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
    {field_text, 0},
  [1] =
    {field_name, 0},
  [2] =
    {field_blank, 0},
  [3] =
    {field_text, 1},
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
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
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
  [48] = 44,
  [49] = 46,
  [50] = 38,
  [51] = 45,
  [52] = 37,
  [53] = 42,
  [54] = 41,
  [55] = 40,
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
  [67] = 66,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 74,
  [87] = 72,
  [88] = 77,
  [89] = 73,
  [90] = 85,
  [91] = 84,
  [92] = 92,
  [93] = 71,
  [94] = 92,
  [95] = 78,
  [96] = 79,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '|') ADVANCE(112);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '~') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '`') ADVANCE(115);
      if (lookahead == '|') ADVANCE(112);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '~') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(32);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(32);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 18:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(114);
      END_STATE();
    case 22:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '~') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 23:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(32);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '`') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(32);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_help_file_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
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
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(73);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(105);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
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
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
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
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '~') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token3);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token4);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token6);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(80);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token7);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token8);
      if (lookahead == '|') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token9);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_codeblock_token2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_codeblock_token2);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_line_code_token2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '{' ||
          lookahead == '~') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(80);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '|') ADVANCE(86);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(87);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 22},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 21},
  [96] = {.lex_state = 19},
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
    [sym_help_file] = STATE(70),
    [sym__atom] = STATE(9),
    [sym_word] = STATE(9),
    [sym_block] = STATE(3),
    [sym_block_end] = STATE(75),
    [sym_codeblock] = STATE(34),
    [sym_line] = STATE(6),
    [sym_line_noeol] = STATE(76),
    [sym_line_li] = STATE(6),
    [sym_line_li_noeol] = STATE(76),
    [sym_column_heading] = STATE(34),
    [sym_h1] = STATE(3),
    [sym_h2] = STATE(3),
    [sym_uppercase_name] = STATE(56),
    [sym_h3] = STATE(3),
    [sym_tag] = STATE(9),
    [sym_url] = STATE(9),
    [sym_optionlink] = STATE(9),
    [sym_taglink] = STATE(9),
    [sym_codespan] = STATE(9),
    [sym_argument] = STATE(9),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_line_repeat1] = STATE(9),
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
    [aux_sym_codeblock_token1] = ACTIONS(13),
    [aux_sym_line_li_token1] = ACTIONS(15),
    [aux_sym_h1_token1] = ACTIONS(17),
    [aux_sym_h2_token1] = ACTIONS(19),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [sym_url_word] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [2] = {
    [sym__atom] = STATE(9),
    [sym_word] = STATE(9),
    [sym_block] = STATE(4),
    [sym_block_end] = STATE(83),
    [sym_codeblock] = STATE(34),
    [sym_line] = STATE(6),
    [sym_line_noeol] = STATE(76),
    [sym_line_li] = STATE(6),
    [sym_line_li_noeol] = STATE(76),
    [sym_column_heading] = STATE(34),
    [sym_h1] = STATE(4),
    [sym_h2] = STATE(4),
    [sym_uppercase_name] = STATE(56),
    [sym_h3] = STATE(4),
    [sym_tag] = STATE(9),
    [sym_url] = STATE(9),
    [sym_optionlink] = STATE(9),
    [sym_taglink] = STATE(9),
    [sym_codespan] = STATE(9),
    [sym_argument] = STATE(9),
    [aux_sym_help_file_repeat1] = STATE(30),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_line_repeat1] = STATE(9),
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
    [aux_sym_codeblock_token1] = ACTIONS(13),
    [aux_sym_line_li_token1] = ACTIONS(15),
    [aux_sym_h1_token1] = ACTIONS(17),
    [aux_sym_h2_token1] = ACTIONS(19),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [sym_url_word] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [3] = {
    [sym__atom] = STATE(9),
    [sym_word] = STATE(9),
    [sym_block] = STATE(5),
    [sym_block_end] = STATE(83),
    [sym_codeblock] = STATE(34),
    [sym_line] = STATE(6),
    [sym_line_noeol] = STATE(76),
    [sym_line_li] = STATE(6),
    [sym_line_li_noeol] = STATE(76),
    [sym_column_heading] = STATE(34),
    [sym_h1] = STATE(5),
    [sym_h2] = STATE(5),
    [sym_uppercase_name] = STATE(56),
    [sym_h3] = STATE(5),
    [sym_tag] = STATE(9),
    [sym_url] = STATE(9),
    [sym_optionlink] = STATE(9),
    [sym_taglink] = STATE(9),
    [sym_codespan] = STATE(9),
    [sym_argument] = STATE(9),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_line_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_word_token1] = ACTIONS(7),
    [aux_sym_word_token2] = ACTIONS(7),
    [aux_sym_word_token3] = ACTIONS(9),
    [aux_sym_word_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_word_token7] = ACTIONS(9),
    [aux_sym_word_token8] = ACTIONS(7),
    [aux_sym_word_token9] = ACTIONS(9),
    [aux_sym_codeblock_token1] = ACTIONS(13),
    [aux_sym_line_li_token1] = ACTIONS(15),
    [aux_sym_h1_token1] = ACTIONS(17),
    [aux_sym_h2_token1] = ACTIONS(19),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [sym_url_word] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [4] = {
    [sym__atom] = STATE(9),
    [sym_word] = STATE(9),
    [sym_block] = STATE(5),
    [sym_block_end] = STATE(80),
    [sym_codeblock] = STATE(34),
    [sym_line] = STATE(6),
    [sym_line_noeol] = STATE(76),
    [sym_line_li] = STATE(6),
    [sym_line_li_noeol] = STATE(76),
    [sym_column_heading] = STATE(34),
    [sym_h1] = STATE(5),
    [sym_h2] = STATE(5),
    [sym_uppercase_name] = STATE(56),
    [sym_h3] = STATE(5),
    [sym_tag] = STATE(9),
    [sym_url] = STATE(9),
    [sym_optionlink] = STATE(9),
    [sym_taglink] = STATE(9),
    [sym_codespan] = STATE(9),
    [sym_argument] = STATE(9),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_line_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_word_token1] = ACTIONS(7),
    [aux_sym_word_token2] = ACTIONS(7),
    [aux_sym_word_token3] = ACTIONS(9),
    [aux_sym_word_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_word_token7] = ACTIONS(9),
    [aux_sym_word_token8] = ACTIONS(7),
    [aux_sym_word_token9] = ACTIONS(9),
    [aux_sym_codeblock_token1] = ACTIONS(13),
    [aux_sym_line_li_token1] = ACTIONS(15),
    [aux_sym_h1_token1] = ACTIONS(17),
    [aux_sym_h2_token1] = ACTIONS(19),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [sym_url_word] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
  },
  [5] = {
    [sym__atom] = STATE(10),
    [sym_word] = STATE(10),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(39),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(7),
    [sym_column_heading] = STATE(39),
    [sym_h1] = STATE(5),
    [sym_h2] = STATE(5),
    [sym_uppercase_name] = STATE(56),
    [sym_h3] = STATE(5),
    [sym_tag] = STATE(10),
    [sym_url] = STATE(10),
    [sym_optionlink] = STATE(10),
    [sym_taglink] = STATE(10),
    [sym_codespan] = STATE(10),
    [sym_argument] = STATE(10),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_line_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_word_token1] = ACTIONS(41),
    [aux_sym_word_token2] = ACTIONS(41),
    [aux_sym_word_token3] = ACTIONS(44),
    [aux_sym_word_token4] = ACTIONS(44),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [aux_sym_word_token7] = ACTIONS(44),
    [aux_sym_word_token8] = ACTIONS(41),
    [aux_sym_word_token9] = ACTIONS(44),
    [aux_sym_codeblock_token1] = ACTIONS(50),
    [aux_sym_line_li_token1] = ACTIONS(53),
    [aux_sym_h1_token1] = ACTIONS(56),
    [aux_sym_h2_token1] = ACTIONS(59),
    [aux_sym_uppercase_name_token1] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(65),
    [sym_url_word] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(77),
  },
  [6] = {
    [sym__atom] = STATE(9),
    [sym_word] = STATE(9),
    [sym_codeblock] = STATE(34),
    [sym_line] = STATE(8),
    [sym_line_noeol] = STATE(81),
    [sym_line_li] = STATE(8),
    [sym_line_li_noeol] = STATE(81),
    [sym_column_heading] = STATE(34),
    [sym_uppercase_name] = STATE(69),
    [sym_tag] = STATE(9),
    [sym_url] = STATE(9),
    [sym_optionlink] = STATE(9),
    [sym_taglink] = STATE(9),
    [sym_codespan] = STATE(9),
    [sym_argument] = STATE(9),
    [aux_sym_block_repeat1] = STATE(8),
    [aux_sym_block_repeat2] = STATE(29),
    [aux_sym_line_repeat1] = STATE(9),
    [aux_sym_help_file_token1] = ACTIONS(80),
    [aux_sym_word_token1] = ACTIONS(7),
    [aux_sym_word_token2] = ACTIONS(7),
    [aux_sym_word_token3] = ACTIONS(9),
    [aux_sym_word_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym_word_token7] = ACTIONS(9),
    [aux_sym_word_token8] = ACTIONS(7),
    [aux_sym_word_token9] = ACTIONS(9),
    [aux_sym_codeblock_token1] = ACTIONS(13),
    [aux_sym_line_li_token1] = ACTIONS(15),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
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
    ACTIONS(13), 1,
      aux_sym_codeblock_token1,
    ACTIONS(21), 1,
      aux_sym_uppercase_name_token1,
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
    ACTIONS(82), 1,
      aux_sym_line_li_token1,
    STATE(29), 1,
      aux_sym_block_repeat2,
    STATE(69), 1,
      sym_uppercase_name,
    STATE(39), 2,
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
    STATE(10), 9,
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
    ACTIONS(84), 1,
      aux_sym_help_file_token1,
    ACTIONS(92), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      aux_sym_codeblock_token1,
    ACTIONS(98), 1,
      aux_sym_line_li_token1,
    ACTIONS(101), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(104), 1,
      anon_sym_STAR,
    ACTIONS(107), 1,
      sym_url_word,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      anon_sym_BQUOTE,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_uppercase_name,
    STATE(39), 2,
      sym_codeblock,
      sym_column_heading,
    ACTIONS(86), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    STATE(8), 3,
      sym_line,
      sym_line_li,
      aux_sym_block_repeat1,
    ACTIONS(89), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(10), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [133] = 14,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      aux_sym_codeblock_token1,
    ACTIONS(25), 1,
      sym_url_word,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      aux_sym_column_heading_token1,
    ACTIONS(125), 1,
      anon_sym_STAR,
    STATE(36), 1,
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
    STATE(11), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [189] = 13,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      aux_sym_codeblock_token1,
    ACTIONS(25), 1,
      sym_url_word,
    ACTIONS(27), 1,
      anon_sym_PIPE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      aux_sym_column_heading_token1,
    ACTIONS(125), 1,
      anon_sym_STAR,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(47), 1,
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
    STATE(11), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [242] = 10,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_STAR,
    ACTIONS(143), 1,
      sym_url_word,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(149), 1,
      anon_sym_BQUOTE,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(134), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(11), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [289] = 10,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(170), 1,
      anon_sym_PIPE,
    ACTIONS(173), 1,
      anon_sym_BQUOTE,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(155), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(158), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(12), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [334] = 11,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      sym_url_word,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(183), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(12), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [381] = 10,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      sym_url_word,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(199), 1,
      anon_sym_LF,
    ACTIONS(181), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(183), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(12), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [425] = 10,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      sym_url_word,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(183), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(12), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [469] = 10,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      sym_url_word,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_LF,
    ACTIONS(181), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(183), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(12), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [513] = 9,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      sym_url_word,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(183), 4,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
    STATE(13), 9,
      sym__atom,
      sym_word,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
      aux_sym_line_repeat1,
  [554] = 9,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      sym_url_word,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(183), 4,
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
  [595] = 9,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      sym_url_word,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(183), 4,
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
  [636] = 9,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      sym_url_word,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(195), 1,
      anon_sym_BQUOTE,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token8,
    ACTIONS(183), 4,
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
  [677] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(24), 1,
      aux_sym_block_repeat2,
    ACTIONS(205), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(203), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [707] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(24), 1,
      aux_sym_block_repeat2,
    ACTIONS(209), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(207), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [737] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(24), 1,
      aux_sym_block_repeat2,
    ACTIONS(213), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(211), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [767] = 4,
    ACTIONS(217), 1,
      aux_sym_help_file_token1,
    STATE(24), 1,
      aux_sym_block_repeat2,
    ACTIONS(220), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(215), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [797] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(22), 1,
      aux_sym_block_repeat2,
    ACTIONS(224), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(222), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [827] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(24), 1,
      aux_sym_block_repeat2,
    ACTIONS(224), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(222), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [857] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(23), 1,
      aux_sym_block_repeat2,
    ACTIONS(228), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(226), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [887] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(21), 1,
      aux_sym_block_repeat2,
    ACTIONS(232), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(230), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [917] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(24), 1,
      aux_sym_block_repeat2,
    ACTIONS(236), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(234), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [947] = 4,
    ACTIONS(240), 1,
      aux_sym_help_file_token1,
    STATE(30), 1,
      aux_sym_help_file_repeat1,
    ACTIONS(243), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(238), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [977] = 4,
    ACTIONS(80), 1,
      aux_sym_help_file_token1,
    STATE(26), 1,
      aux_sym_block_repeat2,
    ACTIONS(247), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(245), 12,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1007] = 2,
    ACTIONS(251), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(249), 13,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1032] = 2,
    ACTIONS(255), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(253), 11,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1055] = 3,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(257), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1080] = 2,
    ACTIONS(263), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(261), 11,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1103] = 3,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(267), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1128] = 2,
    ACTIONS(273), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(271), 11,
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
  [1150] = 2,
    ACTIONS(277), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(275), 11,
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
  [1172] = 2,
    ACTIONS(259), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(257), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1194] = 2,
    ACTIONS(281), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(279), 11,
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
  [1216] = 2,
    ACTIONS(285), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(283), 11,
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
  [1238] = 2,
    ACTIONS(289), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(287), 11,
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
  [1260] = 2,
    ACTIONS(293), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(291), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1282] = 2,
    ACTIONS(297), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(295), 11,
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
  [1304] = 2,
    ACTIONS(301), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(299), 11,
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
  [1326] = 2,
    ACTIONS(305), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(303), 11,
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
  [1348] = 2,
    ACTIONS(269), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(267), 10,
      aux_sym_help_file_token1,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_uppercase_name_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1370] = 2,
    ACTIONS(297), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(295), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1390] = 2,
    ACTIONS(305), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(303), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1410] = 2,
    ACTIONS(277), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(275), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1430] = 2,
    ACTIONS(301), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(299), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1450] = 2,
    ACTIONS(273), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(271), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1470] = 2,
    ACTIONS(289), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(287), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1490] = 2,
    ACTIONS(285), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(283), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1510] = 2,
    ACTIONS(281), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym_word_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(279), 9,
      ts_builtin_sym_end,
      aux_sym_word_token3,
      aux_sym_word_token4,
      aux_sym_word_token7,
      aux_sym_word_token9,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [1530] = 4,
    ACTIONS(123), 1,
      aux_sym_column_heading_token1,
    ACTIONS(125), 1,
      anon_sym_STAR,
    ACTIONS(307), 1,
      anon_sym_LF,
    STATE(63), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [1544] = 4,
    ACTIONS(309), 1,
      aux_sym_codeblock_token2,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(314), 1,
      aux_sym_line_code_token1,
    STATE(57), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [1558] = 3,
    ACTIONS(319), 1,
      aux_sym_uppercase_name_token2,
    STATE(60), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(317), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
  [1570] = 4,
    ACTIONS(321), 1,
      aux_sym_codeblock_token2,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 1,
      aux_sym_line_code_token1,
    STATE(57), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [1584] = 3,
    ACTIONS(329), 1,
      aux_sym_uppercase_name_token2,
    STATE(60), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(327), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
  [1596] = 3,
    ACTIONS(334), 1,
      aux_sym_uppercase_name_token2,
    STATE(58), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(332), 3,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
  [1608] = 3,
    ACTIONS(323), 1,
      anon_sym_LF,
    ACTIONS(325), 1,
      aux_sym_line_code_token1,
    STATE(59), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [1619] = 3,
    ACTIONS(125), 1,
      anon_sym_STAR,
    ACTIONS(336), 1,
      anon_sym_LF,
    STATE(64), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [1630] = 3,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(340), 1,
      anon_sym_STAR,
    STATE(64), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [1641] = 2,
    ACTIONS(345), 1,
      anon_sym_LF,
    ACTIONS(343), 2,
      aux_sym_codeblock_token2,
      aux_sym_line_code_token1,
  [1649] = 3,
    ACTIONS(347), 1,
      aux_sym_word_token5,
    ACTIONS(349), 1,
      aux_sym_word_token6,
    ACTIONS(351), 1,
      aux_sym_optionlink_token1,
  [1659] = 3,
    ACTIONS(353), 1,
      aux_sym_word_token5,
    ACTIONS(355), 1,
      aux_sym_word_token6,
    ACTIONS(357), 1,
      aux_sym_optionlink_token1,
  [1669] = 2,
    ACTIONS(361), 1,
      anon_sym_LF,
    ACTIONS(359), 2,
      aux_sym_codeblock_token2,
      aux_sym_line_code_token1,
  [1677] = 1,
    ACTIONS(123), 1,
      aux_sym_column_heading_token1,
  [1681] = 1,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
  [1685] = 1,
    ACTIONS(365), 1,
      aux_sym_tag_token1,
  [1689] = 1,
    ACTIONS(367), 1,
      anon_sym_SQUOTE2,
  [1693] = 1,
    ACTIONS(369), 1,
      anon_sym_PIPE2,
  [1697] = 1,
    ACTIONS(371), 1,
      anon_sym_SQUOTE2,
  [1701] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [1705] = 1,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
  [1709] = 1,
    ACTIONS(375), 1,
      anon_sym_STAR2,
  [1713] = 1,
    ACTIONS(377), 1,
      aux_sym_codespan_token1,
  [1717] = 1,
    ACTIONS(379), 1,
      aux_sym_argument_token1,
  [1721] = 1,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [1725] = 1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
  [1729] = 1,
    ACTIONS(385), 1,
      aux_sym_line_code_token2,
  [1733] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [1737] = 1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
  [1741] = 1,
    ACTIONS(389), 1,
      anon_sym_BQUOTE2,
  [1745] = 1,
    ACTIONS(391), 1,
      anon_sym_SQUOTE2,
  [1749] = 1,
    ACTIONS(393), 1,
      anon_sym_SQUOTE2,
  [1753] = 1,
    ACTIONS(395), 1,
      anon_sym_STAR2,
  [1757] = 1,
    ACTIONS(397), 1,
      anon_sym_PIPE2,
  [1761] = 1,
    ACTIONS(399), 1,
      anon_sym_BQUOTE2,
  [1765] = 1,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
  [1769] = 1,
    ACTIONS(403), 1,
      aux_sym_taglink_token1,
  [1773] = 1,
    ACTIONS(405), 1,
      aux_sym_tag_token1,
  [1777] = 1,
    ACTIONS(407), 1,
      aux_sym_taglink_token1,
  [1781] = 1,
    ACTIONS(409), 1,
      aux_sym_codespan_token1,
  [1785] = 1,
    ACTIONS(411), 1,
      aux_sym_argument_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 334,
  [SMALL_STATE(14)] = 381,
  [SMALL_STATE(15)] = 425,
  [SMALL_STATE(16)] = 469,
  [SMALL_STATE(17)] = 513,
  [SMALL_STATE(18)] = 554,
  [SMALL_STATE(19)] = 595,
  [SMALL_STATE(20)] = 636,
  [SMALL_STATE(21)] = 677,
  [SMALL_STATE(22)] = 707,
  [SMALL_STATE(23)] = 737,
  [SMALL_STATE(24)] = 767,
  [SMALL_STATE(25)] = 797,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 857,
  [SMALL_STATE(28)] = 887,
  [SMALL_STATE(29)] = 917,
  [SMALL_STATE(30)] = 947,
  [SMALL_STATE(31)] = 977,
  [SMALL_STATE(32)] = 1007,
  [SMALL_STATE(33)] = 1032,
  [SMALL_STATE(34)] = 1055,
  [SMALL_STATE(35)] = 1080,
  [SMALL_STATE(36)] = 1103,
  [SMALL_STATE(37)] = 1128,
  [SMALL_STATE(38)] = 1150,
  [SMALL_STATE(39)] = 1172,
  [SMALL_STATE(40)] = 1194,
  [SMALL_STATE(41)] = 1216,
  [SMALL_STATE(42)] = 1238,
  [SMALL_STATE(43)] = 1260,
  [SMALL_STATE(44)] = 1282,
  [SMALL_STATE(45)] = 1304,
  [SMALL_STATE(46)] = 1326,
  [SMALL_STATE(47)] = 1348,
  [SMALL_STATE(48)] = 1370,
  [SMALL_STATE(49)] = 1390,
  [SMALL_STATE(50)] = 1410,
  [SMALL_STATE(51)] = 1430,
  [SMALL_STATE(52)] = 1450,
  [SMALL_STATE(53)] = 1470,
  [SMALL_STATE(54)] = 1490,
  [SMALL_STATE(55)] = 1510,
  [SMALL_STATE(56)] = 1530,
  [SMALL_STATE(57)] = 1544,
  [SMALL_STATE(58)] = 1558,
  [SMALL_STATE(59)] = 1570,
  [SMALL_STATE(60)] = 1584,
  [SMALL_STATE(61)] = 1596,
  [SMALL_STATE(62)] = 1608,
  [SMALL_STATE(63)] = 1619,
  [SMALL_STATE(64)] = 1630,
  [SMALL_STATE(65)] = 1641,
  [SMALL_STATE(66)] = 1649,
  [SMALL_STATE(67)] = 1659,
  [SMALL_STATE(68)] = 1669,
  [SMALL_STATE(69)] = 1677,
  [SMALL_STATE(70)] = 1681,
  [SMALL_STATE(71)] = 1685,
  [SMALL_STATE(72)] = 1689,
  [SMALL_STATE(73)] = 1693,
  [SMALL_STATE(74)] = 1697,
  [SMALL_STATE(75)] = 1701,
  [SMALL_STATE(76)] = 1705,
  [SMALL_STATE(77)] = 1709,
  [SMALL_STATE(78)] = 1713,
  [SMALL_STATE(79)] = 1717,
  [SMALL_STATE(80)] = 1721,
  [SMALL_STATE(81)] = 1725,
  [SMALL_STATE(82)] = 1729,
  [SMALL_STATE(83)] = 1733,
  [SMALL_STATE(84)] = 1737,
  [SMALL_STATE(85)] = 1741,
  [SMALL_STATE(86)] = 1745,
  [SMALL_STATE(87)] = 1749,
  [SMALL_STATE(88)] = 1753,
  [SMALL_STATE(89)] = 1757,
  [SMALL_STATE(90)] = 1761,
  [SMALL_STATE(91)] = 1765,
  [SMALL_STATE(92)] = 1769,
  [SMALL_STATE(93)] = 1773,
  [SMALL_STATE(94)] = 1777,
  [SMALL_STATE(95)] = 1781,
  [SMALL_STATE(96)] = 1785,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(44),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(44),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(62),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(19),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(20),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(61),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(71),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(46),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(92),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(78),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(79),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(92),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(79),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(44),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(44),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(66),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(71),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(46),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(92),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(78),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(79),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(48),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(48),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(67),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(93),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(49),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(94),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(95),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(96),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li_noeol, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 4, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 4, .production_id = 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 4, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 4, .production_id = 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(32),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3, .production_id = 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3, .production_id = 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3, .production_id = 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(30),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 1, .production_id = 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 1, .production_id = 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_noeol, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(68),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(82),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(60),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2), SHIFT_REPEAT(71),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [363] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
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
