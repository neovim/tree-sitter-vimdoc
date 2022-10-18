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
#define STATE_COUNT 149
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 20

enum {
  aux_sym_word_token1 = 1,
  aux_sym_word_token2 = 2,
  aux_sym_word_noli_token1 = 3,
  aux_sym_word_noli_token2 = 4,
  anon_sym_SQUOTE = 5,
  aux_sym__word_common_token1 = 6,
  anon_sym_SQUOTE2 = 7,
  aux_sym__word_common_token2 = 8,
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
  anon_sym_PIPE2 = 43,
  anon_sym_BQUOTE = 44,
  aux_sym_codespan_token1 = 45,
  anon_sym_BQUOTE2 = 46,
  aux_sym_argument_token1 = 47,
  anon_sym_RBRACE2 = 48,
  sym_help_file = 49,
  sym__atom = 50,
  sym_word = 51,
  sym__atom_noli = 52,
  sym_word_noli = 53,
  sym__atom_common = 54,
  sym__word_common = 55,
  sym_keycode = 56,
  sym_uppercase_name = 57,
  sym__uppercase_words = 58,
  sym_block = 59,
  sym_codeblock = 60,
  sym__blank = 61,
  sym_line = 62,
  sym_line_li = 63,
  sym_line_code = 64,
  sym__line_noli = 65,
  sym_column_heading = 66,
  sym_h1 = 67,
  sym_h2 = 68,
  sym_h3 = 69,
  sym_tag = 70,
  sym_url = 71,
  sym_optionlink = 72,
  sym_taglink = 73,
  sym_codespan = 74,
  sym_argument = 75,
  aux_sym_help_file_repeat1 = 76,
  aux_sym_help_file_repeat2 = 77,
  aux_sym_uppercase_name_repeat1 = 78,
  aux_sym_block_repeat1 = 79,
  aux_sym_block_repeat2 = 80,
  aux_sym_codeblock_repeat1 = 81,
  aux_sym_line_li_repeat1 = 82,
  aux_sym_line_li_repeat2 = 83,
  aux_sym_h3_repeat1 = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_word_token2] = "word_token2",
  [aux_sym_word_noli_token1] = "word_noli_token1",
  [aux_sym_word_noli_token2] = "word_noli_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__word_common_token1] = "_word_common_token1",
  [anon_sym_SQUOTE2] = "'",
  [aux_sym__word_common_token2] = "_word_common_token2",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__word_common_token1] = aux_sym__word_common_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym__word_common_token2] = aux_sym__word_common_token2,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token2] = {
    .visible = false,
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
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 22,
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
  [57] = 36,
  [58] = 35,
  [59] = 59,
  [60] = 60,
  [61] = 46,
  [62] = 59,
  [63] = 63,
  [64] = 64,
  [65] = 63,
  [66] = 66,
  [67] = 51,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 54,
  [72] = 59,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 75,
  [81] = 70,
  [82] = 69,
  [83] = 73,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 73,
  [92] = 78,
  [93] = 85,
  [94] = 84,
  [95] = 77,
  [96] = 90,
  [97] = 79,
  [98] = 89,
  [99] = 87,
  [100] = 76,
  [101] = 69,
  [102] = 70,
  [103] = 86,
  [104] = 88,
  [105] = 88,
  [106] = 86,
  [107] = 79,
  [108] = 76,
  [109] = 90,
  [110] = 77,
  [111] = 85,
  [112] = 78,
  [113] = 89,
  [114] = 87,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 124,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 123,
  [134] = 129,
  [135] = 128,
  [136] = 136,
  [137] = 136,
  [138] = 125,
  [139] = 123,
  [140] = 129,
  [141] = 128,
  [142] = 124,
  [143] = 136,
  [144] = 125,
  [145] = 130,
  [146] = 132,
  [147] = 130,
  [148] = 132,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(415);
      if (lookahead == '+') ADVANCE(252);
      if (lookahead == '<') ADVANCE(398);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead == 'A') ADVANCE(256);
      if (lookahead == 'C') ADVANCE(257);
      if (lookahead == 'M') ADVANCE(255);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead == 'h') ADVANCE(258);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(489);
      if (lookahead == '}') ADVANCE(555);
      if (lookahead == '~') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(260);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(271);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(298);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(251);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(298);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '<') ADVANCE(221);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(163);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '<') ADVANCE(399);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '<') ADVANCE(399);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '<') ADVANCE(399);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '<') ADVANCE(248);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(245);
      if (lookahead == 'M') ADVANCE(243);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(261);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '~') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(246);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '<') ADVANCE(248);
      if (lookahead == '>') ADVANCE(242);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(245);
      if (lookahead == 'M') ADVANCE(243);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(261);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '~') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(246);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '<') ADVANCE(248);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == 'C') ADVANCE(245);
      if (lookahead == 'M') ADVANCE(243);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead == 'h') ADVANCE(261);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '~') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(246);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'M') ADVANCE(64);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead == 'M') ADVANCE(64);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(298);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '|') ADVANCE(266);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(302);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '(') ADVANCE(288);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'M') ADVANCE(112);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '|') ADVANCE(266);
      if (lookahead == '}') ADVANCE(277);
      if (lookahead == '~') ADVANCE(302);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(289);
      if (lookahead == '*') ADVANCE(411);
      if (lookahead == '<') ADVANCE(551);
      if (lookahead == '>') ADVANCE(497);
      if (lookahead == 'A') ADVANCE(512);
      if (lookahead == 'C') ADVANCE(515);
      if (lookahead == 'M') ADVANCE(511);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(520);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(267);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(289);
      if (lookahead == '*') ADVANCE(411);
      if (lookahead == '<') ADVANCE(551);
      if (lookahead == '>') ADVANCE(497);
      if (lookahead == 'A') ADVANCE(512);
      if (lookahead == 'C') ADVANCE(515);
      if (lookahead == 'M') ADVANCE(511);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(520);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(267);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(289);
      if (lookahead == '*') ADVANCE(411);
      if (lookahead == '<') ADVANCE(551);
      if (lookahead == 'A') ADVANCE(512);
      if (lookahead == 'C') ADVANCE(515);
      if (lookahead == 'M') ADVANCE(511);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead == 'h') ADVANCE(520);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(267);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == '<') ADVANCE(486);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(436);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(279);
      if (lookahead == '~') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == '<') ADVANCE(486);
      if (lookahead == '>') ADVANCE(429);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(436);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(279);
      if (lookahead == '~') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == '<') ADVANCE(486);
      if (lookahead == 'A') ADVANCE(437);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead == 'M') ADVANCE(436);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead == 'h') ADVANCE(445);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(279);
      if (lookahead == '~') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead == '|') ADVANCE(489);
      if (lookahead == '}') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '>') ADVANCE(312);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(414);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(310);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(495);
      END_STATE();
    case 41:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(408);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(62);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '<') ADVANCE(221);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(163);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\n') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == '*') ADVANCE(410);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '<') ADVANCE(399);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'M') ADVANCE(174);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(268);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '~') ADVANCE(297);
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
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(386);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == 'L') ADVANCE(385);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == 'T') ADVANCE(384);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '>') ADVANCE(306);
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
      if (lookahead == '>') ADVANCE(306);
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
      if (lookahead == '>') ADVANCE(309);
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
      if (lookahead == '>') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(336);
      if (lookahead == 'D') ADVANCE(330);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == 'P') ADVANCE(325);
      if (lookahead == 'S') ADVANCE(322);
      if (lookahead == '{') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
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
      if (lookahead == 'k') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(344);
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
      if (lookahead == 'p') ADVANCE(344);
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
      if (lookahead == 't') ADVANCE(344);
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
      if (lookahead == '}') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(348);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(417);
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
          lookahead == '_') ADVANCE(396);
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
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '(') ADVANCE(295);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '>') ADVANCE(308);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '>') ADVANCE(308);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '>') ADVANCE(307);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '>') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'B') ADVANCE(319);
      if (lookahead == 'D') ADVANCE(317);
      if (lookahead == 'I') ADVANCE(318);
      if (lookahead == 'P') ADVANCE(315);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'D') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'g') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'k') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'w') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '}') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(153);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(354);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(294);
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
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == 'E') ADVANCE(363);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == 'L') ADVANCE(362);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(361);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '>') ADVANCE(306);
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
      if (lookahead == '>') ADVANCE(306);
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
      if (lookahead == '>') ADVANCE(309);
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
      if (lookahead == '>') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(338);
      if (lookahead == 'D') ADVANCE(332);
      if (lookahead == 'I') ADVANCE(335);
      if (lookahead == 'P') ADVANCE(327);
      if (lookahead == 'S') ADVANCE(323);
      if (lookahead == '{') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
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
      if (lookahead == 'k') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(344);
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
      if (lookahead == 'p') ADVANCE(344);
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
      if (lookahead == 't') ADVANCE(344);
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
      if (lookahead == '}') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(348);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(417);
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
          lookahead == '_') ADVANCE(378);
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
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(404);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\t') ADVANCE(270);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'E') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'L') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'T') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(294);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '>') ADVANCE(306);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(70);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(417);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '\t') ADVANCE(270);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'E') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'L') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'T') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 't') ADVANCE(421);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(294);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == 't') ADVANCE(426);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(249);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(249);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '|') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '|') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '|') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '|') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(552);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(264);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(264);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead == '}') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '}') ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '}') ADVANCE(280);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(480);
      if (lookahead == '}') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(404);
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
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(404);
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
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(405);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(405);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '>') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'H') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(76);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(197);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(391);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(366);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == 'A') ADVANCE(358);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == 'L') ADVANCE(357);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == 'R') ADVANCE(360);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(356);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(378);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(374);
      if (lookahead == 'D') ADVANCE(372);
      if (lookahead == 'I') ADVANCE(373);
      if (lookahead == 'P') ADVANCE(371);
      if (lookahead == 'S') ADVANCE(368);
      if (lookahead == '{') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'F') ADVANCE(370);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'H') ADVANCE(369);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'T') ADVANCE(365);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(348);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '-') ADVANCE(394);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(381);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(383);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == 'T') ADVANCE(379);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == 'T') ADVANCE(382);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(396);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'B') ADVANCE(337);
      if (lookahead == 'D') ADVANCE(331);
      if (lookahead == 'I') ADVANCE(334);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == 'S') ADVANCE(324);
      if (lookahead == '{') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'F') ADVANCE(392);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'I') ADVANCE(390);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'T') ADVANCE(388);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(352);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(348);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 398:
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
    case 399:
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
    case 400:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(153);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == 's') ADVANCE(419);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ':') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(418);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == 't') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(294);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ':') ADVANCE(250);
      if (lookahead == 's') ADVANCE(424);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(249);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ':') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(249);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == 'p') ADVANCE(423);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(249);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == 't') ADVANCE(425);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(249);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(249);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == '-') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == 's') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == ':') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 'A') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 'E') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 'L') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 'L') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 'R') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 'T') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 'T') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 'T') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 'p') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead == '>') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(450);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(450);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'B') ADVANCE(476);
      if (lookahead == 'D') ADVANCE(462);
      if (lookahead == 'I') ADVANCE(471);
      if (lookahead == 'P') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(455);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == '|') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(488);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(472);
      if (lookahead == 'U') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(488);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(488);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(417);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(488);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(488);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == ' ') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(30);
      if (lookahead == '\n') ADVANCE(400);
      if (lookahead == ' ') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(554);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '>') ADVANCE(525);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(525);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(352);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(552);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(313);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'B') ADVANCE(545);
      if (lookahead == 'D') ADVANCE(533);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'P') ADVANCE(531);
      if (lookahead == 'S') ADVANCE(528);
      if (lookahead == '{') ADVANCE(328);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(552);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(348);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(552);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(340);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(552);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '-') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '-') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == '-') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == ':') ADVANCE(550);
      if (lookahead == 's') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == ':') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'A') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'E') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'L') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'L') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'R') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 'p') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (lookahead == 't') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '(') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == '>') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '>') ADVANCE(552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '>') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'D') ADVANCE(542);
      if (lookahead == 'U') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'H') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'I') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'T') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'k') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 't') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'w') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == '|') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(552);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(552);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
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
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 43},
  [55] = {.lex_state = 43},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 18},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 25},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 26},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 24},
  [102] = {.lex_state = 7},
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
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 43},
  [121] = {.lex_state = 43},
  [122] = {.lex_state = 43},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 28},
  [125] = {.lex_state = 28},
  [126] = {.lex_state = 43},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 28},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 38},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 40},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 28},
  [136] = {.lex_state = 38},
  [137] = {.lex_state = 38},
  [138] = {.lex_state = 28},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 28},
  [142] = {.lex_state = 28},
  [143] = {.lex_state = 38},
  [144] = {.lex_state = 28},
  [145] = {.lex_state = 38},
  [146] = {.lex_state = 40},
  [147] = {.lex_state = 38},
  [148] = {.lex_state = 40},
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
    [aux_sym__word_common_token2] = ACTIONS(1),
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
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(131),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(120),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(53),
    [sym__blank] = STATE(45),
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
    [aux_sym_help_file_repeat2] = STATE(5),
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
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [2] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(120),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(53),
    [sym__blank] = STATE(45),
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
    [aux_sym_help_file_repeat1] = STATE(32),
    [aux_sym_help_file_repeat2] = STATE(4),
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
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [3] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(120),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
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
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(115),
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
    [sym__word_common] = STATE(84),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(120),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
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
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(115),
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
    [sym__word_common] = STATE(84),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(120),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
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
    [aux_sym_help_file_repeat2] = STATE(3),
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
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [6] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(120),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(53),
    [sym__blank] = STATE(40),
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
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [7] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(120),
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
    [anon_sym_BQUOTE] = ACTIONS(140),
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
      anon_sym_BQUOTE,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(74), 1,
      sym__line_noli,
    STATE(94), 1,
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
    STATE(20), 11,
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
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LT,
    STATE(14), 1,
      aux_sym_line_li_repeat2,
    STATE(74), 1,
      sym__line_noli,
    STATE(94), 1,
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
    STATE(20), 11,
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
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      anon_sym_LT,
    STATE(13), 1,
      aux_sym_line_li_repeat2,
    STATE(74), 1,
      sym__line_noli,
    STATE(94), 1,
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
    STATE(20), 11,
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
      anon_sym_BQUOTE,
    ACTIONS(177), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(74), 1,
      sym__line_noli,
    STATE(94), 1,
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
    STATE(20), 11,
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
      anon_sym_BQUOTE,
    ACTIONS(181), 1,
      anon_sym_LT,
    STATE(16), 1,
      aux_sym_line_li_repeat2,
    STATE(74), 1,
      sym__line_noli,
    STATE(94), 1,
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
    STATE(20), 11,
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
      anon_sym_BQUOTE,
    ACTIONS(185), 1,
      anon_sym_LT,
    STATE(14), 1,
      aux_sym_line_li_repeat2,
    STATE(74), 1,
      sym__line_noli,
    STATE(94), 1,
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
    STATE(20), 11,
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
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(213), 1,
      anon_sym_LT,
    ACTIONS(217), 1,
      anon_sym_STAR,
    ACTIONS(220), 1,
      sym_url_word,
    ACTIONS(223), 1,
      anon_sym_BQUOTE,
    STATE(14), 1,
      aux_sym_line_li_repeat2,
    STATE(74), 1,
      sym__line_noli,
    STATE(94), 1,
      sym__word_common,
    ACTIONS(207), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(215), 2,
      anon_sym_LF,
      aux_sym_line_li_token1,
    ACTIONS(189), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(195), 6,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
    ACTIONS(204), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(20), 11,
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
      anon_sym_BQUOTE,
    ACTIONS(226), 1,
      anon_sym_LT,
    STATE(14), 1,
      aux_sym_line_li_repeat2,
    STATE(74), 1,
      sym__line_noli,
    STATE(94), 1,
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
    STATE(20), 11,
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
      anon_sym_BQUOTE,
    ACTIONS(230), 1,
      anon_sym_LT,
    STATE(14), 1,
      aux_sym_line_li_repeat2,
    STATE(74), 1,
      sym__line_noli,
    STATE(94), 1,
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
    STATE(20), 11,
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
      anon_sym_BQUOTE,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 1,
      aux_sym_column_heading_token1,
    ACTIONS(242), 1,
      anon_sym_STAR,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(54), 1,
      sym_codeblock,
    STATE(79), 1,
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
    STATE(76), 10,
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
      anon_sym_BQUOTE,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 1,
      aux_sym_column_heading_token1,
    STATE(17), 1,
      aux_sym_line_li_repeat1,
    STATE(51), 1,
      sym_codeblock,
    STATE(79), 1,
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
    STATE(76), 10,
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
      anon_sym_BQUOTE,
    ACTIONS(252), 1,
      aux_sym_codeblock_token1,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(11), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(97), 1,
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
    STATE(100), 10,
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
  [915] = 16,
    ACTIONS(145), 1,
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
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(67), 1,
      sym_codeblock,
    STATE(97), 1,
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
    STATE(100), 10,
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
  [987] = 16,
    ACTIONS(145), 1,
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
    ACTIONS(260), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(71), 1,
      sym_codeblock,
    STATE(97), 1,
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
    STATE(100), 10,
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
  [1059] = 14,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(288), 1,
      sym_url_word,
    ACTIONS(291), 1,
      anon_sym_BQUOTE,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(79), 1,
      sym__word_common,
    ACTIONS(262), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_TILDE,
    ACTIONS(277), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(283), 3,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(280), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(268), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    STATE(76), 10,
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
      anon_sym_BQUOTE,
    ACTIONS(252), 1,
      aux_sym_codeblock_token1,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(294), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(97), 1,
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
    STATE(100), 10,
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
      anon_sym_BQUOTE,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(283), 2,
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
    STATE(100), 10,
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
      anon_sym_BQUOTE,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(107), 1,
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
    STATE(108), 10,
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
      anon_sym_BQUOTE,
    ACTIONS(348), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(107), 1,
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
    STATE(108), 10,
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
    ACTIONS(283), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
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
    STATE(107), 1,
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
    ACTIONS(356), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(108), 10,
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
      anon_sym_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_STAR,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(97), 1,
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
    STATE(100), 10,
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
      anon_sym_BQUOTE,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(107), 1,
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
    STATE(108), 10,
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
      anon_sym_BQUOTE,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(107), 1,
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
    STATE(108), 10,
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
    ACTIONS(145), 1,
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
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(97), 1,
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
    STATE(100), 10,
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
    STATE(32), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
    ACTIONS(382), 15,
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
    ACTIONS(380), 16,
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
      anon_sym_BQUOTE,
  [1761] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
    ACTIONS(389), 15,
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
    ACTIONS(387), 16,
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
      anon_sym_BQUOTE,
  [1806] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
    ACTIONS(393), 15,
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
    ACTIONS(391), 16,
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
      anon_sym_BQUOTE,
  [1851] = 5,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(402), 1,
      aux_sym_line_code_token1,
    STATE(35), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(397), 3,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(395), 27,
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
      anon_sym_BQUOTE,
  [1896] = 5,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      aux_sym_line_code_token1,
    STATE(35), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(407), 3,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(405), 27,
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
      anon_sym_BQUOTE,
  [1941] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
    ACTIONS(415), 15,
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
    ACTIONS(413), 16,
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
      anon_sym_BQUOTE,
  [1986] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
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
    ACTIONS(417), 16,
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
      anon_sym_BQUOTE,
  [2031] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(37), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
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
    ACTIONS(421), 16,
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
      anon_sym_BQUOTE,
  [2076] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
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
    ACTIONS(421), 16,
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
      anon_sym_BQUOTE,
  [2121] = 6,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(429), 1,
      aux_sym_line_li_token1,
    STATE(34), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
    ACTIONS(425), 15,
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
      anon_sym_BQUOTE,
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
  [2168] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
    ACTIONS(415), 15,
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
    ACTIONS(413), 16,
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
      anon_sym_BQUOTE,
  [2213] = 6,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(429), 1,
      aux_sym_line_li_token1,
    STATE(44), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
    ACTIONS(431), 15,
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
      anon_sym_BQUOTE,
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
  [2260] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_help_file_repeat1,
    STATE(45), 1,
      sym__blank,
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
    ACTIONS(417), 16,
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
      anon_sym_BQUOTE,
  [2305] = 2,
    ACTIONS(437), 15,
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
    ACTIONS(435), 17,
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
      anon_sym_BQUOTE,
  [2342] = 2,
    ACTIONS(441), 4,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(439), 28,
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
      anon_sym_BQUOTE,
  [2379] = 2,
    ACTIONS(445), 15,
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
    ACTIONS(443), 17,
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
      anon_sym_BQUOTE,
  [2416] = 2,
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
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2452] = 2,
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
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2488] = 2,
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
      anon_sym_BQUOTE,
  [2524] = 2,
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
      anon_sym_BQUOTE,
  [2560] = 2,
    ACTIONS(463), 15,
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
    ACTIONS(465), 16,
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
      anon_sym_BQUOTE,
  [2596] = 2,
    ACTIONS(467), 15,
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
    ACTIONS(469), 16,
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
      anon_sym_BQUOTE,
  [2632] = 2,
    ACTIONS(471), 15,
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
    ACTIONS(473), 16,
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
      anon_sym_BQUOTE,
  [2668] = 2,
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
      anon_sym_BQUOTE,
  [2704] = 2,
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
      anon_sym_BQUOTE,
  [2740] = 4,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      aux_sym_line_code_token1,
    STATE(58), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(405), 27,
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
      anon_sym_BQUOTE,
  [2780] = 4,
    ACTIONS(487), 1,
      anon_sym_LF,
    ACTIONS(490), 1,
      aux_sym_line_code_token1,
    STATE(58), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(395), 27,
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
      anon_sym_BQUOTE,
  [2820] = 5,
    ACTIONS(497), 1,
      aux_sym__word_common_token1,
    ACTIONS(499), 1,
      aux_sym__word_common_token2,
    ACTIONS(501), 1,
      aux_sym_optionlink_token1,
    ACTIONS(495), 13,
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
    ACTIONS(493), 14,
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
      anon_sym_BQUOTE,
  [2861] = 5,
    ACTIONS(507), 1,
      aux_sym_uppercase_name_token2,
    STATE(63), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(509), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(505), 12,
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
      anon_sym_BQUOTE,
    ACTIONS(503), 13,
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
  [2901] = 2,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(439), 28,
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
      anon_sym_BQUOTE,
  [2935] = 5,
    ACTIONS(511), 1,
      aux_sym__word_common_token1,
    ACTIONS(513), 1,
      aux_sym__word_common_token2,
    ACTIONS(515), 1,
      aux_sym_optionlink_token1,
    ACTIONS(495), 12,
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
    ACTIONS(493), 14,
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
      anon_sym_BQUOTE,
  [2975] = 4,
    ACTIONS(521), 1,
      aux_sym_uppercase_name_token2,
    STATE(63), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(517), 13,
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
    ACTIONS(519), 14,
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
      anon_sym_BQUOTE,
  [3013] = 5,
    ACTIONS(507), 1,
      aux_sym_uppercase_name_token2,
    STATE(60), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(528), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(526), 12,
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
      anon_sym_BQUOTE,
    ACTIONS(524), 13,
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
  [3053] = 4,
    ACTIONS(530), 1,
      aux_sym_uppercase_name_token2,
    STATE(65), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(517), 12,
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
    ACTIONS(519), 14,
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
      anon_sym_BQUOTE,
  [3090] = 4,
    ACTIONS(533), 1,
      aux_sym_uppercase_name_token2,
    STATE(68), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(524), 12,
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
    ACTIONS(526), 14,
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
      anon_sym_BQUOTE,
  [3127] = 2,
    ACTIONS(461), 13,
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
      anon_sym_BQUOTE,
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
  [3160] = 4,
    ACTIONS(533), 1,
      aux_sym_uppercase_name_token2,
    STATE(65), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(503), 12,
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
    ACTIONS(505), 14,
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
      anon_sym_BQUOTE,
  [3197] = 3,
    ACTIONS(535), 1,
      aux_sym_argument_token1,
    ACTIONS(495), 8,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(493), 19,
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
      anon_sym_BQUOTE,
  [3232] = 3,
    ACTIONS(539), 1,
      anon_sym_SQUOTE2,
    ACTIONS(537), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(541), 18,
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
      anon_sym_BQUOTE,
  [3267] = 2,
    ACTIONS(473), 13,
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
      anon_sym_BQUOTE,
    ACTIONS(471), 15,
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
  [3300] = 5,
    ACTIONS(543), 1,
      aux_sym__word_common_token1,
    ACTIONS(545), 1,
      aux_sym__word_common_token2,
    ACTIONS(547), 1,
      aux_sym_optionlink_token1,
    ACTIONS(495), 11,
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
    ACTIONS(493), 14,
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
      anon_sym_BQUOTE,
  [3339] = 3,
    ACTIONS(549), 1,
      aux_sym_taglink_token1,
    ACTIONS(495), 5,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(493), 22,
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
      anon_sym_BQUOTE,
  [3374] = 2,
    ACTIONS(553), 13,
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
      anon_sym_BQUOTE,
    ACTIONS(551), 15,
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
  [3407] = 2,
    ACTIONS(555), 14,
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
    ACTIONS(557), 14,
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
      anon_sym_BQUOTE,
  [3440] = 2,
    ACTIONS(559), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(561), 19,
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
      anon_sym_BQUOTE,
  [3472] = 2,
    ACTIONS(563), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(565), 19,
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
      anon_sym_BQUOTE,
  [3504] = 2,
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
      anon_sym_BQUOTE,
  [3536] = 2,
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
      anon_sym_BQUOTE,
  [3568] = 2,
    ACTIONS(555), 13,
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
    ACTIONS(557), 14,
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
      anon_sym_BQUOTE,
  [3600] = 3,
    ACTIONS(575), 1,
      anon_sym_SQUOTE2,
    ACTIONS(537), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(541), 18,
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
      anon_sym_BQUOTE,
  [3634] = 3,
    ACTIONS(577), 1,
      aux_sym_argument_token1,
    ACTIONS(495), 7,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(493), 19,
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
      anon_sym_BQUOTE,
  [3668] = 3,
    ACTIONS(579), 1,
      aux_sym_taglink_token1,
    ACTIONS(495), 4,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(493), 22,
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
      anon_sym_BQUOTE,
  [3702] = 2,
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
      anon_sym_BQUOTE,
  [3734] = 2,
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
      anon_sym_BQUOTE,
  [3766] = 2,
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
      anon_sym_BQUOTE,
  [3798] = 2,
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
      anon_sym_BQUOTE,
  [3830] = 2,
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
      anon_sym_BQUOTE,
  [3862] = 2,
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
      anon_sym_BQUOTE,
  [3894] = 2,
    ACTIONS(605), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(607), 19,
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
      anon_sym_BQUOTE,
  [3926] = 3,
    ACTIONS(609), 1,
      aux_sym_taglink_token1,
    ACTIONS(495), 3,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_LF,
    ACTIONS(493), 22,
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
      anon_sym_BQUOTE,
  [3959] = 2,
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
      anon_sym_BQUOTE,
  [3990] = 2,
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
      anon_sym_BQUOTE,
  [4021] = 2,
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
      anon_sym_BQUOTE,
  [4052] = 2,
    ACTIONS(563), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(565), 19,
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
      anon_sym_BQUOTE,
  [4083] = 2,
    ACTIONS(605), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(607), 19,
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
      anon_sym_BQUOTE,
  [4114] = 2,
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
      anon_sym_BQUOTE,
  [4145] = 2,
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
      anon_sym_BQUOTE,
  [4176] = 2,
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
      anon_sym_BQUOTE,
  [4207] = 2,
    ACTIONS(559), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(561), 19,
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
      anon_sym_BQUOTE,
  [4238] = 3,
    ACTIONS(611), 1,
      aux_sym_argument_token1,
    ACTIONS(495), 6,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token6,
      anon_sym_LF,
    ACTIONS(493), 19,
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
      anon_sym_BQUOTE,
  [4271] = 3,
    ACTIONS(613), 1,
      anon_sym_SQUOTE2,
    ACTIONS(537), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(541), 17,
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
      anon_sym_BQUOTE,
  [4304] = 2,
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
      anon_sym_BQUOTE,
  [4335] = 2,
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
      anon_sym_BQUOTE,
  [4366] = 2,
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
      anon_sym_BQUOTE,
  [4396] = 2,
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
      anon_sym_BQUOTE,
  [4426] = 2,
    ACTIONS(571), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(573), 18,
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
      anon_sym_BQUOTE,
  [4456] = 2,
    ACTIONS(559), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(561), 18,
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
      anon_sym_BQUOTE,
  [4486] = 2,
    ACTIONS(605), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(607), 18,
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
      anon_sym_BQUOTE,
  [4516] = 2,
    ACTIONS(563), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(565), 18,
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
      anon_sym_BQUOTE,
  [4546] = 2,
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
      anon_sym_BQUOTE,
  [4576] = 2,
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
      anon_sym_BQUOTE,
  [4606] = 2,
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
      anon_sym_BQUOTE,
  [4636] = 2,
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
      anon_sym_BQUOTE,
  [4666] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(615), 1,
      anon_sym_LT,
    STATE(39), 1,
      sym__blank,
    STATE(117), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4683] = 5,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(617), 1,
      anon_sym_LT,
    STATE(38), 1,
      sym__blank,
    STATE(117), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4700] = 4,
    ACTIONS(619), 1,
      anon_sym_LT,
    ACTIONS(622), 1,
      anon_sym_LF,
    ACTIONS(624), 1,
      aux_sym_line_li_token1,
    STATE(117), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4714] = 3,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      aux_sym_line_code_token1,
    STATE(36), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4725] = 3,
    ACTIONS(483), 1,
      anon_sym_LF,
    ACTIONS(485), 1,
      aux_sym_line_code_token1,
    STATE(57), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4736] = 3,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(627), 1,
      anon_sym_LF,
    STATE(122), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4747] = 3,
    ACTIONS(629), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      anon_sym_STAR,
    STATE(121), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4758] = 3,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(634), 1,
      anon_sym_LF,
    STATE(121), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4769] = 1,
    ACTIONS(539), 1,
      anon_sym_SQUOTE2,
  [4773] = 1,
    ACTIONS(636), 1,
      anon_sym_RBRACE2,
  [4777] = 1,
    ACTIONS(638), 1,
      anon_sym_BQUOTE2,
  [4781] = 1,
    ACTIONS(429), 1,
      aux_sym_line_li_token1,
  [4785] = 1,
    ACTIONS(640), 1,
      anon_sym_RBRACE2,
  [4789] = 1,
    ACTIONS(642), 1,
      anon_sym_PIPE2,
  [4793] = 1,
    ACTIONS(644), 1,
      anon_sym_SQUOTE2,
  [4797] = 1,
    ACTIONS(646), 1,
      aux_sym_tag_token1,
  [4801] = 1,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
  [4805] = 1,
    ACTIONS(650), 1,
      aux_sym_codespan_token1,
  [4809] = 1,
    ACTIONS(575), 1,
      anon_sym_SQUOTE2,
  [4813] = 1,
    ACTIONS(652), 1,
      anon_sym_SQUOTE2,
  [4817] = 1,
    ACTIONS(654), 1,
      anon_sym_PIPE2,
  [4821] = 1,
    ACTIONS(656), 1,
      anon_sym_STAR2,
  [4825] = 1,
    ACTIONS(658), 1,
      anon_sym_STAR2,
  [4829] = 1,
    ACTIONS(660), 1,
      anon_sym_BQUOTE2,
  [4833] = 1,
    ACTIONS(613), 1,
      anon_sym_SQUOTE2,
  [4837] = 1,
    ACTIONS(662), 1,
      anon_sym_SQUOTE2,
  [4841] = 1,
    ACTIONS(664), 1,
      anon_sym_PIPE2,
  [4845] = 1,
    ACTIONS(666), 1,
      anon_sym_RBRACE2,
  [4849] = 1,
    ACTIONS(668), 1,
      anon_sym_STAR2,
  [4853] = 1,
    ACTIONS(670), 1,
      anon_sym_BQUOTE2,
  [4857] = 1,
    ACTIONS(672), 1,
      aux_sym_tag_token1,
  [4861] = 1,
    ACTIONS(674), 1,
      aux_sym_codespan_token1,
  [4865] = 1,
    ACTIONS(676), 1,
      aux_sym_tag_token1,
  [4869] = 1,
    ACTIONS(678), 1,
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
  [SMALL_STATE(21)] = 987,
  [SMALL_STATE(22)] = 1059,
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
  [SMALL_STATE(36)] = 1896,
  [SMALL_STATE(37)] = 1941,
  [SMALL_STATE(38)] = 1986,
  [SMALL_STATE(39)] = 2031,
  [SMALL_STATE(40)] = 2076,
  [SMALL_STATE(41)] = 2121,
  [SMALL_STATE(42)] = 2168,
  [SMALL_STATE(43)] = 2213,
  [SMALL_STATE(44)] = 2260,
  [SMALL_STATE(45)] = 2305,
  [SMALL_STATE(46)] = 2342,
  [SMALL_STATE(47)] = 2379,
  [SMALL_STATE(48)] = 2416,
  [SMALL_STATE(49)] = 2452,
  [SMALL_STATE(50)] = 2488,
  [SMALL_STATE(51)] = 2524,
  [SMALL_STATE(52)] = 2560,
  [SMALL_STATE(53)] = 2596,
  [SMALL_STATE(54)] = 2632,
  [SMALL_STATE(55)] = 2668,
  [SMALL_STATE(56)] = 2704,
  [SMALL_STATE(57)] = 2740,
  [SMALL_STATE(58)] = 2780,
  [SMALL_STATE(59)] = 2820,
  [SMALL_STATE(60)] = 2861,
  [SMALL_STATE(61)] = 2901,
  [SMALL_STATE(62)] = 2935,
  [SMALL_STATE(63)] = 2975,
  [SMALL_STATE(64)] = 3013,
  [SMALL_STATE(65)] = 3053,
  [SMALL_STATE(66)] = 3090,
  [SMALL_STATE(67)] = 3127,
  [SMALL_STATE(68)] = 3160,
  [SMALL_STATE(69)] = 3197,
  [SMALL_STATE(70)] = 3232,
  [SMALL_STATE(71)] = 3267,
  [SMALL_STATE(72)] = 3300,
  [SMALL_STATE(73)] = 3339,
  [SMALL_STATE(74)] = 3374,
  [SMALL_STATE(75)] = 3407,
  [SMALL_STATE(76)] = 3440,
  [SMALL_STATE(77)] = 3472,
  [SMALL_STATE(78)] = 3504,
  [SMALL_STATE(79)] = 3536,
  [SMALL_STATE(80)] = 3568,
  [SMALL_STATE(81)] = 3600,
  [SMALL_STATE(82)] = 3634,
  [SMALL_STATE(83)] = 3668,
  [SMALL_STATE(84)] = 3702,
  [SMALL_STATE(85)] = 3734,
  [SMALL_STATE(86)] = 3766,
  [SMALL_STATE(87)] = 3798,
  [SMALL_STATE(88)] = 3830,
  [SMALL_STATE(89)] = 3862,
  [SMALL_STATE(90)] = 3894,
  [SMALL_STATE(91)] = 3926,
  [SMALL_STATE(92)] = 3959,
  [SMALL_STATE(93)] = 3990,
  [SMALL_STATE(94)] = 4021,
  [SMALL_STATE(95)] = 4052,
  [SMALL_STATE(96)] = 4083,
  [SMALL_STATE(97)] = 4114,
  [SMALL_STATE(98)] = 4145,
  [SMALL_STATE(99)] = 4176,
  [SMALL_STATE(100)] = 4207,
  [SMALL_STATE(101)] = 4238,
  [SMALL_STATE(102)] = 4271,
  [SMALL_STATE(103)] = 4304,
  [SMALL_STATE(104)] = 4335,
  [SMALL_STATE(105)] = 4366,
  [SMALL_STATE(106)] = 4396,
  [SMALL_STATE(107)] = 4426,
  [SMALL_STATE(108)] = 4456,
  [SMALL_STATE(109)] = 4486,
  [SMALL_STATE(110)] = 4516,
  [SMALL_STATE(111)] = 4546,
  [SMALL_STATE(112)] = 4576,
  [SMALL_STATE(113)] = 4606,
  [SMALL_STATE(114)] = 4636,
  [SMALL_STATE(115)] = 4666,
  [SMALL_STATE(116)] = 4683,
  [SMALL_STATE(117)] = 4700,
  [SMALL_STATE(118)] = 4714,
  [SMALL_STATE(119)] = 4725,
  [SMALL_STATE(120)] = 4736,
  [SMALL_STATE(121)] = 4747,
  [SMALL_STATE(122)] = 4758,
  [SMALL_STATE(123)] = 4769,
  [SMALL_STATE(124)] = 4773,
  [SMALL_STATE(125)] = 4777,
  [SMALL_STATE(126)] = 4781,
  [SMALL_STATE(127)] = 4785,
  [SMALL_STATE(128)] = 4789,
  [SMALL_STATE(129)] = 4793,
  [SMALL_STATE(130)] = 4797,
  [SMALL_STATE(131)] = 4801,
  [SMALL_STATE(132)] = 4805,
  [SMALL_STATE(133)] = 4809,
  [SMALL_STATE(134)] = 4813,
  [SMALL_STATE(135)] = 4817,
  [SMALL_STATE(136)] = 4821,
  [SMALL_STATE(137)] = 4825,
  [SMALL_STATE(138)] = 4829,
  [SMALL_STATE(139)] = 4833,
  [SMALL_STATE(140)] = 4837,
  [SMALL_STATE(141)] = 4841,
  [SMALL_STATE(142)] = 4845,
  [SMALL_STATE(143)] = 4849,
  [SMALL_STATE(144)] = 4853,
  [SMALL_STATE(145)] = 4857,
  [SMALL_STATE(146)] = 4861,
  [SMALL_STATE(147)] = 4865,
  [SMALL_STATE(148)] = 4869,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(84),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(59),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(84),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(73),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(69),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(89),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(89),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(64),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(126),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(118),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(31),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(29),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(130),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(87),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(132),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(84),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(59),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(84),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(118),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(130),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(132),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 10),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 10),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(94),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(62),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(94),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(83),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(82),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(98),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(98),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(66),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(145),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(99),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(146),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(79),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(59),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(79),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(73),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(69),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(89),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(89),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(130),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(87),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(132),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(97),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(62),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(97),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(83),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(82),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(98),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(98),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(145),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(99),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(146),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(107),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(72),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(107),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(91),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(101),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(113),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(113),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(147),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(114),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(148),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(47),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 19),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 19),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 18),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 18),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(46),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(46),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 14),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 14),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 13),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 13),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 8),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 8),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 12),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 12),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 6),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 6),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 6),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 6),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 6),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(61),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(61),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(75),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(80),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 9),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 9),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 9),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 9),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 3),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(126),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(31),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2), SHIFT_REPEAT(130),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [648] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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
