#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

enum {
  aux_sym_help_file_token1 = 1,
  aux_sym_word_token1 = 2,
  aux_sym_word_token2 = 3,
  aux_sym_word_noli_token1 = 4,
  aux_sym_word_noli_token2 = 5,
  aux_sym__word_common_token1 = 6,
  aux_sym__word_common_token2 = 7,
  anon_sym_SQUOTE = 8,
  aux_sym__word_common_token3 = 9,
  anon_sym_SQUOTE2 = 10,
  aux_sym__word_common_token4 = 11,
  aux_sym__word_common_token5 = 12,
  aux_sym__word_common_token6 = 13,
  aux_sym__word_common_token7 = 14,
  anon_sym_LPAREN = 15,
  aux_sym__word_common_token8 = 16,
  aux_sym_uppercase_name_token1 = 17,
  aux_sym_uppercase_name_token2 = 18,
  anon_sym_LT = 19,
  aux_sym_codeblock_token1 = 20,
  aux_sym_line_li_token1 = 21,
  anon_sym_LF = 22,
  aux_sym_line_code_token1 = 23,
  aux_sym_column_heading_token1 = 24,
  aux_sym_column_heading_token2 = 25,
  aux_sym_h1_token1 = 26,
  aux_sym_h2_token1 = 27,
  anon_sym_STAR = 28,
  aux_sym_tag_token1 = 29,
  anon_sym_STAR2 = 30,
  sym_url_word = 31,
  aux_sym_optionlink_token1 = 32,
  anon_sym_PIPE = 33,
  aux_sym_taglink_token1 = 34,
  anon_sym_PIPE2 = 35,
  anon_sym_BQUOTE = 36,
  aux_sym_codespan_token1 = 37,
  anon_sym_BQUOTE2 = 38,
  anon_sym_LBRACE = 39,
  aux_sym_argument_token1 = 40,
  anon_sym_RBRACE = 41,
  sym_help_file = 42,
  sym__atom = 43,
  sym_word = 44,
  sym__atom_noli = 45,
  sym_word_noli = 46,
  sym__atom_common = 47,
  sym__word_common = 48,
  sym_uppercase_name = 49,
  sym__uppercase_words = 50,
  sym_block = 51,
  sym_codeblock = 52,
  sym__blank = 53,
  sym_line = 54,
  sym_line_li = 55,
  sym_line_code = 56,
  sym__line_noli = 57,
  sym_column_heading = 58,
  sym_h1 = 59,
  sym_h2 = 60,
  sym_h3 = 61,
  sym_tag = 62,
  sym_url = 63,
  sym_optionlink = 64,
  sym_taglink = 65,
  sym_codespan = 66,
  sym_argument = 67,
  aux_sym_help_file_repeat1 = 68,
  aux_sym_help_file_repeat2 = 69,
  aux_sym_uppercase_name_repeat1 = 70,
  aux_sym_block_repeat1 = 71,
  aux_sym_block_repeat2 = 72,
  aux_sym_block_repeat3 = 73,
  aux_sym_codeblock_repeat1 = 74,
  aux_sym_line_li_repeat1 = 75,
  aux_sym_line_li_repeat2 = 76,
  aux_sym_h3_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_help_file_token1] = "help_file_token1",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_word_token2] = "word_token2",
  [aux_sym_word_noli_token1] = "word_noli_token1",
  [aux_sym_word_noli_token2] = "word_noli_token2",
  [aux_sym__word_common_token1] = "_word_common_token1",
  [aux_sym__word_common_token2] = "_word_common_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__word_common_token3] = "_word_common_token3",
  [anon_sym_SQUOTE2] = "'",
  [aux_sym__word_common_token4] = "_word_common_token4",
  [aux_sym__word_common_token5] = "_word_common_token5",
  [aux_sym__word_common_token6] = "_word_common_token6",
  [aux_sym__word_common_token7] = "_word_common_token7",
  [anon_sym_LPAREN] = "(",
  [aux_sym__word_common_token8] = "_word_common_token8",
  [aux_sym_uppercase_name_token1] = "uppercase_name_token1",
  [aux_sym_uppercase_name_token2] = "uppercase_name_token2",
  [anon_sym_LT] = "<",
  [aux_sym_codeblock_token1] = "codeblock_token1",
  [aux_sym_line_li_token1] = "line_li_token1",
  [anon_sym_LF] = "\n",
  [aux_sym_line_code_token1] = "line_code_token1",
  [aux_sym_column_heading_token1] = "column_heading_token1",
  [aux_sym_column_heading_token2] = "column_heading_token2",
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
  [sym__atom_noli] = "_atom_noli",
  [sym_word_noli] = "word",
  [sym__atom_common] = "_atom_common",
  [sym__word_common] = "_word_common",
  [sym_uppercase_name] = "uppercase_name",
  [sym__uppercase_words] = "_uppercase_words",
  [sym_block] = "block",
  [sym_codeblock] = "codeblock",
  [sym__blank] = "_blank",
  [sym_line] = "line",
  [sym_line_li] = "line_li",
  [sym_line_code] = "line",
  [sym__line_noli] = "_line_noli",
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
  [aux_sym_block_repeat3] = "block_repeat3",
  [aux_sym_codeblock_repeat1] = "codeblock_repeat1",
  [aux_sym_line_li_repeat1] = "line_li_repeat1",
  [aux_sym_line_li_repeat2] = "line_li_repeat2",
  [aux_sym_h3_repeat1] = "h3_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_help_file_token1] = aux_sym_help_file_token1,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [aux_sym_word_token2] = aux_sym_word_token2,
  [aux_sym_word_noli_token1] = aux_sym_word_noli_token1,
  [aux_sym_word_noli_token2] = aux_sym_word_noli_token2,
  [aux_sym__word_common_token1] = aux_sym__word_common_token1,
  [aux_sym__word_common_token2] = aux_sym__word_common_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__word_common_token3] = aux_sym__word_common_token3,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym__word_common_token4] = aux_sym__word_common_token4,
  [aux_sym__word_common_token5] = aux_sym__word_common_token5,
  [aux_sym__word_common_token6] = aux_sym__word_common_token6,
  [aux_sym__word_common_token7] = aux_sym__word_common_token7,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__word_common_token8] = aux_sym__word_common_token8,
  [aux_sym_uppercase_name_token1] = aux_sym_uppercase_name_token1,
  [aux_sym_uppercase_name_token2] = aux_sym_uppercase_name_token2,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_codeblock_token1] = aux_sym_codeblock_token1,
  [aux_sym_line_li_token1] = aux_sym_line_li_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_line_code_token1] = aux_sym_line_code_token1,
  [aux_sym_column_heading_token1] = aux_sym_column_heading_token1,
  [aux_sym_column_heading_token2] = aux_sym_column_heading_token2,
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
  [sym__atom_noli] = sym__atom_noli,
  [sym_word_noli] = sym_word,
  [sym__atom_common] = sym__atom_common,
  [sym__word_common] = sym__word_common,
  [sym_uppercase_name] = sym_uppercase_name,
  [sym__uppercase_words] = sym__uppercase_words,
  [sym_block] = sym_block,
  [sym_codeblock] = sym_codeblock,
  [sym__blank] = sym__blank,
  [sym_line] = sym_line,
  [sym_line_li] = sym_line_li,
  [sym_line_code] = sym_line,
  [sym__line_noli] = sym__line_noli,
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
  [aux_sym_block_repeat3] = aux_sym_block_repeat3,
  [aux_sym_codeblock_repeat1] = aux_sym_codeblock_repeat1,
  [aux_sym_line_li_repeat1] = aux_sym_line_li_repeat1,
  [aux_sym_line_li_repeat2] = aux_sym_line_li_repeat2,
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
  [aux_sym_word_noli_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_noli_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__word_common_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__word_common_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__word_common_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__word_common_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__word_common_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token8] = {
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
  [aux_sym_line_li_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
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
  [aux_sym_column_heading_token2] = {
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
  [sym__atom_noli] = {
    .visible = false,
    .named = true,
  },
  [sym_word_noli] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_common] = {
    .visible = false,
    .named = true,
  },
  [sym__word_common] = {
    .visible = false,
    .named = true,
  },
  [sym_uppercase_name] = {
    .visible = true,
    .named = true,
  },
  [sym__uppercase_words] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
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
  [sym_line_li] = {
    .visible = true,
    .named = true,
  },
  [sym_line_code] = {
    .visible = true,
    .named = true,
  },
  [sym__line_noli] = {
    .visible = false,
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
  [aux_sym_block_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_codeblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_li_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_li_repeat2] = {
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
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 1},
  [9] = {.index = 4, .length = 2},
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
    {field_name, 0},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_word,
  },
  [3] = {
    [0] = sym_word,
    [1] = sym_word,
  },
  [7] = {
    [1] = sym_line,
    [2] = sym_line,
  },
  [8] = {
    [1] = sym_line,
  },
  [10] = {
    [2] = sym_line,
    [3] = sym_line,
  },
  [11] = {
    [2] = sym_line,
  },
  [12] = {
    [0] = sym_line,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__line_noli, 2,
    sym__line_noli,
    sym_line,
  aux_sym_uppercase_name_repeat1, 2,
    aux_sym_uppercase_name_repeat1,
    sym_word,
  aux_sym_line_li_repeat1, 2,
    aux_sym_line_li_repeat1,
    sym_line,
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
  [43] = 32,
  [44] = 44,
  [45] = 29,
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
  [58] = 41,
  [59] = 59,
  [60] = 60,
  [61] = 49,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 53,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 55,
  [74] = 74,
  [75] = 75,
  [76] = 59,
  [77] = 63,
  [78] = 62,
  [79] = 72,
  [80] = 71,
  [81] = 68,
  [82] = 66,
  [83] = 67,
  [84] = 65,
  [85] = 64,
  [86] = 60,
  [87] = 65,
  [88] = 67,
  [89] = 60,
  [90] = 64,
  [91] = 68,
  [92] = 63,
  [93] = 62,
  [94] = 72,
  [95] = 71,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 99,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 104,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 109,
  [118] = 118,
  [119] = 119,
  [120] = 108,
  [121] = 116,
  [122] = 118,
  [123] = 114,
  [124] = 118,
  [125] = 119,
  [126] = 108,
  [127] = 114,
  [128] = 111,
  [129] = 119,
  [130] = 112,
  [131] = 116,
  [132] = 132,
  [133] = 110,
  [134] = 132,
  [135] = 112,
  [136] = 109,
  [137] = 132,
  [138] = 110,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(28);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '~') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(63);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '~') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(62);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(62);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(30);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(62);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '(') ADVANCE(159);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(62);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(157);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '`') ADVANCE(200);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(157);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '`') ADVANCE(200);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '`') ADVANCE(202);
      if (lookahead == '|') ADVANCE(198);
      if (lookahead == '}') ADVANCE(206);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(205);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(181);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(197);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(201);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '`') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '|') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(30);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_help_file_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == 's') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ':') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(184);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '|') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(78);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(78);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(83);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(84);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 's') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(184);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '+' ||
          lookahead == '=') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(163);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == 't') ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '(') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '(') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(140);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '|') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(165);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(167);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_column_heading_token2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t') ADVANCE(28);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == 's') ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ':') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(185);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == 't') ADVANCE(187);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(140);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '|') ADVANCE(153);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '|') ADVANCE(153);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(154);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 36},
  [37] = {.lex_state = 36},
  [38] = {.lex_state = 36},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 36},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 36},
  [50] = {.lex_state = 36},
  [51] = {.lex_state = 36},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 23},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 36},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 36},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 31},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 32},
  [111] = {.lex_state = 31},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 31},
  [114] = {.lex_state = 31},
  [115] = {.lex_state = 36},
  [116] = {.lex_state = 34},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 31},
  [121] = {.lex_state = 34},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 31},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 31},
  [126] = {.lex_state = 31},
  [127] = {.lex_state = 31},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 31},
  [130] = {.lex_state = 33},
  [131] = {.lex_state = 34},
  [132] = {.lex_state = 35},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 35},
  [135] = {.lex_state = 33},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_help_file_token1] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_noli_token1] = ACTIONS(1),
    [aux_sym_word_noli_token2] = ACTIONS(1),
    [aux_sym__word_common_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym__word_common_token4] = ACTIONS(1),
    [aux_sym__word_common_token5] = ACTIONS(1),
    [aux_sym__word_common_token7] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym__word_common_token8] = ACTIONS(1),
    [aux_sym_uppercase_name_token1] = ACTIONS(1),
    [aux_sym_uppercase_name_token2] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_codeblock_token1] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
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
    [sym_help_file] = STATE(107),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(66),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(96),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_help_file_token1] = ACTIONS(5),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [aux_sym__word_common_token2] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token5] = ACTIONS(9),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_uppercase_name_token1] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [aux_sym_codeblock_token1] = ACTIONS(17),
    [aux_sym_line_li_token1] = ACTIONS(19),
    [aux_sym_h1_token1] = ACTIONS(21),
    [aux_sym_h2_token1] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_url_word] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
  },
  [2] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(66),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(96),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(42),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_help_file_token1] = ACTIONS(37),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [aux_sym__word_common_token2] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token5] = ACTIONS(9),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_uppercase_name_token1] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [aux_sym_codeblock_token1] = ACTIONS(17),
    [aux_sym_line_li_token1] = ACTIONS(19),
    [aux_sym_h1_token1] = ACTIONS(21),
    [aux_sym_h2_token1] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_url_word] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
  },
  [3] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(66),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(96),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [aux_sym__word_common_token2] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token5] = ACTIONS(9),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_uppercase_name_token1] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [aux_sym_codeblock_token1] = ACTIONS(17),
    [aux_sym_line_li_token1] = ACTIONS(19),
    [aux_sym_h1_token1] = ACTIONS(21),
    [aux_sym_h2_token1] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_url_word] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
  },
  [4] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(66),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(96),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [aux_sym__word_common_token2] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token5] = ACTIONS(9),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_uppercase_name_token1] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [aux_sym_codeblock_token1] = ACTIONS(17),
    [aux_sym_line_li_token1] = ACTIONS(19),
    [aux_sym_h1_token1] = ACTIONS(21),
    [aux_sym_h2_token1] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_url_word] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
  },
  [5] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(66),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(96),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_word_noli_token1] = ACTIONS(43),
    [aux_sym_word_noli_token2] = ACTIONS(43),
    [aux_sym__word_common_token1] = ACTIONS(46),
    [aux_sym__word_common_token2] = ACTIONS(46),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [aux_sym__word_common_token5] = ACTIONS(46),
    [aux_sym__word_common_token6] = ACTIONS(43),
    [aux_sym__word_common_token7] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(43),
    [aux_sym__word_common_token8] = ACTIONS(43),
    [aux_sym_uppercase_name_token1] = ACTIONS(52),
    [anon_sym_LT] = ACTIONS(55),
    [aux_sym_codeblock_token1] = ACTIONS(58),
    [aux_sym_line_li_token1] = ACTIONS(61),
    [aux_sym_h1_token1] = ACTIONS(64),
    [aux_sym_h2_token1] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(70),
    [sym_url_word] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(82),
  },
  [6] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(66),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(48),
    [sym__blank] = STATE(39),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(97),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(97),
    [aux_sym_help_file_token1] = ACTIONS(85),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [aux_sym__word_common_token2] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token5] = ACTIONS(9),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_uppercase_name_token1] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(87),
    [aux_sym_codeblock_token1] = ACTIONS(17),
    [aux_sym_line_li_token1] = ACTIONS(19),
    [aux_sym_h1_token1] = ACTIONS(21),
    [aux_sym_h2_token1] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [sym_url_word] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
  },
  [7] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(66),
    [sym_uppercase_name] = STATE(100),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_help_file_token1] = ACTIONS(89),
    [aux_sym_word_noli_token1] = ACTIONS(91),
    [aux_sym_word_noli_token2] = ACTIONS(91),
    [aux_sym__word_common_token1] = ACTIONS(94),
    [aux_sym__word_common_token2] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [aux_sym__word_common_token5] = ACTIONS(94),
    [aux_sym__word_common_token6] = ACTIONS(91),
    [aux_sym__word_common_token7] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(91),
    [aux_sym__word_common_token8] = ACTIONS(91),
    [aux_sym_uppercase_name_token1] = ACTIONS(100),
    [anon_sym_LT] = ACTIONS(89),
    [aux_sym_codeblock_token1] = ACTIONS(103),
    [aux_sym_line_li_token1] = ACTIONS(89),
    [aux_sym_h1_token1] = ACTIONS(106),
    [aux_sym_h2_token1] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(112),
    [sym_url_word] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(124),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      aux_sym_line_li_repeat2,
    STATE(75), 1,
      sym__line_noli,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(127), 3,
      aux_sym_help_file_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
    ACTIONS(131), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
    ACTIONS(129), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(22), 10,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [61] = 14,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(164), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(170), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(75), 1,
      sym__line_noli,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(147), 3,
      aux_sym_help_file_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
    ACTIONS(152), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
    ACTIONS(149), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(22), 10,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [122] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(75), 1,
      sym__line_noli,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(176), 3,
      aux_sym_help_file_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
    ACTIONS(131), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
    ACTIONS(129), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(22), 10,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [183] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(75), 1,
      sym__line_noli,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(178), 3,
      aux_sym_help_file_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
    ACTIONS(131), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
    ACTIONS(129), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(22), 10,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [244] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(75), 1,
      sym__line_noli,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(180), 3,
      aux_sym_help_file_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
    ACTIONS(131), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
    ACTIONS(129), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(22), 10,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [305] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      aux_sym_line_li_repeat2,
    STATE(75), 1,
      sym__line_noli,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(182), 3,
      aux_sym_help_file_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
    ACTIONS(131), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
    ACTIONS(129), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(22), 10,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [366] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(75), 1,
      sym__line_noli,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(184), 3,
      aux_sym_help_file_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
    ACTIONS(131), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
    ACTIONS(129), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(22), 10,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [427] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(75), 1,
      sym__line_noli,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(186), 3,
      aux_sym_help_file_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
    ACTIONS(131), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
    ACTIONS(129), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(22), 10,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [488] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      aux_sym_line_li_repeat2,
    STATE(75), 1,
      sym__line_noli,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(188), 3,
      aux_sym_help_file_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
    ACTIONS(131), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
    ACTIONS(129), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(22), 10,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [549] = 16,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      aux_sym_codeblock_token1,
    ACTIONS(27), 1,
      sym_url_word,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      aux_sym_column_heading_token1,
    ACTIONS(198), 1,
      aux_sym_column_heading_token2,
    ACTIONS(200), 1,
      anon_sym_STAR,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(53), 1,
      sym_codeblock,
    STATE(68), 1,
      sym__word_common,
    ACTIONS(190), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(192), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(65), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [613] = 16,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      aux_sym_codeblock_token1,
    ACTIONS(27), 1,
      sym_url_word,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 1,
      aux_sym_column_heading_token1,
    ACTIONS(206), 1,
      aux_sym_column_heading_token2,
    STATE(17), 1,
      aux_sym_line_li_repeat1,
    STATE(49), 1,
      sym_codeblock,
    STATE(68), 1,
      sym__word_common,
    ACTIONS(190), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(192), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(65), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [677] = 13,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_column_heading_token2,
    ACTIONS(221), 1,
      anon_sym_STAR,
    ACTIONS(224), 1,
      sym_url_word,
    ACTIONS(227), 1,
      anon_sym_PIPE,
    ACTIONS(230), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(68), 1,
      sym__word_common,
    ACTIONS(208), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(217), 3,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(211), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(65), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [734] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      aux_sym_codeblock_token1,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 1,
      anon_sym_STAR,
    STATE(8), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(238), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(84), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [792] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      aux_sym_codeblock_token1,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(246), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(69), 1,
      sym_codeblock,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(238), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(84), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [850] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      aux_sym_codeblock_token1,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(248), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(61), 1,
      sym_codeblock,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(238), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(84), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [908] = 14,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      aux_sym_codeblock_token1,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(250), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(238), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(84), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [966] = 12,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      sym_url_word,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_BQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(217), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(252), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(255), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(84), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1019] = 12,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(288), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(91), 1,
      sym__word_common,
    ACTIONS(276), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(279), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(87), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1071] = 12,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(310), 1,
      sym_url_word,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_BQUOTE,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(91), 1,
      sym__word_common,
    ACTIONS(300), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(302), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(87), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1123] = 12,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(310), 1,
      sym_url_word,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_BQUOTE,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_LF,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(91), 1,
      sym__word_common,
    ACTIONS(300), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(302), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(87), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1175] = 11,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_STAR,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(238), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(84), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1224] = 5,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(326), 1,
      aux_sym_line_code_token1,
    STATE(32), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(322), 4,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(320), 18,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1261] = 11,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym_url_word,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_STAR,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(238), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(84), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1310] = 11,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(310), 1,
      sym_url_word,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_BQUOTE,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(91), 1,
      sym__word_common,
    ACTIONS(300), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(302), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(87), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1359] = 5,
    ACTIONS(332), 1,
      anon_sym_LF,
    ACTIONS(335), 1,
      aux_sym_line_code_token1,
    STATE(32), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(330), 4,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(328), 18,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1396] = 11,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_STAR,
    ACTIONS(310), 1,
      sym_url_word,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(314), 1,
      anon_sym_BQUOTE,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(91), 1,
      sym__word_common,
    ACTIONS(300), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(302), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(87), 9,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1445] = 4,
    ACTIONS(85), 1,
      aux_sym_help_file_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(340), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(338), 12,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1479] = 5,
    ACTIONS(85), 1,
      aux_sym_help_file_token1,
    ACTIONS(342), 1,
      aux_sym_line_li_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(340), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(338), 11,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1515] = 4,
    ACTIONS(85), 1,
      aux_sym_help_file_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(340), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(338), 12,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1549] = 4,
    ACTIONS(346), 1,
      aux_sym_help_file_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(349), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(344), 12,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1583] = 5,
    ACTIONS(85), 1,
      aux_sym_help_file_token1,
    ACTIONS(342), 1,
      aux_sym_line_li_token1,
    STATE(34), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(353), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(351), 11,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1619] = 4,
    ACTIONS(85), 1,
      aux_sym_help_file_token1,
    STATE(34), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(353), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(351), 12,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1653] = 4,
    ACTIONS(85), 1,
      aux_sym_help_file_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(357), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(355), 12,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1687] = 2,
    ACTIONS(361), 5,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(359), 19,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1716] = 4,
    ACTIONS(365), 1,
      aux_sym_help_file_token1,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    ACTIONS(368), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(363), 12,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1749] = 5,
    ACTIONS(330), 1,
      anon_sym_LT,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(373), 1,
      aux_sym_line_code_token1,
    STATE(43), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(328), 18,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1783] = 2,
    ACTIONS(378), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(376), 13,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1811] = 5,
    ACTIONS(322), 1,
      anon_sym_LT,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      aux_sym_line_code_token1,
    STATE(43), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(320), 18,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1845] = 2,
    ACTIONS(386), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(384), 12,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1872] = 2,
    ACTIONS(390), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(388), 12,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1899] = 2,
    ACTIONS(394), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(392), 12,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1926] = 2,
    ACTIONS(398), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(396), 12,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1953] = 2,
    ACTIONS(402), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(400), 12,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1980] = 2,
    ACTIONS(406), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(404), 12,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2007] = 2,
    ACTIONS(410), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(408), 12,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2034] = 2,
    ACTIONS(414), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(412), 12,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2061] = 2,
    ACTIONS(418), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(416), 12,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2088] = 4,
    ACTIONS(424), 1,
      aux_sym_uppercase_name_token2,
    STATE(55), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(420), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(422), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2118] = 5,
    ACTIONS(431), 1,
      aux_sym_uppercase_name_token2,
    STATE(57), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(433), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(429), 8,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      aux_sym_codeblock_token1,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(427), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2150] = 5,
    ACTIONS(431), 1,
      aux_sym_uppercase_name_token2,
    STATE(55), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(439), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(437), 8,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      aux_sym_codeblock_token1,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(435), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2182] = 2,
    ACTIONS(361), 2,
      anon_sym_LT,
      anon_sym_LF,
    ACTIONS(359), 19,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [2208] = 2,
    ACTIONS(441), 10,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token2,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(443), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2233] = 2,
    ACTIONS(445), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(447), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2257] = 2,
    ACTIONS(396), 9,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(398), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2281] = 2,
    ACTIONS(449), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(451), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2305] = 2,
    ACTIONS(453), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(455), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2329] = 2,
    ACTIONS(457), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(459), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2353] = 2,
    ACTIONS(461), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(463), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2377] = 2,
    ACTIONS(465), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(467), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2401] = 2,
    ACTIONS(469), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(471), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2425] = 2,
    ACTIONS(473), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(475), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2449] = 2,
    ACTIONS(412), 9,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(414), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2473] = 4,
    ACTIONS(477), 1,
      aux_sym_uppercase_name_token2,
    STATE(73), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(435), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(437), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2501] = 2,
    ACTIONS(479), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(481), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2525] = 2,
    ACTIONS(483), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      aux_sym_column_heading_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(485), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2549] = 4,
    ACTIONS(487), 1,
      aux_sym_uppercase_name_token2,
    STATE(73), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(420), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(422), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2577] = 4,
    ACTIONS(477), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(427), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(429), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2605] = 2,
    ACTIONS(490), 9,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(492), 10,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2629] = 2,
    ACTIONS(441), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_uppercase_name_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(443), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2652] = 2,
    ACTIONS(453), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(455), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2674] = 2,
    ACTIONS(449), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(451), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2696] = 2,
    ACTIONS(483), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(485), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2718] = 2,
    ACTIONS(479), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(481), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2740] = 2,
    ACTIONS(473), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(475), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2762] = 2,
    ACTIONS(465), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(467), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2784] = 2,
    ACTIONS(469), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(471), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2806] = 2,
    ACTIONS(461), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(463), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2828] = 2,
    ACTIONS(457), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(459), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2850] = 2,
    ACTIONS(445), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(447), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2872] = 2,
    ACTIONS(461), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(463), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2893] = 2,
    ACTIONS(469), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(471), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2914] = 2,
    ACTIONS(445), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(447), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2935] = 2,
    ACTIONS(457), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(459), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2956] = 2,
    ACTIONS(473), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(475), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2977] = 2,
    ACTIONS(453), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(455), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [2998] = 2,
    ACTIONS(449), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(451), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3019] = 2,
    ACTIONS(483), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(485), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3040] = 2,
    ACTIONS(479), 6,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token6,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(481), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
      aux_sym__word_common_token5,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3061] = 5,
    ACTIONS(19), 1,
      aux_sym_line_li_token1,
    ACTIONS(85), 1,
      aux_sym_help_file_token1,
    ACTIONS(87), 1,
      anon_sym_LT,
    STATE(39), 1,
      sym__blank,
    STATE(98), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3078] = 5,
    ACTIONS(19), 1,
      aux_sym_line_li_token1,
    ACTIONS(85), 1,
      aux_sym_help_file_token1,
    ACTIONS(494), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym__blank,
    STATE(98), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3095] = 4,
    ACTIONS(496), 1,
      aux_sym_help_file_token1,
    ACTIONS(498), 1,
      anon_sym_LT,
    ACTIONS(501), 1,
      aux_sym_line_li_token1,
    STATE(98), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3109] = 3,
    ACTIONS(380), 1,
      anon_sym_LF,
    ACTIONS(382), 1,
      aux_sym_line_code_token1,
    STATE(45), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [3120] = 3,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(504), 1,
      anon_sym_LF,
    STATE(101), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [3131] = 3,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(506), 1,
      anon_sym_LF,
    STATE(103), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [3142] = 3,
    ACTIONS(324), 1,
      anon_sym_LF,
    ACTIONS(326), 1,
      aux_sym_line_code_token1,
    STATE(29), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [3153] = 3,
    ACTIONS(508), 1,
      anon_sym_LF,
    ACTIONS(510), 1,
      anon_sym_STAR,
    STATE(103), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [3164] = 3,
    ACTIONS(513), 1,
      aux_sym__word_common_token3,
    ACTIONS(515), 1,
      aux_sym__word_common_token4,
    ACTIONS(517), 1,
      aux_sym_optionlink_token1,
  [3174] = 3,
    ACTIONS(519), 1,
      aux_sym__word_common_token3,
    ACTIONS(521), 1,
      aux_sym__word_common_token4,
    ACTIONS(523), 1,
      aux_sym_optionlink_token1,
  [3184] = 3,
    ACTIONS(525), 1,
      aux_sym__word_common_token3,
    ACTIONS(527), 1,
      aux_sym__word_common_token4,
    ACTIONS(529), 1,
      aux_sym_optionlink_token1,
  [3194] = 1,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
  [3198] = 1,
    ACTIONS(533), 1,
      anon_sym_PIPE2,
  [3202] = 1,
    ACTIONS(535), 1,
      anon_sym_SQUOTE2,
  [3206] = 1,
    ACTIONS(537), 1,
      aux_sym_argument_token1,
  [3210] = 1,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
  [3214] = 1,
    ACTIONS(541), 1,
      aux_sym_tag_token1,
  [3218] = 1,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [3222] = 1,
    ACTIONS(545), 1,
      anon_sym_BQUOTE2,
  [3226] = 1,
    ACTIONS(342), 1,
      aux_sym_line_li_token1,
  [3230] = 1,
    ACTIONS(547), 1,
      aux_sym_taglink_token1,
  [3234] = 1,
    ACTIONS(549), 1,
      anon_sym_SQUOTE2,
  [3238] = 1,
    ACTIONS(551), 1,
      anon_sym_SQUOTE2,
  [3242] = 1,
    ACTIONS(553), 1,
      anon_sym_STAR2,
  [3246] = 1,
    ACTIONS(555), 1,
      anon_sym_PIPE2,
  [3250] = 1,
    ACTIONS(557), 1,
      aux_sym_taglink_token1,
  [3254] = 1,
    ACTIONS(559), 1,
      anon_sym_SQUOTE2,
  [3258] = 1,
    ACTIONS(561), 1,
      anon_sym_BQUOTE2,
  [3262] = 1,
    ACTIONS(563), 1,
      anon_sym_SQUOTE2,
  [3266] = 1,
    ACTIONS(565), 1,
      anon_sym_STAR2,
  [3270] = 1,
    ACTIONS(567), 1,
      anon_sym_PIPE2,
  [3274] = 1,
    ACTIONS(569), 1,
      anon_sym_BQUOTE2,
  [3278] = 1,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
  [3282] = 1,
    ACTIONS(573), 1,
      anon_sym_STAR2,
  [3286] = 1,
    ACTIONS(575), 1,
      aux_sym_tag_token1,
  [3290] = 1,
    ACTIONS(577), 1,
      aux_sym_taglink_token1,
  [3294] = 1,
    ACTIONS(579), 1,
      aux_sym_codespan_token1,
  [3298] = 1,
    ACTIONS(581), 1,
      aux_sym_argument_token1,
  [3302] = 1,
    ACTIONS(583), 1,
      aux_sym_codespan_token1,
  [3306] = 1,
    ACTIONS(585), 1,
      aux_sym_tag_token1,
  [3310] = 1,
    ACTIONS(587), 1,
      anon_sym_SQUOTE2,
  [3314] = 1,
    ACTIONS(589), 1,
      aux_sym_codespan_token1,
  [3318] = 1,
    ACTIONS(591), 1,
      aux_sym_argument_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 61,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 244,
  [SMALL_STATE(13)] = 305,
  [SMALL_STATE(14)] = 366,
  [SMALL_STATE(15)] = 427,
  [SMALL_STATE(16)] = 488,
  [SMALL_STATE(17)] = 549,
  [SMALL_STATE(18)] = 613,
  [SMALL_STATE(19)] = 677,
  [SMALL_STATE(20)] = 734,
  [SMALL_STATE(21)] = 792,
  [SMALL_STATE(22)] = 850,
  [SMALL_STATE(23)] = 908,
  [SMALL_STATE(24)] = 966,
  [SMALL_STATE(25)] = 1019,
  [SMALL_STATE(26)] = 1071,
  [SMALL_STATE(27)] = 1123,
  [SMALL_STATE(28)] = 1175,
  [SMALL_STATE(29)] = 1224,
  [SMALL_STATE(30)] = 1261,
  [SMALL_STATE(31)] = 1310,
  [SMALL_STATE(32)] = 1359,
  [SMALL_STATE(33)] = 1396,
  [SMALL_STATE(34)] = 1445,
  [SMALL_STATE(35)] = 1479,
  [SMALL_STATE(36)] = 1515,
  [SMALL_STATE(37)] = 1549,
  [SMALL_STATE(38)] = 1583,
  [SMALL_STATE(39)] = 1619,
  [SMALL_STATE(40)] = 1653,
  [SMALL_STATE(41)] = 1687,
  [SMALL_STATE(42)] = 1716,
  [SMALL_STATE(43)] = 1749,
  [SMALL_STATE(44)] = 1783,
  [SMALL_STATE(45)] = 1811,
  [SMALL_STATE(46)] = 1845,
  [SMALL_STATE(47)] = 1872,
  [SMALL_STATE(48)] = 1899,
  [SMALL_STATE(49)] = 1926,
  [SMALL_STATE(50)] = 1953,
  [SMALL_STATE(51)] = 1980,
  [SMALL_STATE(52)] = 2007,
  [SMALL_STATE(53)] = 2034,
  [SMALL_STATE(54)] = 2061,
  [SMALL_STATE(55)] = 2088,
  [SMALL_STATE(56)] = 2118,
  [SMALL_STATE(57)] = 2150,
  [SMALL_STATE(58)] = 2182,
  [SMALL_STATE(59)] = 2208,
  [SMALL_STATE(60)] = 2233,
  [SMALL_STATE(61)] = 2257,
  [SMALL_STATE(62)] = 2281,
  [SMALL_STATE(63)] = 2305,
  [SMALL_STATE(64)] = 2329,
  [SMALL_STATE(65)] = 2353,
  [SMALL_STATE(66)] = 2377,
  [SMALL_STATE(67)] = 2401,
  [SMALL_STATE(68)] = 2425,
  [SMALL_STATE(69)] = 2449,
  [SMALL_STATE(70)] = 2473,
  [SMALL_STATE(71)] = 2501,
  [SMALL_STATE(72)] = 2525,
  [SMALL_STATE(73)] = 2549,
  [SMALL_STATE(74)] = 2577,
  [SMALL_STATE(75)] = 2605,
  [SMALL_STATE(76)] = 2629,
  [SMALL_STATE(77)] = 2652,
  [SMALL_STATE(78)] = 2674,
  [SMALL_STATE(79)] = 2696,
  [SMALL_STATE(80)] = 2718,
  [SMALL_STATE(81)] = 2740,
  [SMALL_STATE(82)] = 2762,
  [SMALL_STATE(83)] = 2784,
  [SMALL_STATE(84)] = 2806,
  [SMALL_STATE(85)] = 2828,
  [SMALL_STATE(86)] = 2850,
  [SMALL_STATE(87)] = 2872,
  [SMALL_STATE(88)] = 2893,
  [SMALL_STATE(89)] = 2914,
  [SMALL_STATE(90)] = 2935,
  [SMALL_STATE(91)] = 2956,
  [SMALL_STATE(92)] = 2977,
  [SMALL_STATE(93)] = 2998,
  [SMALL_STATE(94)] = 3019,
  [SMALL_STATE(95)] = 3040,
  [SMALL_STATE(96)] = 3061,
  [SMALL_STATE(97)] = 3078,
  [SMALL_STATE(98)] = 3095,
  [SMALL_STATE(99)] = 3109,
  [SMALL_STATE(100)] = 3120,
  [SMALL_STATE(101)] = 3131,
  [SMALL_STATE(102)] = 3142,
  [SMALL_STATE(103)] = 3153,
  [SMALL_STATE(104)] = 3164,
  [SMALL_STATE(105)] = 3174,
  [SMALL_STATE(106)] = 3184,
  [SMALL_STATE(107)] = 3194,
  [SMALL_STATE(108)] = 3198,
  [SMALL_STATE(109)] = 3202,
  [SMALL_STATE(110)] = 3206,
  [SMALL_STATE(111)] = 3210,
  [SMALL_STATE(112)] = 3214,
  [SMALL_STATE(113)] = 3218,
  [SMALL_STATE(114)] = 3222,
  [SMALL_STATE(115)] = 3226,
  [SMALL_STATE(116)] = 3230,
  [SMALL_STATE(117)] = 3234,
  [SMALL_STATE(118)] = 3238,
  [SMALL_STATE(119)] = 3242,
  [SMALL_STATE(120)] = 3246,
  [SMALL_STATE(121)] = 3250,
  [SMALL_STATE(122)] = 3254,
  [SMALL_STATE(123)] = 3258,
  [SMALL_STATE(124)] = 3262,
  [SMALL_STATE(125)] = 3266,
  [SMALL_STATE(126)] = 3270,
  [SMALL_STATE(127)] = 3274,
  [SMALL_STATE(128)] = 3278,
  [SMALL_STATE(129)] = 3282,
  [SMALL_STATE(130)] = 3286,
  [SMALL_STATE(131)] = 3290,
  [SMALL_STATE(132)] = 3294,
  [SMALL_STATE(133)] = 3298,
  [SMALL_STATE(134)] = 3302,
  [SMALL_STATE(135)] = 3306,
  [SMALL_STATE(136)] = 3310,
  [SMALL_STATE(137)] = 3314,
  [SMALL_STATE(138)] = 3318,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(104),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(56),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(115),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(102),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(33),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(31),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(112),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(67),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(116),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(134),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(110),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(104),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(102),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(82),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(82),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(105),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(74),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(130),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(83),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(131),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(132),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(133),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 11),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 10),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 8),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 7),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(68),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(68),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(104),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(112),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(67),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(116),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(134),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(110),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(81),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(81),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(105),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(130),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(83),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(131),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(132),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(133),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(91),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(91),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(106),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(135),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(88),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(121),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(137),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(138),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(41),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(41),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2), SHIFT_REPEAT(44),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(42),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(58),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(58),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 5),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 9),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 9),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 4),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(59),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 6),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 6),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 6),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 6),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 6),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 6),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 6),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 6),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 6),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(76),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 12),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 12),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(115),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(30),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2), SHIFT_REPEAT(112),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [531] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
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
