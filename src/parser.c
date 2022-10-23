#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 21

enum {
  aux_sym_word_token1 = 1,
  aux_sym_word_token2 = 2,
  aux_sym_word_noli_token1 = 3,
  aux_sym_word_noli_token2 = 4,
  anon_sym_SQUOTE = 5,
  aux_sym__word_common_token1 = 6,
  aux_sym__word_common_token2 = 7,
  anon_sym_SQUOTE2 = 8,
  aux_sym__word_common_token3 = 9,
  anon_sym_PIPE = 10,
  aux_sym__word_common_token4 = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_LBRACE_RBRACE = 14,
  aux_sym__word_common_token5 = 15,
  anon_sym_LPAREN = 16,
  aux_sym__word_common_token6 = 17,
  anon_sym_TILDE = 18,
  anon_sym_GT = 19,
  aux_sym_keycode_token1 = 20,
  aux_sym_keycode_token2 = 21,
  aux_sym_keycode_token3 = 22,
  aux_sym_keycode_token4 = 23,
  aux_sym_keycode_token5 = 24,
  aux_sym_keycode_token6 = 25,
  aux_sym_keycode_token7 = 26,
  aux_sym_keycode_token8 = 27,
  aux_sym_uppercase_name_token1 = 28,
  aux_sym_uppercase_name_token2 = 29,
  anon_sym_LT = 30,
  anon_sym_LF = 31,
  anon_sym_LF2 = 32,
  aux_sym_line_li_token1 = 33,
  aux_sym_line_code_token1 = 34,
  aux_sym_column_heading_token1 = 35,
  aux_sym_h1_token1 = 36,
  aux_sym_h2_token1 = 37,
  anon_sym_STAR = 38,
  aux_sym_tag_token1 = 39,
  anon_sym_STAR2 = 40,
  sym_url_word = 41,
  aux_sym_optionlink_token1 = 42,
  aux_sym_taglink_token1 = 43,
  anon_sym_LBRACE2 = 44,
  anon_sym_RBRACE2 = 45,
  anon_sym_LPAREN2 = 46,
  anon_sym_RPAREN = 47,
  anon_sym_BQUOTE = 48,
  anon_sym_PIPE2 = 49,
  anon_sym_BQUOTE2 = 50,
  aux_sym_codespan_token1 = 51,
  aux_sym_argument_token1 = 52,
  sym_help_file = 53,
  sym__atom = 54,
  sym_word = 55,
  sym__atom_noli = 56,
  sym_word_noli = 57,
  sym__atom_common = 58,
  sym__word_common = 59,
  sym_keycode = 60,
  sym_uppercase_name = 61,
  sym__uppercase_words = 62,
  sym_block = 63,
  sym_codeblock = 64,
  sym__blank = 65,
  sym_line = 66,
  sym_line_li = 67,
  sym_line_code = 68,
  sym__line_noli = 69,
  sym_column_heading = 70,
  sym_h1 = 71,
  sym_h2 = 72,
  sym_h3 = 73,
  sym_tag = 74,
  sym_url = 75,
  sym_optionlink = 76,
  sym_taglink = 77,
  sym_codespan = 78,
  sym_argument = 79,
  aux_sym_help_file_repeat1 = 80,
  aux_sym_help_file_repeat2 = 81,
  aux_sym_uppercase_name_repeat1 = 82,
  aux_sym_block_repeat1 = 83,
  aux_sym_block_repeat2 = 84,
  aux_sym_codeblock_repeat1 = 85,
  aux_sym_line_li_repeat1 = 86,
  aux_sym_line_li_repeat2 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_word_token2] = "word_token2",
  [aux_sym_word_noli_token1] = "word_noli_token1",
  [aux_sym_word_noli_token2] = "word_noli_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__word_common_token1] = "_word_common_token1",
  [aux_sym__word_common_token2] = "_word_common_token2",
  [anon_sym_SQUOTE2] = "'",
  [aux_sym__word_common_token3] = "_word_common_token3",
  [anon_sym_PIPE] = "|",
  [aux_sym__word_common_token4] = "_word_common_token4",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [aux_sym__word_common_token5] = "_word_common_token5",
  [anon_sym_LPAREN] = "(",
  [aux_sym__word_common_token6] = "_word_common_token6",
  [anon_sym_TILDE] = "~",
  [anon_sym_GT] = ">",
  [aux_sym_keycode_token1] = "keycode_token1",
  [aux_sym_keycode_token2] = "keycode_token2",
  [aux_sym_keycode_token3] = "keycode_token3",
  [aux_sym_keycode_token4] = "keycode_token4",
  [aux_sym_keycode_token5] = "keycode_token5",
  [aux_sym_keycode_token6] = "keycode_token6",
  [aux_sym_keycode_token7] = "keycode_token7",
  [aux_sym_keycode_token8] = "keycode_token8",
  [aux_sym_uppercase_name_token1] = "uppercase_name_token1",
  [aux_sym_uppercase_name_token2] = "uppercase_name_token2",
  [anon_sym_LT] = "<",
  [anon_sym_LF] = "\n",
  [anon_sym_LF2] = "\n",
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
  [aux_sym_taglink_token1] = "word",
  [anon_sym_LBRACE2] = "word",
  [anon_sym_RBRACE2] = "}",
  [anon_sym_LPAREN2] = "word",
  [anon_sym_RPAREN] = "word",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_PIPE2] = "|",
  [anon_sym_BQUOTE2] = "`",
  [aux_sym_codespan_token1] = "word",
  [aux_sym_argument_token1] = "word",
  [sym_help_file] = "help_file",
  [sym__atom] = "_atom",
  [sym_word] = "word",
  [sym__atom_noli] = "_atom_noli",
  [sym_word_noli] = "word",
  [sym__atom_common] = "_atom_common",
  [sym__word_common] = "_word_common",
  [sym_keycode] = "keycode",
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
  [aux_sym_codeblock_repeat1] = "codeblock_repeat1",
  [aux_sym_line_li_repeat1] = "line_li_repeat1",
  [aux_sym_line_li_repeat2] = "line_li_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [aux_sym_word_token2] = aux_sym_word_token2,
  [aux_sym_word_noli_token1] = aux_sym_word_noli_token1,
  [aux_sym_word_noli_token2] = aux_sym_word_noli_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__word_common_token1] = aux_sym__word_common_token1,
  [aux_sym__word_common_token2] = aux_sym__word_common_token2,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym__word_common_token3] = aux_sym__word_common_token3,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym__word_common_token4] = aux_sym__word_common_token4,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [aux_sym__word_common_token5] = aux_sym__word_common_token5,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__word_common_token6] = aux_sym__word_common_token6,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_keycode_token1] = aux_sym_keycode_token1,
  [aux_sym_keycode_token2] = aux_sym_keycode_token2,
  [aux_sym_keycode_token3] = aux_sym_keycode_token3,
  [aux_sym_keycode_token4] = aux_sym_keycode_token4,
  [aux_sym_keycode_token5] = aux_sym_keycode_token5,
  [aux_sym_keycode_token6] = aux_sym_keycode_token6,
  [aux_sym_keycode_token7] = aux_sym_keycode_token7,
  [aux_sym_keycode_token8] = aux_sym_keycode_token8,
  [aux_sym_uppercase_name_token1] = aux_sym_uppercase_name_token1,
  [aux_sym_uppercase_name_token2] = aux_sym_uppercase_name_token2,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LF2] = anon_sym_LF,
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
  [aux_sym_taglink_token1] = sym_word,
  [anon_sym_LBRACE2] = sym_word,
  [anon_sym_RBRACE2] = anon_sym_RBRACE,
  [anon_sym_LPAREN2] = sym_word,
  [anon_sym_RPAREN] = sym_word,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_PIPE2] = anon_sym_PIPE,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [aux_sym_codespan_token1] = sym_word,
  [aux_sym_argument_token1] = sym_word,
  [sym_help_file] = sym_help_file,
  [sym__atom] = sym__atom,
  [sym_word] = sym_word,
  [sym__atom_noli] = sym__atom_noli,
  [sym_word_noli] = sym_word,
  [sym__atom_common] = sym__atom_common,
  [sym__word_common] = sym__word_common,
  [sym_keycode] = sym_keycode,
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
  [aux_sym_codeblock_repeat1] = aux_sym_codeblock_repeat1,
  [aux_sym_line_li_repeat1] = aux_sym_line_li_repeat1,
  [aux_sym_line_li_repeat2] = aux_sym_line_li_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
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
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token4] = {
    .visible = false,
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
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keycode_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keycode_token8] = {
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF2] = {
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
  [aux_sym_taglink_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_codespan_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_argument_token1] = {
    .visible = true,
    .named = true,
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
  [sym_keycode] = {
    .visible = true,
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
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 1},
  [7] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 1},
  [9] = {.index = 7, .length = 1},
  [10] = {.index = 7, .length = 1},
  [13] = {.index = 8, .length = 2},
  [14] = {.index = 10, .length = 1},
  [15] = {.index = 11, .length = 2},
  [19] = {.index = 13, .length = 1},
  [20] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_blank, 0},
  [1] =
    {field_text, 0},
  [2] =
    {field_blank, 0, .inherited = true},
  [3] =
    {field_name, 0},
  [4] =
    {field_blank, 0, .inherited = true},
    {field_blank, 1, .inherited = true},
  [6] =
    {field_blank, 1, .inherited = true},
  [7] =
    {field_text, 1},
  [8] =
    {field_name, 0},
    {field_name, 1},
  [10] =
    {field_blank, 2, .inherited = true},
  [11] =
    {field_blank, 1, .inherited = true},
    {field_blank, 2, .inherited = true},
  [13] =
    {field_blank, 3, .inherited = true},
  [14] =
    {field_blank, 2, .inherited = true},
    {field_blank, 3, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_word,
  },
  [5] = {
    [0] = sym_word,
    [1] = sym_word,
  },
  [10] = {
    [1] = sym_word,
  },
  [11] = {
    [1] = sym_line,
    [2] = sym_line,
  },
  [12] = {
    [1] = sym_line,
  },
  [16] = {
    [2] = sym_line,
    [3] = sym_line,
  },
  [17] = {
    [2] = sym_line,
  },
  [18] = {
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
  [24] = 24,
  [25] = 20,
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
  [47] = 39,
  [48] = 48,
  [49] = 49,
  [50] = 46,
  [51] = 40,
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
  [64] = 52,
  [65] = 63,
  [66] = 66,
  [67] = 55,
  [68] = 59,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 66,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 78,
  [85] = 76,
  [86] = 86,
  [87] = 87,
  [88] = 75,
  [89] = 89,
  [90] = 73,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 89,
  [95] = 86,
  [96] = 81,
  [97] = 91,
  [98] = 92,
  [99] = 87,
  [100] = 79,
  [101] = 93,
  [102] = 80,
  [103] = 83,
  [104] = 82,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 108,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 113,
  [121] = 116,
  [122] = 118,
  [123] = 114,
  [124] = 112,
  [125] = 111,
  [126] = 119,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == 'C') ADVANCE(240);
      if (lookahead == 'M') ADVANCE(236);
      if (lookahead == '`') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(241);
      if (lookahead == '{') ADVANCE(481);
      if (lookahead == '|') ADVANCE(491);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(233);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(244);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(262);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '<') ADVANCE(392);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == 8226) ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(213);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '<') ADVANCE(392);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '<') ADVANCE(392);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == '*') ADVANCE(405);
      if (lookahead == '<') ADVANCE(247);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == 'A') ADVANCE(237);
      if (lookahead == 'C') ADVANCE(239);
      if (lookahead == 'M') ADVANCE(235);
      if (lookahead == '`') ADVANCE(495);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '|') ADVANCE(260);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(243);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == '*') ADVANCE(405);
      if (lookahead == '<') ADVANCE(247);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == 'A') ADVANCE(237);
      if (lookahead == 'C') ADVANCE(239);
      if (lookahead == 'M') ADVANCE(235);
      if (lookahead == '`') ADVANCE(495);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '|') ADVANCE(260);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '~') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(243);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(59);
      if (lookahead == 'M') ADVANCE(57);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(39);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(59);
      if (lookahead == 'M') ADVANCE(57);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(39);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '*') ADVANCE(402);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead == 'A') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == 'M') ADVANCE(103);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == '~') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '<') ADVANCE(478);
      if (lookahead == '>') ADVANCE(298);
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead == 'C') ADVANCE(432);
      if (lookahead == 'M') ADVANCE(428);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(437);
      if (lookahead == '{') ADVANCE(482);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '~') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(486);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '<') ADVANCE(478);
      if (lookahead == '>') ADVANCE(298);
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead == 'C') ADVANCE(432);
      if (lookahead == 'M') ADVANCE(428);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(437);
      if (lookahead == '{') ADVANCE(482);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '~') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '<') ADVANCE(549);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(510);
      if (lookahead == 'C') ADVANCE(513);
      if (lookahead == 'M') ADVANCE(509);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '<') ADVANCE(549);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(510);
      if (lookahead == 'C') ADVANCE(513);
      if (lookahead == 'M') ADVANCE(509);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '<') ADVANCE(390);
      if (lookahead == '`') ADVANCE(489);
      if (lookahead == '|') ADVANCE(491);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(396);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(407);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(303);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(496);
      END_STATE();
    case 35:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(256);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '<') ADVANCE(392);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == 8226) ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(213);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'A') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'E') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'L') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'L') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'R') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'E') ADVANCE(379);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'L') ADVANCE(378);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'T') ADVANCE(377);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '>') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(329);
      if (lookahead == 'D') ADVANCE(323);
      if (lookahead == 'I') ADVANCE(326);
      if (lookahead == 'P') ADVANCE(318);
      if (lookahead == 'S') ADVANCE(315);
      if (lookahead == '{') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(410);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'A') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '-') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '>') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'B') ADVANCE(312);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'I') ADVANCE(311);
      if (lookahead == 'P') ADVANCE(308);
      if (lookahead == 'S') ADVANCE(307);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'D') ADVANCE(134);
      if (lookahead == 'U') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'I') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'g') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'k') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'p') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 't') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'w') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '}') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(144);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == '-') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == '-') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == 's') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ':') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'A') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'E') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'L') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'L') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'R') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == 'E') ADVANCE(356);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == 'L') ADVANCE(355);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == 'T') ADVANCE(354);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '>') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(331);
      if (lookahead == 'D') ADVANCE(325);
      if (lookahead == 'I') ADVANCE(328);
      if (lookahead == 'P') ADVANCE(320);
      if (lookahead == 'S') ADVANCE(316);
      if (lookahead == '{') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(200);
      if (lookahead == 'U') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(410);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\t') ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\t') ADVANCE(261);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'E') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'E') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'L') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'L') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 't') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == 't') ADVANCE(419);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(282);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '>') ADVANCE(299);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(410);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '|') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '|') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '|') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '|') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(550);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(255);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(255);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '}') ADVANCE(269);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '}') ADVANCE(269);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '{') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(398);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(398);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'H') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(69);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(188);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(384);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == '-') ADVANCE(359);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(351);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == 'R') ADVANCE(353);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == 'T') ADVANCE(349);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == 'T') ADVANCE(352);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(371);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(367);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead == 'I') ADVANCE(366);
      if (lookahead == 'P') ADVANCE(364);
      if (lookahead == 'S') ADVANCE(361);
      if (lookahead == '{') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'F') ADVANCE(363);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'H') ADVANCE(362);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'I') ADVANCE(360);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'T') ADVANCE(358);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'A') ADVANCE(374);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'L') ADVANCE(373);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'R') ADVANCE(376);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'T') ADVANCE(372);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'B') ADVANCE(330);
      if (lookahead == 'D') ADVANCE(324);
      if (lookahead == 'I') ADVANCE(327);
      if (lookahead == 'P') ADVANCE(319);
      if (lookahead == 'S') ADVANCE(317);
      if (lookahead == '{') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'F') ADVANCE(385);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'I') ADVANCE(383);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'T') ADVANCE(381);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(396);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(144);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(412);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ':') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(411);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 't') ADVANCE(413);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(282);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(252);
      if (lookahead == 's') ADVANCE(417);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == 'p') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == 't') ADVANCE(418);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == '-') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == '-') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == '-') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == ':') ADVANCE(475);
      if (lookahead == 's') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == ':') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 'A') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 'E') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 'L') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 'L') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 'R') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 'T') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 'T') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 'T') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 't') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (lookahead == 't') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '>') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(442);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'B') ADVANCE(468);
      if (lookahead == 'D') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(463);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == '{') ADVANCE(453);
      if (lookahead == '|') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(480);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(464);
      if (lookahead == 'U') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(480);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(480);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(480);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '}') ADVANCE(269);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '{') ADVANCE(472);
      if (lookahead == '}') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(480);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (lookahead == '\n') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(551);
      if (lookahead == '>') ADVANCE(523);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(523);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(345);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(550);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(306);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'B') ADVANCE(543);
      if (lookahead == 'D') ADVANCE(531);
      if (lookahead == 'I') ADVANCE(539);
      if (lookahead == 'P') ADVANCE(529);
      if (lookahead == 'S') ADVANCE(526);
      if (lookahead == '{') ADVANCE(321);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(550);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(341);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(550);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(333);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(550);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == '-') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == '-') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == '-') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == ':') ADVANCE(548);
      if (lookahead == 's') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == ':') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 'A') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 'E') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 'R') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 'T') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 'T') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 'T') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 'p') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (lookahead == 't') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '(') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '>') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '-') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '>') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '>') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'D') ADVANCE(540);
      if (lookahead == 'U') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'F') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'H') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'I') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'g') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'k') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'l') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'w') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == '|') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(550);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(550);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 22},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 32},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 32},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 37},
  [118] = {.lex_state = 24},
  [119] = {.lex_state = 34},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 24},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 32},
  [124] = {.lex_state = 24},
  [125] = {.lex_state = 32},
  [126] = {.lex_state = 34},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_noli_token1] = ACTIONS(1),
    [aux_sym_word_noli_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__word_common_token1] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym__word_common_token4] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [aux_sym__word_common_token5] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym__word_common_token6] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_keycode_token1] = ACTIONS(1),
    [aux_sym_keycode_token2] = ACTIONS(1),
    [aux_sym_keycode_token3] = ACTIONS(1),
    [aux_sym_keycode_token4] = ACTIONS(1),
    [aux_sym_keycode_token5] = ACTIONS(1),
    [aux_sym_keycode_token6] = ACTIONS(1),
    [aux_sym_keycode_token7] = ACTIONS(1),
    [aux_sym_keycode_token8] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_LF2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [sym_url_word] = ACTIONS(1),
    [aux_sym_optionlink_token1] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(115),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(89),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(110),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(62),
    [sym__blank] = STATE(49),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(105),
    [sym__line_noli] = STATE(62),
    [sym_column_heading] = STATE(62),
    [sym_h1] = STATE(62),
    [sym_h2] = STATE(62),
    [sym_h3] = STATE(62),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [aux_sym__word_common_token3] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(9),
    [aux_sym__word_common_token5] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token6] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(15),
    [aux_sym_keycode_token1] = ACTIONS(17),
    [aux_sym_keycode_token2] = ACTIONS(17),
    [aux_sym_keycode_token3] = ACTIONS(17),
    [aux_sym_keycode_token4] = ACTIONS(17),
    [aux_sym_keycode_token5] = ACTIONS(19),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(17),
    [aux_sym_keycode_token8] = ACTIONS(17),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LF2] = ACTIONS(25),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE2] = ACTIONS(37),
  },
  [2] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(89),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(110),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(62),
    [sym__blank] = STATE(49),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(105),
    [sym__line_noli] = STATE(62),
    [sym_column_heading] = STATE(62),
    [sym_h1] = STATE(62),
    [sym_h2] = STATE(62),
    [sym_h3] = STATE(62),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(43),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [aux_sym__word_common_token3] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(9),
    [aux_sym__word_common_token5] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token6] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(15),
    [aux_sym_keycode_token1] = ACTIONS(17),
    [aux_sym_keycode_token2] = ACTIONS(17),
    [aux_sym_keycode_token3] = ACTIONS(17),
    [aux_sym_keycode_token4] = ACTIONS(17),
    [aux_sym_keycode_token5] = ACTIONS(19),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(17),
    [aux_sym_keycode_token8] = ACTIONS(17),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LF2] = ACTIONS(25),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE2] = ACTIONS(37),
  },
  [3] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(89),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(110),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(62),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(105),
    [sym__line_noli] = STATE(62),
    [sym_column_heading] = STATE(62),
    [sym_h1] = STATE(62),
    [sym_h2] = STATE(62),
    [sym_h3] = STATE(62),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_word_noli_token1] = ACTIONS(43),
    [aux_sym_word_noli_token2] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [aux_sym__word_common_token3] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(52),
    [aux_sym__word_common_token4] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(49),
    [aux_sym__word_common_token5] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(43),
    [aux_sym__word_common_token6] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(58),
    [aux_sym_keycode_token1] = ACTIONS(61),
    [aux_sym_keycode_token2] = ACTIONS(61),
    [aux_sym_keycode_token3] = ACTIONS(61),
    [aux_sym_keycode_token4] = ACTIONS(61),
    [aux_sym_keycode_token5] = ACTIONS(64),
    [aux_sym_keycode_token6] = ACTIONS(64),
    [aux_sym_keycode_token7] = ACTIONS(61),
    [aux_sym_keycode_token8] = ACTIONS(61),
    [aux_sym_uppercase_name_token1] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(70),
    [aux_sym_line_li_token1] = ACTIONS(73),
    [aux_sym_h1_token1] = ACTIONS(76),
    [aux_sym_h2_token1] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(82),
    [sym_url_word] = ACTIONS(85),
    [anon_sym_BQUOTE2] = ACTIONS(88),
  },
  [4] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(89),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(110),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(62),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(105),
    [sym__line_noli] = STATE(62),
    [sym_column_heading] = STATE(62),
    [sym_h1] = STATE(62),
    [sym_h2] = STATE(62),
    [sym_h3] = STATE(62),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [aux_sym__word_common_token3] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(9),
    [aux_sym__word_common_token5] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token6] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(15),
    [aux_sym_keycode_token1] = ACTIONS(17),
    [aux_sym_keycode_token2] = ACTIONS(17),
    [aux_sym_keycode_token3] = ACTIONS(17),
    [aux_sym_keycode_token4] = ACTIONS(17),
    [aux_sym_keycode_token5] = ACTIONS(19),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(17),
    [aux_sym_keycode_token8] = ACTIONS(17),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE2] = ACTIONS(37),
  },
  [5] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(89),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(110),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(62),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(105),
    [sym__line_noli] = STATE(62),
    [sym_column_heading] = STATE(62),
    [sym_h1] = STATE(62),
    [sym_h2] = STATE(62),
    [sym_h3] = STATE(62),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [aux_sym__word_common_token3] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(9),
    [aux_sym__word_common_token5] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token6] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(15),
    [aux_sym_keycode_token1] = ACTIONS(17),
    [aux_sym_keycode_token2] = ACTIONS(17),
    [aux_sym_keycode_token3] = ACTIONS(17),
    [aux_sym_keycode_token4] = ACTIONS(17),
    [aux_sym_keycode_token5] = ACTIONS(19),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(17),
    [aux_sym_keycode_token8] = ACTIONS(17),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE2] = ACTIONS(37),
  },
  [6] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(89),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(110),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(62),
    [sym__blank] = STATE(45),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(106),
    [sym__line_noli] = STATE(62),
    [sym_column_heading] = STATE(62),
    [sym_h1] = STATE(62),
    [sym_h2] = STATE(62),
    [sym_h3] = STATE(62),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(106),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [aux_sym__word_common_token3] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(9),
    [aux_sym__word_common_token5] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token6] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(15),
    [aux_sym_keycode_token1] = ACTIONS(17),
    [aux_sym_keycode_token2] = ACTIONS(17),
    [aux_sym_keycode_token3] = ACTIONS(17),
    [aux_sym_keycode_token4] = ACTIONS(17),
    [aux_sym_keycode_token5] = ACTIONS(19),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(17),
    [aux_sym_keycode_token8] = ACTIONS(17),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_LF2] = ACTIONS(25),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE2] = ACTIONS(37),
  },
  [7] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(89),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(110),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(62),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(62),
    [sym_column_heading] = STATE(62),
    [sym_h1] = STATE(62),
    [sym_h2] = STATE(62),
    [sym_h3] = STATE(62),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_word_noli_token1] = ACTIONS(97),
    [aux_sym_word_noli_token2] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [aux_sym__word_common_token3] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(106),
    [aux_sym__word_common_token4] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(103),
    [aux_sym__word_common_token5] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(97),
    [aux_sym__word_common_token6] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(112),
    [aux_sym_keycode_token1] = ACTIONS(115),
    [aux_sym_keycode_token2] = ACTIONS(115),
    [aux_sym_keycode_token3] = ACTIONS(115),
    [aux_sym_keycode_token4] = ACTIONS(115),
    [aux_sym_keycode_token5] = ACTIONS(118),
    [aux_sym_keycode_token6] = ACTIONS(118),
    [aux_sym_keycode_token7] = ACTIONS(115),
    [aux_sym_keycode_token8] = ACTIONS(115),
    [aux_sym_uppercase_name_token1] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_LF2] = ACTIONS(126),
    [aux_sym_line_li_token1] = ACTIONS(126),
    [aux_sym_h1_token1] = ACTIONS(128),
    [aux_sym_h2_token1] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(134),
    [sym_url_word] = ACTIONS(137),
    [anon_sym_BQUOTE2] = ACTIONS(140),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(146), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(174), 1,
      sym_url_word,
    ACTIONS(177), 1,
      anon_sym_BQUOTE2,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(69), 1,
      sym__line_noli,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(161), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(169), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(158), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(149), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(22), 11,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym_keycode,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [78] = 17,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(196), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(69), 1,
      sym__line_noli,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(192), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(198), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(180), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(190), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(184), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(22), 11,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym_keycode,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [156] = 17,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(206), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(69), 1,
      sym__line_noli,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(192), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(208), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(180), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(190), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(184), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(22), 11,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym_keycode,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [234] = 17,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(210), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(69), 1,
      sym__line_noli,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(192), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(212), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(180), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(190), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(184), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(22), 11,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym_keycode,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [312] = 17,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(214), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(69), 1,
      sym__line_noli,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(192), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(216), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(180), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(190), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(184), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(22), 11,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym_keycode,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [390] = 17,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(218), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(69), 1,
      sym__line_noli,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(192), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(220), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(180), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(190), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(184), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(22), 11,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym_keycode,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [468] = 17,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(222), 1,
      anon_sym_LT,
    STATE(10), 1,
      aux_sym_line_li_repeat2,
    STATE(69), 1,
      sym__line_noli,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(192), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(224), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(180), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(190), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(184), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(22), 11,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym_keycode,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [546] = 17,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(226), 1,
      anon_sym_LT,
    STATE(11), 1,
      aux_sym_line_li_repeat2,
    STATE(69), 1,
      sym__line_noli,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(192), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(228), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(180), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(190), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(184), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(22), 11,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym_keycode,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [624] = 17,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(230), 1,
      anon_sym_LT,
    STATE(12), 1,
      aux_sym_line_li_repeat2,
    STATE(69), 1,
      sym__line_noli,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(192), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(232), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(180), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(190), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(184), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(22), 11,
      sym__atom_noli,
      sym_word_noli,
      sym__atom_common,
      sym_keycode,
      sym__uppercase_words,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [702] = 17,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(238), 1,
      anon_sym_LF2,
    ACTIONS(240), 1,
      aux_sym_column_heading_token1,
    ACTIONS(242), 1,
      anon_sym_STAR,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(59), 1,
      sym_codeblock,
    STATE(83), 1,
      sym__word_common,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(234), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_TILDE,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(236), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    STATE(82), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [777] = 17,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(244), 1,
      anon_sym_LF2,
    ACTIONS(246), 1,
      aux_sym_column_heading_token1,
    STATE(17), 1,
      aux_sym_line_li_repeat1,
    STATE(55), 1,
      sym_codeblock,
    STATE(83), 1,
      sym__word_common,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(234), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_TILDE,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(236), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    STATE(82), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [852] = 16,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(252), 1,
      anon_sym_GT,
    ACTIONS(254), 1,
      anon_sym_LF2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(68), 1,
      sym_codeblock,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [924] = 14,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(284), 1,
      sym_url_word,
    ACTIONS(287), 1,
      anon_sym_BQUOTE2,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(83), 1,
      sym__word_common,
    ACTIONS(279), 2,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
    ACTIONS(258), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_TILDE,
    ACTIONS(273), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(276), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(264), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
    STATE(82), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [992] = 16,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(252), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_LF2,
    STATE(13), 1,
      sym_codeblock,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1064] = 16,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(252), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(292), 1,
      anon_sym_LF2,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(67), 1,
      sym_codeblock,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1136] = 16,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(252), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(294), 1,
      anon_sym_LF2,
    STATE(15), 1,
      sym_codeblock,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1208] = 14,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(296), 1,
      anon_sym_LF2,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1275] = 14,
    ACTIONS(279), 1,
      anon_sym_LF2,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    ACTIONS(307), 1,
      anon_sym_PIPE,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      anon_sym_STAR,
    ACTIONS(322), 1,
      sym_url_word,
    ACTIONS(325), 1,
      anon_sym_BQUOTE2,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(298), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(313), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(316), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(304), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1342] = 14,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(328), 1,
      anon_sym_LF2,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1409] = 14,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(330), 1,
      anon_sym_LF2,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1476] = 14,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(332), 1,
      anon_sym_LF2,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1543] = 13,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1607] = 13,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1671] = 13,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1735] = 13,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_url_word,
    ACTIONS(204), 1,
      anon_sym_BQUOTE2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(28), 1,
      aux_sym_line_li_repeat1,
    STATE(103), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(190), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(192), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(250), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(104), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1799] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(336), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(334), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [1844] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(340), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(338), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [1889] = 6,
    ACTIONS(25), 1,
      anon_sym_LF2,
    ACTIONS(346), 1,
      aux_sym_line_li_token1,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(342), 15,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(344), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [1936] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(350), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(348), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [1981] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(340), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(338), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2026] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(350), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(348), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2071] = 5,
    ACTIONS(354), 1,
      anon_sym_LF2,
    ACTIONS(357), 1,
      aux_sym_line_code_token1,
    ACTIONS(360), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    STATE(39), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(352), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      aux_sym__word_common_token4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2116] = 5,
    ACTIONS(364), 1,
      anon_sym_LF2,
    ACTIONS(366), 1,
      aux_sym_line_code_token1,
    ACTIONS(368), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    STATE(39), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(362), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      aux_sym__word_common_token4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2161] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(38), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(372), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(370), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2206] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(376), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(374), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2251] = 5,
    ACTIONS(382), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(380), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(378), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2296] = 6,
    ACTIONS(25), 1,
      anon_sym_LF2,
    ACTIONS(346), 1,
      aux_sym_line_li_token1,
    STATE(37), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(385), 15,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(387), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2343] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(36), 1,
      aux_sym_help_file_repeat1,
    STATE(49), 1,
      sym__blank,
    ACTIONS(372), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(370), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2388] = 3,
    ACTIONS(391), 4,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
    ACTIONS(393), 6,
      aux_sym_taglink_token1,
      anon_sym_LBRACE2,
      anon_sym_RBRACE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    ACTIONS(389), 23,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2428] = 4,
    ACTIONS(395), 1,
      anon_sym_LF2,
    ACTIONS(398), 1,
      aux_sym_line_code_token1,
    STATE(47), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(352), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      aux_sym__word_common_token4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2469] = 2,
    ACTIONS(403), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(401), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2506] = 2,
    ACTIONS(407), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(405), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2543] = 3,
    ACTIONS(391), 3,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_LF2,
    ACTIONS(409), 6,
      aux_sym_taglink_token1,
      anon_sym_LBRACE2,
      anon_sym_RBRACE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    ACTIONS(389), 23,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2582] = 4,
    ACTIONS(411), 1,
      anon_sym_LF2,
    ACTIONS(413), 1,
      aux_sym_line_code_token1,
    STATE(47), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(362), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      aux_sym__word_common_token4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2623] = 2,
    ACTIONS(417), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(415), 29,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      aux_sym__word_common_token4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2660] = 2,
    ACTIONS(419), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(421), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2696] = 2,
    ACTIONS(423), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(425), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2732] = 2,
    ACTIONS(427), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(429), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2768] = 2,
    ACTIONS(431), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(433), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2804] = 2,
    ACTIONS(435), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(437), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2840] = 2,
    ACTIONS(439), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(441), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2876] = 2,
    ACTIONS(443), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(445), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2912] = 2,
    ACTIONS(447), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(449), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2948] = 2,
    ACTIONS(451), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(453), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2984] = 2,
    ACTIONS(455), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(457), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3020] = 4,
    ACTIONS(461), 1,
      aux_sym_optionlink_token1,
    ACTIONS(459), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(391), 12,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
    ACTIONS(389), 15,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3059] = 2,
    ACTIONS(417), 1,
      anon_sym_LF2,
    ACTIONS(415), 29,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      aux_sym__word_common_token4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3094] = 4,
    ACTIONS(465), 1,
      aux_sym_optionlink_token1,
    ACTIONS(463), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(391), 11,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
    ACTIONS(389), 15,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3132] = 4,
    ACTIONS(471), 1,
      aux_sym_uppercase_name_token2,
    STATE(66), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(467), 13,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(469), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3170] = 2,
    ACTIONS(429), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(427), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [3204] = 2,
    ACTIONS(445), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(443), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [3238] = 2,
    ACTIONS(476), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(474), 15,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [3272] = 5,
    ACTIONS(482), 1,
      aux_sym_uppercase_name_token2,
    STATE(71), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(484), 2,
      anon_sym_LF2,
      anon_sym_STAR,
    ACTIONS(480), 12,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(478), 13,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
  [3312] = 5,
    ACTIONS(482), 1,
      aux_sym_uppercase_name_token2,
    STATE(66), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(490), 2,
      anon_sym_LF2,
      anon_sym_STAR,
    ACTIONS(488), 12,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(486), 13,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
  [3352] = 4,
    ACTIONS(492), 1,
      aux_sym_uppercase_name_token2,
    STATE(74), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(486), 12,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(488), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3389] = 3,
    ACTIONS(494), 1,
      aux_sym_argument_token1,
    ACTIONS(391), 7,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
    ACTIONS(389), 20,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3424] = 4,
    ACTIONS(496), 1,
      aux_sym_uppercase_name_token2,
    STATE(74), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(467), 12,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(469), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3461] = 3,
    ACTIONS(499), 1,
      anon_sym_LF,
    ACTIONS(389), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(391), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3496] = 3,
    ACTIONS(503), 1,
      anon_sym_SQUOTE2,
    ACTIONS(501), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(505), 18,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3531] = 4,
    ACTIONS(492), 1,
      aux_sym_uppercase_name_token2,
    STATE(72), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(478), 12,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(480), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3568] = 2,
    ACTIONS(507), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token2,
    ACTIONS(509), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3601] = 2,
    ACTIONS(511), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(513), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3633] = 2,
    ACTIONS(515), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(517), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3665] = 2,
    ACTIONS(519), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(521), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3697] = 2,
    ACTIONS(523), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(525), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3729] = 2,
    ACTIONS(527), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(529), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3761] = 2,
    ACTIONS(507), 13,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token2,
    ACTIONS(509), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3793] = 3,
    ACTIONS(531), 1,
      anon_sym_SQUOTE2,
    ACTIONS(501), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(505), 18,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3827] = 2,
    ACTIONS(533), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(535), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3859] = 2,
    ACTIONS(537), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(539), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3891] = 3,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(389), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(391), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3925] = 2,
    ACTIONS(543), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(545), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3957] = 3,
    ACTIONS(547), 1,
      aux_sym_argument_token1,
    ACTIONS(391), 6,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
    ACTIONS(389), 20,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3991] = 2,
    ACTIONS(549), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(551), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4023] = 2,
    ACTIONS(553), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(555), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4055] = 2,
    ACTIONS(557), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(559), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4087] = 2,
    ACTIONS(543), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(545), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4118] = 2,
    ACTIONS(533), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(535), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4149] = 2,
    ACTIONS(519), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(521), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4180] = 2,
    ACTIONS(549), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(551), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4211] = 2,
    ACTIONS(553), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(555), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4242] = 2,
    ACTIONS(537), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(539), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4273] = 2,
    ACTIONS(511), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(513), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4304] = 2,
    ACTIONS(557), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(559), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4335] = 2,
    ACTIONS(515), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(517), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4366] = 2,
    ACTIONS(527), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(529), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4397] = 2,
    ACTIONS(523), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(525), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF2,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4428] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(561), 1,
      anon_sym_LT,
    STATE(41), 1,
      sym__blank,
    STATE(107), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4445] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(563), 1,
      anon_sym_LT,
    STATE(34), 1,
      sym__blank,
    STATE(107), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4462] = 4,
    ACTIONS(565), 1,
      anon_sym_LT,
    ACTIONS(568), 1,
      anon_sym_LF2,
    ACTIONS(570), 1,
      aux_sym_line_li_token1,
    STATE(107), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4476] = 3,
    ACTIONS(364), 1,
      anon_sym_LF2,
    ACTIONS(366), 1,
      aux_sym_line_code_token1,
    STATE(40), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4487] = 3,
    ACTIONS(411), 1,
      anon_sym_LF2,
    ACTIONS(413), 1,
      aux_sym_line_code_token1,
    STATE(51), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4498] = 3,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(573), 1,
      anon_sym_LF2,
    STATE(24), 1,
      sym_tag,
  [4508] = 1,
    ACTIONS(575), 1,
      aux_sym_tag_token1,
  [4512] = 1,
    ACTIONS(577), 1,
      anon_sym_BQUOTE,
  [4516] = 1,
    ACTIONS(579), 1,
      anon_sym_SQUOTE2,
  [4520] = 1,
    ACTIONS(581), 1,
      anon_sym_STAR2,
  [4524] = 1,
    ACTIONS(583), 1,
      ts_builtin_sym_end,
  [4528] = 1,
    ACTIONS(585), 1,
      anon_sym_PIPE2,
  [4532] = 1,
    ACTIONS(346), 1,
      aux_sym_line_li_token1,
  [4536] = 1,
    ACTIONS(587), 1,
      anon_sym_RBRACE2,
  [4540] = 1,
    ACTIONS(589), 1,
      aux_sym_codespan_token1,
  [4544] = 1,
    ACTIONS(591), 1,
      anon_sym_SQUOTE2,
  [4548] = 1,
    ACTIONS(593), 1,
      anon_sym_PIPE2,
  [4552] = 1,
    ACTIONS(595), 1,
      anon_sym_RBRACE2,
  [4556] = 1,
    ACTIONS(597), 1,
      anon_sym_STAR2,
  [4560] = 1,
    ACTIONS(599), 1,
      anon_sym_BQUOTE,
  [4564] = 1,
    ACTIONS(601), 1,
      aux_sym_tag_token1,
  [4568] = 1,
    ACTIONS(603), 1,
      aux_sym_codespan_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 234,
  [SMALL_STATE(12)] = 312,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 546,
  [SMALL_STATE(16)] = 624,
  [SMALL_STATE(17)] = 702,
  [SMALL_STATE(18)] = 777,
  [SMALL_STATE(19)] = 852,
  [SMALL_STATE(20)] = 924,
  [SMALL_STATE(21)] = 992,
  [SMALL_STATE(22)] = 1064,
  [SMALL_STATE(23)] = 1136,
  [SMALL_STATE(24)] = 1208,
  [SMALL_STATE(25)] = 1275,
  [SMALL_STATE(26)] = 1342,
  [SMALL_STATE(27)] = 1409,
  [SMALL_STATE(28)] = 1476,
  [SMALL_STATE(29)] = 1543,
  [SMALL_STATE(30)] = 1607,
  [SMALL_STATE(31)] = 1671,
  [SMALL_STATE(32)] = 1735,
  [SMALL_STATE(33)] = 1799,
  [SMALL_STATE(34)] = 1844,
  [SMALL_STATE(35)] = 1889,
  [SMALL_STATE(36)] = 1936,
  [SMALL_STATE(37)] = 1981,
  [SMALL_STATE(38)] = 2026,
  [SMALL_STATE(39)] = 2071,
  [SMALL_STATE(40)] = 2116,
  [SMALL_STATE(41)] = 2161,
  [SMALL_STATE(42)] = 2206,
  [SMALL_STATE(43)] = 2251,
  [SMALL_STATE(44)] = 2296,
  [SMALL_STATE(45)] = 2343,
  [SMALL_STATE(46)] = 2388,
  [SMALL_STATE(47)] = 2428,
  [SMALL_STATE(48)] = 2469,
  [SMALL_STATE(49)] = 2506,
  [SMALL_STATE(50)] = 2543,
  [SMALL_STATE(51)] = 2582,
  [SMALL_STATE(52)] = 2623,
  [SMALL_STATE(53)] = 2660,
  [SMALL_STATE(54)] = 2696,
  [SMALL_STATE(55)] = 2732,
  [SMALL_STATE(56)] = 2768,
  [SMALL_STATE(57)] = 2804,
  [SMALL_STATE(58)] = 2840,
  [SMALL_STATE(59)] = 2876,
  [SMALL_STATE(60)] = 2912,
  [SMALL_STATE(61)] = 2948,
  [SMALL_STATE(62)] = 2984,
  [SMALL_STATE(63)] = 3020,
  [SMALL_STATE(64)] = 3059,
  [SMALL_STATE(65)] = 3094,
  [SMALL_STATE(66)] = 3132,
  [SMALL_STATE(67)] = 3170,
  [SMALL_STATE(68)] = 3204,
  [SMALL_STATE(69)] = 3238,
  [SMALL_STATE(70)] = 3272,
  [SMALL_STATE(71)] = 3312,
  [SMALL_STATE(72)] = 3352,
  [SMALL_STATE(73)] = 3389,
  [SMALL_STATE(74)] = 3424,
  [SMALL_STATE(75)] = 3461,
  [SMALL_STATE(76)] = 3496,
  [SMALL_STATE(77)] = 3531,
  [SMALL_STATE(78)] = 3568,
  [SMALL_STATE(79)] = 3601,
  [SMALL_STATE(80)] = 3633,
  [SMALL_STATE(81)] = 3665,
  [SMALL_STATE(82)] = 3697,
  [SMALL_STATE(83)] = 3729,
  [SMALL_STATE(84)] = 3761,
  [SMALL_STATE(85)] = 3793,
  [SMALL_STATE(86)] = 3827,
  [SMALL_STATE(87)] = 3859,
  [SMALL_STATE(88)] = 3891,
  [SMALL_STATE(89)] = 3925,
  [SMALL_STATE(90)] = 3957,
  [SMALL_STATE(91)] = 3991,
  [SMALL_STATE(92)] = 4023,
  [SMALL_STATE(93)] = 4055,
  [SMALL_STATE(94)] = 4087,
  [SMALL_STATE(95)] = 4118,
  [SMALL_STATE(96)] = 4149,
  [SMALL_STATE(97)] = 4180,
  [SMALL_STATE(98)] = 4211,
  [SMALL_STATE(99)] = 4242,
  [SMALL_STATE(100)] = 4273,
  [SMALL_STATE(101)] = 4304,
  [SMALL_STATE(102)] = 4335,
  [SMALL_STATE(103)] = 4366,
  [SMALL_STATE(104)] = 4397,
  [SMALL_STATE(105)] = 4428,
  [SMALL_STATE(106)] = 4445,
  [SMALL_STATE(107)] = 4462,
  [SMALL_STATE(108)] = 4476,
  [SMALL_STATE(109)] = 4487,
  [SMALL_STATE(110)] = 4498,
  [SMALL_STATE(111)] = 4508,
  [SMALL_STATE(112)] = 4512,
  [SMALL_STATE(113)] = 4516,
  [SMALL_STATE(114)] = 4520,
  [SMALL_STATE(115)] = 4524,
  [SMALL_STATE(116)] = 4528,
  [SMALL_STATE(117)] = 4532,
  [SMALL_STATE(118)] = 4536,
  [SMALL_STATE(119)] = 4540,
  [SMALL_STATE(120)] = 4544,
  [SMALL_STATE(121)] = 4548,
  [SMALL_STATE(122)] = 4552,
  [SMALL_STATE(123)] = 4556,
  [SMALL_STATE(124)] = 4560,
  [SMALL_STATE(125)] = 4564,
  [SMALL_STATE(126)] = 4568,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(89),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(63),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(89),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(46),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(73),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(75),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(87),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(87),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(70),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(117),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(31),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(32),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(111),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(79),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(119),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(63),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(111),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(79),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(94),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(65),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(94),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(50),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(90),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(99),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(99),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(77),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(125),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(100),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(126),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 17),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 17),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 17),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 17),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(83),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(63),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(83),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(46),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(73),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(87),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(87),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(111),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(79),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(119),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(103),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(65),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(103),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(50),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(90),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(99),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(99),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(125),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(100),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(126),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 19),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 19),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 14),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 14),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 15),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 15),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(52),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(52),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 8),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 8),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 20),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 20),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(48),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(64),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(64),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 13),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 13),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 6),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 6),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 6),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 6),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 6),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 6),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, .production_id = 6),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, .production_id = 6),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(78),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 18),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 18),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(84),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 10),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 10),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 9),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 9),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 9),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 9),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(117),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(31),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [583] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
