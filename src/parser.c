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
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  aux_sym_keycode_token1 = 19,
  aux_sym_keycode_token2 = 20,
  aux_sym_keycode_token3 = 21,
  aux_sym_keycode_token4 = 22,
  aux_sym_keycode_token5 = 23,
  aux_sym_keycode_token6 = 24,
  aux_sym_keycode_token7 = 25,
  aux_sym_keycode_token8 = 26,
  aux_sym_uppercase_name_token1 = 27,
  aux_sym_uppercase_name_token2 = 28,
  anon_sym_LT = 29,
  aux_sym_codeblock_token1 = 30,
  anon_sym_LF = 31,
  aux_sym_line_li_token1 = 32,
  aux_sym_line_code_token1 = 33,
  aux_sym_column_heading_token1 = 34,
  aux_sym_h1_token1 = 35,
  aux_sym_h2_token1 = 36,
  anon_sym_STAR = 37,
  aux_sym_tag_token1 = 38,
  anon_sym_STAR2 = 39,
  sym_url_word = 40,
  aux_sym_optionlink_token1 = 41,
  aux_sym_taglink_token1 = 42,
  anon_sym_LBRACE2 = 43,
  anon_sym_RBRACE2 = 44,
  anon_sym_LPAREN2 = 45,
  anon_sym_RPAREN = 46,
  anon_sym_BQUOTE = 47,
  anon_sym_PIPE2 = 48,
  anon_sym_BQUOTE2 = 49,
  aux_sym_codespan_token1 = 50,
  aux_sym_argument_token1 = 51,
  sym_help_file = 52,
  sym__atom = 53,
  sym_word = 54,
  sym__atom_noli = 55,
  sym_word_noli = 56,
  sym__atom_common = 57,
  sym__word_common = 58,
  sym_keycode = 59,
  sym_uppercase_name = 60,
  sym__uppercase_words = 61,
  sym_block = 62,
  sym_codeblock = 63,
  sym__blank = 64,
  sym_line = 65,
  sym_line_li = 66,
  sym_line_code = 67,
  sym__line_noli = 68,
  sym_column_heading = 69,
  sym_h1 = 70,
  sym_h2 = 71,
  sym_h3 = 72,
  sym_tag = 73,
  sym_url = 74,
  sym_optionlink = 75,
  sym_taglink = 76,
  sym_codespan = 77,
  sym_argument = 78,
  aux_sym_help_file_repeat1 = 79,
  aux_sym_help_file_repeat2 = 80,
  aux_sym_uppercase_name_repeat1 = 81,
  aux_sym_block_repeat1 = 82,
  aux_sym_block_repeat2 = 83,
  aux_sym_codeblock_repeat1 = 84,
  aux_sym_line_li_repeat1 = 85,
  aux_sym_line_li_repeat2 = 86,
  aux_sym_h3_repeat1 = 87,
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
  [aux_sym_h3_repeat1] = "h3_repeat1",
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
  [aux_sym_h3_repeat1] = aux_sym_h3_repeat1,
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
  [24] = 20,
  [25] = 25,
  [26] = 20,
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
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 45,
  [53] = 53,
  [54] = 43,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 32,
  [61] = 61,
  [62] = 62,
  [63] = 47,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 62,
  [68] = 57,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 62,
  [73] = 73,
  [74] = 74,
  [75] = 61,
  [76] = 64,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 69,
  [81] = 81,
  [82] = 82,
  [83] = 77,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 74,
  [90] = 90,
  [91] = 91,
  [92] = 85,
  [93] = 87,
  [94] = 88,
  [95] = 84,
  [96] = 77,
  [97] = 82,
  [98] = 69,
  [99] = 78,
  [100] = 90,
  [101] = 91,
  [102] = 79,
  [103] = 86,
  [104] = 81,
  [105] = 88,
  [106] = 78,
  [107] = 90,
  [108] = 79,
  [109] = 91,
  [110] = 87,
  [111] = 81,
  [112] = 85,
  [113] = 86,
  [114] = 84,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 120,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 124,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 123,
  [133] = 126,
  [134] = 134,
  [135] = 129,
  [136] = 130,
  [137] = 123,
  [138] = 126,
  [139] = 124,
  [140] = 129,
  [141] = 130,
  [142] = 134,
  [143] = 131,
  [144] = 134,
  [145] = 131,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(494);
      if (lookahead == '*') ADVANCE(414);
      if (lookahead == '+') ADVANCE(241);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == 'A') ADVANCE(249);
      if (lookahead == 'C') ADVANCE(251);
      if (lookahead == 'M') ADVANCE(247);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead == 'h') ADVANCE(252);
      if (lookahead == '{') ADVANCE(488);
      if (lookahead == '|') ADVANCE(498);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(255);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(272);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(272);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(273);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '<') ADVANCE(221);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(163);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '<') ADVANCE(398);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == 8226) ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(222);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '<') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '<') ADVANCE(398);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '*') ADVANCE(411);
      if (lookahead == '<') ADVANCE(258);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == 'A') ADVANCE(248);
      if (lookahead == 'C') ADVANCE(250);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '}') ADVANCE(279);
      if (lookahead == '~') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(243);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '*') ADVANCE(411);
      if (lookahead == '<') ADVANCE(258);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == 'A') ADVANCE(248);
      if (lookahead == 'C') ADVANCE(250);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '}') ADVANCE(279);
      if (lookahead == '~') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(243);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '*') ADVANCE(411);
      if (lookahead == '<') ADVANCE(258);
      if (lookahead == 'A') ADVANCE(248);
      if (lookahead == 'C') ADVANCE(250);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead == 'h') ADVANCE(256);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '}') ADVANCE(279);
      if (lookahead == '~') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(243);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(254);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'M') ADVANCE(64);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(45);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'M') ADVANCE(64);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(45);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '~') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '~') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '(') ADVANCE(493);
      if (lookahead == ')') ADVANCE(495);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '<') ADVANCE(485);
      if (lookahead == '>') ADVANCE(428);
      if (lookahead == 'A') ADVANCE(436);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'M') ADVANCE(435);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(444);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '~') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '(') ADVANCE(493);
      if (lookahead == ')') ADVANCE(495);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '<') ADVANCE(485);
      if (lookahead == '>') ADVANCE(428);
      if (lookahead == 'A') ADVANCE(436);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'M') ADVANCE(435);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(444);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '~') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '(') ADVANCE(493);
      if (lookahead == ')') ADVANCE(495);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '<') ADVANCE(485);
      if (lookahead == 'A') ADVANCE(436);
      if (lookahead == 'C') ADVANCE(439);
      if (lookahead == 'M') ADVANCE(435);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(444);
      if (lookahead == '{') ADVANCE(489);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '~') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(289);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '<') ADVANCE(558);
      if (lookahead == '>') ADVANCE(504);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'C') ADVANCE(522);
      if (lookahead == 'M') ADVANCE(518);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead == 'h') ADVANCE(527);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(289);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '<') ADVANCE(558);
      if (lookahead == '>') ADVANCE(504);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'C') ADVANCE(522);
      if (lookahead == 'M') ADVANCE(518);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead == 'h') ADVANCE(527);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(289);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '<') ADVANCE(558);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'C') ADVANCE(522);
      if (lookahead == 'M') ADVANCE(518);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead == 'h') ADVANCE(527);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0) ADVANCE(559);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead == '|') ADVANCE(498);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '>') ADVANCE(311);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(413);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(309);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(503);
      END_STATE();
    case 41:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(267);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 42:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '<') ADVANCE(221);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(163);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '<') ADVANCE(398);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(270);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(296);
      if (lookahead == 8226) ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(222);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'A') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'L') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'L') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(385);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == 'L') ADVANCE(384);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == 'T') ADVANCE(383);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '>') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(335);
      if (lookahead == 'D') ADVANCE(329);
      if (lookahead == 'I') ADVANCE(332);
      if (lookahead == 'P') ADVANCE(324);
      if (lookahead == 'S') ADVANCE(321);
      if (lookahead == '{') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(416);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'L') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '>') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '>') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '>') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '>') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'B') ADVANCE(318);
      if (lookahead == 'D') ADVANCE(316);
      if (lookahead == 'I') ADVANCE(317);
      if (lookahead == 'P') ADVANCE(314);
      if (lookahead == 'S') ADVANCE(313);
      if (lookahead == '{') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'D') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'g') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'k') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'p') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'w') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '}') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(153);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '-') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ':') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'A') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'L') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'L') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == 'E') ADVANCE(362);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == 'L') ADVANCE(361);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == 'T') ADVANCE(360);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '>') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(337);
      if (lookahead == 'D') ADVANCE(331);
      if (lookahead == 'I') ADVANCE(334);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == 'S') ADVANCE(322);
      if (lookahead == '{') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(209);
      if (lookahead == 'U') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(416);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\t') ADVANCE(272);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\t') ADVANCE(272);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'E') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'L') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'L') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'T') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 't') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(293);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(293);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == 't') ADVANCE(425);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(262);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(262);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(262);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(293);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '>') ADVANCE(305);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(416);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '|') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '|') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(559);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(266);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(266);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead == '}') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '}') ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '}') ADVANCE(280);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '{') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(404);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(404);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '>') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'H') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(76);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(197);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(390);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == '-') ADVANCE(365);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(357);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == 'L') ADVANCE(356);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == 'R') ADVANCE(359);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == 'T') ADVANCE(358);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(377);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(373);
      if (lookahead == 'D') ADVANCE(371);
      if (lookahead == 'I') ADVANCE(372);
      if (lookahead == 'P') ADVANCE(370);
      if (lookahead == 'S') ADVANCE(367);
      if (lookahead == '{') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'F') ADVANCE(369);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'H') ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'I') ADVANCE(366);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'T') ADVANCE(364);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == 'A') ADVANCE(380);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == 'L') ADVANCE(379);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(382);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == 'T') ADVANCE(378);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == 'T') ADVANCE(381);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(395);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '-') ADVANCE(394);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'B') ADVANCE(336);
      if (lookahead == 'D') ADVANCE(330);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == 'P') ADVANCE(325);
      if (lookahead == 'S') ADVANCE(323);
      if (lookahead == '{') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'F') ADVANCE(391);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'I') ADVANCE(389);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'T') ADVANCE(387);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(153);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == 's') ADVANCE(418);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ':') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(417);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == 't') ADVANCE(419);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(293);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == 's') ADVANCE(423);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(262);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ':') ADVANCE(263);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(262);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == 'p') ADVANCE(422);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(262);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == 't') ADVANCE(424);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(262);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(262);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(262);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '\t') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == '-') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == '-') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == '-') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == ':') ADVANCE(482);
      if (lookahead == 's') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == ':') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 'A') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 'E') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 'L') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 'L') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 'R') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 'T') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 'T') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 'T') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(450);
      if (lookahead == '>') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(449);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(449);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'B') ADVANCE(475);
      if (lookahead == 'D') ADVANCE(461);
      if (lookahead == 'I') ADVANCE(470);
      if (lookahead == 'P') ADVANCE(457);
      if (lookahead == 'S') ADVANCE(454);
      if (lookahead == '{') ADVANCE(460);
      if (lookahead == '|') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(471);
      if (lookahead == 'U') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '}') ADVANCE(280);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '{') ADVANCE(479);
      if (lookahead == '}') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(487);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == ' ') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == ' ') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(272);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(560);
      if (lookahead == '>') ADVANCE(532);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(532);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(351);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(312);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'B') ADVANCE(552);
      if (lookahead == 'D') ADVANCE(540);
      if (lookahead == 'I') ADVANCE(548);
      if (lookahead == 'P') ADVANCE(538);
      if (lookahead == 'S') ADVANCE(535);
      if (lookahead == '{') ADVANCE(327);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(347);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(339);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(559);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == '-') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == '-') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == '-') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == ':') ADVANCE(557);
      if (lookahead == 's') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == ':') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 'A') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 'E') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 'L') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 'L') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 'R') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 'p') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 't') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (lookahead == 't') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '(') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '>') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '>') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '>') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'D') ADVANCE(549);
      if (lookahead == 'U') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'F') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'H') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'I') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'T') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'e') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'g') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'k') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'p') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'r') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 's') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 't') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'w') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == '|') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(559);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(559);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 43},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 43},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 43},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 43},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 25},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 28},
  [118] = {.lex_state = 43},
  [119] = {.lex_state = 43},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 43},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 28},
  [125] = {.lex_state = 43},
  [126] = {.lex_state = 28},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 38},
  [130] = {.lex_state = 28},
  [131] = {.lex_state = 40},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 28},
  [134] = {.lex_state = 38},
  [135] = {.lex_state = 38},
  [136] = {.lex_state = 28},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 28},
  [139] = {.lex_state = 28},
  [140] = {.lex_state = 38},
  [141] = {.lex_state = 28},
  [142] = {.lex_state = 38},
  [143] = {.lex_state = 40},
  [144] = {.lex_state = 38},
  [145] = {.lex_state = 40},
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
    [aux_sym_keycode_token1] = ACTIONS(1),
    [aux_sym_keycode_token2] = ACTIONS(1),
    [aux_sym_keycode_token3] = ACTIONS(1),
    [aux_sym_keycode_token4] = ACTIONS(1),
    [aux_sym_keycode_token5] = ACTIONS(1),
    [aux_sym_keycode_token6] = ACTIONS(1),
    [aux_sym_keycode_token7] = ACTIONS(1),
    [aux_sym_keycode_token8] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_codeblock_token1] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
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
    [sym_help_file] = STATE(128),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(82),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(118),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(53),
    [sym__blank] = STATE(46),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(115),
    [sym__line_noli] = STATE(53),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(53),
    [sym_h2] = STATE(53),
    [sym_h3] = STATE(53),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(115),
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
    [aux_sym_keycode_token1] = ACTIONS(15),
    [aux_sym_keycode_token2] = ACTIONS(15),
    [aux_sym_keycode_token3] = ACTIONS(15),
    [aux_sym_keycode_token4] = ACTIONS(15),
    [aux_sym_keycode_token5] = ACTIONS(17),
    [aux_sym_keycode_token6] = ACTIONS(17),
    [aux_sym_keycode_token7] = ACTIONS(15),
    [aux_sym_keycode_token8] = ACTIONS(15),
    [aux_sym_uppercase_name_token1] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [aux_sym_codeblock_token1] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
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
    [sym__word_common] = STATE(82),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(118),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(53),
    [sym__blank] = STATE(46),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(115),
    [sym__line_noli] = STATE(53),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(53),
    [sym_h2] = STATE(53),
    [sym_h3] = STATE(53),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(42),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(115),
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
    [aux_sym_keycode_token1] = ACTIONS(15),
    [aux_sym_keycode_token2] = ACTIONS(15),
    [aux_sym_keycode_token3] = ACTIONS(15),
    [aux_sym_keycode_token4] = ACTIONS(15),
    [aux_sym_keycode_token5] = ACTIONS(17),
    [aux_sym_keycode_token6] = ACTIONS(17),
    [aux_sym_keycode_token7] = ACTIONS(15),
    [aux_sym_keycode_token8] = ACTIONS(15),
    [aux_sym_uppercase_name_token1] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [aux_sym_codeblock_token1] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
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
    [sym__word_common] = STATE(82),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(118),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(53),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(115),
    [sym__line_noli] = STATE(53),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(53),
    [sym_h2] = STATE(53),
    [sym_h3] = STATE(53),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(41),
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
    [aux_sym_keycode_token1] = ACTIONS(15),
    [aux_sym_keycode_token2] = ACTIONS(15),
    [aux_sym_keycode_token3] = ACTIONS(15),
    [aux_sym_keycode_token4] = ACTIONS(15),
    [aux_sym_keycode_token5] = ACTIONS(17),
    [aux_sym_keycode_token6] = ACTIONS(17),
    [aux_sym_keycode_token7] = ACTIONS(15),
    [aux_sym_keycode_token8] = ACTIONS(15),
    [aux_sym_uppercase_name_token1] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [aux_sym_codeblock_token1] = ACTIONS(23),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE2] = ACTIONS(37),
  },
  [4] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(82),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(118),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(53),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(115),
    [sym__line_noli] = STATE(53),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(53),
    [sym_h2] = STATE(53),
    [sym_h3] = STATE(53),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_noli_token1] = ACTIONS(45),
    [aux_sym_word_noli_token2] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(48),
    [aux_sym__word_common_token3] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(54),
    [aux_sym__word_common_token4] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(51),
    [aux_sym__word_common_token5] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(45),
    [aux_sym__word_common_token6] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(51),
    [aux_sym_keycode_token1] = ACTIONS(60),
    [aux_sym_keycode_token2] = ACTIONS(60),
    [aux_sym_keycode_token3] = ACTIONS(60),
    [aux_sym_keycode_token4] = ACTIONS(60),
    [aux_sym_keycode_token5] = ACTIONS(63),
    [aux_sym_keycode_token6] = ACTIONS(63),
    [aux_sym_keycode_token7] = ACTIONS(60),
    [aux_sym_keycode_token8] = ACTIONS(60),
    [aux_sym_uppercase_name_token1] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(69),
    [aux_sym_codeblock_token1] = ACTIONS(72),
    [aux_sym_line_li_token1] = ACTIONS(75),
    [aux_sym_h1_token1] = ACTIONS(78),
    [aux_sym_h2_token1] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(84),
    [sym_url_word] = ACTIONS(87),
    [anon_sym_BQUOTE2] = ACTIONS(90),
  },
  [5] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(82),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(118),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(53),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(115),
    [sym__line_noli] = STATE(53),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(53),
    [sym_h2] = STATE(53),
    [sym_h3] = STATE(53),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(115),
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
    [aux_sym_keycode_token1] = ACTIONS(15),
    [aux_sym_keycode_token2] = ACTIONS(15),
    [aux_sym_keycode_token3] = ACTIONS(15),
    [aux_sym_keycode_token4] = ACTIONS(15),
    [aux_sym_keycode_token5] = ACTIONS(17),
    [aux_sym_keycode_token6] = ACTIONS(17),
    [aux_sym_keycode_token7] = ACTIONS(15),
    [aux_sym_keycode_token8] = ACTIONS(15),
    [aux_sym_uppercase_name_token1] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [aux_sym_codeblock_token1] = ACTIONS(23),
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
    [sym__word_common] = STATE(82),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(118),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(53),
    [sym__blank] = STATE(41),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(116),
    [sym__line_noli] = STATE(53),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(53),
    [sym_h2] = STATE(53),
    [sym_h3] = STATE(53),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(116),
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
    [aux_sym_keycode_token1] = ACTIONS(15),
    [aux_sym_keycode_token2] = ACTIONS(15),
    [aux_sym_keycode_token3] = ACTIONS(15),
    [aux_sym_keycode_token4] = ACTIONS(15),
    [aux_sym_keycode_token5] = ACTIONS(17),
    [aux_sym_keycode_token6] = ACTIONS(17),
    [aux_sym_keycode_token7] = ACTIONS(15),
    [aux_sym_keycode_token8] = ACTIONS(15),
    [aux_sym_uppercase_name_token1] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(95),
    [aux_sym_codeblock_token1] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(25),
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
    [sym__word_common] = STATE(82),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(118),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(53),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(53),
    [sym_column_heading] = STATE(53),
    [sym_h1] = STATE(53),
    [sym_h2] = STATE(53),
    [sym_h3] = STATE(53),
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
    [aux_sym_keycode_token1] = ACTIONS(112),
    [aux_sym_keycode_token2] = ACTIONS(112),
    [aux_sym_keycode_token3] = ACTIONS(112),
    [aux_sym_keycode_token4] = ACTIONS(112),
    [aux_sym_keycode_token5] = ACTIONS(115),
    [aux_sym_keycode_token6] = ACTIONS(115),
    [aux_sym_keycode_token7] = ACTIONS(112),
    [aux_sym_keycode_token8] = ACTIONS(112),
    [aux_sym_uppercase_name_token1] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(121),
    [aux_sym_codeblock_token1] = ACTIONS(123),
    [anon_sym_LF] = ACTIONS(126),
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
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(159), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    STATE(12), 1,
      aux_sym_line_li_repeat2,
    STATE(71), 1,
      sym__line_noli,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(161), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(147), 6,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(23), 11,
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
  [77] = 17,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(169), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(71), 1,
      sym__line_noli,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(171), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(147), 6,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(23), 11,
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
  [154] = 17,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(173), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(71), 1,
      sym__line_noli,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(175), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(147), 6,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(23), 11,
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
  [231] = 17,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(177), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(71), 1,
      sym__line_noli,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(179), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(147), 6,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(23), 11,
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
  [308] = 17,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(181), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(71), 1,
      sym__line_noli,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(183), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(147), 6,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(23), 11,
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
  [385] = 17,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(185), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(71), 1,
      sym__line_noli,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(187), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(147), 6,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(23), 11,
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
  [462] = 17,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(189), 1,
      anon_sym_LT,
    STATE(10), 1,
      aux_sym_line_li_repeat2,
    STATE(71), 1,
      sym__line_noli,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(191), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(147), 6,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(23), 11,
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
  [539] = 17,
    ACTIONS(196), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(217), 1,
      anon_sym_LT,
    ACTIONS(221), 1,
      anon_sym_STAR,
    ACTIONS(224), 1,
      sym_url_word,
    ACTIONS(227), 1,
      anon_sym_BQUOTE2,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(71), 1,
      sym__line_noli,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(211), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(219), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(193), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(199), 6,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
    ACTIONS(208), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(23), 11,
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
  [616] = 17,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(230), 1,
      anon_sym_LT,
    STATE(11), 1,
      aux_sym_line_li_repeat2,
    STATE(71), 1,
      sym__line_noli,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(232), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(147), 6,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(23), 11,
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
  [693] = 17,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_codeblock_token1,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 1,
      aux_sym_column_heading_token1,
    ACTIONS(242), 1,
      anon_sym_STAR,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(57), 1,
      sym_codeblock,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(15), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(234), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_TILDE,
    ACTIONS(17), 5,
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
    STATE(86), 10,
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
  [768] = 17,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_codeblock_token1,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 1,
      aux_sym_column_heading_token1,
    STATE(17), 1,
      aux_sym_line_li_repeat1,
    STATE(61), 1,
      sym_codeblock,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(15), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(234), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_TILDE,
    ACTIONS(17), 5,
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
    STATE(86), 10,
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
  [843] = 16,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(252), 1,
      aux_sym_codeblock_token1,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(68), 1,
      sym_codeblock,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(155), 5,
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
    STATE(103), 10,
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
  [915] = 14,
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
    STATE(85), 1,
      sym__word_common,
    ACTIONS(258), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_TILDE,
    ACTIONS(273), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(279), 3,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(276), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(264), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    STATE(86), 10,
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
  [983] = 16,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(252), 1,
      aux_sym_codeblock_token1,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(155), 5,
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
    STATE(103), 10,
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
  [1055] = 16,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(252), 1,
      aux_sym_codeblock_token1,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(292), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(155), 5,
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
    STATE(103), 10,
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
  [1127] = 16,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(252), 1,
      aux_sym_codeblock_token1,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(294), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(75), 1,
      sym_codeblock,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(155), 5,
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
    STATE(103), 10,
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
  [1199] = 14,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    ACTIONS(317), 1,
      anon_sym_STAR,
    ACTIONS(320), 1,
      sym_url_word,
    ACTIONS(323), 1,
      anon_sym_BQUOTE2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(279), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(296), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(311), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(314), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(302), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(103), 10,
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
  [1266] = 14,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_LF,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(344), 1,
      sym_url_word,
    ACTIONS(346), 1,
      anon_sym_BQUOTE2,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(112), 1,
      sym__word_common,
    ACTIONS(326), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(336), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(338), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(113), 10,
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
  [1332] = 14,
    ACTIONS(279), 1,
      anon_sym_LF,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_STAR,
    ACTIONS(372), 1,
      sym_url_word,
    ACTIONS(375), 1,
      anon_sym_BQUOTE2,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(112), 1,
      sym__word_common,
    ACTIONS(348), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(363), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(366), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(354), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(113), 10,
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
  [1398] = 14,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(344), 1,
      sym_url_word,
    ACTIONS(346), 1,
      anon_sym_BQUOTE2,
    ACTIONS(378), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(112), 1,
      sym__word_common,
    ACTIONS(326), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(336), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(338), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(113), 10,
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
  [1464] = 13,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(155), 5,
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
    STATE(103), 10,
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
  [1527] = 13,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(344), 1,
      sym_url_word,
    ACTIONS(346), 1,
      anon_sym_BQUOTE2,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(112), 1,
      sym__word_common,
    ACTIONS(326), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(336), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(338), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(113), 10,
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
  [1590] = 13,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE2,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(248), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(155), 5,
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
    STATE(103), 10,
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
  [1653] = 13,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_STAR,
    ACTIONS(344), 1,
      sym_url_word,
    ACTIONS(346), 1,
      anon_sym_BQUOTE2,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(112), 1,
      sym__word_common,
    ACTIONS(326), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(336), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(338), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(113), 10,
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
  [1716] = 5,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(386), 1,
      aux_sym_line_code_token1,
    STATE(43), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(382), 3,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(380), 27,
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
  [1761] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(390), 15,
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
    ACTIONS(388), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [1806] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(394), 15,
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
    ACTIONS(392), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [1851] = 6,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(400), 1,
      aux_sym_line_li_token1,
    STATE(37), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(396), 15,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(398), 15,
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
  [1898] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(394), 15,
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
    ACTIONS(392), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [1943] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(390), 15,
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
    ACTIONS(388), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [1988] = 6,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(400), 1,
      aux_sym_line_li_token1,
    STATE(44), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(402), 15,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(404), 15,
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
  [2035] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(36), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(408), 15,
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
    ACTIONS(406), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2080] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(412), 15,
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
    ACTIONS(410), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2125] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(34), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(408), 15,
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
    ACTIONS(406), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2170] = 5,
    ACTIONS(418), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(416), 15,
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
    ACTIONS(414), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2215] = 5,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(428), 1,
      aux_sym_line_code_token1,
    STATE(43), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(423), 3,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(421), 27,
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
  [2260] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(433), 15,
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
    ACTIONS(431), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2305] = 3,
    ACTIONS(437), 5,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(439), 6,
      aux_sym_taglink_token1,
      anon_sym_LBRACE2,
      anon_sym_RBRACE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    ACTIONS(435), 22,
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
  [2345] = 2,
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
    ACTIONS(441), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2382] = 2,
    ACTIONS(447), 4,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(445), 28,
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
  [2419] = 3,
    ACTIONS(437), 4,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(449), 6,
      aux_sym_taglink_token1,
      anon_sym_LBRACE2,
      anon_sym_RBRACE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    ACTIONS(435), 22,
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
  [2458] = 2,
    ACTIONS(453), 15,
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
    ACTIONS(451), 17,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2495] = 2,
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
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2531] = 2,
    ACTIONS(459), 15,
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
    ACTIONS(461), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2567] = 3,
    ACTIONS(437), 3,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_LF,
    ACTIONS(463), 6,
      aux_sym_taglink_token1,
      anon_sym_LBRACE2,
      anon_sym_RBRACE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    ACTIONS(435), 22,
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
  [2605] = 2,
    ACTIONS(465), 15,
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
    ACTIONS(467), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2641] = 4,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      aux_sym_line_code_token1,
    STATE(54), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(421), 27,
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
  [2681] = 2,
    ACTIONS(475), 15,
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
    ACTIONS(477), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2717] = 2,
    ACTIONS(479), 15,
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
    ACTIONS(481), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2753] = 2,
    ACTIONS(483), 15,
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
    ACTIONS(485), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2789] = 2,
    ACTIONS(487), 15,
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
    ACTIONS(489), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2825] = 2,
    ACTIONS(491), 15,
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
    ACTIONS(493), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2861] = 4,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 1,
      aux_sym_line_code_token1,
    STATE(54), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(380), 27,
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
  [2901] = 2,
    ACTIONS(499), 15,
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
    ACTIONS(501), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2937] = 4,
    ACTIONS(505), 1,
      aux_sym_optionlink_token1,
    ACTIONS(503), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(437), 13,
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
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(435), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [2976] = 2,
    ACTIONS(447), 1,
      anon_sym_LF,
    ACTIONS(445), 28,
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
  [3010] = 4,
    ACTIONS(511), 1,
      aux_sym_uppercase_name_token2,
    STATE(64), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(507), 13,
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
    ACTIONS(509), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3048] = 5,
    ACTIONS(518), 1,
      aux_sym_uppercase_name_token2,
    STATE(64), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(520), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(516), 12,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(514), 13,
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
  [3088] = 5,
    ACTIONS(518), 1,
      aux_sym_uppercase_name_token2,
    STATE(65), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(526), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(524), 12,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(522), 13,
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
  [3128] = 4,
    ACTIONS(530), 1,
      aux_sym_optionlink_token1,
    ACTIONS(528), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(437), 12,
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
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(435), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3166] = 2,
    ACTIONS(485), 13,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(483), 15,
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
  [3199] = 3,
    ACTIONS(532), 1,
      aux_sym_argument_token1,
    ACTIONS(437), 8,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(435), 19,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
  [3234] = 4,
    ACTIONS(534), 1,
      aux_sym_uppercase_name_token2,
    STATE(76), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(514), 12,
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
    ACTIONS(516), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3271] = 2,
    ACTIONS(538), 13,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(536), 15,
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
  [3304] = 4,
    ACTIONS(542), 1,
      aux_sym_optionlink_token1,
    ACTIONS(540), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(437), 11,
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
      anon_sym_LF,
    ACTIONS(435), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3341] = 4,
    ACTIONS(534), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(522), 12,
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
    ACTIONS(524), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3378] = 2,
    ACTIONS(544), 14,
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
    ACTIONS(546), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3411] = 2,
    ACTIONS(501), 13,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE2,
    ACTIONS(499), 15,
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
  [3444] = 4,
    ACTIONS(548), 1,
      aux_sym_uppercase_name_token2,
    STATE(76), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(507), 12,
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
    ACTIONS(509), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3481] = 3,
    ACTIONS(553), 1,
      anon_sym_SQUOTE2,
    ACTIONS(551), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(555), 18,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3516] = 2,
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
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3548] = 2,
    ACTIONS(561), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(563), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3580] = 3,
    ACTIONS(565), 1,
      aux_sym_argument_token1,
    ACTIONS(437), 7,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(435), 19,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
  [3614] = 2,
    ACTIONS(567), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(569), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3646] = 2,
    ACTIONS(571), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(573), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3678] = 3,
    ACTIONS(575), 1,
      anon_sym_SQUOTE2,
    ACTIONS(551), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(555), 18,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3712] = 2,
    ACTIONS(577), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(579), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3744] = 2,
    ACTIONS(581), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(583), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3776] = 2,
    ACTIONS(585), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(587), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3808] = 2,
    ACTIONS(589), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(591), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3840] = 2,
    ACTIONS(593), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(595), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3872] = 2,
    ACTIONS(544), 13,
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
    ACTIONS(546), 14,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3904] = 2,
    ACTIONS(597), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(599), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3936] = 2,
    ACTIONS(601), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(603), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3968] = 2,
    ACTIONS(581), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(583), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [3999] = 2,
    ACTIONS(589), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(591), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4030] = 2,
    ACTIONS(593), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(595), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4061] = 2,
    ACTIONS(577), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(579), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4092] = 3,
    ACTIONS(605), 1,
      anon_sym_SQUOTE2,
    ACTIONS(551), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(555), 17,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4125] = 2,
    ACTIONS(571), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(573), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4156] = 3,
    ACTIONS(607), 1,
      aux_sym_argument_token1,
    ACTIONS(437), 6,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token6,
      anon_sym_LF,
    ACTIONS(435), 19,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
  [4189] = 2,
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
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4220] = 2,
    ACTIONS(597), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(599), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4251] = 2,
    ACTIONS(601), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(603), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4282] = 2,
    ACTIONS(561), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(563), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4313] = 2,
    ACTIONS(585), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(587), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4344] = 2,
    ACTIONS(567), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(569), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4375] = 2,
    ACTIONS(593), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(595), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4405] = 2,
    ACTIONS(557), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(559), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4435] = 2,
    ACTIONS(597), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(599), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4465] = 2,
    ACTIONS(561), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(563), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4495] = 2,
    ACTIONS(601), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(603), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4525] = 2,
    ACTIONS(589), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(591), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4555] = 2,
    ACTIONS(567), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(569), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4585] = 2,
    ACTIONS(581), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(583), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4615] = 2,
    ACTIONS(585), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(587), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4645] = 2,
    ACTIONS(577), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(579), 18,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE2,
  [4675] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(609), 1,
      anon_sym_LT,
    STATE(39), 1,
      sym__blank,
    STATE(117), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4692] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(611), 1,
      anon_sym_LT,
    STATE(33), 1,
      sym__blank,
    STATE(117), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4709] = 4,
    ACTIONS(613), 1,
      anon_sym_LT,
    ACTIONS(616), 1,
      anon_sym_LF,
    ACTIONS(618), 1,
      aux_sym_line_li_token1,
    STATE(117), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4723] = 3,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(621), 1,
      anon_sym_LF,
    STATE(121), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4734] = 3,
    ACTIONS(623), 1,
      anon_sym_LF,
    ACTIONS(625), 1,
      anon_sym_STAR,
    STATE(119), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4745] = 3,
    ACTIONS(495), 1,
      anon_sym_LF,
    ACTIONS(497), 1,
      aux_sym_line_code_token1,
    STATE(60), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4756] = 3,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(628), 1,
      anon_sym_LF,
    STATE(119), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4767] = 3,
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(386), 1,
      aux_sym_line_code_token1,
    STATE(32), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4778] = 1,
    ACTIONS(630), 1,
      anon_sym_SQUOTE2,
  [4782] = 1,
    ACTIONS(632), 1,
      anon_sym_RBRACE2,
  [4786] = 1,
    ACTIONS(400), 1,
      aux_sym_line_li_token1,
  [4790] = 1,
    ACTIONS(634), 1,
      anon_sym_PIPE2,
  [4794] = 1,
    ACTIONS(636), 1,
      anon_sym_RBRACE2,
  [4798] = 1,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
  [4802] = 1,
    ACTIONS(640), 1,
      anon_sym_STAR2,
  [4806] = 1,
    ACTIONS(642), 1,
      anon_sym_BQUOTE,
  [4810] = 1,
    ACTIONS(644), 1,
      aux_sym_codespan_token1,
  [4814] = 1,
    ACTIONS(646), 1,
      anon_sym_SQUOTE2,
  [4818] = 1,
    ACTIONS(648), 1,
      anon_sym_PIPE2,
  [4822] = 1,
    ACTIONS(650), 1,
      aux_sym_tag_token1,
  [4826] = 1,
    ACTIONS(652), 1,
      anon_sym_STAR2,
  [4830] = 1,
    ACTIONS(654), 1,
      anon_sym_BQUOTE,
  [4834] = 1,
    ACTIONS(656), 1,
      anon_sym_SQUOTE2,
  [4838] = 1,
    ACTIONS(658), 1,
      anon_sym_PIPE2,
  [4842] = 1,
    ACTIONS(660), 1,
      anon_sym_RBRACE2,
  [4846] = 1,
    ACTIONS(662), 1,
      anon_sym_STAR2,
  [4850] = 1,
    ACTIONS(664), 1,
      anon_sym_BQUOTE,
  [4854] = 1,
    ACTIONS(666), 1,
      aux_sym_tag_token1,
  [4858] = 1,
    ACTIONS(668), 1,
      aux_sym_codespan_token1,
  [4862] = 1,
    ACTIONS(670), 1,
      aux_sym_tag_token1,
  [4866] = 1,
    ACTIONS(672), 1,
      aux_sym_codespan_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 231,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 385,
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 539,
  [SMALL_STATE(16)] = 616,
  [SMALL_STATE(17)] = 693,
  [SMALL_STATE(18)] = 768,
  [SMALL_STATE(19)] = 843,
  [SMALL_STATE(20)] = 915,
  [SMALL_STATE(21)] = 983,
  [SMALL_STATE(22)] = 1055,
  [SMALL_STATE(23)] = 1127,
  [SMALL_STATE(24)] = 1199,
  [SMALL_STATE(25)] = 1266,
  [SMALL_STATE(26)] = 1332,
  [SMALL_STATE(27)] = 1398,
  [SMALL_STATE(28)] = 1464,
  [SMALL_STATE(29)] = 1527,
  [SMALL_STATE(30)] = 1590,
  [SMALL_STATE(31)] = 1653,
  [SMALL_STATE(32)] = 1716,
  [SMALL_STATE(33)] = 1761,
  [SMALL_STATE(34)] = 1806,
  [SMALL_STATE(35)] = 1851,
  [SMALL_STATE(36)] = 1898,
  [SMALL_STATE(37)] = 1943,
  [SMALL_STATE(38)] = 1988,
  [SMALL_STATE(39)] = 2035,
  [SMALL_STATE(40)] = 2080,
  [SMALL_STATE(41)] = 2125,
  [SMALL_STATE(42)] = 2170,
  [SMALL_STATE(43)] = 2215,
  [SMALL_STATE(44)] = 2260,
  [SMALL_STATE(45)] = 2305,
  [SMALL_STATE(46)] = 2345,
  [SMALL_STATE(47)] = 2382,
  [SMALL_STATE(48)] = 2419,
  [SMALL_STATE(49)] = 2458,
  [SMALL_STATE(50)] = 2495,
  [SMALL_STATE(51)] = 2531,
  [SMALL_STATE(52)] = 2567,
  [SMALL_STATE(53)] = 2605,
  [SMALL_STATE(54)] = 2641,
  [SMALL_STATE(55)] = 2681,
  [SMALL_STATE(56)] = 2717,
  [SMALL_STATE(57)] = 2753,
  [SMALL_STATE(58)] = 2789,
  [SMALL_STATE(59)] = 2825,
  [SMALL_STATE(60)] = 2861,
  [SMALL_STATE(61)] = 2901,
  [SMALL_STATE(62)] = 2937,
  [SMALL_STATE(63)] = 2976,
  [SMALL_STATE(64)] = 3010,
  [SMALL_STATE(65)] = 3048,
  [SMALL_STATE(66)] = 3088,
  [SMALL_STATE(67)] = 3128,
  [SMALL_STATE(68)] = 3166,
  [SMALL_STATE(69)] = 3199,
  [SMALL_STATE(70)] = 3234,
  [SMALL_STATE(71)] = 3271,
  [SMALL_STATE(72)] = 3304,
  [SMALL_STATE(73)] = 3341,
  [SMALL_STATE(74)] = 3378,
  [SMALL_STATE(75)] = 3411,
  [SMALL_STATE(76)] = 3444,
  [SMALL_STATE(77)] = 3481,
  [SMALL_STATE(78)] = 3516,
  [SMALL_STATE(79)] = 3548,
  [SMALL_STATE(80)] = 3580,
  [SMALL_STATE(81)] = 3614,
  [SMALL_STATE(82)] = 3646,
  [SMALL_STATE(83)] = 3678,
  [SMALL_STATE(84)] = 3712,
  [SMALL_STATE(85)] = 3744,
  [SMALL_STATE(86)] = 3776,
  [SMALL_STATE(87)] = 3808,
  [SMALL_STATE(88)] = 3840,
  [SMALL_STATE(89)] = 3872,
  [SMALL_STATE(90)] = 3904,
  [SMALL_STATE(91)] = 3936,
  [SMALL_STATE(92)] = 3968,
  [SMALL_STATE(93)] = 3999,
  [SMALL_STATE(94)] = 4030,
  [SMALL_STATE(95)] = 4061,
  [SMALL_STATE(96)] = 4092,
  [SMALL_STATE(97)] = 4125,
  [SMALL_STATE(98)] = 4156,
  [SMALL_STATE(99)] = 4189,
  [SMALL_STATE(100)] = 4220,
  [SMALL_STATE(101)] = 4251,
  [SMALL_STATE(102)] = 4282,
  [SMALL_STATE(103)] = 4313,
  [SMALL_STATE(104)] = 4344,
  [SMALL_STATE(105)] = 4375,
  [SMALL_STATE(106)] = 4405,
  [SMALL_STATE(107)] = 4435,
  [SMALL_STATE(108)] = 4465,
  [SMALL_STATE(109)] = 4495,
  [SMALL_STATE(110)] = 4525,
  [SMALL_STATE(111)] = 4555,
  [SMALL_STATE(112)] = 4585,
  [SMALL_STATE(113)] = 4615,
  [SMALL_STATE(114)] = 4645,
  [SMALL_STATE(115)] = 4675,
  [SMALL_STATE(116)] = 4692,
  [SMALL_STATE(117)] = 4709,
  [SMALL_STATE(118)] = 4723,
  [SMALL_STATE(119)] = 4734,
  [SMALL_STATE(120)] = 4745,
  [SMALL_STATE(121)] = 4756,
  [SMALL_STATE(122)] = 4767,
  [SMALL_STATE(123)] = 4778,
  [SMALL_STATE(124)] = 4782,
  [SMALL_STATE(125)] = 4786,
  [SMALL_STATE(126)] = 4790,
  [SMALL_STATE(127)] = 4794,
  [SMALL_STATE(128)] = 4798,
  [SMALL_STATE(129)] = 4802,
  [SMALL_STATE(130)] = 4806,
  [SMALL_STATE(131)] = 4810,
  [SMALL_STATE(132)] = 4814,
  [SMALL_STATE(133)] = 4818,
  [SMALL_STATE(134)] = 4822,
  [SMALL_STATE(135)] = 4826,
  [SMALL_STATE(136)] = 4830,
  [SMALL_STATE(137)] = 4834,
  [SMALL_STATE(138)] = 4838,
  [SMALL_STATE(139)] = 4842,
  [SMALL_STATE(140)] = 4846,
  [SMALL_STATE(141)] = 4850,
  [SMALL_STATE(142)] = 4854,
  [SMALL_STATE(143)] = 4858,
  [SMALL_STATE(144)] = 4862,
  [SMALL_STATE(145)] = 4866,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(82),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(62),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(82),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(45),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(69),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(125),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(122),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(31),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(29),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(134),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(84),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(131),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(122),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(84),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(131),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 17),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 17),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 17),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 17),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(97),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(67),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(97),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(48),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(80),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(94),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(94),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(73),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(142),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(95),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(143),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(85),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(62),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(85),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(45),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(69),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(88),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(88),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(134),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(84),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(131),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(92),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(67),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(92),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(48),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(80),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(94),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(94),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(142),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(95),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(143),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(112),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(72),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(112),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(52),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(98),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(105),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(105),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(144),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(114),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(145),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 14),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 14),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 15),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 15),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 8),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 8),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 20),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 20),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(49),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(47),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(47),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 19),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 19),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 6),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 6),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 13),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 13),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(63),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(63),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 6),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 6),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 6),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(74),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 18),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 18),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(89),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 9),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 9),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 9),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 9),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 10),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 10),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(125),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(30),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2), SHIFT_REPEAT(134),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [638] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
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
