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
#define STATE_COUNT 147
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  aux_sym__word_common_token7 = 15,
  aux_sym__word_common_token8 = 16,
  anon_sym_LPAREN = 17,
  aux_sym__word_common_token9 = 18,
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
  anon_sym_GT = 30,
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
  anon_sym_LBRACE = 47,
  aux_sym_argument_token1 = 48,
  anon_sym_RBRACE = 49,
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
  aux_sym_block_repeat3 = 82,
  aux_sym_codeblock_repeat1 = 83,
  aux_sym_line_li_repeat1 = 84,
  aux_sym_line_li_repeat2 = 85,
  aux_sym_h3_repeat1 = 86,
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
  [aux_sym__word_common_token7] = "_word_common_token7",
  [aux_sym__word_common_token8] = "_word_common_token8",
  [anon_sym_LPAREN] = "(",
  [aux_sym__word_common_token9] = "_word_common_token9",
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
  [anon_sym_GT] = ">",
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
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym__word_common_token5] = aux_sym__word_common_token5,
  [aux_sym__word_common_token6] = aux_sym__word_common_token6,
  [aux_sym__word_common_token7] = aux_sym__word_common_token7,
  [aux_sym__word_common_token8] = aux_sym__word_common_token8,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__word_common_token9] = aux_sym__word_common_token9,
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
  [anon_sym_GT] = anon_sym_GT,
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
  [aux_sym__word_common_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__word_common_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token9] = {
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
  [anon_sym_GT] = {
    .visible = true,
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
  [25] = 22,
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
  [43] = 33,
  [44] = 32,
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
  [55] = 41,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 51,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 57,
  [64] = 64,
  [65] = 49,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 64,
  [77] = 77,
  [78] = 78,
  [79] = 68,
  [80] = 77,
  [81] = 73,
  [82] = 69,
  [83] = 70,
  [84] = 67,
  [85] = 74,
  [86] = 66,
  [87] = 75,
  [88] = 78,
  [89] = 72,
  [90] = 71,
  [91] = 71,
  [92] = 70,
  [93] = 69,
  [94] = 68,
  [95] = 78,
  [96] = 72,
  [97] = 77,
  [98] = 73,
  [99] = 75,
  [100] = 66,
  [101] = 74,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 105,
  [109] = 109,
  [110] = 110,
  [111] = 110,
  [112] = 110,
  [113] = 113,
  [114] = 113,
  [115] = 113,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 117,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 118,
  [129] = 129,
  [130] = 127,
  [131] = 129,
  [132] = 117,
  [133] = 125,
  [134] = 116,
  [135] = 118,
  [136] = 129,
  [137] = 127,
  [138] = 125,
  [139] = 121,
  [140] = 123,
  [141] = 126,
  [142] = 119,
  [143] = 116,
  [144] = 123,
  [145] = 126,
  [146] = 119,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead == '<') ADVANCE(368);
      if (lookahead == '>') ADVANCE(370);
      if (lookahead == 'A') ADVANCE(233);
      if (lookahead == 'C') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(232);
      if (lookahead == '_') ADVANCE(238);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(393);
      if (lookahead == '}') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(231);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '>') ADVANCE(370);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(90);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(91);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '<') ADVANCE(369);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(370);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'C') ADVANCE(146);
      if (lookahead == 'M') ADVANCE(144);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(25);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead == '<') ADVANCE(369);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'C') ADVANCE(146);
      if (lookahead == 'M') ADVANCE(144);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(25);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '>') ADVANCE(370);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '~') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '>') ADVANCE(370);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '>') ADVANCE(370);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '~') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(90);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '>') ADVANCE(370);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(90);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') ADVANCE(380);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '>') ADVANCE(371);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(99);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == '*') ADVANCE(380);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == 'M') ADVANCE(99);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '<') ADVANCE(367);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead == '|') ADVANCE(393);
      if (lookahead == '}') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead == '<') ADVANCE(369);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'C') ADVANCE(146);
      if (lookahead == 'M') ADVANCE(144);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(25);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead == '<') ADVANCE(208);
      if (lookahead == '>') ADVANCE(370);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead == '<') ADVANCE(208);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == 8226) ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(374);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(382);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(266);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(392);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '|') ADVANCE(246);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(400);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(396);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '<') ADVANCE(369);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(370);
      if (lookahead == 'A') ADVANCE(145);
      if (lookahead == 'C') ADVANCE(146);
      if (lookahead == 'M') ADVANCE(144);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead == 'h') ADVANCE(163);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == 8226) ADVANCE(25);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_help_file_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 's') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'A') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'E') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'R') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(356);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(355);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == 'T') ADVANCE(354);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '>') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(292);
      if (lookahead == 'D') ADVANCE(286);
      if (lookahead == 'I') ADVANCE(289);
      if (lookahead == 'P') ADVANCE(281);
      if (lookahead == 'S') ADVANCE(280);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(385);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 'L') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '>') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'B') ADVANCE(275);
      if (lookahead == 'D') ADVANCE(273);
      if (lookahead == 'I') ADVANCE(274);
      if (lookahead == 'P') ADVANCE(271);
      if (lookahead == 'S') ADVANCE(270);
      if (lookahead == '{') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'D') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'F') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'h') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'k') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'p') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'E') ADVANCE(326);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'L') ADVANCE(327);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'T') ADVANCE(323);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == '-') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == '-') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == 's') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ':') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'A') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'E') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'R') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'T') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '>') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(294);
      if (lookahead == 'D') ADVANCE(288);
      if (lookahead == 'I') ADVANCE(291);
      if (lookahead == 'P') ADVANCE(283);
      if (lookahead == 'S') ADVANCE(279);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(196);
      if (lookahead == 'U') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(385);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(378);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'E') ADVANCE(325);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'L') ADVANCE(324);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'T') ADVANCE(322);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 't') ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(259);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(229);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__word_common_token6);
      if (lookahead == '|') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__word_common_token7);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      if (lookahead == '{') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__word_common_token8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__word_common_token9);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__word_common_token9);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__word_common_token9);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(361);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(184);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(65);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keycode_token8);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '-') ADVANCE(332);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'A') ADVANCE(316);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'A') ADVANCE(315);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'L') ADVANCE(314);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'L') ADVANCE(317);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'R') ADVANCE(320);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'R') ADVANCE(321);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'T') ADVANCE(312);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'T') ADVANCE(319);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'T') ADVANCE(318);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == 'T') ADVANCE(313);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(343);
      if (lookahead == 'D') ADVANCE(339);
      if (lookahead == 'I') ADVANCE(341);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == 'S') ADVANCE(334);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(344);
      if (lookahead == 'D') ADVANCE(340);
      if (lookahead == 'I') ADVANCE(342);
      if (lookahead == 'P') ADVANCE(338);
      if (lookahead == 'S') ADVANCE(334);
      if (lookahead == '{') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'F') ADVANCE(336);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'H') ADVANCE(335);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'T') ADVANCE(330);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '-') ADVANCE(359);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == 'A') ADVANCE(351);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(350);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == 'R') ADVANCE(353);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == 'T') ADVANCE(349);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == 'T') ADVANCE(352);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '-') ADVANCE(365);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'B') ADVANCE(293);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'I') ADVANCE(290);
      if (lookahead == 'P') ADVANCE(282);
      if (lookahead == 'S') ADVANCE(278);
      if (lookahead == '{') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'F') ADVANCE(362);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'I') ADVANCE(360);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == 'T') ADVANCE(358);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_column_heading_token1);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ' ') ADVANCE(374);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 's') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ':') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(386);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == 't') ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(259);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(229);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '}') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '}') ADVANCE(249);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 6},
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
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 32},
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 32},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 28},
  [114] = {.lex_state = 28},
  [115] = {.lex_state = 28},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 30},
  [120] = {.lex_state = 32},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 26},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 31},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 26},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 26},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 26},
  [141] = {.lex_state = 31},
  [142] = {.lex_state = 30},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 26},
  [145] = {.lex_state = 31},
  [146] = {.lex_state = 30},
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
    [aux_sym__word_common_token7] = ACTIONS(1),
    [aux_sym__word_common_token8] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym__word_common_token9] = ACTIONS(1),
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
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [sym_url_word] = ACTIONS(1),
    [aux_sym_optionlink_token1] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(122),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(67),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(106),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(47),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(102),
    [sym__line_noli] = STATE(47),
    [sym_column_heading] = STATE(47),
    [sym_h1] = STATE(47),
    [sym_h2] = STATE(47),
    [sym_h3] = STATE(47),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_help_file_token1] = ACTIONS(5),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [aux_sym__word_common_token8] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token9] = ACTIONS(7),
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
    [anon_sym_GT] = ACTIONS(23),
    [aux_sym_line_li_token1] = ACTIONS(25),
    [aux_sym_h1_token1] = ACTIONS(27),
    [aux_sym_h2_token1] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [sym_url_word] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [2] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(67),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(106),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(47),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(102),
    [sym__line_noli] = STATE(47),
    [sym_column_heading] = STATE(47),
    [sym_h1] = STATE(47),
    [sym_h2] = STATE(47),
    [sym_h3] = STATE(47),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(42),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_help_file_token1] = ACTIONS(41),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [aux_sym__word_common_token8] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token9] = ACTIONS(7),
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
    [anon_sym_GT] = ACTIONS(23),
    [aux_sym_line_li_token1] = ACTIONS(25),
    [aux_sym_h1_token1] = ACTIONS(27),
    [aux_sym_h2_token1] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [sym_url_word] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [3] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(67),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(106),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(47),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(102),
    [sym__line_noli] = STATE(47),
    [sym_column_heading] = STATE(47),
    [sym_h1] = STATE(47),
    [sym_h2] = STATE(47),
    [sym_h3] = STATE(47),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_noli_token1] = ACTIONS(45),
    [aux_sym_word_noli_token2] = ACTIONS(45),
    [aux_sym__word_common_token1] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym__word_common_token4] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(54),
    [aux_sym__word_common_token6] = ACTIONS(45),
    [aux_sym__word_common_token7] = ACTIONS(48),
    [aux_sym__word_common_token8] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(45),
    [aux_sym__word_common_token9] = ACTIONS(45),
    [aux_sym_keycode_token1] = ACTIONS(57),
    [aux_sym_keycode_token2] = ACTIONS(57),
    [aux_sym_keycode_token3] = ACTIONS(57),
    [aux_sym_keycode_token4] = ACTIONS(57),
    [aux_sym_keycode_token5] = ACTIONS(60),
    [aux_sym_keycode_token6] = ACTIONS(60),
    [aux_sym_keycode_token7] = ACTIONS(57),
    [aux_sym_keycode_token8] = ACTIONS(57),
    [aux_sym_uppercase_name_token1] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(66),
    [anon_sym_GT] = ACTIONS(69),
    [aux_sym_line_li_token1] = ACTIONS(72),
    [aux_sym_h1_token1] = ACTIONS(75),
    [aux_sym_h2_token1] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(81),
    [sym_url_word] = ACTIONS(84),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(90),
  },
  [4] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(67),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(106),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(47),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(102),
    [sym__line_noli] = STATE(47),
    [sym_column_heading] = STATE(47),
    [sym_h1] = STATE(47),
    [sym_h2] = STATE(47),
    [sym_h3] = STATE(47),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [aux_sym__word_common_token8] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token9] = ACTIONS(7),
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
    [anon_sym_GT] = ACTIONS(23),
    [aux_sym_line_li_token1] = ACTIONS(25),
    [aux_sym_h1_token1] = ACTIONS(27),
    [aux_sym_h2_token1] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [sym_url_word] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [5] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(67),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(106),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(47),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(102),
    [sym__line_noli] = STATE(47),
    [sym_column_heading] = STATE(47),
    [sym_h1] = STATE(47),
    [sym_h2] = STATE(47),
    [sym_h3] = STATE(47),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [aux_sym__word_common_token8] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token9] = ACTIONS(7),
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
    [anon_sym_GT] = ACTIONS(23),
    [aux_sym_line_li_token1] = ACTIONS(25),
    [aux_sym_h1_token1] = ACTIONS(27),
    [aux_sym_h2_token1] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [sym_url_word] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [6] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(67),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(106),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(47),
    [sym__blank] = STATE(36),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(103),
    [sym__line_noli] = STATE(47),
    [sym_column_heading] = STATE(47),
    [sym_h1] = STATE(47),
    [sym_h2] = STATE(47),
    [sym_h3] = STATE(47),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(103),
    [aux_sym_help_file_token1] = ACTIONS(95),
    [aux_sym_word_noli_token1] = ACTIONS(7),
    [aux_sym_word_noli_token2] = ACTIONS(7),
    [aux_sym__word_common_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(13),
    [aux_sym__word_common_token6] = ACTIONS(7),
    [aux_sym__word_common_token7] = ACTIONS(9),
    [aux_sym__word_common_token8] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(7),
    [aux_sym__word_common_token9] = ACTIONS(7),
    [aux_sym_keycode_token1] = ACTIONS(15),
    [aux_sym_keycode_token2] = ACTIONS(15),
    [aux_sym_keycode_token3] = ACTIONS(15),
    [aux_sym_keycode_token4] = ACTIONS(15),
    [aux_sym_keycode_token5] = ACTIONS(17),
    [aux_sym_keycode_token6] = ACTIONS(17),
    [aux_sym_keycode_token7] = ACTIONS(15),
    [aux_sym_keycode_token8] = ACTIONS(15),
    [aux_sym_uppercase_name_token1] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(23),
    [aux_sym_line_li_token1] = ACTIONS(25),
    [aux_sym_h1_token1] = ACTIONS(27),
    [aux_sym_h2_token1] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(31),
    [sym_url_word] = ACTIONS(33),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [7] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(67),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(106),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(47),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(47),
    [sym_column_heading] = STATE(47),
    [sym_h1] = STATE(47),
    [sym_h2] = STATE(47),
    [sym_h3] = STATE(47),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_help_file_token1] = ACTIONS(99),
    [aux_sym_word_noli_token1] = ACTIONS(101),
    [aux_sym_word_noli_token2] = ACTIONS(101),
    [aux_sym__word_common_token1] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [aux_sym__word_common_token4] = ACTIONS(104),
    [anon_sym_PIPE] = ACTIONS(110),
    [aux_sym__word_common_token6] = ACTIONS(101),
    [aux_sym__word_common_token7] = ACTIONS(104),
    [aux_sym__word_common_token8] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(101),
    [aux_sym__word_common_token9] = ACTIONS(101),
    [aux_sym_keycode_token1] = ACTIONS(113),
    [aux_sym_keycode_token2] = ACTIONS(113),
    [aux_sym_keycode_token3] = ACTIONS(113),
    [aux_sym_keycode_token4] = ACTIONS(113),
    [aux_sym_keycode_token5] = ACTIONS(116),
    [aux_sym_keycode_token6] = ACTIONS(116),
    [aux_sym_keycode_token7] = ACTIONS(113),
    [aux_sym_keycode_token8] = ACTIONS(113),
    [aux_sym_uppercase_name_token1] = ACTIONS(119),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_line_li_token1] = ACTIONS(99),
    [aux_sym_h1_token1] = ACTIONS(127),
    [aux_sym_h2_token1] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(133),
    [sym_url_word] = ACTIONS(136),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(142),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(161), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      aux_sym_line_li_repeat2,
    STATE(61), 1,
      sym__line_noli,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(145), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(157), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    ACTIONS(155), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(21), 11,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_LT,
    STATE(16), 1,
      aux_sym_line_li_repeat2,
    STATE(61), 1,
      sym__line_noli,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(157), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(171), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    ACTIONS(155), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(21), 11,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym_LT,
    STATE(15), 1,
      aux_sym_line_li_repeat2,
    STATE(61), 1,
      sym__line_noli,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(157), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(175), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    ACTIONS(155), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(21), 11,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_LT,
    STATE(16), 1,
      aux_sym_line_li_repeat2,
    STATE(61), 1,
      sym__line_noli,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(157), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(179), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    ACTIONS(155), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(21), 11,
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
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_LT,
    STATE(14), 1,
      aux_sym_line_li_repeat2,
    STATE(61), 1,
      sym__line_noli,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(157), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(183), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    ACTIONS(155), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(21), 11,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(61), 1,
      sym__line_noli,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(157), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(187), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    ACTIONS(155), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(21), 11,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym_LT,
    STATE(16), 1,
      aux_sym_line_li_repeat2,
    STATE(61), 1,
      sym__line_noli,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(157), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(191), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    ACTIONS(155), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(21), 11,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_LT,
    STATE(16), 1,
      aux_sym_line_li_repeat2,
    STATE(61), 1,
      sym__line_noli,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(157), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(195), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(149), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
    ACTIONS(147), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    ACTIONS(155), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(21), 11,
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
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(222), 1,
      anon_sym_LT,
    ACTIONS(224), 1,
      anon_sym_STAR,
    ACTIONS(227), 1,
      sym_url_word,
    ACTIONS(230), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      aux_sym_line_li_repeat2,
    STATE(61), 1,
      sym__line_noli,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(199), 2,
      aux_sym_help_file_token1,
      aux_sym_line_li_token1,
    ACTIONS(216), 2,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
    ACTIONS(204), 4,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
    ACTIONS(201), 5,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    ACTIONS(213), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    STATE(21), 11,
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
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(23), 1,
      anon_sym_GT,
    ACTIONS(33), 1,
      sym_url_word,
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
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(49), 1,
      sym_codeblock,
    STATE(71), 1,
      sym__word_common,
    ACTIONS(15), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(17), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(238), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(72), 10,
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
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(23), 1,
      anon_sym_GT,
    ACTIONS(33), 1,
      sym_url_word,
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
    STATE(17), 1,
      aux_sym_line_li_repeat1,
    STATE(51), 1,
      sym_codeblock,
    STATE(71), 1,
      sym__word_common,
    ACTIONS(15), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(236), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(17), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(238), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(72), 10,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 1,
      anon_sym_STAR,
    STATE(12), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(90), 1,
      sym__word_common,
    ACTIONS(155), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(157), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(89), 10,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(260), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(65), 1,
      sym_codeblock,
    STATE(90), 1,
      sym__word_common,
    ACTIONS(155), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(157), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(89), 10,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(262), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(59), 1,
      sym_codeblock,
    STATE(90), 1,
      sym__word_common,
    ACTIONS(155), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(157), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(89), 10,
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
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      sym_url_word,
    ACTIONS(290), 1,
      anon_sym_BQUOTE,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(71), 1,
      sym__word_common,
    ACTIONS(264), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(276), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(282), 3,
      anon_sym_GT,
      anon_sym_LF,
      aux_sym_column_heading_token1,
    ACTIONS(279), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(267), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(72), 10,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(296), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(90), 1,
      sym__word_common,
    ACTIONS(155), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(157), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(89), 10,
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
    ACTIONS(307), 1,
      anon_sym_PIPE,
    ACTIONS(316), 1,
      anon_sym_STAR,
    ACTIONS(319), 1,
      sym_url_word,
    ACTIONS(322), 1,
      anon_sym_BQUOTE,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(90), 1,
      sym__word_common,
    ACTIONS(282), 2,
      anon_sym_GT,
      anon_sym_LF,
    ACTIONS(298), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(310), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(313), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(301), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(89), 10,
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
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(346), 1,
      anon_sym_STAR,
    ACTIONS(349), 1,
      sym_url_word,
    ACTIONS(352), 1,
      anon_sym_BQUOTE,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(91), 1,
      sym__word_common,
    ACTIONS(328), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(340), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(343), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(331), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(96), 10,
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
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_PIPE,
    ACTIONS(370), 1,
      anon_sym_LF,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(374), 1,
      sym_url_word,
    ACTIONS(376), 1,
      anon_sym_BQUOTE,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(91), 1,
      sym__word_common,
    ACTIONS(358), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(366), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(368), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(360), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(96), 10,
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
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(374), 1,
      sym_url_word,
    ACTIONS(376), 1,
      anon_sym_BQUOTE,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_LF,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(91), 1,
      sym__word_common,
    ACTIONS(358), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(366), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(368), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(360), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(96), 10,
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
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(374), 1,
      sym_url_word,
    ACTIONS(376), 1,
      anon_sym_BQUOTE,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(91), 1,
      sym__word_common,
    ACTIONS(358), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(366), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(368), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(360), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(96), 10,
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
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_STAR,
    ACTIONS(374), 1,
      sym_url_word,
    ACTIONS(376), 1,
      anon_sym_BQUOTE,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(91), 1,
      sym__word_common,
    ACTIONS(358), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(366), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(368), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(360), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(96), 10,
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
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_STAR,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(90), 1,
      sym__word_common,
    ACTIONS(155), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(157), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(89), 10,
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
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      sym_url_word,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_STAR,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(90), 1,
      sym__word_common,
    ACTIONS(155), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(250), 3,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym__word_common_token6,
    ACTIONS(157), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
    ACTIONS(252), 6,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
    STATE(89), 10,
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
    ACTIONS(384), 1,
      anon_sym_LF,
    ACTIONS(387), 1,
      aux_sym_line_code_token1,
    ACTIONS(390), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    STATE(32), 2,
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
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
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
      anon_sym_GT,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1737] = 5,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      aux_sym_line_code_token1,
    ACTIONS(398), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    STATE(32), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(392), 28,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
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
      anon_sym_GT,
      aux_sym_line_li_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
  [1782] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(400), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [1824] = 5,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(408), 1,
      aux_sym_line_li_token1,
    STATE(38), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(404), 12,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(406), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [1868] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(38), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(404), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(406), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [1910] = 4,
    ACTIONS(412), 1,
      aux_sym_help_file_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(410), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [1952] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(37), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(417), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [1994] = 5,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(408), 1,
      aux_sym_line_li_token1,
    STATE(34), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(417), 12,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2038] = 4,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    STATE(34), 2,
      sym__blank,
      aux_sym_block_repeat3,
    ACTIONS(417), 13,
      ts_builtin_sym_end,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2080] = 2,
    ACTIONS(423), 3,
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
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
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
      anon_sym_GT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      anon_sym_STAR,
      sym_url_word,
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
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2158] = 4,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      aux_sym_line_code_token1,
    STATE(44), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(392), 27,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
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
      anon_sym_LBRACE,
  [2198] = 4,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(439), 1,
      aux_sym_line_code_token1,
    STATE(44), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
    ACTIONS(382), 27,
      aux_sym_help_file_token1,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token4,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
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
      anon_sym_LBRACE,
  [2238] = 2,
    ACTIONS(442), 14,
      ts_builtin_sym_end,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(444), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2274] = 2,
    ACTIONS(446), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2309] = 2,
    ACTIONS(450), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2344] = 2,
    ACTIONS(454), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2379] = 2,
    ACTIONS(458), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2414] = 2,
    ACTIONS(462), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2449] = 2,
    ACTIONS(466), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2484] = 2,
    ACTIONS(470), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2519] = 2,
    ACTIONS(474), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2554] = 2,
    ACTIONS(478), 13,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
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
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
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
      anon_sym_LBRACE,
  [2623] = 5,
    ACTIONS(486), 1,
      aux_sym_uppercase_name_token2,
    STATE(58), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(488), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(484), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(482), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LBRACE,
  [2662] = 4,
    ACTIONS(494), 1,
      aux_sym_uppercase_name_token2,
    STATE(57), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(492), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LBRACE,
  [2699] = 5,
    ACTIONS(486), 1,
      aux_sym_uppercase_name_token2,
    STATE(57), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(501), 2,
      anon_sym_LF,
      anon_sym_STAR,
    ACTIONS(499), 10,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
      aux_sym_column_heading_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(497), 14,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LBRACE,
  [2738] = 2,
    ACTIONS(466), 10,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(468), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2770] = 4,
    ACTIONS(503), 1,
      aux_sym_uppercase_name_token2,
    STATE(63), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(499), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LBRACE,
  [2806] = 2,
    ACTIONS(505), 10,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(507), 17,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2838] = 4,
    ACTIONS(503), 1,
      aux_sym_uppercase_name_token2,
    STATE(60), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(484), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LBRACE,
  [2874] = 4,
    ACTIONS(509), 1,
      aux_sym_uppercase_name_token2,
    STATE(63), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(492), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LBRACE,
  [2910] = 2,
    ACTIONS(514), 12,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(512), 15,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token2,
      anon_sym_LBRACE,
  [2942] = 2,
    ACTIONS(458), 10,
      aux_sym_help_file_token1,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
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
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_LBRACE,
  [2974] = 2,
    ACTIONS(516), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(518), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
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
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(522), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
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
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(526), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
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
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(530), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
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
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(534), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
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
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(538), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
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
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(542), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
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
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(546), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
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
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(550), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3253] = 2,
    ACTIONS(552), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(554), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3284] = 2,
    ACTIONS(514), 11,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(512), 15,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      aux_sym_uppercase_name_token2,
      anon_sym_LBRACE,
  [3315] = 2,
    ACTIONS(556), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(558), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3346] = 2,
    ACTIONS(560), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(562), 17,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      aux_sym_column_heading_token1,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3377] = 2,
    ACTIONS(524), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(526), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3407] = 2,
    ACTIONS(556), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(558), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3437] = 2,
    ACTIONS(544), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(546), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3467] = 2,
    ACTIONS(528), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(530), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3497] = 2,
    ACTIONS(532), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(534), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3527] = 2,
    ACTIONS(520), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(522), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3557] = 2,
    ACTIONS(548), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(550), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3587] = 2,
    ACTIONS(516), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(518), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3617] = 2,
    ACTIONS(552), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(554), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3647] = 2,
    ACTIONS(560), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(562), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3677] = 2,
    ACTIONS(540), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(542), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3707] = 2,
    ACTIONS(536), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(538), 16,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_GT,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3737] = 2,
    ACTIONS(536), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(538), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3766] = 2,
    ACTIONS(532), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(534), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3795] = 2,
    ACTIONS(528), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(530), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3824] = 2,
    ACTIONS(524), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(526), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3853] = 2,
    ACTIONS(560), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(562), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3882] = 2,
    ACTIONS(540), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(542), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3911] = 2,
    ACTIONS(556), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(558), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3940] = 2,
    ACTIONS(544), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(546), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3969] = 2,
    ACTIONS(552), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(554), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [3998] = 2,
    ACTIONS(516), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(518), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4027] = 2,
    ACTIONS(548), 9,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      aux_sym__word_common_token6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LBRACE,
    ACTIONS(550), 15,
      aux_sym__word_common_token1,
      aux_sym__word_common_token4,
      aux_sym__word_common_token7,
      aux_sym__word_common_token8,
      anon_sym_LPAREN,
      aux_sym__word_common_token9,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_keycode_token8,
      anon_sym_LF,
      anon_sym_STAR,
      sym_url_word,
      anon_sym_BQUOTE,
  [4056] = 5,
    ACTIONS(25), 1,
      aux_sym_line_li_token1,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(564), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym__blank,
    STATE(104), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4073] = 5,
    ACTIONS(25), 1,
      aux_sym_line_li_token1,
    ACTIONS(95), 1,
      aux_sym_help_file_token1,
    ACTIONS(566), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym__blank,
    STATE(104), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4090] = 4,
    ACTIONS(568), 1,
      aux_sym_help_file_token1,
    ACTIONS(570), 1,
      anon_sym_LT,
    ACTIONS(573), 1,
      aux_sym_line_li_token1,
    STATE(104), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [4104] = 3,
    ACTIONS(394), 1,
      anon_sym_LF,
    ACTIONS(396), 1,
      aux_sym_line_code_token1,
    STATE(33), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4115] = 3,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(576), 1,
      anon_sym_LF,
    STATE(107), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4126] = 3,
    ACTIONS(244), 1,
      anon_sym_STAR,
    ACTIONS(578), 1,
      anon_sym_LF,
    STATE(109), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4137] = 3,
    ACTIONS(432), 1,
      anon_sym_LF,
    ACTIONS(434), 1,
      aux_sym_line_code_token1,
    STATE(43), 2,
      sym_line_code,
      aux_sym_codeblock_repeat1,
  [4148] = 3,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(582), 1,
      anon_sym_STAR,
    STATE(109), 2,
      sym_tag,
      aux_sym_h3_repeat1,
  [4159] = 3,
    ACTIONS(585), 1,
      aux_sym__word_common_token2,
    ACTIONS(587), 1,
      aux_sym__word_common_token3,
    ACTIONS(589), 1,
      aux_sym_optionlink_token1,
  [4169] = 3,
    ACTIONS(591), 1,
      aux_sym__word_common_token2,
    ACTIONS(593), 1,
      aux_sym__word_common_token3,
    ACTIONS(595), 1,
      aux_sym_optionlink_token1,
  [4179] = 3,
    ACTIONS(597), 1,
      aux_sym__word_common_token2,
    ACTIONS(599), 1,
      aux_sym__word_common_token3,
    ACTIONS(601), 1,
      aux_sym_optionlink_token1,
  [4189] = 2,
    ACTIONS(603), 1,
      aux_sym__word_common_token5,
    ACTIONS(605), 1,
      aux_sym_taglink_token1,
  [4196] = 2,
    ACTIONS(607), 1,
      aux_sym__word_common_token5,
    ACTIONS(609), 1,
      aux_sym_taglink_token1,
  [4203] = 2,
    ACTIONS(611), 1,
      aux_sym__word_common_token5,
    ACTIONS(613), 1,
      aux_sym_taglink_token1,
  [4210] = 1,
    ACTIONS(615), 1,
      anon_sym_PIPE2,
  [4214] = 1,
    ACTIONS(617), 1,
      anon_sym_SQUOTE2,
  [4218] = 1,
    ACTIONS(619), 1,
      anon_sym_STAR2,
  [4222] = 1,
    ACTIONS(621), 1,
      aux_sym_argument_token1,
  [4226] = 1,
    ACTIONS(408), 1,
      aux_sym_line_li_token1,
  [4230] = 1,
    ACTIONS(623), 1,
      anon_sym_LF,
  [4234] = 1,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
  [4238] = 1,
    ACTIONS(627), 1,
      aux_sym_tag_token1,
  [4242] = 1,
    ACTIONS(629), 1,
      anon_sym_SQUOTE2,
  [4246] = 1,
    ACTIONS(631), 1,
      anon_sym_SQUOTE2,
  [4250] = 1,
    ACTIONS(633), 1,
      aux_sym_codespan_token1,
  [4254] = 1,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
  [4258] = 1,
    ACTIONS(637), 1,
      anon_sym_STAR2,
  [4262] = 1,
    ACTIONS(639), 1,
      anon_sym_BQUOTE2,
  [4266] = 1,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
  [4270] = 1,
    ACTIONS(643), 1,
      anon_sym_BQUOTE2,
  [4274] = 1,
    ACTIONS(645), 1,
      anon_sym_SQUOTE2,
  [4278] = 1,
    ACTIONS(647), 1,
      anon_sym_SQUOTE2,
  [4282] = 1,
    ACTIONS(649), 1,
      anon_sym_PIPE2,
  [4286] = 1,
    ACTIONS(651), 1,
      anon_sym_STAR2,
  [4290] = 1,
    ACTIONS(653), 1,
      anon_sym_BQUOTE2,
  [4294] = 1,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
  [4298] = 1,
    ACTIONS(657), 1,
      anon_sym_SQUOTE2,
  [4302] = 1,
    ACTIONS(659), 1,
      anon_sym_LF,
  [4306] = 1,
    ACTIONS(661), 1,
      aux_sym_tag_token1,
  [4310] = 1,
    ACTIONS(663), 1,
      aux_sym_codespan_token1,
  [4314] = 1,
    ACTIONS(665), 1,
      aux_sym_argument_token1,
  [4318] = 1,
    ACTIONS(667), 1,
      anon_sym_PIPE2,
  [4322] = 1,
    ACTIONS(669), 1,
      aux_sym_tag_token1,
  [4326] = 1,
    ACTIONS(671), 1,
      aux_sym_codespan_token1,
  [4330] = 1,
    ACTIONS(673), 1,
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
  [SMALL_STATE(36)] = 1868,
  [SMALL_STATE(37)] = 1910,
  [SMALL_STATE(38)] = 1952,
  [SMALL_STATE(39)] = 1994,
  [SMALL_STATE(40)] = 2038,
  [SMALL_STATE(41)] = 2080,
  [SMALL_STATE(42)] = 2117,
  [SMALL_STATE(43)] = 2158,
  [SMALL_STATE(44)] = 2198,
  [SMALL_STATE(45)] = 2238,
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
  [SMALL_STATE(58)] = 2699,
  [SMALL_STATE(59)] = 2738,
  [SMALL_STATE(60)] = 2770,
  [SMALL_STATE(61)] = 2806,
  [SMALL_STATE(62)] = 2838,
  [SMALL_STATE(63)] = 2874,
  [SMALL_STATE(64)] = 2910,
  [SMALL_STATE(65)] = 2942,
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
  [SMALL_STATE(79)] = 3377,
  [SMALL_STATE(80)] = 3407,
  [SMALL_STATE(81)] = 3437,
  [SMALL_STATE(82)] = 3467,
  [SMALL_STATE(83)] = 3497,
  [SMALL_STATE(84)] = 3527,
  [SMALL_STATE(85)] = 3557,
  [SMALL_STATE(86)] = 3587,
  [SMALL_STATE(87)] = 3617,
  [SMALL_STATE(88)] = 3647,
  [SMALL_STATE(89)] = 3677,
  [SMALL_STATE(90)] = 3707,
  [SMALL_STATE(91)] = 3737,
  [SMALL_STATE(92)] = 3766,
  [SMALL_STATE(93)] = 3795,
  [SMALL_STATE(94)] = 3824,
  [SMALL_STATE(95)] = 3853,
  [SMALL_STATE(96)] = 3882,
  [SMALL_STATE(97)] = 3911,
  [SMALL_STATE(98)] = 3940,
  [SMALL_STATE(99)] = 3969,
  [SMALL_STATE(100)] = 3998,
  [SMALL_STATE(101)] = 4027,
  [SMALL_STATE(102)] = 4056,
  [SMALL_STATE(103)] = 4073,
  [SMALL_STATE(104)] = 4090,
  [SMALL_STATE(105)] = 4104,
  [SMALL_STATE(106)] = 4115,
  [SMALL_STATE(107)] = 4126,
  [SMALL_STATE(108)] = 4137,
  [SMALL_STATE(109)] = 4148,
  [SMALL_STATE(110)] = 4159,
  [SMALL_STATE(111)] = 4169,
  [SMALL_STATE(112)] = 4179,
  [SMALL_STATE(113)] = 4189,
  [SMALL_STATE(114)] = 4196,
  [SMALL_STATE(115)] = 4203,
  [SMALL_STATE(116)] = 4210,
  [SMALL_STATE(117)] = 4214,
  [SMALL_STATE(118)] = 4218,
  [SMALL_STATE(119)] = 4222,
  [SMALL_STATE(120)] = 4226,
  [SMALL_STATE(121)] = 4230,
  [SMALL_STATE(122)] = 4234,
  [SMALL_STATE(123)] = 4238,
  [SMALL_STATE(124)] = 4242,
  [SMALL_STATE(125)] = 4246,
  [SMALL_STATE(126)] = 4250,
  [SMALL_STATE(127)] = 4254,
  [SMALL_STATE(128)] = 4258,
  [SMALL_STATE(129)] = 4262,
  [SMALL_STATE(130)] = 4266,
  [SMALL_STATE(131)] = 4270,
  [SMALL_STATE(132)] = 4274,
  [SMALL_STATE(133)] = 4278,
  [SMALL_STATE(134)] = 4282,
  [SMALL_STATE(135)] = 4286,
  [SMALL_STATE(136)] = 4290,
  [SMALL_STATE(137)] = 4294,
  [SMALL_STATE(138)] = 4298,
  [SMALL_STATE(139)] = 4302,
  [SMALL_STATE(140)] = 4306,
  [SMALL_STATE(141)] = 4310,
  [SMALL_STATE(142)] = 4314,
  [SMALL_STATE(143)] = 4318,
  [SMALL_STATE(144)] = 4322,
  [SMALL_STATE(145)] = 4326,
  [SMALL_STATE(146)] = 4330,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(67),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(67),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(112),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(114),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(74),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(74),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(56),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(120),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(121),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(31),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(28),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(29),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(123),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(126),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(119),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(114),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(56),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(121),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(123),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(126),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 10),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 11),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 11),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 7),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 8),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 8),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 8),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 8),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 7),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 7),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(84),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(84),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(111),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(113),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(85),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(85),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(62),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(140),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(86),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(141),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(142),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(71),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(71),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(112),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(114),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(74),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(74),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(123),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(66),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(126),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(119),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(90),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(90),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(111),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(113),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(85),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(85),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(140),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(86),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(141),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(142),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(91),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(91),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(110),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(115),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(101),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(101),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(144),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(100),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(145),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(146),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(41),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(41),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2), SHIFT_REPEAT(45),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2), SHIFT_REPEAT(42),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(55),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(55),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 5),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 9),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 9),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 2, .production_id = 4),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 2, .production_id = 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(64),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 12),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 12),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(76),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 6),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 6),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 6),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 6),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 6),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 6),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 6),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 6),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 6),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(120),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(31),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_h3_repeat1, 2), SHIFT_REPEAT(123),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [625] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
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
