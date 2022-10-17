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
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 20

enum {
  aux_sym_word_token1 = 1,
  aux_sym_word_token2 = 2,
  aux_sym_word_noli_token1 = 3,
  aux_sym_word_noli_token2 = 4,
  aux_sym__word_common_token1 = 5,
  anon_sym_SQUOTE = 6,
  aux_sym__word_common_token2 = 7,
  anon_sym_SQUOTE2 = 8,
  aux_sym__word_common_token3 = 9,
  aux_sym__word_common_token4 = 10,
  anon_sym_PIPE = 11,
  aux_sym__word_common_token5 = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACE_RBRACE = 15,
  aux_sym__word_common_token6 = 16,
  anon_sym_LPAREN = 17,
  aux_sym__word_common_token7 = 18,
  anon_sym_TILDE = 19,
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
  aux_sym_codeblock_token1 = 31,
  anon_sym_LF = 32,
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
  anon_sym_PIPE2 = 44,
  anon_sym_BQUOTE = 45,
  aux_sym_codespan_token1 = 46,
  anon_sym_BQUOTE2 = 47,
  aux_sym_argument_token1 = 48,
  anon_sym_RBRACE2 = 49,
  sym_help_file = 50,
  sym__atom = 51,
  sym_word = 52,
  sym__atom_noli = 53,
  sym_word_noli = 54,
  sym__atom_common = 55,
  sym__word_common = 56,
  sym_keycode = 57,
  sym_uppercase_name = 58,
  sym__uppercase_words = 59,
  sym_block = 60,
  sym_codeblock = 61,
  sym__blank = 62,
  sym_line = 63,
  sym_line_li = 64,
  sym_line_code = 65,
  sym__line_noli = 66,
  sym_column_heading = 67,
  sym_h1 = 68,
  sym_h2 = 69,
  sym_h3 = 70,
  sym_tag = 71,
  sym_url = 72,
  sym_optionlink = 73,
  sym_taglink = 74,
  sym_codespan = 75,
  sym_argument = 76,
  aux_sym_help_file_repeat1 = 77,
  aux_sym_help_file_repeat2 = 78,
  aux_sym_uppercase_name_repeat1 = 79,
  aux_sym_block_repeat1 = 80,
  aux_sym_block_repeat2 = 81,
  aux_sym_codeblock_repeat1 = 82,
  aux_sym_line_li_repeat1 = 83,
  aux_sym_line_li_repeat2 = 84,
  aux_sym_h3_repeat1 = 85,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_word_token2] = "word_token2",
  [aux_sym_word_noli_token1] = "word_noli_token1",
  [aux_sym_word_noli_token2] = "word_noli_token2",
  [aux_sym__word_common_token1] = "_word_common_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__word_common_token2] = "_word_common_token2",
  [anon_sym_SQUOTE2] = "'",
  [aux_sym__word_common_token3] = "_word_common_token3",
  [aux_sym__word_common_token4] = "_word_common_token4",
  [anon_sym_PIPE] = "|",
  [aux_sym__word_common_token5] = "_word_common_token5",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [aux_sym__word_common_token6] = "_word_common_token6",
  [anon_sym_LPAREN] = "(",
  [aux_sym__word_common_token7] = "_word_common_token7",
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
  [anon_sym_PIPE2] = "|",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_codespan_token1] = "word",
  [anon_sym_BQUOTE2] = "`",
  [aux_sym_argument_token1] = "word",
  [anon_sym_RBRACE2] = "}",
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
  [aux_sym__word_common_token1] = aux_sym__word_common_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__word_common_token2] = aux_sym__word_common_token2,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym__word_common_token3] = aux_sym__word_common_token3,
  [aux_sym__word_common_token4] = aux_sym__word_common_token4,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym__word_common_token5] = aux_sym__word_common_token5,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [aux_sym__word_common_token6] = aux_sym__word_common_token6,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__word_common_token7] = aux_sym__word_common_token7,
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
  [anon_sym_PIPE2] = anon_sym_PIPE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_codespan_token1] = sym_word,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [aux_sym_argument_token1] = sym_word,
  [anon_sym_RBRACE2] = anon_sym_RBRACE,
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
  [aux_sym__word_common_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
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
  [aux_sym__word_common_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token5] = {
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
  [aux_sym__word_common_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token7] = {
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
  [aux_sym_argument_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE2] = {
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
  [12] = {.index = 8, .length = 2},
  [13] = {.index = 10, .length = 1},
  [14] = {.index = 11, .length = 2},
  [18] = {.index = 13, .length = 1},
  [19] = {.index = 14, .length = 2},
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
    [1] = sym_line,
    [2] = sym_line,
  },
  [11] = {
    [1] = sym_line,
  },
  [15] = {
    [2] = sym_line,
    [3] = sym_line,
  },
  [16] = {
    [2] = sym_line,
  },
  [17] = {
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
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 21,
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
  [57] = 34,
  [58] = 37,
  [59] = 59,
  [60] = 45,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 54,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 52,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 71,
  [75] = 65,
  [76] = 76,
  [77] = 66,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 72,
  [87] = 76,
  [88] = 85,
  [89] = 84,
  [90] = 65,
  [91] = 83,
  [92] = 81,
  [93] = 80,
  [94] = 73,
  [95] = 79,
  [96] = 82,
  [97] = 78,
  [98] = 66,
  [99] = 83,
  [100] = 81,
  [101] = 73,
  [102] = 79,
  [103] = 72,
  [104] = 84,
  [105] = 85,
  [106] = 76,
  [107] = 82,
  [108] = 78,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 117,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 121,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 127,
  [129] = 120,
  [130] = 125,
  [131] = 131,
  [132] = 122,
  [133] = 131,
  [134] = 127,
  [135] = 120,
  [136] = 125,
  [137] = 131,
  [138] = 122,
  [139] = 121,
  [140] = 140,
  [141] = 124,
  [142] = 142,
  [143] = 142,
  [144] = 124,
  [145] = 142,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '+') ADVANCE(241);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '>') ADVANCE(243);
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead == 'C') ADVANCE(246);
      if (lookahead == 'M') ADVANCE(244);
      if (lookahead == '_') ADVANCE(250);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(248);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(482);
      if (lookahead == '}') ADVANCE(547);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(259);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(259);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(260);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '<') ADVANCE(395);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == '|') ADVANCE(482);
      if (lookahead == '}') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == 'M') ADVANCE(152);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == 8226) ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(217);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == 'M') ADVANCE(152);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == 'M') ADVANCE(152);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'C') ADVANCE(166);
      if (lookahead == 'M') ADVANCE(162);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(40);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(40);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == 'M') ADVANCE(107);
      if (lookahead == '`') ADVANCE(484);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '|') ADVANCE(256);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '~') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == '*') ADVANCE(407);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == 'M') ADVANCE(107);
      if (lookahead == '`') ADVANCE(484);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '|') ADVANCE(256);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '~') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '<') ADVANCE(543);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(504);
      if (lookahead == 'C') ADVANCE(507);
      if (lookahead == 'M') ADVANCE(503);
      if (lookahead == '`') ADVANCE(485);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '<') ADVANCE(543);
      if (lookahead == '>') ADVANCE(489);
      if (lookahead == 'A') ADVANCE(504);
      if (lookahead == 'C') ADVANCE(507);
      if (lookahead == 'M') ADVANCE(503);
      if (lookahead == '`') ADVANCE(485);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '<') ADVANCE(543);
      if (lookahead == 'A') ADVANCE(504);
      if (lookahead == 'C') ADVANCE(507);
      if (lookahead == 'M') ADVANCE(503);
      if (lookahead == '`') ADVANCE(485);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0) ADVANCE(544);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '<') ADVANCE(479);
      if (lookahead == '>') ADVANCE(422);
      if (lookahead == 'A') ADVANCE(430);
      if (lookahead == 'C') ADVANCE(433);
      if (lookahead == 'M') ADVANCE(429);
      if (lookahead == '`') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '<') ADVANCE(479);
      if (lookahead == '>') ADVANCE(422);
      if (lookahead == 'A') ADVANCE(430);
      if (lookahead == 'C') ADVANCE(433);
      if (lookahead == 'M') ADVANCE(429);
      if (lookahead == '`') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '<') ADVANCE(479);
      if (lookahead == 'A') ADVANCE(430);
      if (lookahead == 'C') ADVANCE(433);
      if (lookahead == 'M') ADVANCE(429);
      if (lookahead == '`') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(438);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(401);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(411);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(294);
      END_STATE();
    case 34:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(239);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(487);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(40);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == 'M') ADVANCE(152);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == 8226) ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(217);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'C') ADVANCE(166);
      if (lookahead == 'M') ADVANCE(162);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == 'h') ADVANCE(171);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '~') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'A') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'E') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'L') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'L') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'R') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'T') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'T') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'T') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'E') ADVANCE(384);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'L') ADVANCE(383);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(382);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '>') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(320);
      if (lookahead == 'D') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(317);
      if (lookahead == 'P') ADVANCE(309);
      if (lookahead == 'S') ADVANCE(308);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(414);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == ':') ADVANCE(146);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == ':') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 'T') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '>') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '>') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '>') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'B') ADVANCE(303);
      if (lookahead == 'D') ADVANCE(301);
      if (lookahead == 'I') ADVANCE(302);
      if (lookahead == 'P') ADVANCE(299);
      if (lookahead == 'S') ADVANCE(298);
      if (lookahead == '{') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'D') ADVANCE(138);
      if (lookahead == 'U') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'F') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'I') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'g') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'k') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'l') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'w') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '}') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(148);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'E') ADVANCE(354);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(355);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'T') ADVANCE(351);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '-') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '-') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ':') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'A') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'E') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'L') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'L') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'R') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'T') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'T') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'T') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '>') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(322);
      if (lookahead == 'D') ADVANCE(316);
      if (lookahead == 'I') ADVANCE(319);
      if (lookahead == 'P') ADVANCE(311);
      if (lookahead == 'S') ADVANCE(307);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(204);
      if (lookahead == 'U') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(414);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\t') ADVANCE(259);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'E') ADVANCE(353);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(352);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'T') ADVANCE(350);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 't') ADVANCE(418);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(280);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(239);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '|') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '|') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(544);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(254);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '}') ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(473);
      if (lookahead == '}') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '{') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(403);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'H') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(389);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(192);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(71);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == '-') ADVANCE(359);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'A') ADVANCE(344);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(342);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'L') ADVANCE(345);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'R') ADVANCE(348);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'R') ADVANCE(349);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'T') ADVANCE(340);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'T') ADVANCE(347);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'T') ADVANCE(346);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(371);
      if (lookahead == 'D') ADVANCE(367);
      if (lookahead == 'I') ADVANCE(369);
      if (lookahead == 'P') ADVANCE(365);
      if (lookahead == 'S') ADVANCE(362);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(372);
      if (lookahead == 'D') ADVANCE(368);
      if (lookahead == 'I') ADVANCE(370);
      if (lookahead == 'P') ADVANCE(366);
      if (lookahead == 'S') ADVANCE(362);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'H') ADVANCE(363);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'T') ADVANCE(358);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == '-') ADVANCE(391);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == '-') ADVANCE(387);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'A') ADVANCE(379);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'L') ADVANCE(378);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(377);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'T') ADVANCE(380);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'B') ADVANCE(321);
      if (lookahead == 'D') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(318);
      if (lookahead == 'P') ADVANCE(310);
      if (lookahead == 'S') ADVANCE(306);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'F') ADVANCE(390);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'I') ADVANCE(388);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'T') ADVANCE(386);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(401);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(148);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 's') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == ':') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(415);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == 't') ADVANCE(417);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(280);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(239);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '\t') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == '-') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == '-') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == '-') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == ':') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 'A') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 'E') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 'L') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 'L') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 'R') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 'T') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 'T') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 'T') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 't') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == 't') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '>') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(443);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'B') ADVANCE(469);
      if (lookahead == 'D') ADVANCE(455);
      if (lookahead == 'I') ADVANCE(464);
      if (lookahead == 'P') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(448);
      if (lookahead == '{') ADVANCE(454);
      if (lookahead == '|') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(481);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(465);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(481);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(481);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(414);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(481);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(481);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == ' ') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(398);
      if (lookahead == ' ') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(259);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(545);
      if (lookahead == '>') ADVANCE(517);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(336);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(544);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(297);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'B') ADVANCE(537);
      if (lookahead == 'D') ADVANCE(525);
      if (lookahead == 'I') ADVANCE(533);
      if (lookahead == 'P') ADVANCE(523);
      if (lookahead == 'S') ADVANCE(520);
      if (lookahead == '{') ADVANCE(312);
      if (lookahead == '}') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(544);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(332);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(544);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(324);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(544);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == '-') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == '-') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == '-') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == ':') ADVANCE(542);
      if (lookahead == 's') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == ':') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'A') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'L') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'L') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'R') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'p') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 't') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '(') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == '>') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '-') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '>') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '>') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'D') ADVANCE(534);
      if (lookahead == 'U') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'F') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'H') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'I') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'T') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'a') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'g') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'k') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'l') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'n') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 's') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 't') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'w') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '|') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(544);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(544);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
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
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 37},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 34},
  [118] = {.lex_state = 34},
  [119] = {.lex_state = 34},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 32},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 32},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 37},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 32},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 32},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 32},
  [142] = {.lex_state = 35},
  [143] = {.lex_state = 35},
  [144] = {.lex_state = 32},
  [145] = {.lex_state = 35},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_noli_token1] = ACTIONS(1),
    [aux_sym_word_noli_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym__word_common_token3] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym__word_common_token5] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [aux_sym__word_common_token6] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym__word_common_token7] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_keycode_token1] = ACTIONS(1),
    [aux_sym_keycode_token2] = ACTIONS(1),
    [aux_sym_keycode_token3] = ACTIONS(1),
    [aux_sym_keycode_token4] = ACTIONS(1),
    [aux_sym_keycode_token5] = ACTIONS(1),
    [aux_sym_keycode_token6] = ACTIONS(1),
    [aux_sym_keycode_token7] = ACTIONS(1),
    [aux_sym_keycode_token8] = ACTIONS(1),
    [aux_sym_uppercase_name_token1] = ACTIONS(1),
    [aux_sym_uppercase_name_token2] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_codeblock_token1] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [sym_url_word] = ACTIONS(1),
    [aux_sym_optionlink_token1] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(140),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(114),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(50),
    [sym__blank] = STATE(46),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(109),
    [sym__line_noli] = STATE(50),
    [sym_column_heading] = STATE(50),
    [sym_h1] = STATE(50),
    [sym_h2] = STATE(50),
    [sym_h3] = STATE(50),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [aux_sym__word_common_token1] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token4] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__word_common_token5] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(7),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token7] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
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
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [2] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(114),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(50),
    [sym__blank] = STATE(46),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(109),
    [sym__line_noli] = STATE(50),
    [sym_column_heading] = STATE(50),
    [sym_h1] = STATE(50),
    [sym_h2] = STATE(50),
    [sym_h3] = STATE(50),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(33),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [aux_sym__word_common_token1] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token4] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__word_common_token5] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(7),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token7] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
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
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [3] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(114),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(50),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(109),
    [sym__line_noli] = STATE(50),
    [sym_column_heading] = STATE(50),
    [sym_h1] = STATE(50),
    [sym_h2] = STATE(50),
    [sym_h3] = STATE(50),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_word_noli_token1] = ACTIONS(43),
    [aux_sym_word_noli_token2] = ACTIONS(43),
    [aux_sym__word_common_token1] = ACTIONS(46),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [aux_sym__word_common_token4] = ACTIONS(46),
    [anon_sym_PIPE] = ACTIONS(52),
    [aux_sym__word_common_token5] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(46),
    [aux_sym__word_common_token6] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(43),
    [aux_sym__word_common_token7] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(46),
    [aux_sym_keycode_token1] = ACTIONS(58),
    [aux_sym_keycode_token2] = ACTIONS(58),
    [aux_sym_keycode_token3] = ACTIONS(58),
    [aux_sym_keycode_token4] = ACTIONS(58),
    [aux_sym_keycode_token5] = ACTIONS(61),
    [aux_sym_keycode_token6] = ACTIONS(61),
    [aux_sym_keycode_token7] = ACTIONS(58),
    [aux_sym_keycode_token8] = ACTIONS(58),
    [aux_sym_uppercase_name_token1] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(67),
    [aux_sym_codeblock_token1] = ACTIONS(70),
    [aux_sym_line_li_token1] = ACTIONS(73),
    [aux_sym_h1_token1] = ACTIONS(76),
    [aux_sym_h2_token1] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(82),
    [sym_url_word] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(88),
  },
  [4] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(114),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(50),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(109),
    [sym__line_noli] = STATE(50),
    [sym_column_heading] = STATE(50),
    [sym_h1] = STATE(50),
    [sym_h2] = STATE(50),
    [sym_h3] = STATE(50),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [aux_sym__word_common_token1] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token4] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__word_common_token5] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(7),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token7] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
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
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [5] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(114),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(50),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(109),
    [sym__line_noli] = STATE(50),
    [sym_column_heading] = STATE(50),
    [sym_h1] = STATE(50),
    [sym_h2] = STATE(50),
    [sym_h3] = STATE(50),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [aux_sym__word_common_token1] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token4] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__word_common_token5] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(7),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token7] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
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
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [6] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(114),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(50),
    [sym__blank] = STATE(39),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(110),
    [sym__line_noli] = STATE(50),
    [sym_column_heading] = STATE(50),
    [sym_h1] = STATE(50),
    [sym_h2] = STATE(50),
    [sym_h3] = STATE(50),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(110),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [aux_sym__word_common_token1] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token4] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(11),
    [aux_sym__word_common_token5] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(7),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token7] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
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
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [7] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(114),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(50),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(50),
    [sym_column_heading] = STATE(50),
    [sym_h1] = STATE(50),
    [sym_h2] = STATE(50),
    [sym_h3] = STATE(50),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_word_noli_token1] = ACTIONS(97),
    [aux_sym_word_noli_token2] = ACTIONS(97),
    [aux_sym__word_common_token1] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [aux_sym__word_common_token4] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(106),
    [aux_sym__word_common_token5] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(100),
    [aux_sym__word_common_token6] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(97),
    [aux_sym__word_common_token7] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(100),
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
    [anon_sym_BQUOTE] = ACTIONS(140),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(147), 1,
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
      anon_sym_BQUOTE,
    STATE(12), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(93), 1,
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
      aux_sym__word_common_token7,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(145), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(193), 1,
      anon_sym_LT,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(200), 1,
      sym_url_word,
    ACTIONS(203), 1,
      anon_sym_BQUOTE,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(187), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(195), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(169), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
    ACTIONS(184), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(172), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
    ACTIONS(147), 1,
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
      anon_sym_BQUOTE,
    ACTIONS(206), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(208), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(145), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
    ACTIONS(147), 1,
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
      anon_sym_BQUOTE,
    ACTIONS(210), 1,
      anon_sym_LT,
    STATE(14), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(212), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(145), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
    ACTIONS(147), 1,
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
      anon_sym_BQUOTE,
    ACTIONS(214), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(216), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(145), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
    ACTIONS(147), 1,
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
      anon_sym_BQUOTE,
    ACTIONS(218), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(220), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(145), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
    ACTIONS(147), 1,
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
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(224), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(145), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
    ACTIONS(147), 1,
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
      anon_sym_BQUOTE,
    ACTIONS(226), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(228), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(143), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(145), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
    ACTIONS(147), 1,
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
      anon_sym_BQUOTE,
    ACTIONS(230), 1,
      anon_sym_LT,
    STATE(13), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(93), 1,
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
      aux_sym__word_common_token7,
    ACTIONS(153), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(145), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
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
    ACTIONS(9), 1,
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
      anon_sym_BQUOTE,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 1,
      aux_sym_column_heading_token1,
    ACTIONS(242), 1,
      anon_sym_STAR,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(54), 1,
      sym_codeblock,
    STATE(73), 1,
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
    ACTIONS(236), 8,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
    STATE(79), 10,
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
  [778] = 17,
    ACTIONS(9), 1,
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
      anon_sym_BQUOTE,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 1,
      aux_sym_column_heading_token1,
    STATE(17), 1,
      aux_sym_line_li_repeat1,
    STATE(52), 1,
      sym_codeblock,
    STATE(73), 1,
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
    ACTIONS(236), 8,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
    STATE(79), 10,
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
  [854] = 16,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(252), 1,
      aux_sym_codeblock_token1,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(64), 1,
      sym_codeblock,
    STATE(94), 1,
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
    ACTIONS(250), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(95), 10,
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
  [927] = 16,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(252), 1,
      aux_sym_codeblock_token1,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(258), 1,
      anon_sym_LF,
    STATE(11), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(94), 1,
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
    ACTIONS(250), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(95), 10,
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
  [1000] = 14,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(286), 1,
      sym_url_word,
    ACTIONS(289), 1,
      anon_sym_BQUOTE,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(73), 1,
      sym__word_common,
    ACTIONS(260), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_TILDE,
    ACTIONS(275), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(281), 3,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(278), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(263), 8,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
    STATE(79), 10,
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
  [1069] = 16,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(252), 1,
      aux_sym_codeblock_token1,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(292), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(70), 1,
      sym_codeblock,
    STATE(94), 1,
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
    ACTIONS(250), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(95), 10,
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
  [1142] = 16,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(252), 1,
      aux_sym_codeblock_token1,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(294), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(94), 1,
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
    ACTIONS(250), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(95), 10,
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
  [1215] = 14,
    ACTIONS(302), 1,
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
      anon_sym_BQUOTE,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(281), 2,
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
    ACTIONS(299), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(95), 10,
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
  [1283] = 14,
    ACTIONS(330), 1,
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
      anon_sym_BQUOTE,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(101), 1,
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
    ACTIONS(328), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(102), 10,
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
  [1350] = 14,
    ACTIONS(330), 1,
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
      anon_sym_BQUOTE,
    ACTIONS(348), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(101), 1,
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
    ACTIONS(328), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(102), 10,
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
  [1417] = 14,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
    ACTIONS(371), 1,
      anon_sym_STAR,
    ACTIONS(374), 1,
      sym_url_word,
    ACTIONS(377), 1,
      anon_sym_BQUOTE,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(101), 1,
      sym__word_common,
    ACTIONS(350), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(365), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(368), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(353), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(102), 10,
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
  [1484] = 13,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(94), 1,
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
    ACTIONS(250), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(95), 10,
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
  [1548] = 13,
    ACTIONS(330), 1,
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
      anon_sym_BQUOTE,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(101), 1,
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
    ACTIONS(328), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(102), 10,
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
  [1612] = 13,
    ACTIONS(330), 1,
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
      anon_sym_BQUOTE,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(101), 1,
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
    ACTIONS(328), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(102), 10,
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
  [1676] = 13,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(94), 1,
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
    ACTIONS(250), 9,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
    STATE(95), 10,
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
  [1740] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(380), 16,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(382), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [1786] = 5,
    ACTIONS(388), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(384), 16,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(386), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [1832] = 5,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      aux_sym_line_code_token1,
    STATE(37), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(393), 3,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(391), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [1878] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(399), 16,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(401), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [1924] = 6,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(407), 1,
      aux_sym_line_li_token1,
    STATE(44), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(403), 15,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(405), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [1972] = 5,
    ACTIONS(413), 1,
      anon_sym_LF,
    ACTIONS(416), 1,
      aux_sym_line_code_token1,
    STATE(37), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(411), 3,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(409), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [2018] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(419), 16,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(421), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2064] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(419), 16,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(421), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2110] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(380), 16,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(382), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2156] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(399), 16,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(401), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2202] = 6,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(407), 1,
      aux_sym_line_li_token1,
    STATE(41), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(423), 15,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(425), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2250] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(427), 16,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(429), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2296] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(431), 16,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(433), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2342] = 2,
    ACTIONS(437), 4,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(435), 29,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [2380] = 2,
    ACTIONS(441), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(439), 17,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2418] = 2,
    ACTIONS(445), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(443), 17,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2456] = 2,
    ACTIONS(447), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2493] = 2,
    ACTIONS(451), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2530] = 2,
    ACTIONS(455), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2567] = 2,
    ACTIONS(459), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2604] = 2,
    ACTIONS(463), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(465), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2641] = 2,
    ACTIONS(467), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(469), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2678] = 2,
    ACTIONS(471), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(473), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2715] = 2,
    ACTIONS(475), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2752] = 2,
    ACTIONS(479), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2789] = 4,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      aux_sym_line_code_token1,
    STATE(58), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(391), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [2830] = 4,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(490), 1,
      aux_sym_line_code_token1,
    STATE(58), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(409), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [2871] = 5,
    ACTIONS(497), 1,
      aux_sym_uppercase_name_token2,
    STATE(62), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(499), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(495), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(493), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
  [2912] = 2,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(435), 29,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [2947] = 5,
    ACTIONS(497), 1,
      aux_sym_uppercase_name_token2,
    STATE(59), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(505), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(503), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(501), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
  [2988] = 4,
    ACTIONS(511), 1,
      aux_sym_uppercase_name_token2,
    STATE(62), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(507), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(509), 14,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3027] = 4,
    ACTIONS(514), 1,
      aux_sym_uppercase_name_token2,
    STATE(63), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(507), 13,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(509), 14,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3065] = 2,
    ACTIONS(473), 13,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(471), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [3099] = 3,
    ACTIONS(521), 1,
      aux_sym_argument_token1,
    ACTIONS(519), 8,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(517), 20,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3135] = 3,
    ACTIONS(523), 1,
      aux_sym_taglink_token1,
    ACTIONS(519), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(517), 22,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3171] = 2,
    ACTIONS(527), 13,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(525), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [3205] = 4,
    ACTIONS(529), 1,
      aux_sym_uppercase_name_token2,
    STATE(63), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(493), 13,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(495), 14,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3243] = 4,
    ACTIONS(529), 1,
      aux_sym_uppercase_name_token2,
    STATE(68), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(501), 13,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(503), 14,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3281] = 2,
    ACTIONS(465), 13,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_LF,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(463), 16,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [3315] = 2,
    ACTIONS(533), 14,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(531), 15,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token2,
  [3349] = 2,
    ACTIONS(535), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(537), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3382] = 2,
    ACTIONS(539), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(541), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3415] = 2,
    ACTIONS(531), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token2,
    ACTIONS(533), 14,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3448] = 3,
    ACTIONS(543), 1,
      aux_sym_argument_token1,
    ACTIONS(519), 7,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(517), 20,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3483] = 2,
    ACTIONS(545), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(547), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3516] = 3,
    ACTIONS(549), 1,
      aux_sym_taglink_token1,
    ACTIONS(519), 5,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(517), 22,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3551] = 2,
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
    ACTIONS(553), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3584] = 2,
    ACTIONS(555), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(557), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3617] = 2,
    ACTIONS(559), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(561), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3650] = 2,
    ACTIONS(563), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(565), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3683] = 2,
    ACTIONS(567), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(569), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3716] = 2,
    ACTIONS(571), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(573), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3749] = 2,
    ACTIONS(575), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(577), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3782] = 2,
    ACTIONS(579), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(581), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3815] = 2,
    ACTIONS(535), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(537), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3847] = 2,
    ACTIONS(545), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(547), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3879] = 2,
    ACTIONS(579), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(581), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3911] = 2,
    ACTIONS(575), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(577), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3943] = 3,
    ACTIONS(583), 1,
      aux_sym_argument_token1,
    ACTIONS(519), 6,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token6,
      anon_sym_LF,
    ACTIONS(517), 20,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [3977] = 2,
    ACTIONS(571), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(573), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [4009] = 2,
    ACTIONS(563), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(565), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [4041] = 2,
    ACTIONS(559), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(561), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [4073] = 2,
    ACTIONS(539), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(541), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [4105] = 2,
    ACTIONS(555), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(557), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [4137] = 2,
    ACTIONS(567), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(569), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [4169] = 2,
    ACTIONS(551), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(553), 19,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [4201] = 3,
    ACTIONS(585), 1,
      aux_sym_taglink_token1,
    ACTIONS(519), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_LF,
    ACTIONS(517), 22,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
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
      anon_sym_BQUOTE,
  [4235] = 2,
    ACTIONS(571), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(573), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4266] = 2,
    ACTIONS(563), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(565), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4297] = 2,
    ACTIONS(539), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(541), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4328] = 2,
    ACTIONS(555), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(557), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4359] = 2,
    ACTIONS(535), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(537), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4390] = 2,
    ACTIONS(575), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(577), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4421] = 2,
    ACTIONS(579), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(581), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4452] = 2,
    ACTIONS(545), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(547), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4483] = 2,
    ACTIONS(567), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(569), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4514] = 2,
    ACTIONS(551), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(553), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token7,
      anon_sym_TILDE,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4545] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(587), 1,
      anon_sym_LT,
    STATE(38), 1,
      sym__blank,
    STATE(111), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4562] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(589), 1,
      anon_sym_LT,
    STATE(35), 1,
      sym__blank,
    STATE(111), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4579] = 4,
    ACTIONS(591), 1,
      anon_sym_LT,
    ACTIONS(594), 1,
      anon_sym_LF,
    ACTIONS(596), 1,
      aux_sym_line_li_token1,
    STATE(111), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4593] = 3,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      aux_sym_line_code_token1,
    STATE(34), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4604] = 3,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      aux_sym_line_code_token1,
    STATE(57), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4615] = 3,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(599), 1,
      anon_sym_LF,
    STATE(115), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4626] = 3,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(601), 1,
      anon_sym_LF,
    STATE(116), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4637] = 3,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      anon_sym_STAR,
    STATE(116), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4648] = 3,
    ACTIONS(608), 1,
      aux_sym__word_common_token2,
    ACTIONS(610), 1,
      aux_sym__word_common_token3,
    ACTIONS(612), 1,
      aux_sym_optionlink_token1,
  [4658] = 3,
    ACTIONS(614), 1,
      aux_sym__word_common_token2,
    ACTIONS(616), 1,
      aux_sym__word_common_token3,
    ACTIONS(618), 1,
      aux_sym_optionlink_token1,
  [4668] = 3,
    ACTIONS(620), 1,
      aux_sym__word_common_token2,
    ACTIONS(622), 1,
      aux_sym__word_common_token3,
    ACTIONS(624), 1,
      aux_sym_optionlink_token1,
  [4678] = 1,
    ACTIONS(626), 1,
      anon_sym_SQUOTE2,
  [4682] = 1,
    ACTIONS(628), 1,
      anon_sym_BQUOTE2,
  [4686] = 1,
    ACTIONS(630), 1,
      anon_sym_STAR2,
  [4690] = 1,
    ACTIONS(632), 1,
      anon_sym_BQUOTE2,
  [4694] = 1,
    ACTIONS(634), 1,
      aux_sym_tag_token1,
  [4698] = 1,
    ACTIONS(636), 1,
      anon_sym_PIPE2,
  [4702] = 1,
    ACTIONS(407), 1,
      aux_sym_line_li_token1,
  [4706] = 1,
    ACTIONS(638), 1,
      anon_sym_SQUOTE2,
  [4710] = 1,
    ACTIONS(640), 1,
      anon_sym_SQUOTE2,
  [4714] = 1,
    ACTIONS(642), 1,
      anon_sym_SQUOTE2,
  [4718] = 1,
    ACTIONS(644), 1,
      anon_sym_PIPE2,
  [4722] = 1,
    ACTIONS(646), 1,
      anon_sym_RBRACE2,
  [4726] = 1,
    ACTIONS(648), 1,
      anon_sym_STAR2,
  [4730] = 1,
    ACTIONS(650), 1,
      anon_sym_RBRACE2,
  [4734] = 1,
    ACTIONS(652), 1,
      anon_sym_SQUOTE2,
  [4738] = 1,
    ACTIONS(654), 1,
      anon_sym_SQUOTE2,
  [4742] = 1,
    ACTIONS(656), 1,
      anon_sym_PIPE2,
  [4746] = 1,
    ACTIONS(658), 1,
      anon_sym_RBRACE2,
  [4750] = 1,
    ACTIONS(660), 1,
      anon_sym_STAR2,
  [4754] = 1,
    ACTIONS(662), 1,
      anon_sym_BQUOTE2,
  [4758] = 1,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
  [4762] = 1,
    ACTIONS(666), 1,
      aux_sym_tag_token1,
  [4766] = 1,
    ACTIONS(668), 1,
      aux_sym_codespan_token1,
  [4770] = 1,
    ACTIONS(670), 1,
      aux_sym_codespan_token1,
  [4774] = 1,
    ACTIONS(672), 1,
      aux_sym_tag_token1,
  [4778] = 1,
    ACTIONS(674), 1,
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
  [SMALL_STATE(18)] = 778,
  [SMALL_STATE(19)] = 854,
  [SMALL_STATE(20)] = 927,
  [SMALL_STATE(21)] = 1000,
  [SMALL_STATE(22)] = 1069,
  [SMALL_STATE(23)] = 1142,
  [SMALL_STATE(24)] = 1215,
  [SMALL_STATE(25)] = 1283,
  [SMALL_STATE(26)] = 1350,
  [SMALL_STATE(27)] = 1417,
  [SMALL_STATE(28)] = 1484,
  [SMALL_STATE(29)] = 1548,
  [SMALL_STATE(30)] = 1612,
  [SMALL_STATE(31)] = 1676,
  [SMALL_STATE(32)] = 1740,
  [SMALL_STATE(33)] = 1786,
  [SMALL_STATE(34)] = 1832,
  [SMALL_STATE(35)] = 1878,
  [SMALL_STATE(36)] = 1924,
  [SMALL_STATE(37)] = 1972,
  [SMALL_STATE(38)] = 2018,
  [SMALL_STATE(39)] = 2064,
  [SMALL_STATE(40)] = 2110,
  [SMALL_STATE(41)] = 2156,
  [SMALL_STATE(42)] = 2202,
  [SMALL_STATE(43)] = 2250,
  [SMALL_STATE(44)] = 2296,
  [SMALL_STATE(45)] = 2342,
  [SMALL_STATE(46)] = 2380,
  [SMALL_STATE(47)] = 2418,
  [SMALL_STATE(48)] = 2456,
  [SMALL_STATE(49)] = 2493,
  [SMALL_STATE(50)] = 2530,
  [SMALL_STATE(51)] = 2567,
  [SMALL_STATE(52)] = 2604,
  [SMALL_STATE(53)] = 2641,
  [SMALL_STATE(54)] = 2678,
  [SMALL_STATE(55)] = 2715,
  [SMALL_STATE(56)] = 2752,
  [SMALL_STATE(57)] = 2789,
  [SMALL_STATE(58)] = 2830,
  [SMALL_STATE(59)] = 2871,
  [SMALL_STATE(60)] = 2912,
  [SMALL_STATE(61)] = 2947,
  [SMALL_STATE(62)] = 2988,
  [SMALL_STATE(63)] = 3027,
  [SMALL_STATE(64)] = 3065,
  [SMALL_STATE(65)] = 3099,
  [SMALL_STATE(66)] = 3135,
  [SMALL_STATE(67)] = 3171,
  [SMALL_STATE(68)] = 3205,
  [SMALL_STATE(69)] = 3243,
  [SMALL_STATE(70)] = 3281,
  [SMALL_STATE(71)] = 3315,
  [SMALL_STATE(72)] = 3349,
  [SMALL_STATE(73)] = 3382,
  [SMALL_STATE(74)] = 3415,
  [SMALL_STATE(75)] = 3448,
  [SMALL_STATE(76)] = 3483,
  [SMALL_STATE(77)] = 3516,
  [SMALL_STATE(78)] = 3551,
  [SMALL_STATE(79)] = 3584,
  [SMALL_STATE(80)] = 3617,
  [SMALL_STATE(81)] = 3650,
  [SMALL_STATE(82)] = 3683,
  [SMALL_STATE(83)] = 3716,
  [SMALL_STATE(84)] = 3749,
  [SMALL_STATE(85)] = 3782,
  [SMALL_STATE(86)] = 3815,
  [SMALL_STATE(87)] = 3847,
  [SMALL_STATE(88)] = 3879,
  [SMALL_STATE(89)] = 3911,
  [SMALL_STATE(90)] = 3943,
  [SMALL_STATE(91)] = 3977,
  [SMALL_STATE(92)] = 4009,
  [SMALL_STATE(93)] = 4041,
  [SMALL_STATE(94)] = 4073,
  [SMALL_STATE(95)] = 4105,
  [SMALL_STATE(96)] = 4137,
  [SMALL_STATE(97)] = 4169,
  [SMALL_STATE(98)] = 4201,
  [SMALL_STATE(99)] = 4235,
  [SMALL_STATE(100)] = 4266,
  [SMALL_STATE(101)] = 4297,
  [SMALL_STATE(102)] = 4328,
  [SMALL_STATE(103)] = 4359,
  [SMALL_STATE(104)] = 4390,
  [SMALL_STATE(105)] = 4421,
  [SMALL_STATE(106)] = 4452,
  [SMALL_STATE(107)] = 4483,
  [SMALL_STATE(108)] = 4514,
  [SMALL_STATE(109)] = 4545,
  [SMALL_STATE(110)] = 4562,
  [SMALL_STATE(111)] = 4579,
  [SMALL_STATE(112)] = 4593,
  [SMALL_STATE(113)] = 4604,
  [SMALL_STATE(114)] = 4615,
  [SMALL_STATE(115)] = 4626,
  [SMALL_STATE(116)] = 4637,
  [SMALL_STATE(117)] = 4648,
  [SMALL_STATE(118)] = 4658,
  [SMALL_STATE(119)] = 4668,
  [SMALL_STATE(120)] = 4678,
  [SMALL_STATE(121)] = 4682,
  [SMALL_STATE(122)] = 4686,
  [SMALL_STATE(123)] = 4690,
  [SMALL_STATE(124)] = 4694,
  [SMALL_STATE(125)] = 4698,
  [SMALL_STATE(126)] = 4702,
  [SMALL_STATE(127)] = 4706,
  [SMALL_STATE(128)] = 4710,
  [SMALL_STATE(129)] = 4714,
  [SMALL_STATE(130)] = 4718,
  [SMALL_STATE(131)] = 4722,
  [SMALL_STATE(132)] = 4726,
  [SMALL_STATE(133)] = 4730,
  [SMALL_STATE(134)] = 4734,
  [SMALL_STATE(135)] = 4738,
  [SMALL_STATE(136)] = 4742,
  [SMALL_STATE(137)] = 4746,
  [SMALL_STATE(138)] = 4750,
  [SMALL_STATE(139)] = 4754,
  [SMALL_STATE(140)] = 4758,
  [SMALL_STATE(141)] = 4762,
  [SMALL_STATE(142)] = 4766,
  [SMALL_STATE(143)] = 4770,
  [SMALL_STATE(144)] = 4774,
  [SMALL_STATE(145)] = 4778,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(80),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(80),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(119),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(65),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(82),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(82),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(61),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(126),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(112),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(31),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(29),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(124),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(78),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(143),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(124),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(143),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 10),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 10),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(93),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(93),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(118),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(77),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(75),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(96),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(96),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(69),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(141),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(97),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(142),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(73),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(73),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(119),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(66),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(65),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(82),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(82),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(124),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(78),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(143),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(94),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(94),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(118),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(77),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(75),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(96),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(96),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(141),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(97),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(142),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(101),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(101),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(117),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(98),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(90),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(107),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(107),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(144),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(108),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(145),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 14),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 14),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(47),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 13),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 13),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(45),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(45),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 8),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 8),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 19),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 19),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 18),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 18),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 6),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 6),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 6),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 6),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 6),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 12),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 12),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(60),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(60),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [511] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(71),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(74),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 9),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 9),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 9),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 9),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(126),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(31),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2), SHIFT_REPEAT(124),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [664] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
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
