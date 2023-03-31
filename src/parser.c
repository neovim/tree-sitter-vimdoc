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
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 1
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 22

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
  aux_sym_codeblock_token1 = 31,
  anon_sym_LF = 32,
  anon_sym_LF2 = 33,
  aux_sym_line_li_token1 = 34,
  aux_sym_line_code_token1 = 35,
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
  alias_sym_code = 88,
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
  [aux_sym_codeblock_token1] = "language",
  [anon_sym_LF] = "\n",
  [anon_sym_LF2] = "\n",
  [aux_sym_line_li_token1] = "line_li_token1",
  [aux_sym_line_code_token1] = "line_code_token1",
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
  [alias_sym_code] = "code",
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
  [aux_sym_codeblock_token1] = aux_sym_codeblock_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LF2] = anon_sym_LF,
  [aux_sym_line_li_token1] = aux_sym_line_li_token1,
  [aux_sym_line_code_token1] = aux_sym_line_code_token1,
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
  [alias_sym_code] = alias_sym_code,
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
  [aux_sym_codeblock_token1] = {
    .visible = true,
    .named = true,
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
  [alias_sym_code] = {
    .visible = true,
    .named = true,
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
  [14] = {.index = 8, .length = 1},
  [15] = {.index = 9, .length = 2},
  [19] = {.index = 11, .length = 2},
  [20] = {.index = 13, .length = 1},
  [21] = {.index = 14, .length = 2},
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
    {field_blank, 2, .inherited = true},
  [9] =
    {field_blank, 1, .inherited = true},
    {field_blank, 2, .inherited = true},
  [11] =
    {field_name, 0},
    {field_name, 1},
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
    [2] = alias_sym_code,
  },
  [12] = {
    [1] = sym_line,
    [2] = sym_line,
  },
  [13] = {
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
  aux_sym_codeblock_repeat1, 2,
    aux_sym_codeblock_repeat1,
    alias_sym_code,
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
  [45] = 34,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 35,
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
  [62] = 48,
  [63] = 49,
  [64] = 52,
  [65] = 65,
  [66] = 54,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 68,
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
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 94,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '(') ADVANCE(481);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '+') ADVANCE(232);
      if (lookahead == '<') ADVANCE(387);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(238);
      if (lookahead == 'C') ADVANCE(240);
      if (lookahead == 'M') ADVANCE(236);
      if (lookahead == '`') ADVANCE(485);
      if (lookahead == 'h') ADVANCE(241);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
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
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(262);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(33);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '<') ADVANCE(388);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == 8226) ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(213);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '<') ADVANCE(388);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '<') ADVANCE(388);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == '*') ADVANCE(401);
      if (lookahead == '<') ADVANCE(247);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead == 'A') ADVANCE(237);
      if (lookahead == 'C') ADVANCE(239);
      if (lookahead == 'M') ADVANCE(235);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '|') ADVANCE(260);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(234);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(243);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(59);
      if (lookahead == 'M') ADVANCE(57);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(33);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(277);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '>') ADVANCE(291);
      if (lookahead == 'A') ADVANCE(104);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == 'M') ADVANCE(103);
      if (lookahead == '`') ADVANCE(489);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == '~') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '*') ADVANCE(402);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == 'A') ADVANCE(425);
      if (lookahead == 'C') ADVANCE(428);
      if (lookahead == 'M') ADVANCE(424);
      if (lookahead == '`') ADVANCE(486);
      if (lookahead == 'h') ADVANCE(433);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '~') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(278);
      if (lookahead == '*') ADVANCE(400);
      if (lookahead == '<') ADVANCE(545);
      if (lookahead == '>') ADVANCE(292);
      if (lookahead == 'A') ADVANCE(506);
      if (lookahead == 'C') ADVANCE(509);
      if (lookahead == 'M') ADVANCE(505);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(514);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0) ADVANCE(546);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '<') ADVANCE(386);
      if (lookahead == '`') ADVANCE(485);
      if (lookahead == '|') ADVANCE(487);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(393);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(403);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(492);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(256);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '<') ADVANCE(212);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(280);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '<') ADVANCE(388);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '>') ADVANCE(290);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(285);
      if (lookahead == 8226) ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(213);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ':') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 't') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 't') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'L') ADVANCE(374);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'T') ADVANCE(373);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
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
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '>') ADVANCE(295);
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
      if (lookahead == '>') ADVANCE(295);
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
      if (lookahead == '>') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
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
      if (lookahead == '>') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(325);
      if (lookahead == 'D') ADVANCE(319);
      if (lookahead == 'I') ADVANCE(322);
      if (lookahead == 'P') ADVANCE(314);
      if (lookahead == 'S') ADVANCE(311);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
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
      if (lookahead == 'k') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(333);
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
      if (lookahead == 'p') ADVANCE(333);
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
      if (lookahead == 't') ADVANCE(333);
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
      if (lookahead == '}') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(406);
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
          lookahead == '_') ADVANCE(385);
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
      if (lookahead == '\n') ADVANCE(395);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'A') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'L') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '-') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '>') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'B') ADVANCE(308);
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 'I') ADVANCE(307);
      if (lookahead == 'P') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(303);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'D') ADVANCE(134);
      if (lookahead == 'U') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'I') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'g') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'k') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'w') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '}') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(144);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
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
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0) ADVANCE(330);
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
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == 'E') ADVANCE(352);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(351);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == 'T') ADVANCE(350);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '>') ADVANCE(295);
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
      if (lookahead == '>') ADVANCE(295);
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
      if (lookahead == '>') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
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
      if (lookahead == '>') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(327);
      if (lookahead == 'D') ADVANCE(321);
      if (lookahead == 'I') ADVANCE(324);
      if (lookahead == 'P') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(312);
      if (lookahead == '{') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
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
      if (lookahead == 'k') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(333);
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
      if (lookahead == 'p') ADVANCE(333);
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
      if (lookahead == 't') ADVANCE(333);
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
      if (lookahead == '}') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(214);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(406);
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
          lookahead == '_') ADVANCE(367);
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
      if (lookahead == '\n') ADVANCE(396);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
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
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
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
      if (lookahead == 't') ADVANCE(410);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(282);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
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
      if (lookahead == 't') ADVANCE(415);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
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
      if (lookahead == '>') ADVANCE(295);
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
          lookahead != ']') ADVANCE(406);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '|') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
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
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '|') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '|') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(546);
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
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
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
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
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
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
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
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
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
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
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
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '>') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'H') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(69);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(188);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(380);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == '-') ADVANCE(365);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == 'A') ADVANCE(347);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == 'L') ADVANCE(346);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == 'R') ADVANCE(349);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == 'T') ADVANCE(345);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == 'T') ADVANCE(348);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(367);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '-') ADVANCE(366);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(363);
      if (lookahead == 'D') ADVANCE(361);
      if (lookahead == 'I') ADVANCE(362);
      if (lookahead == 'P') ADVANCE(360);
      if (lookahead == 'S') ADVANCE(357);
      if (lookahead == '{') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'F') ADVANCE(359);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'H') ADVANCE(358);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'I') ADVANCE(356);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'T') ADVANCE(354);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(341);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'A') ADVANCE(370);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'L') ADVANCE(369);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'R') ADVANCE(372);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'T') ADVANCE(368);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == 'T') ADVANCE(371);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'B') ADVANCE(326);
      if (lookahead == 'D') ADVANCE(320);
      if (lookahead == 'I') ADVANCE(323);
      if (lookahead == 'P') ADVANCE(315);
      if (lookahead == 'S') ADVANCE(313);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'F') ADVANCE(381);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'I') ADVANCE(379);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'T') ADVANCE(377);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 382:
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
    case 383:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(329);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 387:
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
    case 388:
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
    case 389:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(393);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(144);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(408);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == ':') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(407);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(282);
      if (lookahead == 't') ADVANCE(409);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(282);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(252);
      if (lookahead == 's') ADVANCE(413);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ':') ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == 'p') ADVANCE(412);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == 't') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(251);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(251);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
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
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == '-') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == '-') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == '-') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == ':') ADVANCE(471);
      if (lookahead == 's') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == ':') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 'E') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 'L') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 'L') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 'T') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 'T') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 'T') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 'p') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (lookahead == 't') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(439);
      if (lookahead == '>') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(438);
      if (lookahead == '|') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'B') ADVANCE(464);
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == 'I') ADVANCE(459);
      if (lookahead == 'P') ADVANCE(446);
      if (lookahead == 'S') ADVANCE(443);
      if (lookahead == '{') ADVANCE(449);
      if (lookahead == '|') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(476);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(460);
      if (lookahead == 'U') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(476);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(476);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(406);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '|') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(476);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '{') ADVANCE(274);
      if (lookahead == '}') ADVANCE(269);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '}') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(476);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (lookahead == '\n') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(261);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(547);
      if (lookahead == '>') ADVANCE(519);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(519);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(341);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(546);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(302);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'B') ADVANCE(539);
      if (lookahead == 'D') ADVANCE(527);
      if (lookahead == 'I') ADVANCE(535);
      if (lookahead == 'P') ADVANCE(525);
      if (lookahead == 'S') ADVANCE(522);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(546);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(337);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(546);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(329);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(546);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == '-') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == '-') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == '-') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == ':') ADVANCE(544);
      if (lookahead == 's') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == ':') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 'A') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 'L') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 'L') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 'R') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 'T') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 'T') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 'T') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 'p') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 't') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (lookahead == 't') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '(') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '-') ADVANCE(494);
      if (lookahead == '>') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '>') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '>') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'D') ADVANCE(536);
      if (lookahead == 'U') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'F') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'H') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'I') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'T') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'g') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'k') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'n') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'r') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 't') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'w') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == '|') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(546);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(546);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(548);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 31},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 18},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 31},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 28},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 18},
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
    [sym_help_file] = STATE(97),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(96),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(58),
    [sym__blank] = STATE(46),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(92),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(92),
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
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(96),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(58),
    [sym__blank] = STATE(46),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(92),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(43),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(92),
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
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(96),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(58),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(92),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(92),
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
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(96),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(58),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(92),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(92),
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
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(96),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(58),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(92),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(92),
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
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(96),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(58),
    [sym__blank] = STATE(41),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(91),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(91),
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
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(96),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(58),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(58),
    [sym_column_heading] = STATE(58),
    [sym_h1] = STATE(58),
    [sym_h2] = STATE(58),
    [sym_h3] = STATE(58),
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
    STATE(67), 1,
      sym__line_noli,
    STATE(80), 1,
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
    STATE(17), 11,
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
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(182), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(80), 1,
      sym__word_common,
    ACTIONS(19), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(184), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(17), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(9), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(17), 11,
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
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(186), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(80), 1,
      sym__word_common,
    ACTIONS(19), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(188), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(17), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(9), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(17), 11,
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
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(190), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(80), 1,
      sym__word_common,
    ACTIONS(19), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(192), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(17), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(9), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(17), 11,
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
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(194), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(80), 1,
      sym__word_common,
    ACTIONS(19), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(196), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(17), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(9), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(17), 11,
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
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(198), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(80), 1,
      sym__word_common,
    ACTIONS(19), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(200), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(17), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(9), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(17), 11,
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
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(202), 1,
      anon_sym_LT,
    STATE(10), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(80), 1,
      sym__word_common,
    ACTIONS(19), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(204), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(17), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(9), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(17), 11,
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
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(206), 1,
      anon_sym_LT,
    STATE(11), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(80), 1,
      sym__word_common,
    ACTIONS(19), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(208), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(17), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(9), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(17), 11,
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
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(210), 1,
      anon_sym_LT,
    STATE(12), 1,
      aux_sym_line_li_repeat2,
    STATE(67), 1,
      sym__line_noli,
    STATE(80), 1,
      sym__word_common,
    ACTIONS(19), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(212), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 4,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    ACTIONS(17), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(9), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(17), 11,
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
  [702] = 16,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(218), 1,
      anon_sym_GT,
    ACTIONS(220), 1,
      anon_sym_LF2,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(66), 1,
      sym_codeblock,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(84), 10,
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
  [774] = 17,
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
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(224), 1,
      anon_sym_TILDE,
    ACTIONS(226), 1,
      anon_sym_LF2,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(54), 1,
      sym_codeblock,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    STATE(84), 10,
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
  [848] = 16,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(218), 1,
      anon_sym_GT,
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(228), 1,
      anon_sym_LF2,
    STATE(13), 1,
      sym_codeblock,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(84), 10,
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
  [920] = 16,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(218), 1,
      anon_sym_GT,
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(230), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(64), 1,
      sym_codeblock,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(84), 10,
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
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(218), 1,
      anon_sym_GT,
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(232), 1,
      anon_sym_LF2,
    STATE(15), 1,
      sym_codeblock,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
    STATE(84), 10,
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
  [1064] = 17,
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
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(234), 1,
      anon_sym_TILDE,
    ACTIONS(236), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(52), 1,
      sym_codeblock,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 7,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
    STATE(84), 10,
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
  [1138] = 14,
    ACTIONS(241), 1,
      anon_sym_SQUOTE,
    ACTIONS(247), 1,
      anon_sym_PIPE,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_LF2,
    ACTIONS(261), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      sym_url_word,
    ACTIONS(267), 1,
      anon_sym_BQUOTE2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(238), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(253), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(256), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(244), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(84), 10,
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
  [1205] = 14,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(270), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(84), 10,
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
  [1272] = 14,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(272), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(84), 10,
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
  [1339] = 14,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(274), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(84), 10,
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
  [1406] = 14,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(276), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(84), 10,
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
  [1473] = 13,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(84), 10,
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
  [1537] = 13,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(84), 10,
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
  [1601] = 13,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(84), 10,
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
  [1665] = 13,
    ACTIONS(7), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE2,
    ACTIONS(222), 1,
      anon_sym_STAR,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(82), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(216), 9,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token6,
      anon_sym_TILDE,
      anon_sym_GT,
    STATE(84), 10,
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
  [1729] = 6,
    ACTIONS(25), 1,
      anon_sym_LF2,
    ACTIONS(282), 1,
      aux_sym_line_li_token1,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(278), 15,
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
    ACTIONS(280), 15,
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
  [1776] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(286), 15,
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
    ACTIONS(284), 16,
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
  [1821] = 6,
    ACTIONS(290), 1,
      anon_sym_LF2,
    ACTIONS(292), 1,
      aux_sym_line_code_token1,
    STATE(35), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
    ACTIONS(294), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(288), 28,
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
  [1868] = 6,
    ACTIONS(298), 1,
      anon_sym_LF2,
    ACTIONS(301), 1,
      aux_sym_line_code_token1,
    STATE(35), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
    ACTIONS(304), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(296), 28,
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
  [1915] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(308), 15,
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
    ACTIONS(306), 16,
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
  [1960] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(39), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(312), 15,
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
    ACTIONS(310), 16,
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
  [2005] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(316), 15,
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
    ACTIONS(314), 16,
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
  [2050] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(320), 15,
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
    ACTIONS(318), 16,
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
  [2095] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(36), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(316), 15,
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
    ACTIONS(314), 16,
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
  [2140] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(44), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(312), 15,
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
    ACTIONS(310), 16,
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
  [2185] = 6,
    ACTIONS(25), 1,
      anon_sym_LF2,
    ACTIONS(282), 1,
      aux_sym_line_li_token1,
    STATE(38), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(322), 15,
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
    ACTIONS(324), 15,
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
  [2232] = 5,
    ACTIONS(330), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(328), 15,
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
    ACTIONS(326), 16,
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
  [2277] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(320), 15,
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
    ACTIONS(318), 16,
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
  [2322] = 5,
    ACTIONS(333), 1,
      anon_sym_LF2,
    ACTIONS(335), 1,
      aux_sym_line_code_token1,
    STATE(50), 1,
      aux_sym_codeblock_repeat1,
    STATE(62), 1,
      sym_line_code,
    ACTIONS(288), 28,
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
  [2365] = 2,
    ACTIONS(339), 15,
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
    ACTIONS(337), 17,
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
  [2402] = 2,
    ACTIONS(343), 15,
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
    ACTIONS(341), 17,
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
  [2439] = 2,
    ACTIONS(347), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(345), 29,
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
  [2476] = 2,
    ACTIONS(351), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(349), 29,
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
  [2513] = 5,
    ACTIONS(353), 1,
      anon_sym_LF2,
    ACTIONS(356), 1,
      aux_sym_line_code_token1,
    STATE(50), 1,
      aux_sym_codeblock_repeat1,
    STATE(62), 1,
      sym_line_code,
    ACTIONS(296), 28,
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
  [2556] = 3,
    ACTIONS(361), 3,
      aux_sym__word_common_token3,
      aux_sym__word_common_token4,
      anon_sym_LF2,
    ACTIONS(363), 6,
      aux_sym_taglink_token1,
      anon_sym_LBRACE2,
      anon_sym_RBRACE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    ACTIONS(359), 23,
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
  [2595] = 2,
    ACTIONS(365), 15,
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
    ACTIONS(367), 16,
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
  [2631] = 2,
    ACTIONS(369), 15,
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
    ACTIONS(371), 16,
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
  [2667] = 2,
    ACTIONS(373), 15,
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
    ACTIONS(375), 16,
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
  [2703] = 2,
    ACTIONS(377), 15,
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
    ACTIONS(379), 16,
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
  [2739] = 2,
    ACTIONS(381), 15,
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
    ACTIONS(383), 16,
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
  [2775] = 2,
    ACTIONS(385), 15,
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
  [2811] = 2,
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
    ACTIONS(391), 16,
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
  [2847] = 2,
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
    ACTIONS(395), 16,
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
  [2883] = 2,
    ACTIONS(397), 15,
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
    ACTIONS(399), 16,
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
  [2919] = 2,
    ACTIONS(401), 15,
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
    ACTIONS(403), 16,
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
  [2955] = 2,
    ACTIONS(347), 1,
      anon_sym_LF2,
    ACTIONS(345), 29,
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
  [2990] = 2,
    ACTIONS(351), 1,
      anon_sym_LF2,
    ACTIONS(349), 29,
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
  [3025] = 2,
    ACTIONS(367), 14,
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
    ACTIONS(365), 15,
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
  [3059] = 4,
    ACTIONS(407), 1,
      aux_sym_optionlink_token1,
    ACTIONS(405), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(361), 11,
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
    ACTIONS(359), 15,
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
  [3097] = 2,
    ACTIONS(375), 14,
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
    ACTIONS(373), 15,
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
  [3131] = 2,
    ACTIONS(411), 14,
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
    ACTIONS(409), 15,
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
  [3165] = 3,
    ACTIONS(413), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(359), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(361), 18,
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
  [3200] = 4,
    ACTIONS(419), 1,
      aux_sym_uppercase_name_token2,
    STATE(69), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(415), 12,
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
    ACTIONS(417), 14,
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
  [3237] = 5,
    ACTIONS(426), 1,
      aux_sym_uppercase_name_token2,
    STATE(73), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(428), 2,
      anon_sym_LF2,
      anon_sym_STAR,
    ACTIONS(422), 12,
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
    ACTIONS(424), 12,
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
      sym_url_word,
      anon_sym_BQUOTE2,
  [3276] = 4,
    ACTIONS(426), 1,
      aux_sym_uppercase_name_token2,
    STATE(72), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(422), 12,
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
    ACTIONS(424), 14,
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
  [3313] = 4,
    ACTIONS(426), 1,
      aux_sym_uppercase_name_token2,
    STATE(69), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(430), 12,
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
    ACTIONS(432), 14,
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
  [3350] = 5,
    ACTIONS(426), 1,
      aux_sym_uppercase_name_token2,
    STATE(69), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(434), 2,
      anon_sym_LF2,
      anon_sym_STAR,
    ACTIONS(430), 12,
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
    ACTIONS(432), 12,
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
      sym_url_word,
      anon_sym_BQUOTE2,
  [3389] = 3,
    ACTIONS(436), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(359), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(361), 18,
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
  [3424] = 3,
    ACTIONS(438), 1,
      anon_sym_LF,
    ACTIONS(359), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(361), 18,
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
  [3458] = 3,
    ACTIONS(442), 1,
      anon_sym_SQUOTE2,
    ACTIONS(440), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(444), 18,
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
  [3492] = 3,
    ACTIONS(446), 1,
      aux_sym_argument_token1,
    ACTIONS(361), 6,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token6,
      anon_sym_LF2,
    ACTIONS(359), 20,
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
  [3526] = 3,
    ACTIONS(448), 1,
      anon_sym_LF,
    ACTIONS(359), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(361), 18,
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
  [3560] = 2,
    ACTIONS(450), 13,
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
    ACTIONS(452), 14,
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
  [3592] = 2,
    ACTIONS(454), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(456), 19,
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
  [3623] = 2,
    ACTIONS(458), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(460), 19,
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
  [3654] = 2,
    ACTIONS(462), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(464), 19,
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
  [3685] = 2,
    ACTIONS(466), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(468), 19,
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
  [3716] = 2,
    ACTIONS(470), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(472), 19,
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
  [3747] = 2,
    ACTIONS(474), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(476), 19,
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
  [3778] = 2,
    ACTIONS(478), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(480), 19,
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
  [3809] = 2,
    ACTIONS(482), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(484), 19,
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
  [3840] = 2,
    ACTIONS(486), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(488), 19,
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
  [3871] = 2,
    ACTIONS(490), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(492), 19,
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
  [3902] = 2,
    ACTIONS(494), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(496), 19,
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
  [3933] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(498), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym__blank,
    STATE(93), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3950] = 5,
    ACTIONS(25), 1,
      anon_sym_LF2,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(500), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym__blank,
    STATE(93), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3967] = 4,
    ACTIONS(502), 1,
      anon_sym_LT,
    ACTIONS(505), 1,
      anon_sym_LF2,
    ACTIONS(507), 1,
      aux_sym_line_li_token1,
    STATE(93), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3981] = 4,
    ACTIONS(290), 1,
      anon_sym_LF2,
    ACTIONS(292), 1,
      aux_sym_line_code_token1,
    STATE(34), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
  [3994] = 4,
    ACTIONS(333), 1,
      anon_sym_LF2,
    ACTIONS(335), 1,
      aux_sym_line_code_token1,
    STATE(45), 1,
      aux_sym_codeblock_repeat1,
    STATE(62), 1,
      sym_line_code,
  [4007] = 3,
    ACTIONS(222), 1,
      anon_sym_STAR,
    ACTIONS(510), 1,
      anon_sym_LF2,
    STATE(25), 1,
      sym_tag,
  [4017] = 1,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
  [4021] = 1,
    ACTIONS(514), 1,
      anon_sym_SQUOTE2,
  [4025] = 1,
    ACTIONS(282), 1,
      aux_sym_line_li_token1,
  [4029] = 1,
    ACTIONS(516), 1,
      anon_sym_BQUOTE,
  [4033] = 1,
    ACTIONS(518), 1,
      anon_sym_STAR2,
  [4037] = 1,
    ACTIONS(520), 1,
      aux_sym_codespan_token1,
  [4041] = 1,
    ACTIONS(522), 1,
      aux_sym_tag_token1,
  [4045] = 1,
    ACTIONS(524), 1,
      anon_sym_RBRACE2,
  [4049] = 1,
    ACTIONS(526), 1,
      anon_sym_PIPE2,
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
  [SMALL_STATE(18)] = 774,
  [SMALL_STATE(19)] = 848,
  [SMALL_STATE(20)] = 920,
  [SMALL_STATE(21)] = 992,
  [SMALL_STATE(22)] = 1064,
  [SMALL_STATE(23)] = 1138,
  [SMALL_STATE(24)] = 1205,
  [SMALL_STATE(25)] = 1272,
  [SMALL_STATE(26)] = 1339,
  [SMALL_STATE(27)] = 1406,
  [SMALL_STATE(28)] = 1473,
  [SMALL_STATE(29)] = 1537,
  [SMALL_STATE(30)] = 1601,
  [SMALL_STATE(31)] = 1665,
  [SMALL_STATE(32)] = 1729,
  [SMALL_STATE(33)] = 1776,
  [SMALL_STATE(34)] = 1821,
  [SMALL_STATE(35)] = 1868,
  [SMALL_STATE(36)] = 1915,
  [SMALL_STATE(37)] = 1960,
  [SMALL_STATE(38)] = 2005,
  [SMALL_STATE(39)] = 2050,
  [SMALL_STATE(40)] = 2095,
  [SMALL_STATE(41)] = 2140,
  [SMALL_STATE(42)] = 2185,
  [SMALL_STATE(43)] = 2232,
  [SMALL_STATE(44)] = 2277,
  [SMALL_STATE(45)] = 2322,
  [SMALL_STATE(46)] = 2365,
  [SMALL_STATE(47)] = 2402,
  [SMALL_STATE(48)] = 2439,
  [SMALL_STATE(49)] = 2476,
  [SMALL_STATE(50)] = 2513,
  [SMALL_STATE(51)] = 2556,
  [SMALL_STATE(52)] = 2595,
  [SMALL_STATE(53)] = 2631,
  [SMALL_STATE(54)] = 2667,
  [SMALL_STATE(55)] = 2703,
  [SMALL_STATE(56)] = 2739,
  [SMALL_STATE(57)] = 2775,
  [SMALL_STATE(58)] = 2811,
  [SMALL_STATE(59)] = 2847,
  [SMALL_STATE(60)] = 2883,
  [SMALL_STATE(61)] = 2919,
  [SMALL_STATE(62)] = 2955,
  [SMALL_STATE(63)] = 2990,
  [SMALL_STATE(64)] = 3025,
  [SMALL_STATE(65)] = 3059,
  [SMALL_STATE(66)] = 3097,
  [SMALL_STATE(67)] = 3131,
  [SMALL_STATE(68)] = 3165,
  [SMALL_STATE(69)] = 3200,
  [SMALL_STATE(70)] = 3237,
  [SMALL_STATE(71)] = 3276,
  [SMALL_STATE(72)] = 3313,
  [SMALL_STATE(73)] = 3350,
  [SMALL_STATE(74)] = 3389,
  [SMALL_STATE(75)] = 3424,
  [SMALL_STATE(76)] = 3458,
  [SMALL_STATE(77)] = 3492,
  [SMALL_STATE(78)] = 3526,
  [SMALL_STATE(79)] = 3560,
  [SMALL_STATE(80)] = 3592,
  [SMALL_STATE(81)] = 3623,
  [SMALL_STATE(82)] = 3654,
  [SMALL_STATE(83)] = 3685,
  [SMALL_STATE(84)] = 3716,
  [SMALL_STATE(85)] = 3747,
  [SMALL_STATE(86)] = 3778,
  [SMALL_STATE(87)] = 3809,
  [SMALL_STATE(88)] = 3840,
  [SMALL_STATE(89)] = 3871,
  [SMALL_STATE(90)] = 3902,
  [SMALL_STATE(91)] = 3933,
  [SMALL_STATE(92)] = 3950,
  [SMALL_STATE(93)] = 3967,
  [SMALL_STATE(94)] = 3981,
  [SMALL_STATE(95)] = 3994,
  [SMALL_STATE(96)] = 4007,
  [SMALL_STATE(97)] = 4017,
  [SMALL_STATE(98)] = 4021,
  [SMALL_STATE(99)] = 4025,
  [SMALL_STATE(100)] = 4029,
  [SMALL_STATE(101)] = 4033,
  [SMALL_STATE(102)] = 4037,
  [SMALL_STATE(103)] = 4041,
  [SMALL_STATE(104)] = 4045,
  [SMALL_STATE(105)] = 4049,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(80),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(65),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(80),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(51),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(77),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(68),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(70),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(99),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(31),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(29),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(28),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(103),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(86),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(102),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(51),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(103),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(86),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(102),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(80),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(65),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(80),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(51),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(77),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(88),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(88),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(71),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(103),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(86),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(102),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 17),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 17),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 13),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 13),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 17),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 17),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 13),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 13),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(82),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(65),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(82),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(51),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(77),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(88),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(88),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(103),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(86),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(102),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 20),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 20),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3, .production_id = 11),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 11),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(49),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(49),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 21),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 21),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 8),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 8),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 14),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 14),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 15),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 15),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(47),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(63),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(63),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 6),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 6),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 6),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, .production_id = 6),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, .production_id = 6),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 6),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 6),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 4, .production_id = 19),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 4, .production_id = 19),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 18),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 18),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(79),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 9),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 9),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 10),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 10),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 9),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 9),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(99),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(31),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [512] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vimdoc(void) {
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
