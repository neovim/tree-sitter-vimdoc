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
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 1
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 21

enum {
  aux_sym_word_token1 = 1,
  aux_sym_word_token2 = 2,
  aux_sym_word_noli_token1 = 3,
  aux_sym_word_noli_token2 = 4,
  anon_sym_STAR = 5,
  anon_sym_SQUOTE = 6,
  aux_sym__word_common_token1 = 7,
  aux_sym__word_common_token2 = 8,
  anon_sym_SQUOTE2 = 9,
  aux_sym__word_common_token3 = 10,
  anon_sym_PIPE = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_LBRACE_RBRACE = 14,
  aux_sym__word_common_token4 = 15,
  anon_sym_LPAREN = 16,
  aux_sym__word_common_token5 = 17,
  anon_sym_TILDE = 18,
  anon_sym_GT = 19,
  aux_sym_keycode_token1 = 20,
  aux_sym_keycode_token2 = 21,
  aux_sym_keycode_token3 = 22,
  aux_sym_keycode_token4 = 23,
  aux_sym_keycode_token5 = 24,
  anon_sym_CTRL_DASH_LBRACEchar_RBRACE = 25,
  aux_sym_keycode_token6 = 26,
  aux_sym_keycode_token7 = 27,
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
  alias_sym_code = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_word_token1] = "word_token1",
  [aux_sym_word_token2] = "word_token2",
  [aux_sym_word_noli_token1] = "word_noli_token1",
  [aux_sym_word_noli_token2] = "word_noli_token2",
  [anon_sym_STAR] = "*",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__word_common_token1] = "_word_common_token1",
  [aux_sym__word_common_token2] = "_word_common_token2",
  [anon_sym_SQUOTE2] = "'",
  [aux_sym__word_common_token3] = "_word_common_token3",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [aux_sym__word_common_token4] = "_word_common_token4",
  [anon_sym_LPAREN] = "(",
  [aux_sym__word_common_token5] = "_word_common_token5",
  [anon_sym_TILDE] = "~",
  [anon_sym_GT] = ">",
  [aux_sym_keycode_token1] = "keycode_token1",
  [aux_sym_keycode_token2] = "keycode_token2",
  [aux_sym_keycode_token3] = "keycode_token3",
  [aux_sym_keycode_token4] = "keycode_token4",
  [aux_sym_keycode_token5] = "keycode_token5",
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = "CTRL-{char}",
  [aux_sym_keycode_token6] = "keycode_token6",
  [aux_sym_keycode_token7] = "keycode_token7",
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
  [alias_sym_code] = "code",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [aux_sym_word_token2] = aux_sym_word_token2,
  [aux_sym_word_noli_token1] = aux_sym_word_noli_token1,
  [aux_sym_word_noli_token2] = aux_sym_word_noli_token2,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__word_common_token1] = aux_sym__word_common_token1,
  [aux_sym__word_common_token2] = aux_sym__word_common_token2,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [aux_sym__word_common_token3] = aux_sym__word_common_token3,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [aux_sym__word_common_token4] = aux_sym__word_common_token4,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__word_common_token5] = aux_sym__word_common_token5,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_keycode_token1] = aux_sym_keycode_token1,
  [aux_sym_keycode_token2] = aux_sym_keycode_token2,
  [aux_sym_keycode_token3] = aux_sym_keycode_token3,
  [aux_sym_keycode_token4] = aux_sym_keycode_token4,
  [aux_sym_keycode_token5] = aux_sym_keycode_token5,
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
  [aux_sym_keycode_token6] = aux_sym_keycode_token6,
  [aux_sym_keycode_token7] = aux_sym_keycode_token7,
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
  [anon_sym_STAR] = {
    .visible = true,
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
  [aux_sym__word_common_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__word_common_token5] = {
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
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = {
    .visible = true,
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
  [13] = {.index = 8, .length = 1},
  [14] = {.index = 9, .length = 2},
  [18] = {.index = 11, .length = 2},
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
    [2] = alias_sym_code,
  },
  [11] = {
    [1] = sym_line,
    [2] = sym_line,
  },
  [12] = {
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
  [45] = 36,
  [46] = 42,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 49,
  [62] = 48,
  [63] = 52,
  [64] = 53,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 69,
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
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(391);
      if (lookahead == 'C') ADVANCE(394);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == '`') ADVANCE(445);
      if (lookahead == 'h') ADVANCE(401);
      if (lookahead == '{') ADVANCE(438);
      if (lookahead == '|') ADVANCE(445);
      if (lookahead == '}') ADVANCE(445);
      if (lookahead == '~') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(445);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(404);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(443);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(391);
      if (lookahead == 'C') ADVANCE(394);
      if (lookahead == 'M') ADVANCE(390);
      if (lookahead == '`') ADVANCE(445);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == '{') ADVANCE(438);
      if (lookahead == '|') ADVANCE(440);
      if (lookahead == '}') ADVANCE(445);
      if (lookahead == '~') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(155);
      if (lookahead == 'M') ADVANCE(151);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '<') ADVANCE(374);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'C') ADVANCE(164);
      if (lookahead == 'M') ADVANCE(162);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == 8226) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(210);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(374);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'C') ADVANCE(164);
      if (lookahead == 'M') ADVANCE(162);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(24);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(374);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'C') ADVANCE(164);
      if (lookahead == 'M') ADVANCE(162);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(24);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '<') ADVANCE(238);
      if (lookahead == '>') ADVANCE(280);
      if (lookahead == 'A') ADVANCE(233);
      if (lookahead == 'C') ADVANCE(234);
      if (lookahead == 'M') ADVANCE(232);
      if (lookahead == '`') ADVANCE(513);
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead == '|') ADVANCE(250);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '~') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(235);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'C') ADVANCE(56);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(91);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'C') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(100);
      if (lookahead == '`') ADVANCE(512);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '}') ADVANCE(257);
      if (lookahead == '~') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == '*') ADVANCE(509);
      if (lookahead == '<') ADVANCE(507);
      if (lookahead == '>') ADVANCE(509);
      if (lookahead == 'A') ADVANCE(460);
      if (lookahead == 'C') ADVANCE(463);
      if (lookahead == 'M') ADVANCE(459);
      if (lookahead == '`') ADVANCE(509);
      if (lookahead == 'h') ADVANCE(468);
      if (lookahead == '{') ADVANCE(503);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(509);
      if (lookahead == '~') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(231);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead == '<') ADVANCE(574);
      if (lookahead == '>') ADVANCE(281);
      if (lookahead == 'A') ADVANCE(524);
      if (lookahead == 'C') ADVANCE(527);
      if (lookahead == 'M') ADVANCE(523);
      if (lookahead == '`') ADVANCE(514);
      if (lookahead == 'h') ADVANCE(532);
      if (lookahead == '{') ADVANCE(255);
      if (lookahead == '|') ADVANCE(251);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0) ADVANCE(576);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '*') ADVANCE(446);
      if (lookahead == '<') ADVANCE(373);
      if (lookahead == '`') ADVANCE(516);
      if (lookahead == '|') ADVANCE(510);
      if (lookahead == '}') ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(379);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(379);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(286);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 27:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'M') ADVANCE(43);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(155);
      if (lookahead == 'M') ADVANCE(151);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '<') ADVANCE(374);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == 'C') ADVANCE(164);
      if (lookahead == 'M') ADVANCE(162);
      if (lookahead == '`') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == 8226) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(210);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 's') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ':') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 't') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 't') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(375);
      if (lookahead == '(') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '-') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 's') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ':') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'A') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'E') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'L') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'L') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'R') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'T') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'T') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'T') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == 'E') ADVANCE(362);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == 'L') ADVANCE(361);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == 'T') ADVANCE(360);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '>') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(312);
      if (lookahead == 'D') ADVANCE(306);
      if (lookahead == 'I') ADVANCE(309);
      if (lookahead == 'P') ADVANCE(301);
      if (lookahead == 'S') ADVANCE(298);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(78);
      if (lookahead == 'U') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(448);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 91:
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
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '>') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '>') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '>') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'B') ADVANCE(295);
      if (lookahead == 'D') ADVANCE(293);
      if (lookahead == 'I') ADVANCE(294);
      if (lookahead == 'P') ADVANCE(291);
      if (lookahead == 'S') ADVANCE(290);
      if (lookahead == '{') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'D') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'F') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'g') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'k') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'w') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '}') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == '-') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == 's') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == ':') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'A') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'E') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'L') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'L') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'R') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'T') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'T') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'T') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'E') ADVANCE(339);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'L') ADVANCE(338);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(337);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '>') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(314);
      if (lookahead == 'D') ADVANCE(308);
      if (lookahead == 'I') ADVANCE(311);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'S') ADVANCE(299);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(197);
      if (lookahead == 'U') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(448);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 210:
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
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(382);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'E') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'L') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(271);
      if (lookahead == 'T') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(271);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == 't') ADVANCE(452);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(') ADVANCE(271);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '>') ADVANCE(282);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(448);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '|') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(246);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(246);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '}') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '}') ADVANCE(259);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(263);
      if (lookahead == '}') ADVANCE(259);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(567);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(576);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '{') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '{') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__word_common_token5);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(66);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(185);
      END_STATE();
    case 300:
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
    case 301:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(372);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == '-') ADVANCE(351);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == '-') ADVANCE(352);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(334);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'L') ADVANCE(333);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'R') ADVANCE(336);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(354);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(354);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '-') ADVANCE(353);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'B') ADVANCE(350);
      if (lookahead == 'D') ADVANCE(348);
      if (lookahead == 'I') ADVANCE(349);
      if (lookahead == 'P') ADVANCE(347);
      if (lookahead == 'S') ADVANCE(344);
      if (lookahead == '{') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == 'F') ADVANCE(346);
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
      if (lookahead == 'H') ADVANCE(345);
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
      if (lookahead == 'I') ADVANCE(343);
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
      if (lookahead == 'T') ADVANCE(341);
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
      if (lookahead == 'a') ADVANCE(192);
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
      if (lookahead == 'e') ADVANCE(195);
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
      if (lookahead == 'n') ADVANCE(201);
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
      if (lookahead == 'r') ADVANCE(189);
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
          lookahead == ' ') ADVANCE(328);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
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
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == '-') ADVANCE(369);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == '-') ADVANCE(365);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == '-') ADVANCE(370);
      if (lookahead == ')' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == 'A') ADVANCE(357);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == 'L') ADVANCE(356);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == 'R') ADVANCE(359);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == 'T') ADVANCE(358);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(273);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
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
      if (lookahead == 'B') ADVANCE(313);
      if (lookahead == 'D') ADVANCE(307);
      if (lookahead == 'I') ADVANCE(310);
      if (lookahead == 'P') ADVANCE(302);
      if (lookahead == 'S') ADVANCE(300);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
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
          lookahead == ' ') ADVANCE(328);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 370:
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
    case 371:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
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
          lookahead == 'S') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == '-') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == '-') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead == 's') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead == 's') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == ':') ADVANCE(442);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == ':') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 'A') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 'E') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 'L') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 'L') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 'R') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 'p') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 'p') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 't') ADVANCE(397);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 't') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 't') ADVANCE(399);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (lookahead == 't') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '>') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'B') ADVANCE(434);
      if (lookahead == 'D') ADVANCE(420);
      if (lookahead == 'I') ADVANCE(429);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'S') ADVANCE(413);
      if (lookahead == '{') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(430);
      if (lookahead == 'U') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'F') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'H') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'k') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'w') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(439);
      if (lookahead == '}') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '|') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '}') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == 's') ADVANCE(450);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == ':') ADVANCE(243);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == 'p') ADVANCE(449);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == 't') ADVANCE(451);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(') ADVANCE(242);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(242);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == '-') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == '-') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == ':') ADVANCE(506);
      if (lookahead == 's') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == ':') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 'A') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 'E') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 'L') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 'L') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 'R') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 'T') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 'T') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 'T') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 'p') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 't') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == 't') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(474);
      if (lookahead == '>') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(473);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'B') ADVANCE(499);
      if (lookahead == 'D') ADVANCE(485);
      if (lookahead == 'I') ADVANCE(494);
      if (lookahead == 'P') ADVANCE(481);
      if (lookahead == 'S') ADVANCE(478);
      if (lookahead == '{') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(495);
      if (lookahead == 'U') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(504);
      if (lookahead == '}') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == '-') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == '-') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == '-') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 's') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 'E') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 'L') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 'L') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 'R') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 'T') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 'T') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 'T') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 'p') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (lookahead == 't') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(538);
      if (lookahead == '>') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(537);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(537);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'B') ADVANCE(563);
      if (lookahead == 'D') ADVANCE(549);
      if (lookahead == 'I') ADVANCE(558);
      if (lookahead == 'P') ADVANCE(545);
      if (lookahead == 'S') ADVANCE(542);
      if (lookahead == '{') ADVANCE(548);
      if (lookahead == '}') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(559);
      if (lookahead == 'U') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'F') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'H') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'k') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'l') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'o') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 's') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '{') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '|') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(448);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(576);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(576);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 29},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 29},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_noli_token1] = ACTIONS(1),
    [aux_sym_word_noli_token2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__word_common_token1] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [aux_sym__word_common_token4] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym__word_common_token5] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_keycode_token1] = ACTIONS(1),
    [aux_sym_keycode_token2] = ACTIONS(1),
    [aux_sym_keycode_token3] = ACTIONS(1),
    [aux_sym_keycode_token4] = ACTIONS(1),
    [aux_sym_keycode_token5] = ACTIONS(1),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(1),
    [aux_sym_keycode_token6] = ACTIONS(1),
    [aux_sym_keycode_token7] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_LF2] = ACTIONS(1),
    [aux_sym_tag_token1] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [sym_url_word] = ACTIONS(1),
    [aux_sym_optionlink_token1] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(102),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(97),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(60),
    [sym__blank] = STATE(50),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(92),
    [sym__line_noli] = STATE(60),
    [sym_column_heading] = STATE(60),
    [sym_h1] = STATE(60),
    [sym_h2] = STATE(60),
    [sym_h3] = STATE(60),
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
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token5] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [aux_sym_uppercase_name_token1] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LF2] = ACTIONS(27),
    [aux_sym_line_li_token1] = ACTIONS(29),
    [aux_sym_h1_token1] = ACTIONS(31),
    [aux_sym_h2_token1] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [2] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(97),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(60),
    [sym__blank] = STATE(50),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(92),
    [sym__line_noli] = STATE(60),
    [sym_column_heading] = STATE(60),
    [sym_h1] = STATE(60),
    [sym_h2] = STATE(60),
    [sym_h3] = STATE(60),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(43),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token5] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [aux_sym_uppercase_name_token1] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LF2] = ACTIONS(27),
    [aux_sym_line_li_token1] = ACTIONS(29),
    [aux_sym_h1_token1] = ACTIONS(31),
    [aux_sym_h2_token1] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [3] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(97),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(60),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(92),
    [sym__line_noli] = STATE(60),
    [sym_column_heading] = STATE(60),
    [sym_h1] = STATE(60),
    [sym_h2] = STATE(60),
    [sym_h3] = STATE(60),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token5] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [aux_sym_uppercase_name_token1] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [aux_sym_line_li_token1] = ACTIONS(29),
    [aux_sym_h1_token1] = ACTIONS(31),
    [aux_sym_h2_token1] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [4] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(97),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(60),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(92),
    [sym__line_noli] = STATE(60),
    [sym_column_heading] = STATE(60),
    [sym_h1] = STATE(60),
    [sym_h2] = STATE(60),
    [sym_h3] = STATE(60),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_noli_token1] = ACTIONS(45),
    [aux_sym_word_noli_token2] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym__word_common_token3] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(54),
    [aux_sym__word_common_token4] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(45),
    [aux_sym__word_common_token5] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(63),
    [aux_sym_keycode_token1] = ACTIONS(66),
    [aux_sym_keycode_token2] = ACTIONS(66),
    [aux_sym_keycode_token3] = ACTIONS(66),
    [aux_sym_keycode_token4] = ACTIONS(66),
    [aux_sym_keycode_token5] = ACTIONS(69),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(69),
    [aux_sym_keycode_token6] = ACTIONS(66),
    [aux_sym_keycode_token7] = ACTIONS(66),
    [aux_sym_uppercase_name_token1] = ACTIONS(72),
    [anon_sym_LT] = ACTIONS(75),
    [aux_sym_line_li_token1] = ACTIONS(78),
    [aux_sym_h1_token1] = ACTIONS(81),
    [aux_sym_h2_token1] = ACTIONS(84),
    [sym_url_word] = ACTIONS(87),
    [anon_sym_BQUOTE] = ACTIONS(90),
  },
  [5] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(97),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(60),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(92),
    [sym__line_noli] = STATE(60),
    [sym_column_heading] = STATE(60),
    [sym_h1] = STATE(60),
    [sym_h2] = STATE(60),
    [sym_h3] = STATE(60),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token5] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [aux_sym_uppercase_name_token1] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [aux_sym_line_li_token1] = ACTIONS(29),
    [aux_sym_h1_token1] = ACTIONS(31),
    [aux_sym_h2_token1] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [6] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(97),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(60),
    [sym__blank] = STATE(33),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(93),
    [sym__line_noli] = STATE(60),
    [sym_column_heading] = STATE(60),
    [sym_h1] = STATE(60),
    [sym_h2] = STATE(60),
    [sym_h3] = STATE(60),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(93),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [aux_sym__word_common_token5] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [aux_sym_uppercase_name_token1] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(95),
    [anon_sym_LF2] = ACTIONS(27),
    [aux_sym_line_li_token1] = ACTIONS(29),
    [aux_sym_h1_token1] = ACTIONS(31),
    [aux_sym_h2_token1] = ACTIONS(33),
    [sym_url_word] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(37),
  },
  [7] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(97),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(60),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(60),
    [sym_column_heading] = STATE(60),
    [sym_h1] = STATE(60),
    [sym_h2] = STATE(60),
    [sym_h3] = STATE(60),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_word_noli_token1] = ACTIONS(97),
    [aux_sym_word_noli_token2] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [aux_sym__word_common_token3] = ACTIONS(106),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(106),
    [aux_sym__word_common_token4] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(97),
    [aux_sym__word_common_token5] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(115),
    [aux_sym_keycode_token1] = ACTIONS(118),
    [aux_sym_keycode_token2] = ACTIONS(118),
    [aux_sym_keycode_token3] = ACTIONS(118),
    [aux_sym_keycode_token4] = ACTIONS(118),
    [aux_sym_keycode_token5] = ACTIONS(121),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(121),
    [aux_sym_keycode_token6] = ACTIONS(118),
    [aux_sym_keycode_token7] = ACTIONS(118),
    [aux_sym_uppercase_name_token1] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_LF2] = ACTIONS(129),
    [aux_sym_line_li_token1] = ACTIONS(129),
    [aux_sym_h1_token1] = ACTIONS(131),
    [aux_sym_h2_token1] = ACTIONS(134),
    [sym_url_word] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(140),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(170), 1,
      anon_sym_LT,
    ACTIONS(174), 1,
      sym_url_word,
    ACTIONS(177), 1,
      anon_sym_BQUOTE,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(66), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(164), 2,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
    ACTIONS(172), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(143), 3,
      aux_sym_word_noli_token1,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
    ACTIONS(161), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(146), 7,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
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
  [77] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(182), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(66), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(21), 2,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
    ACTIONS(184), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 3,
      aux_sym_word_noli_token1,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
    ACTIONS(19), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(11), 7,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
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
  [154] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(186), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(66), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(21), 2,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
    ACTIONS(188), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 3,
      aux_sym_word_noli_token1,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
    ACTIONS(19), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(11), 7,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
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
  [231] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(190), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(66), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(21), 2,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
    ACTIONS(192), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 3,
      aux_sym_word_noli_token1,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
    ACTIONS(19), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(11), 7,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
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
  [308] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(194), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_line_li_repeat2,
    STATE(66), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(21), 2,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
    ACTIONS(196), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 3,
      aux_sym_word_noli_token1,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
    ACTIONS(19), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(11), 7,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
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
  [385] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(198), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_line_li_repeat2,
    STATE(66), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(21), 2,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
    ACTIONS(200), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 3,
      aux_sym_word_noli_token1,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
    ACTIONS(19), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(11), 7,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
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
  [462] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(202), 1,
      anon_sym_LT,
    STATE(10), 1,
      aux_sym_line_li_repeat2,
    STATE(66), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(21), 2,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
    ACTIONS(204), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 3,
      aux_sym_word_noli_token1,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
    ACTIONS(19), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(11), 7,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
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
  [539] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(206), 1,
      anon_sym_LT,
    STATE(11), 1,
      aux_sym_line_li_repeat2,
    STATE(66), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(21), 2,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
    ACTIONS(208), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 3,
      aux_sym_word_noli_token1,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
    ACTIONS(19), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(11), 7,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
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
  [616] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(180), 1,
      aux_sym_uppercase_name_token1,
    ACTIONS(210), 1,
      anon_sym_LT,
    STATE(12), 1,
      aux_sym_line_li_repeat2,
    STATE(66), 1,
      sym__line_noli,
    STATE(87), 1,
      sym__word_common,
    ACTIONS(21), 2,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
    ACTIONS(212), 2,
      anon_sym_LF2,
      aux_sym_line_li_token1,
    ACTIONS(5), 3,
      aux_sym_word_noli_token1,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
    ACTIONS(19), 6,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(11), 7,
      aux_sym_word_noli_token2,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
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
  [693] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(218), 1,
      anon_sym_GT,
    ACTIONS(220), 1,
      anon_sym_LF2,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(64), 1,
      sym_codeblock,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 7,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [764] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(222), 1,
      anon_sym_TILDE,
    ACTIONS(224), 1,
      anon_sym_LF2,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(53), 1,
      sym_codeblock,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 6,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [837] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(218), 1,
      anon_sym_GT,
    ACTIONS(226), 1,
      anon_sym_LF2,
    STATE(13), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 7,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [908] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(218), 1,
      anon_sym_GT,
    ACTIONS(228), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(63), 1,
      sym_codeblock,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 7,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [979] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(230), 1,
      anon_sym_TILDE,
    ACTIONS(232), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(52), 1,
      sym_codeblock,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 6,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1052] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(218), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      anon_sym_LF2,
    STATE(15), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 7,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1123] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(236), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1189] = 14,
    ACTIONS(241), 1,
      anon_sym_STAR,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      anon_sym_LF2,
    ACTIONS(264), 1,
      sym_url_word,
    ACTIONS(267), 1,
      anon_sym_BQUOTE,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(238), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(256), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(259), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(247), 8,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1255] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(270), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1321] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(272), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1387] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    ACTIONS(274), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1453] = 13,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1516] = 13,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1579] = 13,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1642] = 13,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym_url_word,
    ACTIONS(37), 1,
      anon_sym_BQUOTE,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(214), 2,
      aux_sym_word_token1,
      aux_sym_word_token2,
    ACTIONS(19), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(21), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(216), 8,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
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
  [1705] = 5,
    ACTIONS(27), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(278), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(276), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1749] = 5,
    ACTIONS(27), 1,
      anon_sym_LF2,
    STATE(32), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(282), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(280), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1793] = 5,
    ACTIONS(27), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(286), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(284), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1837] = 5,
    ACTIONS(27), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(290), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(288), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1881] = 6,
    ACTIONS(294), 1,
      anon_sym_LF2,
    ACTIONS(297), 1,
      aux_sym_line_code_token1,
    STATE(36), 1,
      aux_sym_codeblock_repeat1,
    STATE(49), 1,
      sym_line_code,
    ACTIONS(300), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(292), 27,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1927] = 5,
    ACTIONS(27), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(278), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(276), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1971] = 5,
    ACTIONS(27), 1,
      anon_sym_LF2,
    STATE(34), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(304), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(302), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2015] = 6,
    ACTIONS(27), 1,
      anon_sym_LF2,
    ACTIONS(310), 1,
      aux_sym_line_li_token1,
    STATE(35), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(308), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(306), 15,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2061] = 5,
    ACTIONS(27), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(304), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(302), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2105] = 5,
    ACTIONS(27), 1,
      anon_sym_LF2,
    STATE(37), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(282), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(280), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2149] = 6,
    ACTIONS(314), 1,
      anon_sym_LF2,
    ACTIONS(316), 1,
      aux_sym_line_code_token1,
    STATE(36), 1,
      aux_sym_codeblock_repeat1,
    STATE(49), 1,
      sym_line_code,
    ACTIONS(318), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(312), 27,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2195] = 5,
    ACTIONS(324), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(322), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(320), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2239] = 6,
    ACTIONS(27), 1,
      anon_sym_LF2,
    ACTIONS(310), 1,
      aux_sym_line_li_token1,
    STATE(40), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(329), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(327), 15,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2285] = 5,
    ACTIONS(331), 1,
      anon_sym_LF2,
    ACTIONS(334), 1,
      aux_sym_line_code_token1,
    STATE(45), 1,
      aux_sym_codeblock_repeat1,
    STATE(61), 1,
      sym_line_code,
    ACTIONS(292), 27,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2327] = 5,
    ACTIONS(337), 1,
      anon_sym_LF2,
    ACTIONS(339), 1,
      aux_sym_line_code_token1,
    STATE(45), 1,
      aux_sym_codeblock_repeat1,
    STATE(61), 1,
      sym_line_code,
    ACTIONS(312), 27,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2369] = 2,
    ACTIONS(343), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(341), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2405] = 2,
    ACTIONS(347), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(345), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2441] = 2,
    ACTIONS(351), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(349), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2477] = 2,
    ACTIONS(355), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(353), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2513] = 2,
    ACTIONS(357), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(359), 16,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2548] = 2,
    ACTIONS(361), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(363), 16,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2583] = 2,
    ACTIONS(365), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(367), 16,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2618] = 2,
    ACTIONS(369), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(371), 16,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2653] = 2,
    ACTIONS(373), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(375), 16,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2688] = 2,
    ACTIONS(377), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(379), 16,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2723] = 2,
    ACTIONS(381), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(383), 16,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2758] = 2,
    ACTIONS(385), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(387), 16,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2793] = 2,
    ACTIONS(389), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(391), 16,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2828] = 2,
    ACTIONS(393), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(395), 16,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2863] = 2,
    ACTIONS(351), 1,
      anon_sym_LF2,
    ACTIONS(349), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2897] = 2,
    ACTIONS(347), 1,
      anon_sym_LF2,
    ACTIONS(345), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2931] = 2,
    ACTIONS(361), 13,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(363), 15,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2964] = 2,
    ACTIONS(365), 13,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(367), 15,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2997] = 4,
    ACTIONS(403), 1,
      aux_sym_optionlink_token1,
    ACTIONS(401), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(399), 10,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
    ACTIONS(397), 15,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      sym_url_word,
      anon_sym_BQUOTE,
  [3034] = 2,
    ACTIONS(405), 13,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(407), 15,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3067] = 4,
    ACTIONS(413), 1,
      aux_sym_uppercase_name_token2,
    STATE(67), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(409), 12,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(411), 13,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3103] = 4,
    ACTIONS(420), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(416), 12,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(418), 13,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3139] = 3,
    ACTIONS(422), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(397), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(399), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3173] = 4,
    ACTIONS(420), 1,
      aux_sym_uppercase_name_token2,
    STATE(67), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(424), 12,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(426), 13,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3209] = 3,
    ACTIONS(428), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(397), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(399), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3243] = 5,
    ACTIONS(420), 1,
      aux_sym_uppercase_name_token2,
    STATE(67), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(430), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(426), 11,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(424), 12,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
  [3281] = 5,
    ACTIONS(420), 1,
      aux_sym_uppercase_name_token2,
    STATE(72), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(432), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(418), 11,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(416), 12,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
  [3319] = 3,
    ACTIONS(434), 1,
      aux_sym_taglink_token1,
    ACTIONS(399), 2,
      aux_sym__word_common_token3,
      anon_sym_LF2,
    ACTIONS(397), 23,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3352] = 3,
    ACTIONS(436), 1,
      anon_sym_LF,
    ACTIONS(397), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(399), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3385] = 3,
    ACTIONS(442), 1,
      anon_sym_SQUOTE2,
    ACTIONS(438), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(440), 17,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3418] = 3,
    ACTIONS(444), 1,
      aux_sym_tag_token1,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(397), 23,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3451] = 3,
    ACTIONS(446), 1,
      anon_sym_LF,
    ACTIONS(397), 8,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(399), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3484] = 3,
    ACTIONS(448), 1,
      aux_sym_argument_token1,
    ACTIONS(399), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
    ACTIONS(397), 21,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3517] = 2,
    ACTIONS(450), 13,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token2,
    ACTIONS(452), 13,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3548] = 2,
    ACTIONS(454), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(456), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3578] = 2,
    ACTIONS(458), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(460), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3608] = 2,
    ACTIONS(462), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(464), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3638] = 2,
    ACTIONS(466), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(468), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3668] = 2,
    ACTIONS(470), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(472), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3698] = 2,
    ACTIONS(474), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(476), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3728] = 2,
    ACTIONS(478), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(480), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3758] = 2,
    ACTIONS(482), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(484), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3788] = 2,
    ACTIONS(486), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(488), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3818] = 2,
    ACTIONS(490), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(492), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3848] = 2,
    ACTIONS(494), 7,
      aux_sym_word_token1,
      aux_sym_word_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(496), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_RBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      aux_sym__word_common_token5,
      anon_sym_TILDE,
      anon_sym_GT,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3878] = 5,
    ACTIONS(27), 1,
      anon_sym_LF2,
    ACTIONS(29), 1,
      aux_sym_line_li_token1,
    ACTIONS(498), 1,
      anon_sym_LT,
    STATE(41), 1,
      sym__blank,
    STATE(94), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3895] = 5,
    ACTIONS(27), 1,
      anon_sym_LF2,
    ACTIONS(29), 1,
      aux_sym_line_li_token1,
    ACTIONS(500), 1,
      anon_sym_LT,
    STATE(38), 1,
      sym__blank,
    STATE(94), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3912] = 4,
    ACTIONS(502), 1,
      anon_sym_LT,
    ACTIONS(505), 1,
      anon_sym_LF2,
    ACTIONS(507), 1,
      aux_sym_line_li_token1,
    STATE(94), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3926] = 4,
    ACTIONS(314), 1,
      anon_sym_LF2,
    ACTIONS(316), 1,
      aux_sym_line_code_token1,
    STATE(42), 1,
      aux_sym_codeblock_repeat1,
    STATE(49), 1,
      sym_line_code,
  [3939] = 4,
    ACTIONS(337), 1,
      anon_sym_LF2,
    ACTIONS(339), 1,
      aux_sym_line_code_token1,
    STATE(46), 1,
      aux_sym_codeblock_repeat1,
    STATE(61), 1,
      sym_line_code,
  [3952] = 3,
    ACTIONS(510), 1,
      anon_sym_STAR,
    ACTIONS(512), 1,
      anon_sym_LF2,
    STATE(25), 1,
      sym_tag,
  [3962] = 1,
    ACTIONS(514), 1,
      anon_sym_PIPE2,
  [3966] = 1,
    ACTIONS(516), 1,
      anon_sym_STAR2,
  [3970] = 1,
    ACTIONS(518), 1,
      anon_sym_RBRACE2,
  [3974] = 1,
    ACTIONS(520), 1,
      aux_sym_codespan_token1,
  [3978] = 1,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
  [3982] = 1,
    ACTIONS(524), 1,
      anon_sym_SQUOTE2,
  [3986] = 1,
    ACTIONS(444), 1,
      aux_sym_tag_token1,
  [3990] = 1,
    ACTIONS(310), 1,
      aux_sym_line_li_token1,
  [3994] = 1,
    ACTIONS(526), 1,
      anon_sym_BQUOTE2,
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
  [SMALL_STATE(18)] = 764,
  [SMALL_STATE(19)] = 837,
  [SMALL_STATE(20)] = 908,
  [SMALL_STATE(21)] = 979,
  [SMALL_STATE(22)] = 1052,
  [SMALL_STATE(23)] = 1123,
  [SMALL_STATE(24)] = 1189,
  [SMALL_STATE(25)] = 1255,
  [SMALL_STATE(26)] = 1321,
  [SMALL_STATE(27)] = 1387,
  [SMALL_STATE(28)] = 1453,
  [SMALL_STATE(29)] = 1516,
  [SMALL_STATE(30)] = 1579,
  [SMALL_STATE(31)] = 1642,
  [SMALL_STATE(32)] = 1705,
  [SMALL_STATE(33)] = 1749,
  [SMALL_STATE(34)] = 1793,
  [SMALL_STATE(35)] = 1837,
  [SMALL_STATE(36)] = 1881,
  [SMALL_STATE(37)] = 1927,
  [SMALL_STATE(38)] = 1971,
  [SMALL_STATE(39)] = 2015,
  [SMALL_STATE(40)] = 2061,
  [SMALL_STATE(41)] = 2105,
  [SMALL_STATE(42)] = 2149,
  [SMALL_STATE(43)] = 2195,
  [SMALL_STATE(44)] = 2239,
  [SMALL_STATE(45)] = 2285,
  [SMALL_STATE(46)] = 2327,
  [SMALL_STATE(47)] = 2369,
  [SMALL_STATE(48)] = 2405,
  [SMALL_STATE(49)] = 2441,
  [SMALL_STATE(50)] = 2477,
  [SMALL_STATE(51)] = 2513,
  [SMALL_STATE(52)] = 2548,
  [SMALL_STATE(53)] = 2583,
  [SMALL_STATE(54)] = 2618,
  [SMALL_STATE(55)] = 2653,
  [SMALL_STATE(56)] = 2688,
  [SMALL_STATE(57)] = 2723,
  [SMALL_STATE(58)] = 2758,
  [SMALL_STATE(59)] = 2793,
  [SMALL_STATE(60)] = 2828,
  [SMALL_STATE(61)] = 2863,
  [SMALL_STATE(62)] = 2897,
  [SMALL_STATE(63)] = 2931,
  [SMALL_STATE(64)] = 2964,
  [SMALL_STATE(65)] = 2997,
  [SMALL_STATE(66)] = 3034,
  [SMALL_STATE(67)] = 3067,
  [SMALL_STATE(68)] = 3103,
  [SMALL_STATE(69)] = 3139,
  [SMALL_STATE(70)] = 3173,
  [SMALL_STATE(71)] = 3209,
  [SMALL_STATE(72)] = 3243,
  [SMALL_STATE(73)] = 3281,
  [SMALL_STATE(74)] = 3319,
  [SMALL_STATE(75)] = 3352,
  [SMALL_STATE(76)] = 3385,
  [SMALL_STATE(77)] = 3418,
  [SMALL_STATE(78)] = 3451,
  [SMALL_STATE(79)] = 3484,
  [SMALL_STATE(80)] = 3517,
  [SMALL_STATE(81)] = 3548,
  [SMALL_STATE(82)] = 3578,
  [SMALL_STATE(83)] = 3608,
  [SMALL_STATE(84)] = 3638,
  [SMALL_STATE(85)] = 3668,
  [SMALL_STATE(86)] = 3698,
  [SMALL_STATE(87)] = 3728,
  [SMALL_STATE(88)] = 3758,
  [SMALL_STATE(89)] = 3788,
  [SMALL_STATE(90)] = 3818,
  [SMALL_STATE(91)] = 3848,
  [SMALL_STATE(92)] = 3878,
  [SMALL_STATE(93)] = 3895,
  [SMALL_STATE(94)] = 3912,
  [SMALL_STATE(95)] = 3926,
  [SMALL_STATE(96)] = 3939,
  [SMALL_STATE(97)] = 3952,
  [SMALL_STATE(98)] = 3962,
  [SMALL_STATE(99)] = 3966,
  [SMALL_STATE(100)] = 3970,
  [SMALL_STATE(101)] = 3974,
  [SMALL_STATE(102)] = 3978,
  [SMALL_STATE(103)] = 3982,
  [SMALL_STATE(104)] = 3986,
  [SMALL_STATE(105)] = 3990,
  [SMALL_STATE(106)] = 3994,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, .production_id = 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(87),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(77),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(65),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(87),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(74),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(79),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(71),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(73),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(105),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(29),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(28),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(83),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(101),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(79),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(83),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(101),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(87),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(87),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(77),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(65),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(74),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(79),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(88),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(88),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(68),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(83),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(101),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(85),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(77),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(65),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(85),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(74),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(79),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(88),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(88),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(83),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(101),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 14),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 14),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 8),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 8),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 20),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 20),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 19),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 19),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(48),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(48),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 13),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 13),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3, .production_id = 10),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 10),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(47),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(62),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(62),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 6),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, .production_id = 6),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, .production_id = 6),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 4, .production_id = 18),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 4, .production_id = 18),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 6),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 6),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 6),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(80),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 9),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 9),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 9),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 9),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(105),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(30),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [522] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
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
