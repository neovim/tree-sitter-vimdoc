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
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
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
  aux_sym__word_common_token5 = 12,
  aux_sym__word_common_token6 = 13,
  aux_sym__word_common_token7 = 14,
  anon_sym_LPAREN = 15,
  aux_sym__word_common_token8 = 16,
  aux_sym_keycode_token1 = 17,
  aux_sym_keycode_token2 = 18,
  aux_sym_keycode_token3 = 19,
  aux_sym_keycode_token4 = 20,
  aux_sym_keycode_token5 = 21,
  aux_sym_keycode_token6 = 22,
  aux_sym_keycode_token7 = 23,
  aux_sym_keycode_token8 = 24,
  aux_sym_uppercase_name_token1 = 25,
  aux_sym_uppercase_name_token2 = 26,
  anon_sym_LT = 27,
  aux_sym_codeblock_token1 = 28,
  aux_sym_line_li_token1 = 29,
  anon_sym_LF = 30,
  aux_sym_line_code_token1 = 31,
  aux_sym_column_heading_token1 = 32,
  aux_sym_h1_token1 = 33,
  aux_sym_h2_token1 = 34,
  anon_sym_STAR = 35,
  aux_sym_tag_token1 = 36,
  anon_sym_STAR2 = 37,
  sym_url_word = 38,
  aux_sym_optionlink_token1 = 39,
  anon_sym_PIPE = 40,
  aux_sym_taglink_token1 = 41,
  anon_sym_PIPE2 = 42,
  anon_sym_BQUOTE = 43,
  aux_sym_codespan_token1 = 44,
  anon_sym_BQUOTE2 = 45,
  anon_sym_LBRACE = 46,
  aux_sym_argument_token1 = 47,
  anon_sym_RBRACE = 48,
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
  aux_sym_block_repeat3 = 81,
  aux_sym_codeblock_repeat1 = 82,
  aux_sym_line_li_repeat1 = 83,
  aux_sym_line_li_repeat2 = 84,
  aux_sym_h3_repeat1 = 85,
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
  [aux_sym__word_common_token5] = "_word_common_token5",
  [aux_sym__word_common_token6] = "_word_common_token6",
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
  [aux_sym__word_common_token5] = aux_sym__word_common_token5,
  [aux_sym__word_common_token6] = aux_sym__word_common_token6,
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
  [24] = 22,
  [25] = 25,
  [26] = 22,
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
  [45] = 33,
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
  [59] = 52,
  [60] = 58,
  [61] = 47,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 62,
  [76] = 76,
  [77] = 77,
  [78] = 74,
  [79] = 71,
  [80] = 68,
  [81] = 76,
  [82] = 67,
  [83] = 72,
  [84] = 70,
  [85] = 69,
  [86] = 77,
  [87] = 73,
  [88] = 66,
  [89] = 73,
  [90] = 77,
  [91] = 72,
  [92] = 74,
  [93] = 76,
  [94] = 67,
  [95] = 68,
  [96] = 69,
  [97] = 70,
  [98] = 71,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 107,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 111,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 113,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 114,
  [125] = 125,
  [126] = 113,
  [127] = 110,
  [128] = 121,
  [129] = 123,
  [130] = 114,
  [131] = 111,
  [132] = 110,
  [133] = 112,
  [134] = 116,
  [135] = 117,
  [136] = 118,
  [137] = 123,
  [138] = 112,
  [139] = 116,
  [140] = 117,
  [141] = 118,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '*') ADVANCE(388);
      if (lookahead == '<') ADVANCE(374);
      if (lookahead == '>') ADVANCE(241);
      if (lookahead == 'A') ADVANCE(243);
      if (lookahead == 'C') ADVANCE(244);
      if (lookahead == 'M') ADVANCE(242);
      if (lookahead == '_') ADVANCE(248);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead == 'h') ADVANCE(246);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(402);
      if (lookahead == '}') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(250);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(240);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == ' ') ADVANCE(377);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(98);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(97);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(97);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '<') ADVANCE(375);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(155);
      if (lookahead == 'M') ADVANCE(153);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(32);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '<') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(155);
      if (lookahead == 'M') ADVANCE(153);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(32);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(398);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(49);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(398);
      if (lookahead == '~') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(97);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(97);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'C') ADVANCE(112);
      if (lookahead == 'M') ADVANCE(108);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '|') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'C') ADVANCE(112);
      if (lookahead == 'M') ADVANCE(108);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '|') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(238);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '<') ADVANCE(373);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead == '|') ADVANCE(402);
      if (lookahead == '}') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(163);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'M') ADVANCE(163);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '<') ADVANCE(375);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(155);
      if (lookahead == 'M') ADVANCE(153);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(32);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(378);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(387);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(272);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(409);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(401);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(405);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '<') ADVANCE(375);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == 'C') ADVANCE(155);
      if (lookahead == 'M') ADVANCE(153);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(172);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '|') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(32);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_help_file_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 's') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'A') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'E') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'L') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'L') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'R') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'T') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'T') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'T') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == 'E') ADVANCE(362);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(361);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == 'T') ADVANCE(360);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '>') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(298);
      if (lookahead == 'D') ADVANCE(292);
      if (lookahead == 'I') ADVANCE(295);
      if (lookahead == 'P') ADVANCE(287);
      if (lookahead == 'S') ADVANCE(286);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(390);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 'A') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '>') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '>') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '>') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'B') ADVANCE(281);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'P') ADVANCE(277);
      if (lookahead == 'S') ADVANCE(276);
      if (lookahead == '{') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'D') ADVANCE(139);
      if (lookahead == 'U') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'g') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'k') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(149);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'E') ADVANCE(332);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'L') ADVANCE(333);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(329);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '-') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '-') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '-') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'A') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'E') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'L') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'L') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'R') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'T') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'T') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'T') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '>') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(300);
      if (lookahead == 'D') ADVANCE(294);
      if (lookahead == 'I') ADVANCE(297);
      if (lookahead == 'P') ADVANCE(289);
      if (lookahead == 'S') ADVANCE(285);
      if (lookahead == '{') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(205);
      if (lookahead == 'U') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(390);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(233);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'E') ADVANCE(331);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'L') ADVANCE(330);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(328);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 't') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(265);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(238);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '|') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (lookahead == '{') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(367);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(193);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(72);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == '-') ADVANCE(351);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == '-') ADVANCE(351);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(321);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'L') ADVANCE(320);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'L') ADVANCE(323);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'R') ADVANCE(326);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'R') ADVANCE(327);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(318);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(325);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(324);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(319);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '-') ADVANCE(353);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(349);
      if (lookahead == 'D') ADVANCE(345);
      if (lookahead == 'I') ADVANCE(347);
      if (lookahead == 'P') ADVANCE(343);
      if (lookahead == 'S') ADVANCE(340);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(350);
      if (lookahead == 'D') ADVANCE(346);
      if (lookahead == 'I') ADVANCE(348);
      if (lookahead == 'P') ADVANCE(344);
      if (lookahead == 'S') ADVANCE(340);
      if (lookahead == '{') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'F') ADVANCE(342);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'H') ADVANCE(341);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'I') ADVANCE(339);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'T') ADVANCE(336);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == '-') ADVANCE(365);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == 'A') ADVANCE(357);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(356);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == 'R') ADVANCE(359);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == 'T') ADVANCE(358);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '-') ADVANCE(371);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'B') ADVANCE(299);
      if (lookahead == 'D') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(296);
      if (lookahead == 'P') ADVANCE(288);
      if (lookahead == 'S') ADVANCE(284);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(275);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'F') ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'I') ADVANCE(366);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'T') ADVANCE(364);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == ' ') ADVANCE(377);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == ' ') ADVANCE(377);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(378);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(149);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == 's') ADVANCE(392);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ':') ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == 't') ADVANCE(393);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(265);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(238);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '|') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(254);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(259);
      if (lookahead == '}') ADVANCE(255);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 38},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 38},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 38},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 38},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 38},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 38},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 21},
  [100] = {.lex_state = 21},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 17},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 17},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 21},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 21},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 37},
  [118] = {.lex_state = 35},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 33},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 21},
  [124] = {.lex_state = 21},
  [125] = {.lex_state = 38},
  [126] = {.lex_state = 21},
  [127] = {.lex_state = 21},
  [128] = {.lex_state = 33},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 21},
  [131] = {.lex_state = 21},
  [132] = {.lex_state = 21},
  [133] = {.lex_state = 33},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 37},
  [136] = {.lex_state = 35},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 36},
  [140] = {.lex_state = 37},
  [141] = {.lex_state = 35},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_help_file_token1] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_noli_token1] = ACTIONS(1),
    [aux_sym_word_noli_token2] = ACTIONS(1),
    [aux_sym__word_common_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym__word_common_token3] = ACTIONS(1),
    [aux_sym__word_common_token4] = ACTIONS(1),
    [aux_sym__word_common_token6] = ACTIONS(1),
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
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(119),
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(66),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(104),
    [sym__uppercase_words] = STATE(17),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(51),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(100),
    [sym__line_noli] = STATE(51),
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
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_help_file_token1] = ACTIONS(5),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [aux_sym__word_common_token5] = ACTIONS(7),
    [aux_sym__word_common_token6] = ACTIONS(9),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_keycode_token1] = ACTIONS(13),
    [aux_sym_keycode_token2] = ACTIONS(13),
    [aux_sym_keycode_token3] = ACTIONS(13),
    [aux_sym_keycode_token4] = ACTIONS(13),
    [aux_sym_keycode_token5] = ACTIONS(15),
    [aux_sym_keycode_token6] = ACTIONS(15),
    [aux_sym_keycode_token7] = ACTIONS(13),
    [aux_sym_keycode_token8] = ACTIONS(13),
    [aux_sym_uppercase_name_token1] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_codeblock_token1] = ACTIONS(21),
    [aux_sym_line_li_token1] = ACTIONS(23),
    [aux_sym_h1_token1] = ACTIONS(25),
    [aux_sym_h2_token1] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [sym_url_word] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [2] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(66),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(104),
    [sym__uppercase_words] = STATE(17),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(51),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(100),
    [sym__line_noli] = STATE(51),
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
    [aux_sym_help_file_repeat1] = STATE(42),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_help_file_token1] = ACTIONS(41),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [aux_sym__word_common_token5] = ACTIONS(7),
    [aux_sym__word_common_token6] = ACTIONS(9),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_keycode_token1] = ACTIONS(13),
    [aux_sym_keycode_token2] = ACTIONS(13),
    [aux_sym_keycode_token3] = ACTIONS(13),
    [aux_sym_keycode_token4] = ACTIONS(13),
    [aux_sym_keycode_token5] = ACTIONS(15),
    [aux_sym_keycode_token6] = ACTIONS(15),
    [aux_sym_keycode_token7] = ACTIONS(13),
    [aux_sym_keycode_token8] = ACTIONS(13),
    [aux_sym_uppercase_name_token1] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_codeblock_token1] = ACTIONS(21),
    [aux_sym_line_li_token1] = ACTIONS(23),
    [aux_sym_h1_token1] = ACTIONS(25),
    [aux_sym_h2_token1] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [sym_url_word] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [3] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(66),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(104),
    [sym__uppercase_words] = STATE(17),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(51),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(100),
    [sym__line_noli] = STATE(51),
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
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [aux_sym__word_common_token5] = ACTIONS(7),
    [aux_sym__word_common_token6] = ACTIONS(9),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_keycode_token1] = ACTIONS(13),
    [aux_sym_keycode_token2] = ACTIONS(13),
    [aux_sym_keycode_token3] = ACTIONS(13),
    [aux_sym_keycode_token4] = ACTIONS(13),
    [aux_sym_keycode_token5] = ACTIONS(15),
    [aux_sym_keycode_token6] = ACTIONS(15),
    [aux_sym_keycode_token7] = ACTIONS(13),
    [aux_sym_keycode_token8] = ACTIONS(13),
    [aux_sym_uppercase_name_token1] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_codeblock_token1] = ACTIONS(21),
    [aux_sym_line_li_token1] = ACTIONS(23),
    [aux_sym_h1_token1] = ACTIONS(25),
    [aux_sym_h2_token1] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [sym_url_word] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [4] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(66),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(104),
    [sym__uppercase_words] = STATE(17),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(51),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(100),
    [sym__line_noli] = STATE(51),
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
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(45),
    [aux_sym_word_noli_token1] = ACTIONS(47),
    [aux_sym_word_noli_token2] = ACTIONS(47),
    [aux_sym__word_common_token1] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [aux_sym__word_common_token4] = ACTIONS(50),
    [aux_sym__word_common_token5] = ACTIONS(47),
    [aux_sym__word_common_token6] = ACTIONS(50),
    [aux_sym__word_common_token7] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(47),
    [aux_sym__word_common_token8] = ACTIONS(47),
    [aux_sym_keycode_token1] = ACTIONS(56),
    [aux_sym_keycode_token2] = ACTIONS(56),
    [aux_sym_keycode_token3] = ACTIONS(56),
    [aux_sym_keycode_token4] = ACTIONS(56),
    [aux_sym_keycode_token5] = ACTIONS(59),
    [aux_sym_keycode_token6] = ACTIONS(59),
    [aux_sym_keycode_token7] = ACTIONS(56),
    [aux_sym_keycode_token8] = ACTIONS(56),
    [aux_sym_uppercase_name_token1] = ACTIONS(62),
    [anon_sym_LT] = ACTIONS(65),
    [aux_sym_codeblock_token1] = ACTIONS(68),
    [aux_sym_line_li_token1] = ACTIONS(71),
    [aux_sym_h1_token1] = ACTIONS(74),
    [aux_sym_h2_token1] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(80),
    [sym_url_word] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(92),
  },
  [5] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(66),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(104),
    [sym__uppercase_words] = STATE(17),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(51),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(100),
    [sym__line_noli] = STATE(51),
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
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [aux_sym__word_common_token5] = ACTIONS(7),
    [aux_sym__word_common_token6] = ACTIONS(9),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_keycode_token1] = ACTIONS(13),
    [aux_sym_keycode_token2] = ACTIONS(13),
    [aux_sym_keycode_token3] = ACTIONS(13),
    [aux_sym_keycode_token4] = ACTIONS(13),
    [aux_sym_keycode_token5] = ACTIONS(15),
    [aux_sym_keycode_token6] = ACTIONS(15),
    [aux_sym_keycode_token7] = ACTIONS(13),
    [aux_sym_keycode_token8] = ACTIONS(13),
    [aux_sym_uppercase_name_token1] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_codeblock_token1] = ACTIONS(21),
    [aux_sym_line_li_token1] = ACTIONS(23),
    [aux_sym_h1_token1] = ACTIONS(25),
    [aux_sym_h2_token1] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [sym_url_word] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [6] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(66),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(104),
    [sym__uppercase_words] = STATE(17),
    [sym_codeblock] = STATE(51),
    [sym__blank] = STATE(37),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(99),
    [sym__line_noli] = STATE(51),
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
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(99),
    [aux_sym_help_file_token1] = ACTIONS(95),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [aux_sym__word_common_token5] = ACTIONS(7),
    [aux_sym__word_common_token6] = ACTIONS(9),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token8] = ACTIONS(7),
    [aux_sym_keycode_token1] = ACTIONS(13),
    [aux_sym_keycode_token2] = ACTIONS(13),
    [aux_sym_keycode_token3] = ACTIONS(13),
    [aux_sym_keycode_token4] = ACTIONS(13),
    [aux_sym_keycode_token5] = ACTIONS(15),
    [aux_sym_keycode_token6] = ACTIONS(15),
    [aux_sym_keycode_token7] = ACTIONS(13),
    [aux_sym_keycode_token8] = ACTIONS(13),
    [aux_sym_uppercase_name_token1] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(97),
    [aux_sym_codeblock_token1] = ACTIONS(21),
    [aux_sym_line_li_token1] = ACTIONS(23),
    [aux_sym_h1_token1] = ACTIONS(25),
    [aux_sym_h2_token1] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(29),
    [sym_url_word] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [7] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(66),
    [sym_keycode] = STATE(17),
    [sym_uppercase_name] = STATE(104),
    [sym__uppercase_words] = STATE(17),
    [sym_codeblock] = STATE(51),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(51),
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
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_help_file_token1] = ACTIONS(99),
    [aux_sym_word_noli_token1] = ACTIONS(101),
    [aux_sym_word_noli_token2] = ACTIONS(101),
    [aux_sym__word_common_token1] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [aux_sym__word_common_token4] = ACTIONS(104),
    [aux_sym__word_common_token5] = ACTIONS(101),
    [aux_sym__word_common_token6] = ACTIONS(104),
    [aux_sym__word_common_token7] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(101),
    [aux_sym__word_common_token8] = ACTIONS(101),
    [aux_sym_keycode_token1] = ACTIONS(110),
    [aux_sym_keycode_token2] = ACTIONS(110),
    [aux_sym_keycode_token3] = ACTIONS(110),
    [aux_sym_keycode_token4] = ACTIONS(110),
    [aux_sym_keycode_token5] = ACTIONS(113),
    [aux_sym_keycode_token6] = ACTIONS(113),
    [aux_sym_keycode_token7] = ACTIONS(110),
    [aux_sym_keycode_token8] = ACTIONS(110),
    [aux_sym_uppercase_name_token1] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(119),
    [aux_sym_codeblock_token1] = ACTIONS(121),
    [aux_sym_line_li_token1] = ACTIONS(99),
    [aux_sym_h1_token1] = ACTIONS(124),
    [aux_sym_h2_token1] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(130),
    [sym_url_word] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(142),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(159), 1,
      anon_sym_LT,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_line_li_repeat2,
    STATE(64), 1,
      sym__line_noli,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(145), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [76] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(64), 1,
      sym__line_noli,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(171), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [152] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym_LT,
    STATE(16), 1,
      aux_sym_line_li_repeat2,
    STATE(64), 1,
      sym__line_noli,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(175), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [228] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_LT,
    STATE(14), 1,
      aux_sym_line_li_repeat2,
    STATE(64), 1,
      sym__line_noli,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(179), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [304] = 17,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(203), 1,
      anon_sym_LT,
    ACTIONS(205), 1,
      anon_sym_STAR,
    ACTIONS(208), 1,
      sym_url_word,
    ACTIONS(211), 1,
      anon_sym_PIPE,
    ACTIONS(214), 1,
      anon_sym_BQUOTE,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_line_li_repeat2,
    STATE(64), 1,
      sym__line_noli,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(183), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(197), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(188), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
    ACTIONS(185), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    ACTIONS(194), 6,
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
  [380] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(64), 1,
      sym__line_noli,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(220), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [456] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_LT,
    STATE(12), 1,
      aux_sym_line_li_repeat2,
    STATE(64), 1,
      sym__line_noli,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(224), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [532] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      anon_sym_LT,
    STATE(12), 1,
      aux_sym_line_li_repeat2,
    STATE(64), 1,
      sym__line_noli,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(228), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [608] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      anon_sym_LT,
    STATE(12), 1,
      aux_sym_line_li_repeat2,
    STATE(64), 1,
      sym__line_noli,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(155), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(232), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [684] = 17,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      aux_sym_codeblock_token1,
    ACTIONS(31), 1,
      sym_url_word,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(242), 1,
      aux_sym_column_heading_token1,
    ACTIONS(244), 1,
      anon_sym_STAR,
    STATE(18), 1,
      aux_sym_line_li_repeat1,
    STATE(47), 1,
      sym_codeblock,
    STATE(74), 1,
      sym__word_common,
    ACTIONS(13), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(15), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(238), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [758] = 17,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      aux_sym_codeblock_token1,
    ACTIONS(31), 1,
      sym_url_word,
    ACTIONS(33), 1,
      anon_sym_PIPE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 1,
      aux_sym_column_heading_token1,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(52), 1,
      sym_codeblock,
    STATE(74), 1,
      sym__word_common,
    ACTIONS(13), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(15), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(238), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [832] = 16,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      aux_sym_codeblock_token1,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 1,
      anon_sym_STAR,
    STATE(13), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(78), 1,
      sym__word_common,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(155), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(81), 10,
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
  [903] = 16,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      aux_sym_codeblock_token1,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(260), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(61), 1,
      sym_codeblock,
    STATE(78), 1,
      sym__word_common,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(155), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(81), 10,
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
  [974] = 16,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      aux_sym_codeblock_token1,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(262), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(59), 1,
      sym_codeblock,
    STATE(78), 1,
      sym__word_common,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(155), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(81), 10,
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
  [1045] = 14,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_STAR,
    ACTIONS(284), 1,
      sym_url_word,
    ACTIONS(287), 1,
      anon_sym_PIPE,
    ACTIONS(290), 1,
      anon_sym_BQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(74), 1,
      sym__word_common,
    ACTIONS(264), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
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
    ACTIONS(267), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
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
  [1112] = 16,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      aux_sym_codeblock_token1,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(296), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(78), 1,
      sym__word_common,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(155), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(81), 10,
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
  [1183] = 14,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
    ACTIONS(313), 1,
      anon_sym_STAR,
    ACTIONS(316), 1,
      sym_url_word,
    ACTIONS(319), 1,
      anon_sym_PIPE,
    ACTIONS(322), 1,
      anon_sym_BQUOTE,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(78), 1,
      sym__word_common,
    ACTIONS(279), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(298), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(307), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(310), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(301), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(81), 10,
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
  [1249] = 14,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(342), 1,
      sym_url_word,
    ACTIONS(344), 1,
      anon_sym_PIPE,
    ACTIONS(346), 1,
      anon_sym_BQUOTE,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(328), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(334), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(336), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(93), 10,
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
  [1314] = 14,
    ACTIONS(279), 1,
      anon_sym_LF,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    ACTIONS(365), 1,
      anon_sym_STAR,
    ACTIONS(368), 1,
      sym_url_word,
    ACTIONS(371), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_BQUOTE,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(350), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(359), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(362), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(353), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(93), 10,
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
  [1379] = 14,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(342), 1,
      sym_url_word,
    ACTIONS(344), 1,
      anon_sym_PIPE,
    ACTIONS(346), 1,
      anon_sym_BQUOTE,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(328), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(334), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(336), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(93), 10,
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
  [1444] = 13,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_STAR,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(78), 1,
      sym__word_common,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(155), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(81), 10,
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
  [1506] = 13,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(342), 1,
      sym_url_word,
    ACTIONS(344), 1,
      anon_sym_PIPE,
    ACTIONS(346), 1,
      anon_sym_BQUOTE,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(328), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(334), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(336), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(93), 10,
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
  [1568] = 13,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      sym_url_word,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_STAR,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(78), 1,
      sym__word_common,
    ACTIONS(153), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(155), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(81), 10,
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
  [1630] = 13,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(340), 1,
      anon_sym_STAR,
    ACTIONS(342), 1,
      sym_url_word,
    ACTIONS(344), 1,
      anon_sym_PIPE,
    ACTIONS(346), 1,
      anon_sym_BQUOTE,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(92), 1,
      sym__word_common,
    ACTIONS(328), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token5,
    ACTIONS(334), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(336), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(330), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
    STATE(93), 10,
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
  [1692] = 5,
    ACTIONS(386), 1,
      anon_sym_LF,
    ACTIONS(389), 1,
      aux_sym_line_code_token1,
    STATE(32), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(384), 3,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(382), 27,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
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
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1737] = 5,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(398), 1,
      aux_sym_line_code_token1,
    STATE(32), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(394), 3,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(392), 27,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
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
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1782] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(35), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(400), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [1824] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(404), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(406), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [1866] = 5,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(412), 1,
      aux_sym_line_li_token1,
    STATE(38), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(408), 12,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(410), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [1910] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(38), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(408), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(410), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [1952] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(400), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [1994] = 5,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(412), 1,
      aux_sym_line_li_token1,
    STATE(35), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(400), 12,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2038] = 4,
    ACTIONS(416), 1,
      aux_sym_help_file_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(414), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2080] = 2,
    ACTIONS(423), 4,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(421), 28,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
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
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [2117] = 4,
    ACTIONS(427), 1,
      aux_sym_help_file_token1,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    ACTIONS(425), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2158] = 4,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(435), 1,
      aux_sym_line_code_token1,
    STATE(43), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(382), 27,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
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
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [2198] = 2,
    ACTIONS(438), 14,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2234] = 4,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 1,
      aux_sym_line_code_token1,
    STATE(43), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(392), 27,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
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
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [2274] = 2,
    ACTIONS(446), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2309] = 2,
    ACTIONS(450), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2344] = 2,
    ACTIONS(454), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2379] = 2,
    ACTIONS(458), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2414] = 2,
    ACTIONS(462), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2449] = 2,
    ACTIONS(466), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2484] = 2,
    ACTIONS(470), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2519] = 2,
    ACTIONS(474), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2554] = 2,
    ACTIONS(478), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2589] = 2,
    ACTIONS(423), 1,
      anon_sym_LF,
    ACTIONS(421), 28,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      aux_sym__word_common_token5,
      aux_sym__word_common_token6,
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
      anon_sym_PIPE,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [2623] = 5,
    ACTIONS(486), 1,
      aux_sym_uppercase_name_token2,
    STATE(57), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(488), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(484), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2662] = 5,
    ACTIONS(486), 1,
      aux_sym_uppercase_name_token2,
    STATE(58), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(494), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(492), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(490), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2701] = 4,
    ACTIONS(500), 1,
      aux_sym_uppercase_name_token2,
    STATE(58), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(498), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(496), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2738] = 2,
    ACTIONS(470), 10,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(472), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2770] = 4,
    ACTIONS(503), 1,
      aux_sym_uppercase_name_token2,
    STATE(60), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(498), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(496), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2806] = 2,
    ACTIONS(450), 10,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(452), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2838] = 2,
    ACTIONS(508), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(506), 15,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2870] = 4,
    ACTIONS(510), 1,
      aux_sym_uppercase_name_token2,
    STATE(60), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(492), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2906] = 2,
    ACTIONS(512), 10,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(514), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
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
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2938] = 4,
    ACTIONS(510), 1,
      aux_sym_uppercase_name_token2,
    STATE(63), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(484), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [2974] = 2,
    ACTIONS(516), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(518), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3005] = 2,
    ACTIONS(520), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(522), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3036] = 2,
    ACTIONS(524), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(526), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3067] = 2,
    ACTIONS(528), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(530), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3098] = 2,
    ACTIONS(532), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(534), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3129] = 2,
    ACTIONS(536), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(538), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3160] = 2,
    ACTIONS(540), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(542), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3191] = 2,
    ACTIONS(544), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(546), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3222] = 2,
    ACTIONS(548), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(550), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3253] = 2,
    ACTIONS(508), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_codeblock_token1,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(506), 15,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      anon_sym_LPAREN,
      aux_sym__word_common_token8,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
  [3284] = 2,
    ACTIONS(552), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(554), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3315] = 2,
    ACTIONS(556), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(558), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3346] = 2,
    ACTIONS(548), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(550), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3376] = 2,
    ACTIONS(536), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(538), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3406] = 2,
    ACTIONS(524), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(526), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3436] = 2,
    ACTIONS(552), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(554), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3466] = 2,
    ACTIONS(520), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(522), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3496] = 2,
    ACTIONS(540), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(542), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3526] = 2,
    ACTIONS(532), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(534), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3556] = 2,
    ACTIONS(528), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(530), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3586] = 2,
    ACTIONS(556), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(558), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3616] = 2,
    ACTIONS(544), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(546), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3646] = 2,
    ACTIONS(516), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(518), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3676] = 2,
    ACTIONS(544), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(546), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3705] = 2,
    ACTIONS(556), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(558), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3734] = 2,
    ACTIONS(540), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(542), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3763] = 2,
    ACTIONS(548), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(550), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3792] = 2,
    ACTIONS(552), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(554), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3821] = 2,
    ACTIONS(520), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(522), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3850] = 2,
    ACTIONS(524), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(526), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3879] = 2,
    ACTIONS(528), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(530), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3908] = 2,
    ACTIONS(532), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(534), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3937] = 2,
    ACTIONS(536), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(538), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token6,
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
  [3966] = 5,
    ACTIONS(23), 1,
      aux_sym_line_li_token1,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(560), 1,
      anon_sym_LT,
    STATE(34), 1,
      sym__blank,
    STATE(101), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3983] = 5,
    ACTIONS(23), 1,
      aux_sym_line_li_token1,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(562), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym__blank,
    STATE(101), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4000] = 4,
    ACTIONS(564), 1,
      aux_sym_help_file_token1,
    ACTIONS(566), 1,
      anon_sym_LT,
    ACTIONS(569), 1,
      aux_sym_line_li_token1,
    STATE(101), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4014] = 3,
    ACTIONS(572), 1,
      anon_sym_LF,
    ACTIONS(574), 1,
      anon_sym_STAR,
    STATE(102), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4025] = 3,
    ACTIONS(442), 1,
      anon_sym_LF,
    ACTIONS(444), 1,
      aux_sym_line_code_token1,
    STATE(45), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4036] = 3,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(577), 1,
      anon_sym_LF,
    STATE(106), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4047] = 3,
    ACTIONS(396), 1,
      anon_sym_LF,
    ACTIONS(398), 1,
      aux_sym_line_code_token1,
    STATE(33), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4058] = 3,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(579), 1,
      anon_sym_LF,
    STATE(102), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4069] = 3,
    ACTIONS(581), 1,
      aux_sym__word_common_token2,
    ACTIONS(583), 1,
      aux_sym__word_common_token3,
    ACTIONS(585), 1,
      aux_sym_optionlink_token1,
  [4079] = 3,
    ACTIONS(587), 1,
      aux_sym__word_common_token2,
    ACTIONS(589), 1,
      aux_sym__word_common_token3,
    ACTIONS(591), 1,
      aux_sym_optionlink_token1,
  [4089] = 3,
    ACTIONS(593), 1,
      aux_sym__word_common_token2,
    ACTIONS(595), 1,
      aux_sym__word_common_token3,
    ACTIONS(597), 1,
      aux_sym_optionlink_token1,
  [4099] = 1,
    ACTIONS(599), 1,
      anon_sym_SQUOTE2,
  [4103] = 1,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
  [4107] = 1,
    ACTIONS(603), 1,
      aux_sym_tag_token1,
  [4111] = 1,
    ACTIONS(605), 1,
      anon_sym_SQUOTE2,
  [4115] = 1,
    ACTIONS(607), 1,
      anon_sym_BQUOTE2,
  [4119] = 1,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
  [4123] = 1,
    ACTIONS(611), 1,
      aux_sym_taglink_token1,
  [4127] = 1,
    ACTIONS(613), 1,
      aux_sym_codespan_token1,
  [4131] = 1,
    ACTIONS(615), 1,
      aux_sym_argument_token1,
  [4135] = 1,
    ACTIONS(617), 1,
      ts_builtin_sym_end,
  [4139] = 1,
    ACTIONS(619), 1,
      anon_sym_SQUOTE2,
  [4143] = 1,
    ACTIONS(621), 1,
      anon_sym_STAR2,
  [4147] = 1,
    ACTIONS(623), 1,
      anon_sym_STAR2,
  [4151] = 1,
    ACTIONS(625), 1,
      anon_sym_PIPE2,
  [4155] = 1,
    ACTIONS(627), 1,
      anon_sym_BQUOTE2,
  [4159] = 1,
    ACTIONS(412), 1,
      aux_sym_line_li_token1,
  [4163] = 1,
    ACTIONS(629), 1,
      anon_sym_SQUOTE2,
  [4167] = 1,
    ACTIONS(631), 1,
      anon_sym_SQUOTE2,
  [4171] = 1,
    ACTIONS(633), 1,
      anon_sym_STAR2,
  [4175] = 1,
    ACTIONS(635), 1,
      anon_sym_PIPE2,
  [4179] = 1,
    ACTIONS(637), 1,
      anon_sym_BQUOTE2,
  [4183] = 1,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
  [4187] = 1,
    ACTIONS(641), 1,
      anon_sym_SQUOTE2,
  [4191] = 1,
    ACTIONS(643), 1,
      aux_sym_tag_token1,
  [4195] = 1,
    ACTIONS(645), 1,
      aux_sym_taglink_token1,
  [4199] = 1,
    ACTIONS(647), 1,
      aux_sym_codespan_token1,
  [4203] = 1,
    ACTIONS(649), 1,
      aux_sym_argument_token1,
  [4207] = 1,
    ACTIONS(651), 1,
      anon_sym_PIPE2,
  [4211] = 1,
    ACTIONS(653), 1,
      aux_sym_tag_token1,
  [4215] = 1,
    ACTIONS(655), 1,
      aux_sym_taglink_token1,
  [4219] = 1,
    ACTIONS(657), 1,
      aux_sym_codespan_token1,
  [4223] = 1,
    ACTIONS(659), 1,
      aux_sym_argument_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 304,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 456,
  [SMALL_STATE(15)] = 532,
  [SMALL_STATE(16)] = 608,
  [SMALL_STATE(17)] = 684,
  [SMALL_STATE(18)] = 758,
  [SMALL_STATE(19)] = 832,
  [SMALL_STATE(20)] = 903,
  [SMALL_STATE(21)] = 974,
  [SMALL_STATE(22)] = 1045,
  [SMALL_STATE(23)] = 1112,
  [SMALL_STATE(24)] = 1183,
  [SMALL_STATE(25)] = 1249,
  [SMALL_STATE(26)] = 1314,
  [SMALL_STATE(27)] = 1379,
  [SMALL_STATE(28)] = 1444,
  [SMALL_STATE(29)] = 1506,
  [SMALL_STATE(30)] = 1568,
  [SMALL_STATE(31)] = 1630,
  [SMALL_STATE(32)] = 1692,
  [SMALL_STATE(33)] = 1737,
  [SMALL_STATE(34)] = 1782,
  [SMALL_STATE(35)] = 1824,
  [SMALL_STATE(36)] = 1866,
  [SMALL_STATE(37)] = 1910,
  [SMALL_STATE(38)] = 1952,
  [SMALL_STATE(39)] = 1994,
  [SMALL_STATE(40)] = 2038,
  [SMALL_STATE(41)] = 2080,
  [SMALL_STATE(42)] = 2117,
  [SMALL_STATE(43)] = 2158,
  [SMALL_STATE(44)] = 2198,
  [SMALL_STATE(45)] = 2234,
  [SMALL_STATE(46)] = 2274,
  [SMALL_STATE(47)] = 2309,
  [SMALL_STATE(48)] = 2344,
  [SMALL_STATE(49)] = 2379,
  [SMALL_STATE(50)] = 2414,
  [SMALL_STATE(51)] = 2449,
  [SMALL_STATE(52)] = 2484,
  [SMALL_STATE(53)] = 2519,
  [SMALL_STATE(54)] = 2554,
  [SMALL_STATE(55)] = 2589,
  [SMALL_STATE(56)] = 2623,
  [SMALL_STATE(57)] = 2662,
  [SMALL_STATE(58)] = 2701,
  [SMALL_STATE(59)] = 2738,
  [SMALL_STATE(60)] = 2770,
  [SMALL_STATE(61)] = 2806,
  [SMALL_STATE(62)] = 2838,
  [SMALL_STATE(63)] = 2870,
  [SMALL_STATE(64)] = 2906,
  [SMALL_STATE(65)] = 2938,
  [SMALL_STATE(66)] = 2974,
  [SMALL_STATE(67)] = 3005,
  [SMALL_STATE(68)] = 3036,
  [SMALL_STATE(69)] = 3067,
  [SMALL_STATE(70)] = 3098,
  [SMALL_STATE(71)] = 3129,
  [SMALL_STATE(72)] = 3160,
  [SMALL_STATE(73)] = 3191,
  [SMALL_STATE(74)] = 3222,
  [SMALL_STATE(75)] = 3253,
  [SMALL_STATE(76)] = 3284,
  [SMALL_STATE(77)] = 3315,
  [SMALL_STATE(78)] = 3346,
  [SMALL_STATE(79)] = 3376,
  [SMALL_STATE(80)] = 3406,
  [SMALL_STATE(81)] = 3436,
  [SMALL_STATE(82)] = 3466,
  [SMALL_STATE(83)] = 3496,
  [SMALL_STATE(84)] = 3526,
  [SMALL_STATE(85)] = 3556,
  [SMALL_STATE(86)] = 3586,
  [SMALL_STATE(87)] = 3616,
  [SMALL_STATE(88)] = 3646,
  [SMALL_STATE(89)] = 3676,
  [SMALL_STATE(90)] = 3705,
  [SMALL_STATE(91)] = 3734,
  [SMALL_STATE(92)] = 3763,
  [SMALL_STATE(93)] = 3792,
  [SMALL_STATE(94)] = 3821,
  [SMALL_STATE(95)] = 3850,
  [SMALL_STATE(96)] = 3879,
  [SMALL_STATE(97)] = 3908,
  [SMALL_STATE(98)] = 3937,
  [SMALL_STATE(99)] = 3966,
  [SMALL_STATE(100)] = 3983,
  [SMALL_STATE(101)] = 4000,
  [SMALL_STATE(102)] = 4014,
  [SMALL_STATE(103)] = 4025,
  [SMALL_STATE(104)] = 4036,
  [SMALL_STATE(105)] = 4047,
  [SMALL_STATE(106)] = 4058,
  [SMALL_STATE(107)] = 4069,
  [SMALL_STATE(108)] = 4079,
  [SMALL_STATE(109)] = 4089,
  [SMALL_STATE(110)] = 4099,
  [SMALL_STATE(111)] = 4103,
  [SMALL_STATE(112)] = 4107,
  [SMALL_STATE(113)] = 4111,
  [SMALL_STATE(114)] = 4115,
  [SMALL_STATE(115)] = 4119,
  [SMALL_STATE(116)] = 4123,
  [SMALL_STATE(117)] = 4127,
  [SMALL_STATE(118)] = 4131,
  [SMALL_STATE(119)] = 4135,
  [SMALL_STATE(120)] = 4139,
  [SMALL_STATE(121)] = 4143,
  [SMALL_STATE(122)] = 4147,
  [SMALL_STATE(123)] = 4151,
  [SMALL_STATE(124)] = 4155,
  [SMALL_STATE(125)] = 4159,
  [SMALL_STATE(126)] = 4163,
  [SMALL_STATE(127)] = 4167,
  [SMALL_STATE(128)] = 4171,
  [SMALL_STATE(129)] = 4175,
  [SMALL_STATE(130)] = 4179,
  [SMALL_STATE(131)] = 4183,
  [SMALL_STATE(132)] = 4187,
  [SMALL_STATE(133)] = 4191,
  [SMALL_STATE(134)] = 4195,
  [SMALL_STATE(135)] = 4199,
  [SMALL_STATE(136)] = 4203,
  [SMALL_STATE(137)] = 4207,
  [SMALL_STATE(138)] = 4211,
  [SMALL_STATE(139)] = 4215,
  [SMALL_STATE(140)] = 4219,
  [SMALL_STATE(141)] = 4223,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(109),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(73),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(73),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(56),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(125),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(105),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(28),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(29),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(31),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(112),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(77),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(116),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(117),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(118),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(109),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(117),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(118),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 11),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 11),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 7),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 8),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(88),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(88),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(108),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(87),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(87),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(65),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(133),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(86),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(134),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(135),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(136),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 10),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 10),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 7),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 7),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 8),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 8),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(74),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(74),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(109),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(73),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(73),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(112),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(77),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(116),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(117),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(118),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(78),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(78),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(108),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(87),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(87),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(133),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(86),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(134),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(135),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(136),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(92),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(92),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(107),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(89),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(89),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(138),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(90),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(139),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(140),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(141),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(41),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(41),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2), SHIFT_REPEAT(44),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 2),
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
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 4),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 4),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 9),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 9),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(62),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(75),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 12),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 12),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 6),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 6),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 6),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 6),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 6),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 6),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 6),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 6),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 6),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(125),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(28),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2), SHIFT_REPEAT(112),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [617] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
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
