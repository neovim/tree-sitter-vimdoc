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
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
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
  anon_sym_SQUOTE = 7,
  aux_sym__word_common_token2 = 8,
  anon_sym_SQUOTE2 = 9,
  aux_sym__word_common_token3 = 10,
  aux_sym__word_common_token4 = 11,
  anon_sym_PIPE = 12,
  aux_sym__word_common_token5 = 13,
  aux_sym__word_common_token6 = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_LBRACE_RBRACE = 17,
  aux_sym__word_common_token7 = 18,
  anon_sym_LPAREN = 19,
  aux_sym__word_common_token8 = 20,
  aux_sym_keycode_token1 = 21,
  aux_sym_keycode_token2 = 22,
  aux_sym_keycode_token3 = 23,
  aux_sym_keycode_token4 = 24,
  aux_sym_keycode_token5 = 25,
  aux_sym_keycode_token6 = 26,
  aux_sym_keycode_token7 = 27,
  aux_sym_keycode_token8 = 28,
  aux_sym_uppercase_name_token1 = 29,
  aux_sym_uppercase_name_token2 = 30,
  anon_sym_LT = 31,
  aux_sym_codeblock_token1 = 32,
  aux_sym_line_li_token1 = 33,
  anon_sym_LF = 34,
  aux_sym_line_code_token1 = 35,
  aux_sym_column_heading_token1 = 36,
  aux_sym_h1_token1 = 37,
  aux_sym_h2_token1 = 38,
  anon_sym_STAR = 39,
  aux_sym_tag_token1 = 40,
  anon_sym_STAR2 = 41,
  sym_url_word = 42,
  aux_sym_optionlink_token1 = 43,
  aux_sym_taglink_token1 = 44,
  anon_sym_PIPE2 = 45,
  anon_sym_BQUOTE = 46,
  aux_sym_codespan_token1 = 47,
  anon_sym_BQUOTE2 = 48,
  aux_sym_argument_token1 = 49,
  anon_sym_RBRACE2 = 50,
  sym_help_file = 51,
  sym__atom = 52,
  sym_word = 53,
  sym__atom_noli = 54,
  sym_word_noli = 55,
  sym__atom_common = 56,
  sym__word_common = 57,
  sym_keycode = 58,
  sym_uppercase_name = 59,
  sym__uppercase_words = 60,
  sym_block = 61,
  sym_codeblock = 62,
  sym__blank = 63,
  sym_line = 64,
  sym_line_li = 65,
  sym_line_code = 66,
  sym__line_noli = 67,
  sym_column_heading = 68,
  sym_h1 = 69,
  sym_h2 = 70,
  sym_h3 = 71,
  sym_tag = 72,
  sym_url = 73,
  sym_optionlink = 74,
  sym_taglink = 75,
  sym_codespan = 76,
  sym_argument = 77,
  aux_sym_help_file_repeat1 = 78,
  aux_sym_help_file_repeat2 = 79,
  aux_sym_uppercase_name_repeat1 = 80,
  aux_sym_block_repeat1 = 81,
  aux_sym_block_repeat2 = 82,
  aux_sym_block_repeat3 = 83,
  aux_sym_codeblock_repeat1 = 84,
  aux_sym_line_li_repeat1 = 85,
  aux_sym_line_li_repeat2 = 86,
  aux_sym_h3_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_help_file_token1] = "help_file_token1",
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
  [aux_sym__word_common_token6] = "_word_common_token6",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [aux_sym__word_common_token7] = "_word_common_token7",
  [anon_sym_LPAREN] = "(",
  [aux_sym__word_common_token8] = "_word_common_token8",
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
  [aux_sym_line_li_token1] = "line_li_token1",
  [anon_sym_LF] = "\n",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__word_common_token2] = aux_sym__word_common_token2,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym__word_common_token3] = aux_sym__word_common_token3,
  [aux_sym__word_common_token4] = aux_sym__word_common_token4,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym__word_common_token5] = aux_sym__word_common_token5,
  [aux_sym__word_common_token6] = aux_sym__word_common_token6,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [aux_sym__word_common_token7] = aux_sym__word_common_token7,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__word_common_token8] = aux_sym__word_common_token8,
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
  [aux_sym_line_li_token1] = aux_sym_line_li_token1,
  [anon_sym_LF] = anon_sym_LF,
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
  [aux_sym__word_common_token6] = {
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
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 23,
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
  [43] = 33,
  [44] = 44,
  [45] = 32,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 41,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 53,
  [63] = 49,
  [64] = 64,
  [65] = 57,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 60,
  [72] = 66,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 76,
  [83] = 73,
  [84] = 78,
  [85] = 75,
  [86] = 66,
  [87] = 80,
  [88] = 69,
  [89] = 68,
  [90] = 67,
  [91] = 74,
  [92] = 70,
  [93] = 77,
  [94] = 78,
  [95] = 79,
  [96] = 76,
  [97] = 77,
  [98] = 73,
  [99] = 75,
  [100] = 74,
  [101] = 67,
  [102] = 70,
  [103] = 68,
  [104] = 69,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 108,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 113,
  [116] = 116,
  [117] = 116,
  [118] = 116,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 119,
  [128] = 123,
  [129] = 122,
  [130] = 130,
  [131] = 131,
  [132] = 131,
  [133] = 124,
  [134] = 119,
  [135] = 123,
  [136] = 122,
  [137] = 130,
  [138] = 131,
  [139] = 130,
  [140] = 121,
  [141] = 120,
  [142] = 142,
  [143] = 121,
  [144] = 120,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '<') ADVANCE(383);
      if (lookahead == '>') ADVANCE(240);
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == 'M') ADVANCE(241);
      if (lookahead == '_') ADVANCE(247);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == '}') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(249);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(239);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(60);
      if (lookahead == 'M') ADVANCE(58);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(252);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(95);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(96);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'M') ADVANCE(151);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(30);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'M') ADVANCE(151);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'M') ADVANCE(47);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(60);
      if (lookahead == 'M') ADVANCE(58);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '~') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(95);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(60);
      if (lookahead == 'M') ADVANCE(58);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(95);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(106);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '|') ADVANCE(254);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(106);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead == 'h') ADVANCE(115);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '|') ADVANCE(254);
      if (lookahead == '}') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '>') ADVANCE(414);
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead == 'C') ADVANCE(432);
      if (lookahead == 'M') ADVANCE(428);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead == 'h') ADVANCE(437);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '~') ADVANCE(421);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '>') ADVANCE(414);
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead == 'C') ADVANCE(432);
      if (lookahead == 'M') ADVANCE(428);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead == 'h') ADVANCE(437);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead == 'C') ADVANCE(432);
      if (lookahead == 'M') ADVANCE(428);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead == 'h') ADVANCE(437);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(237);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == '}') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'M') ADVANCE(151);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '<') ADVANCE(215);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'C') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(161);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '<') ADVANCE(215);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'C') ADVANCE(165);
      if (lookahead == 'M') ADVANCE(161);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '>') ADVANCE(283);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(387);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(397);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(281);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(407);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(256);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(412);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'M') ADVANCE(151);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == '{') ADVANCE(260);
      if (lookahead == '|') ADVANCE(255);
      if (lookahead == '}') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(216);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(30);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_help_file_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'A') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'E') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'R') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'T') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'T') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'T') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == 'E') ADVANCE(371);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(370);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == 'T') ADVANCE(369);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '>') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(307);
      if (lookahead == 'D') ADVANCE(301);
      if (lookahead == 'I') ADVANCE(304);
      if (lookahead == 'P') ADVANCE(296);
      if (lookahead == 'S') ADVANCE(295);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'U') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(323);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(400);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 'L') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 'R') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 'p') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '(') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '>') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'B') ADVANCE(290);
      if (lookahead == 'D') ADVANCE(288);
      if (lookahead == 'I') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == 'S') ADVANCE(285);
      if (lookahead == '{') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'D') ADVANCE(137);
      if (lookahead == 'U') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'F') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'I') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'g') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'k') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'p') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'w') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '}') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(147);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'E') ADVANCE(341);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(342);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'T') ADVANCE(338);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '-') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '-') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '-') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == 's') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'A') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'E') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'R') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'T') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'T') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'T') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '>') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(309);
      if (lookahead == 'D') ADVANCE(303);
      if (lookahead == 'I') ADVANCE(306);
      if (lookahead == 'P') ADVANCE(298);
      if (lookahead == 'S') ADVANCE(294);
      if (lookahead == '{') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(203);
      if (lookahead == 'U') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(323);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(400);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(392);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t') ADVANCE(231);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'E') ADVANCE(340);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(339);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'T') ADVANCE(337);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 't') ADVANCE(404);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(274);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(237);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '|') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(469);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '|') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '|') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '}') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '}') ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '{') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (lookahead == '{') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '>') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'H') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(376);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(191);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(70);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(331);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(329);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(332);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(335);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'T') ADVANCE(327);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'T') ADVANCE(334);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == 'T') ADVANCE(328);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(363);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '-') ADVANCE(362);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(358);
      if (lookahead == 'D') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(356);
      if (lookahead == 'P') ADVANCE(352);
      if (lookahead == 'S') ADVANCE(349);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(359);
      if (lookahead == 'D') ADVANCE(355);
      if (lookahead == 'I') ADVANCE(357);
      if (lookahead == 'P') ADVANCE(353);
      if (lookahead == 'S') ADVANCE(349);
      if (lookahead == '{') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'F') ADVANCE(351);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'H') ADVANCE(350);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'I') ADVANCE(348);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'T') ADVANCE(345);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(323);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == 'A') ADVANCE(366);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == 'R') ADVANCE(368);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == 'T') ADVANCE(364);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(276);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '-') ADVANCE(380);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'B') ADVANCE(308);
      if (lookahead == 'D') ADVANCE(302);
      if (lookahead == 'I') ADVANCE(305);
      if (lookahead == 'P') ADVANCE(297);
      if (lookahead == 'S') ADVANCE(293);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(284);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'F') ADVANCE(377);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'I') ADVANCE(375);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'T') ADVANCE(373);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(323);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(387);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(147);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 's') ADVANCE(402);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ':') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(401);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == 't') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(274);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(237);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(17);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(17);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(32);
      if (lookahead == ' ') ADVANCE(470);
      if (lookahead == '>') ADVANCE(442);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(442);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(323);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(469);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(284);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'B') ADVANCE(462);
      if (lookahead == 'D') ADVANCE(450);
      if (lookahead == 'I') ADVANCE(458);
      if (lookahead == 'P') ADVANCE(448);
      if (lookahead == 'S') ADVANCE(445);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == '}') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(469);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(319);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(469);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\t') ADVANCE(311);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(469);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == '-') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == '-') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == '-') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ':') ADVANCE(467);
      if (lookahead == 's') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ':') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 'A') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 'E') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 'L') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 'L') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 'R') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 'p') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 't') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == 't') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '(') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == '>') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '>') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '>') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'U') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'F') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'H') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'I') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'T') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'k') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 's') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 't') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == 'w') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '|') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(469);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(469);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
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
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
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
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 36},
  [37] = {.lex_state = 36},
  [38] = {.lex_state = 36},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 36},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 36},
  [50] = {.lex_state = 36},
  [51] = {.lex_state = 36},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 33},
  [117] = {.lex_state = 33},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 35},
  [121] = {.lex_state = 31},
  [122] = {.lex_state = 19},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 31},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 31},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 31},
  [140] = {.lex_state = 31},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 36},
  [143] = {.lex_state = 31},
  [144] = {.lex_state = 35},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_help_file_token1] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_noli_token1] = ACTIONS(1),
    [aux_sym_word_noli_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym__word_common_token3] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [aux_sym__word_common_token7] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym__word_common_token8] = ACTIONS(1),
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
    [sym_help_file] = STATE(125),
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(111),
    [sym__uppercase_words] = STATE(17),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(106),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_help_file_token1] = ACTIONS(5),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(9),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
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
    [aux_sym_codeblock_token1] = ACTIONS(25),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [2] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(111),
    [sym__uppercase_words] = STATE(17),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(106),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_help_file_repeat1] = STATE(42),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_help_file_token1] = ACTIONS(41),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(9),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
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
    [aux_sym_codeblock_token1] = ACTIONS(25),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [3] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(111),
    [sym__uppercase_words] = STATE(17),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(106),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(9),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
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
    [aux_sym_codeblock_token1] = ACTIONS(25),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [4] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(111),
    [sym__uppercase_words] = STATE(17),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(106),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_noli_token1] = ACTIONS(45),
    [aux_sym_word_noli_token2] = ACTIONS(45),
    [aux_sym__word_common_token1] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym__word_common_token4] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(54),
    [aux_sym__word_common_token6] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(48),
    [aux_sym__word_common_token7] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(45),
    [aux_sym__word_common_token8] = ACTIONS(45),
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
    [anon_sym_BQUOTE] = ACTIONS(90),
  },
  [5] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(111),
    [sym__uppercase_words] = STATE(17),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(106),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(9),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
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
    [aux_sym_codeblock_token1] = ACTIONS(25),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [6] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(111),
    [sym__uppercase_words] = STATE(17),
    [sym_codeblock] = STATE(48),
    [sym__blank] = STATE(40),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(105),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(105),
    [aux_sym_help_file_token1] = ACTIONS(95),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(9),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_keycode_token1] = ACTIONS(17),
    [aux_sym_keycode_token2] = ACTIONS(17),
    [aux_sym_keycode_token3] = ACTIONS(17),
    [aux_sym_keycode_token4] = ACTIONS(17),
    [aux_sym_keycode_token5] = ACTIONS(19),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(17),
    [aux_sym_keycode_token8] = ACTIONS(17),
    [aux_sym_uppercase_name_token1] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(97),
    [aux_sym_codeblock_token1] = ACTIONS(25),
    [aux_sym_line_li_token1] = ACTIONS(27),
    [aux_sym_h1_token1] = ACTIONS(29),
    [aux_sym_h2_token1] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [7] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(80),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(111),
    [sym__uppercase_words] = STATE(17),
    [sym_codeblock] = STATE(48),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(48),
    [sym_column_heading] = STATE(48),
    [sym_h1] = STATE(48),
    [sym_h2] = STATE(48),
    [sym_h3] = STATE(48),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_help_file_token1] = ACTIONS(99),
    [aux_sym_word_noli_token1] = ACTIONS(101),
    [aux_sym_word_noli_token2] = ACTIONS(101),
    [aux_sym__word_common_token1] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [aux_sym__word_common_token4] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(110),
    [aux_sym__word_common_token6] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(104),
    [aux_sym__word_common_token7] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(101),
    [aux_sym__word_common_token8] = ACTIONS(101),
    [aux_sym_keycode_token1] = ACTIONS(116),
    [aux_sym_keycode_token2] = ACTIONS(116),
    [aux_sym_keycode_token3] = ACTIONS(116),
    [aux_sym_keycode_token4] = ACTIONS(116),
    [aux_sym_keycode_token5] = ACTIONS(119),
    [aux_sym_keycode_token6] = ACTIONS(119),
    [aux_sym_keycode_token7] = ACTIONS(116),
    [aux_sym_keycode_token8] = ACTIONS(116),
    [aux_sym_uppercase_name_token1] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(125),
    [aux_sym_codeblock_token1] = ACTIONS(127),
    [aux_sym_line_li_token1] = ACTIONS(99),
    [aux_sym_h1_token1] = ACTIONS(130),
    [aux_sym_h2_token1] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(136),
    [sym_url_word] = ACTIONS(139),
    [anon_sym_BQUOTE] = ACTIONS(142),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_LT,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(59), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(145), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(159), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    ACTIONS(149), 5,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
    ACTIONS(157), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
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
  [77] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(173), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(59), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(159), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(171), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    ACTIONS(149), 5,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
    ACTIONS(157), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
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
  [154] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(177), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(59), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(159), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(175), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    ACTIONS(149), 5,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
    ACTIONS(157), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
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
  [231] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(181), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(59), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(159), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(179), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    ACTIONS(149), 5,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
    ACTIONS(157), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
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
  [308] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(185), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(59), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(159), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(183), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    ACTIONS(149), 5,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
    ACTIONS(157), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
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
  [385] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(189), 1,
      anon_sym_LT,
    STATE(11), 1,
      aux_sym_line_li_repeat2,
    STATE(59), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(159), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(187), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    ACTIONS(149), 5,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
    ACTIONS(157), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
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
  [462] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(193), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(59), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(159), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(191), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    ACTIONS(149), 5,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
    ACTIONS(157), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
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
  [539] = 17,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_PIPE,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(221), 1,
      anon_sym_LT,
    ACTIONS(223), 1,
      anon_sym_STAR,
    ACTIONS(226), 1,
      sym_url_word,
    ACTIONS(229), 1,
      anon_sym_BQUOTE,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(59), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(195), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(215), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(197), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    ACTIONS(200), 5,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
    ACTIONS(212), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
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
  [616] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(234), 1,
      anon_sym_LT,
    STATE(10), 1,
      aux_sym_line_li_repeat2,
    STATE(59), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(159), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(232), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    ACTIONS(149), 5,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
    ACTIONS(157), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
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
  [693] = 17,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      aux_sym_codeblock_token1,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 1,
      aux_sym_column_heading_token1,
    ACTIONS(244), 1,
      anon_sym_STAR,
    STATE(18), 1,
      aux_sym_line_li_repeat1,
    STATE(49), 1,
      sym_codeblock,
    STATE(77), 1,
      sym__word_common,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(238), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(73), 10,
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
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      aux_sym_codeblock_token1,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 1,
      aux_sym_column_heading_token1,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(53), 1,
      sym_codeblock,
    STATE(77), 1,
      sym__word_common,
    ACTIONS(17), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(19), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(238), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(73), 10,
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
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      aux_sym_codeblock_token1,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 1,
      anon_sym_STAR,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(62), 1,
      sym_codeblock,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(157), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(159), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(83), 10,
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
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      aux_sym_codeblock_token1,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(260), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(157), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(159), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(83), 10,
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
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      aux_sym_codeblock_token1,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(262), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(157), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(159), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(83), 10,
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
  [1059] = 16,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      aux_sym_codeblock_token1,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(63), 1,
      sym_codeblock,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(157), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(159), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(83), 10,
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
  [1131] = 14,
    ACTIONS(272), 1,
      anon_sym_SQUOTE,
    ACTIONS(275), 1,
      anon_sym_PIPE,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      anon_sym_STAR,
    ACTIONS(292), 1,
      sym_url_word,
    ACTIONS(295), 1,
      anon_sym_BQUOTE,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(77), 1,
      sym__word_common,
    ACTIONS(266), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(281), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(287), 3,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(284), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(269), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(73), 10,
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
    ACTIONS(304), 1,
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
      anon_sym_BQUOTE,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(287), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(298), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
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
    ACTIONS(301), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(83), 10,
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
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 1,
      anon_sym_STAR,
    ACTIONS(346), 1,
      sym_url_word,
    ACTIONS(348), 1,
      anon_sym_BQUOTE,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(328), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(338), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(340), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(98), 10,
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
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 1,
      anon_sym_STAR,
    ACTIONS(346), 1,
      sym_url_word,
    ACTIONS(348), 1,
      anon_sym_BQUOTE,
    ACTIONS(350), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(328), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(338), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(340), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(98), 10,
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
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_STAR,
    ACTIONS(376), 1,
      sym_url_word,
    ACTIONS(379), 1,
      anon_sym_BQUOTE,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(352), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(367), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(370), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(355), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(98), 10,
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
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 1,
      anon_sym_STAR,
    ACTIONS(346), 1,
      sym_url_word,
    ACTIONS(348), 1,
      anon_sym_BQUOTE,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(328), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(338), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(340), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(98), 10,
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
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(258), 1,
      anon_sym_STAR,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(157), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(159), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(83), 10,
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
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 1,
      anon_sym_STAR,
    ACTIONS(346), 1,
      sym_url_word,
    ACTIONS(348), 1,
      anon_sym_BQUOTE,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(97), 1,
      sym__word_common,
    ACTIONS(328), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(338), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(340), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(98), 10,
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
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      sym_url_word,
    ACTIONS(169), 1,
      anon_sym_BQUOTE,
    ACTIONS(258), 1,
      anon_sym_STAR,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(93), 1,
      sym__word_common,
    ACTIONS(157), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(159), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 7,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(83), 10,
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
    ACTIONS(386), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      aux_sym_line_code_token1,
    STATE(33), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(384), 3,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(382), 28,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [1762] = 5,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(397), 1,
      aux_sym_line_code_token1,
    STATE(33), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(392), 3,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(390), 28,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [1808] = 5,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(404), 1,
      aux_sym_line_li_token1,
    STATE(38), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(400), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(402), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [1853] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(400), 14,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(402), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [1896] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(38), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(400), 14,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(402), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [1939] = 4,
    ACTIONS(408), 1,
      aux_sym_help_file_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(406), 14,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(411), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [1982] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(413), 14,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(415), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2025] = 5,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(404), 1,
      aux_sym_line_li_token1,
    STATE(35), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(417), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(419), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2070] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(35), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(417), 14,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(419), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2113] = 2,
    ACTIONS(423), 4,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(421), 29,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [2151] = 4,
    ACTIONS(427), 1,
      aux_sym_help_file_token1,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    ACTIONS(425), 14,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(430), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2193] = 4,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(435), 1,
      aux_sym_line_code_token1,
    STATE(43), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(390), 28,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [2234] = 2,
    ACTIONS(438), 15,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(440), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2271] = 4,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 1,
      aux_sym_line_code_token1,
    STATE(43), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(382), 28,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [2312] = 2,
    ACTIONS(446), 14,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(448), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2348] = 2,
    ACTIONS(450), 14,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(452), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2384] = 2,
    ACTIONS(454), 14,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(456), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2420] = 2,
    ACTIONS(458), 14,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(460), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2456] = 2,
    ACTIONS(462), 14,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(464), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2492] = 2,
    ACTIONS(466), 14,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(468), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2528] = 2,
    ACTIONS(470), 14,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(472), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2564] = 2,
    ACTIONS(474), 14,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(476), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2600] = 2,
    ACTIONS(478), 14,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(480), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2636] = 2,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(421), 29,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [2671] = 5,
    ACTIONS(486), 1,
      aux_sym_uppercase_name_token2,
    STATE(58), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(488), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(484), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(482), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
  [2711] = 4,
    ACTIONS(494), 1,
      aux_sym_uppercase_name_token2,
    STATE(57), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(492), 13,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(490), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
  [2749] = 5,
    ACTIONS(486), 1,
      aux_sym_uppercase_name_token2,
    STATE(57), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(501), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(499), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(497), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
  [2789] = 2,
    ACTIONS(503), 11,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(505), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2822] = 2,
    ACTIONS(509), 13,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(507), 15,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token2,
  [2855] = 4,
    ACTIONS(511), 1,
      aux_sym_uppercase_name_token2,
    STATE(65), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(499), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(497), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
  [2892] = 2,
    ACTIONS(474), 11,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(476), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2925] = 2,
    ACTIONS(458), 11,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(460), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
  [2958] = 4,
    ACTIONS(511), 1,
      aux_sym_uppercase_name_token2,
    STATE(61), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(484), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(482), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
  [2995] = 4,
    ACTIONS(513), 1,
      aux_sym_uppercase_name_token2,
    STATE(65), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(492), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(490), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
  [3032] = 3,
    ACTIONS(520), 1,
      aux_sym_argument_token1,
    ACTIONS(518), 7,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(516), 20,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3067] = 2,
    ACTIONS(522), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(524), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3099] = 2,
    ACTIONS(526), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(528), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3131] = 2,
    ACTIONS(530), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(532), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3163] = 2,
    ACTIONS(534), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(536), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3195] = 2,
    ACTIONS(509), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(507), 15,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token2,
  [3227] = 3,
    ACTIONS(538), 1,
      aux_sym_argument_token1,
    ACTIONS(518), 6,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(516), 20,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3261] = 2,
    ACTIONS(540), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(542), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3293] = 2,
    ACTIONS(544), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(546), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3325] = 2,
    ACTIONS(548), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(550), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3357] = 2,
    ACTIONS(552), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(554), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3389] = 2,
    ACTIONS(556), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(558), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3421] = 2,
    ACTIONS(560), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(562), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3453] = 2,
    ACTIONS(564), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(566), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3485] = 2,
    ACTIONS(568), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(570), 18,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3517] = 2,
    ACTIONS(564), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(566), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3548] = 2,
    ACTIONS(552), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(554), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3579] = 2,
    ACTIONS(540), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(542), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3610] = 2,
    ACTIONS(560), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(562), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3641] = 2,
    ACTIONS(548), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(550), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3672] = 3,
    ACTIONS(572), 1,
      aux_sym_argument_token1,
    ACTIONS(518), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      aux_sym_keycode_token6,
      anon_sym_LF,
    ACTIONS(516), 20,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3705] = 2,
    ACTIONS(568), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(570), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3736] = 2,
    ACTIONS(530), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(532), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3767] = 2,
    ACTIONS(526), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(528), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3798] = 2,
    ACTIONS(522), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(524), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3829] = 2,
    ACTIONS(544), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(546), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3860] = 2,
    ACTIONS(534), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(536), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3891] = 2,
    ACTIONS(556), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(558), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [3922] = 2,
    ACTIONS(560), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(562), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3952] = 2,
    ACTIONS(564), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(566), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3982] = 2,
    ACTIONS(552), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(554), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4012] = 2,
    ACTIONS(556), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(558), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4042] = 2,
    ACTIONS(540), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(542), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4072] = 2,
    ACTIONS(548), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(550), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4102] = 2,
    ACTIONS(544), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(546), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4132] = 2,
    ACTIONS(522), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(524), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4162] = 2,
    ACTIONS(534), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(536), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4192] = 2,
    ACTIONS(526), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(528), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4222] = 2,
    ACTIONS(530), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(532), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4252] = 5,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(574), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym__blank,
    STATE(107), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4269] = 5,
    ACTIONS(27), 1,
      aux_sym_line_li_token1,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(576), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym__blank,
    STATE(107), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4286] = 4,
    ACTIONS(578), 1,
      aux_sym_help_file_token1,
    ACTIONS(580), 1,
      anon_sym_LT,
    ACTIONS(583), 1,
      aux_sym_line_li_token1,
    STATE(107), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4300] = 3,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 1,
      aux_sym_line_code_token1,
    STATE(45), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4311] = 3,
    ACTIONS(586), 1,
      anon_sym_LF,
    ACTIONS(588), 1,
      anon_sym_STAR,
    STATE(109), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4322] = 3,
    ACTIONS(386), 1,
      anon_sym_LF,
    ACTIONS(388), 1,
      aux_sym_line_code_token1,
    STATE(32), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4333] = 3,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(591), 1,
      anon_sym_LF,
    STATE(112), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4344] = 3,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(593), 1,
      anon_sym_LF,
    STATE(109), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4355] = 3,
    ACTIONS(595), 1,
      aux_sym__word_common_token2,
    ACTIONS(597), 1,
      aux_sym__word_common_token3,
    ACTIONS(599), 1,
      aux_sym_optionlink_token1,
  [4365] = 3,
    ACTIONS(601), 1,
      aux_sym__word_common_token2,
    ACTIONS(603), 1,
      aux_sym__word_common_token3,
    ACTIONS(605), 1,
      aux_sym_optionlink_token1,
  [4375] = 3,
    ACTIONS(607), 1,
      aux_sym__word_common_token2,
    ACTIONS(609), 1,
      aux_sym__word_common_token3,
    ACTIONS(611), 1,
      aux_sym_optionlink_token1,
  [4385] = 2,
    ACTIONS(613), 1,
      aux_sym__word_common_token5,
    ACTIONS(615), 1,
      aux_sym_taglink_token1,
  [4392] = 2,
    ACTIONS(617), 1,
      aux_sym__word_common_token5,
    ACTIONS(619), 1,
      aux_sym_taglink_token1,
  [4399] = 2,
    ACTIONS(621), 1,
      aux_sym__word_common_token5,
    ACTIONS(623), 1,
      aux_sym_taglink_token1,
  [4406] = 1,
    ACTIONS(625), 1,
      anon_sym_SQUOTE2,
  [4410] = 1,
    ACTIONS(627), 1,
      aux_sym_codespan_token1,
  [4414] = 1,
    ACTIONS(629), 1,
      aux_sym_tag_token1,
  [4418] = 1,
    ACTIONS(631), 1,
      anon_sym_RBRACE2,
  [4422] = 1,
    ACTIONS(633), 1,
      anon_sym_PIPE2,
  [4426] = 1,
    ACTIONS(635), 1,
      anon_sym_SQUOTE2,
  [4430] = 1,
    ACTIONS(637), 1,
      ts_builtin_sym_end,
  [4434] = 1,
    ACTIONS(639), 1,
      anon_sym_SQUOTE2,
  [4438] = 1,
    ACTIONS(641), 1,
      anon_sym_SQUOTE2,
  [4442] = 1,
    ACTIONS(643), 1,
      anon_sym_PIPE2,
  [4446] = 1,
    ACTIONS(645), 1,
      anon_sym_RBRACE2,
  [4450] = 1,
    ACTIONS(647), 1,
      anon_sym_STAR2,
  [4454] = 1,
    ACTIONS(649), 1,
      anon_sym_BQUOTE2,
  [4458] = 1,
    ACTIONS(651), 1,
      anon_sym_BQUOTE2,
  [4462] = 1,
    ACTIONS(653), 1,
      anon_sym_SQUOTE2,
  [4466] = 1,
    ACTIONS(655), 1,
      anon_sym_SQUOTE2,
  [4470] = 1,
    ACTIONS(657), 1,
      anon_sym_PIPE2,
  [4474] = 1,
    ACTIONS(659), 1,
      anon_sym_RBRACE2,
  [4478] = 1,
    ACTIONS(661), 1,
      anon_sym_STAR2,
  [4482] = 1,
    ACTIONS(663), 1,
      anon_sym_BQUOTE2,
  [4486] = 1,
    ACTIONS(665), 1,
      anon_sym_STAR2,
  [4490] = 1,
    ACTIONS(667), 1,
      aux_sym_tag_token1,
  [4494] = 1,
    ACTIONS(669), 1,
      aux_sym_codespan_token1,
  [4498] = 1,
    ACTIONS(404), 1,
      aux_sym_line_li_token1,
  [4502] = 1,
    ACTIONS(671), 1,
      aux_sym_tag_token1,
  [4506] = 1,
    ACTIONS(673), 1,
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
  [SMALL_STATE(23)] = 1131,
  [SMALL_STATE(24)] = 1199,
  [SMALL_STATE(25)] = 1266,
  [SMALL_STATE(26)] = 1332,
  [SMALL_STATE(27)] = 1398,
  [SMALL_STATE(28)] = 1464,
  [SMALL_STATE(29)] = 1527,
  [SMALL_STATE(30)] = 1590,
  [SMALL_STATE(31)] = 1653,
  [SMALL_STATE(32)] = 1716,
  [SMALL_STATE(33)] = 1762,
  [SMALL_STATE(34)] = 1808,
  [SMALL_STATE(35)] = 1853,
  [SMALL_STATE(36)] = 1896,
  [SMALL_STATE(37)] = 1939,
  [SMALL_STATE(38)] = 1982,
  [SMALL_STATE(39)] = 2025,
  [SMALL_STATE(40)] = 2070,
  [SMALL_STATE(41)] = 2113,
  [SMALL_STATE(42)] = 2151,
  [SMALL_STATE(43)] = 2193,
  [SMALL_STATE(44)] = 2234,
  [SMALL_STATE(45)] = 2271,
  [SMALL_STATE(46)] = 2312,
  [SMALL_STATE(47)] = 2348,
  [SMALL_STATE(48)] = 2384,
  [SMALL_STATE(49)] = 2420,
  [SMALL_STATE(50)] = 2456,
  [SMALL_STATE(51)] = 2492,
  [SMALL_STATE(52)] = 2528,
  [SMALL_STATE(53)] = 2564,
  [SMALL_STATE(54)] = 2600,
  [SMALL_STATE(55)] = 2636,
  [SMALL_STATE(56)] = 2671,
  [SMALL_STATE(57)] = 2711,
  [SMALL_STATE(58)] = 2749,
  [SMALL_STATE(59)] = 2789,
  [SMALL_STATE(60)] = 2822,
  [SMALL_STATE(61)] = 2855,
  [SMALL_STATE(62)] = 2892,
  [SMALL_STATE(63)] = 2925,
  [SMALL_STATE(64)] = 2958,
  [SMALL_STATE(65)] = 2995,
  [SMALL_STATE(66)] = 3032,
  [SMALL_STATE(67)] = 3067,
  [SMALL_STATE(68)] = 3099,
  [SMALL_STATE(69)] = 3131,
  [SMALL_STATE(70)] = 3163,
  [SMALL_STATE(71)] = 3195,
  [SMALL_STATE(72)] = 3227,
  [SMALL_STATE(73)] = 3261,
  [SMALL_STATE(74)] = 3293,
  [SMALL_STATE(75)] = 3325,
  [SMALL_STATE(76)] = 3357,
  [SMALL_STATE(77)] = 3389,
  [SMALL_STATE(78)] = 3421,
  [SMALL_STATE(79)] = 3453,
  [SMALL_STATE(80)] = 3485,
  [SMALL_STATE(81)] = 3517,
  [SMALL_STATE(82)] = 3548,
  [SMALL_STATE(83)] = 3579,
  [SMALL_STATE(84)] = 3610,
  [SMALL_STATE(85)] = 3641,
  [SMALL_STATE(86)] = 3672,
  [SMALL_STATE(87)] = 3705,
  [SMALL_STATE(88)] = 3736,
  [SMALL_STATE(89)] = 3767,
  [SMALL_STATE(90)] = 3798,
  [SMALL_STATE(91)] = 3829,
  [SMALL_STATE(92)] = 3860,
  [SMALL_STATE(93)] = 3891,
  [SMALL_STATE(94)] = 3922,
  [SMALL_STATE(95)] = 3952,
  [SMALL_STATE(96)] = 3982,
  [SMALL_STATE(97)] = 4012,
  [SMALL_STATE(98)] = 4042,
  [SMALL_STATE(99)] = 4072,
  [SMALL_STATE(100)] = 4102,
  [SMALL_STATE(101)] = 4132,
  [SMALL_STATE(102)] = 4162,
  [SMALL_STATE(103)] = 4192,
  [SMALL_STATE(104)] = 4222,
  [SMALL_STATE(105)] = 4252,
  [SMALL_STATE(106)] = 4269,
  [SMALL_STATE(107)] = 4286,
  [SMALL_STATE(108)] = 4300,
  [SMALL_STATE(109)] = 4311,
  [SMALL_STATE(110)] = 4322,
  [SMALL_STATE(111)] = 4333,
  [SMALL_STATE(112)] = 4344,
  [SMALL_STATE(113)] = 4355,
  [SMALL_STATE(114)] = 4365,
  [SMALL_STATE(115)] = 4375,
  [SMALL_STATE(116)] = 4385,
  [SMALL_STATE(117)] = 4392,
  [SMALL_STATE(118)] = 4399,
  [SMALL_STATE(119)] = 4406,
  [SMALL_STATE(120)] = 4410,
  [SMALL_STATE(121)] = 4414,
  [SMALL_STATE(122)] = 4418,
  [SMALL_STATE(123)] = 4422,
  [SMALL_STATE(124)] = 4426,
  [SMALL_STATE(125)] = 4430,
  [SMALL_STATE(126)] = 4434,
  [SMALL_STATE(127)] = 4438,
  [SMALL_STATE(128)] = 4442,
  [SMALL_STATE(129)] = 4446,
  [SMALL_STATE(130)] = 4450,
  [SMALL_STATE(131)] = 4454,
  [SMALL_STATE(132)] = 4458,
  [SMALL_STATE(133)] = 4462,
  [SMALL_STATE(134)] = 4466,
  [SMALL_STATE(135)] = 4470,
  [SMALL_STATE(136)] = 4474,
  [SMALL_STATE(137)] = 4478,
  [SMALL_STATE(138)] = 4482,
  [SMALL_STATE(139)] = 4486,
  [SMALL_STATE(140)] = 4490,
  [SMALL_STATE(141)] = 4494,
  [SMALL_STATE(142)] = 4498,
  [SMALL_STATE(143)] = 4502,
  [SMALL_STATE(144)] = 4506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(80),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(80),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(113),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(116),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(68),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(68),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(56),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(142),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(110),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(31),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(28),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(121),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(67),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(120),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(113),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(121),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(120),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 11),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 11),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 10),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 10),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 8),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 7),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 7),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(87),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(87),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(115),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(117),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(72),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(89),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(89),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(64),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(140),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(90),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(141),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 8),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 8),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(77),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(77),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(113),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(116),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(66),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(68),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(68),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(121),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(67),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(120),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(93),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(93),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(115),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(117),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(72),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(89),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(89),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(140),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(90),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(141),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(97),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(97),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(114),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(118),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(86),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(103),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(103),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(143),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(101),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(144),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(41),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(41),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2), SHIFT_REPEAT(44),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(42),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(55),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(55),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 5),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 4),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 9),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 9),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(60),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 12),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 12),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(71),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 6),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 6),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 6),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 6),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 6),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 6),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 6),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 6),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 6),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 6),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(142),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(31),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2), SHIFT_REPEAT(121),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [637] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
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
