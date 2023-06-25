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
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 1
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 21

enum {
  aux_sym_word_token1 = 1,
  aux_sym_word_noli_token1 = 2,
  aux_sym_word_noli_token2 = 3,
  anon_sym_STAR = 4,
  anon_sym_SQUOTE = 5,
  aux_sym__word_common_token1 = 6,
  aux_sym__word_common_token2 = 7,
  anon_sym_SQUOTE2 = 8,
  aux_sym__word_common_token3 = 9,
  anon_sym_PIPE = 10,
  anon_sym_LBRACE = 11,
  anon_sym_LBRACE_RBRACE = 12,
  aux_sym__word_common_token4 = 13,
  anon_sym_LPAREN = 14,
  anon_sym_LBRACK = 15,
  anon_sym_TILDE = 16,
  anon_sym_GT = 17,
  anon_sym_COMMA = 18,
  aux_sym_keycode_token1 = 19,
  aux_sym_keycode_token2 = 20,
  aux_sym_keycode_token3 = 21,
  aux_sym_keycode_token4 = 22,
  aux_sym_keycode_token5 = 23,
  anon_sym_CTRL_DASH_LBRACEchar_RBRACE = 24,
  aux_sym_keycode_token6 = 25,
  aux_sym_keycode_token7 = 26,
  sym_optional = 27,
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
  aux_sym_codeblock_repeat1 = 81,
  aux_sym_line_li_repeat1 = 82,
  aux_sym_line_li_repeat2 = 83,
  alias_sym_code = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_word_token1] = "word_token1",
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
  [anon_sym_LBRACE_RBRACE] = "{}",
  [aux_sym__word_common_token4] = "_word_common_token4",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_TILDE] = "~",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [aux_sym_keycode_token1] = "keycode_token1",
  [aux_sym_keycode_token2] = "keycode_token2",
  [aux_sym_keycode_token3] = "keycode_token3",
  [aux_sym_keycode_token4] = "keycode_token4",
  [aux_sym_keycode_token5] = "keycode_token5",
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = "CTRL-{char}",
  [aux_sym_keycode_token6] = "keycode_token6",
  [aux_sym_keycode_token7] = "keycode_token7",
  [sym_optional] = "optional",
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
  [aux_sym_codeblock_repeat1] = "codeblock_repeat1",
  [aux_sym_line_li_repeat1] = "line_li_repeat1",
  [aux_sym_line_li_repeat2] = "line_li_repeat2",
  [alias_sym_code] = "code",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_word_token1] = aux_sym_word_token1,
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
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [aux_sym__word_common_token4] = aux_sym__word_common_token4,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_keycode_token1] = aux_sym_keycode_token1,
  [aux_sym_keycode_token2] = aux_sym_keycode_token2,
  [aux_sym_keycode_token3] = aux_sym_keycode_token3,
  [aux_sym_keycode_token4] = aux_sym_keycode_token4,
  [aux_sym_keycode_token5] = aux_sym_keycode_token5,
  [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
  [aux_sym_keycode_token6] = aux_sym_keycode_token6,
  [aux_sym_keycode_token7] = aux_sym_keycode_token7,
  [sym_optional] = sym_optional,
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
  [anon_sym_LBRACK] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
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
  [sym_optional] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(454);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '*') ADVANCE(456);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '<') ADVANCE(451);
      if (lookahead == '>') ADVANCE(454);
      if (lookahead == 'A') ADVANCE(409);
      if (lookahead == 'C') ADVANCE(412);
      if (lookahead == 'M') ADVANCE(405);
      if (lookahead == '[') ADVANCE(450);
      if (lookahead == '`') ADVANCE(454);
      if (lookahead == 'h') ADVANCE(440);
      if (lookahead == '{') ADVANCE(444);
      if (lookahead == '|') ADVANCE(454);
      if (lookahead == '}') ADVANCE(454);
      if (lookahead == '~') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(56);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(56);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(454);
      if (lookahead == '(') ADVANCE(455);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '<') ADVANCE(451);
      if (lookahead == '>') ADVANCE(454);
      if (lookahead == 'A') ADVANCE(409);
      if (lookahead == 'C') ADVANCE(412);
      if (lookahead == 'M') ADVANCE(405);
      if (lookahead == '[') ADVANCE(450);
      if (lookahead == '`') ADVANCE(454);
      if (lookahead == 'h') ADVANCE(442);
      if (lookahead == '{') ADVANCE(444);
      if (lookahead == '|') ADVANCE(446);
      if (lookahead == '~') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(56);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(179);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(25);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(146);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == 'M') ADVANCE(145);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == 8226) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(146);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == 'M') ADVANCE(145);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(146);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == 'M') ADVANCE(145);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == ',') ADVANCE(281);
      if (lookahead == '<') ADVANCE(236);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(232);
      if (lookahead == 'C') ADVANCE(233);
      if (lookahead == 'M') ADVANCE(231);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == '`') ADVANCE(529);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '|') ADVANCE(248);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '>') ADVANCE(276);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'M') ADVANCE(107);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == '`') ADVANCE(527);
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == '{') ADVANCE(250);
      if (lookahead == '|') ADVANCE(246);
      if (lookahead == '~') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(523);
      if (lookahead == '(') ADVANCE(524);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == ',') ADVANCE(524);
      if (lookahead == '<') ADVANCE(521);
      if (lookahead == '>') ADVANCE(523);
      if (lookahead == 'A') ADVANCE(483);
      if (lookahead == 'C') ADVANCE(486);
      if (lookahead == 'M') ADVANCE(479);
      if (lookahead == '[') ADVANCE(520);
      if (lookahead == '`') ADVANCE(523);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead == '{') ADVANCE(515);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(56);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == ',') ADVANCE(282);
      if (lookahead == '<') ADVANCE(591);
      if (lookahead == '>') ADVANCE(277);
      if (lookahead == 'A') ADVANCE(550);
      if (lookahead == 'C') ADVANCE(553);
      if (lookahead == 'M') ADVANCE(546);
      if (lookahead == '[') ADVANCE(267);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'h') ADVANCE(581);
      if (lookahead == '{') ADVANCE(253);
      if (lookahead == '|') ADVANCE(249);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '~') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(593);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '*') ADVANCE(456);
      if (lookahead == '<') ADVANCE(381);
      if (lookahead == '`') ADVANCE(531);
      if (lookahead == '|') ADVANCE(525);
      if (lookahead == '}') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '>') ADVANCE(289);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(387);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(287);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(530);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'M') ADVANCE(56);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '<') ADVANCE(209);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(179);
      if (lookahead == 'M') ADVANCE(173);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(25);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '<') ADVANCE(382);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead == 'A') ADVANCE(146);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == 'M') ADVANCE(145);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == '`') ADVANCE(526);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == '{') ADVANCE(251);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '~') ADVANCE(271);
      if (lookahead == 8226) ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == 's') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'E') ADVANCE(373);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'L') ADVANCE(372);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'T') ADVANCE(371);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '>') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(315);
      if (lookahead == 'D') ADVANCE(311);
      if (lookahead == 'I') ADVANCE(313);
      if (lookahead == 'P') ADVANCE(307);
      if (lookahead == 'S') ADVANCE(305);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(460);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(327);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '>') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'B') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(294);
      if (lookahead == 'I') ADVANCE(295);
      if (lookahead == 'P') ADVANCE(292);
      if (lookahead == 'S') ADVANCE(291);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(298);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == 'U') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'F') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'I') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'R') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'h') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'k') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '}') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(458);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(334);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(329);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(320);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'E') ADVANCE(352);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'L') ADVANCE(351);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(350);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '>') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == 's') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(316);
      if (lookahead == 'D') ADVANCE(312);
      if (lookahead == 'I') ADVANCE(314);
      if (lookahead == 'P') ADVANCE(308);
      if (lookahead == 'S') ADVANCE(306);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(194);
      if (lookahead == 'U') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(461);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(459);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(327);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(388);
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
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'L') ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'T') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(241);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(241);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '>') ADVANCE(283);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ']') ADVANCE(337);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(461);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(460);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '|') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '|') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(244);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(244);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(584);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '}') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '}') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '}') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(583);
      if (lookahead == '}') ADVANCE(254);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(593);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '{') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(594);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead == ']' ||
          lookahead == '{') ADVANCE(141);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == ']' ||
          lookahead == '{') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(557);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(183);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ']' &&
          lookahead != '{') ADVANCE(27);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(594);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'H') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'H') ADVANCE(369);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(58);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(175);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_optional);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_optional);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_optional);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == '-') ADVANCE(358);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == '-') ADVANCE(359);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'A') ADVANCE(342);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'B') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(355);
      if (lookahead == 'I') ADVANCE(356);
      if (lookahead == 'P') ADVANCE(354);
      if (lookahead == 'S') ADVANCE(347);
      if (lookahead == '{') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(290);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'F') ADVANCE(353);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'H') ADVANCE(348);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'I') ADVANCE(346);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'L') ADVANCE(341);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'R') ADVANCE(349);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(340);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(344);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'T') ADVANCE(343);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(332);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(327);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(327);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(318);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(362);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == '-') ADVANCE(377);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'A') ADVANCE(365);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'I') ADVANCE(368);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'L') ADVANCE(364);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'R') ADVANCE(370);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'T') ADVANCE(363);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == 'T') ADVANCE(366);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(332);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == 'B') ADVANCE(303);
      if (lookahead == 'D') ADVANCE(301);
      if (lookahead == 'I') ADVANCE(302);
      if (lookahead == 'P') ADVANCE(300);
      if (lookahead == 'S') ADVANCE(299);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(290);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(327);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(327);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(318);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(403);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '>') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead == 's') ADVANCE(397);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(455);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(399);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(399);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(391);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'B') ADVANCE(436);
      if (lookahead == 'D') ADVANCE(420);
      if (lookahead == 'I') ADVANCE(429);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'S') ADVANCE(407);
      if (lookahead == '{') ADVANCE(419);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(430);
      if (lookahead == 'U') ADVANCE(431);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(414);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'F') ADVANCE(413);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'H') ADVANCE(408);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(406);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(392);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(410);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(411);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(391);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(402);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ']') ADVANCE(455);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(421);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'k') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(394);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(432);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'w') ADVANCE(428);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(445);
      if (lookahead == '}') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(445);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '|') ADVANCE(446);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '}') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(454);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ']' ||
          lookahead == '{') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(415);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(458);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ']') ADVANCE(22);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(240);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(241);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(240);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(241);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 'p') ADVANCE(462);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(241);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(241);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(241);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(241);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(477);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(475);
      if (lookahead == '>') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(518);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(518);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(524);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(473);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(474);
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
    case 476:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(467);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'B') ADVANCE(508);
      if (lookahead == 'D') ADVANCE(494);
      if (lookahead == 'I') ADVANCE(503);
      if (lookahead == 'P') ADVANCE(490);
      if (lookahead == 'S') ADVANCE(481);
      if (lookahead == '{') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(504);
      if (lookahead == 'U') ADVANCE(505);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(487);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(487);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(468);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(476);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ']') ADVANCE(524);
      if (lookahead == '{') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(510);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(514);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(512);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(502);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(516);
      if (lookahead == '}') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(516);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ']' ||
          lookahead == '{') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(489);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '>') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(585);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(586);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(590);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(594);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(540);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(540);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(535);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'B') ADVANCE(576);
      if (lookahead == 'D') ADVANCE(562);
      if (lookahead == 'I') ADVANCE(571);
      if (lookahead == 'P') ADVANCE(558);
      if (lookahead == 'S') ADVANCE(548);
      if (lookahead == '{') ADVANCE(561);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(593);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(572);
      if (lookahead == 'U') ADVANCE(573);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(555);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'F') ADVANCE(556);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'H') ADVANCE(549);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(547);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(554);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(534);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(551);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(552);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(543);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(536);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ']') ADVANCE(594);
      if (lookahead == '{') ADVANCE(594);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(567);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(563);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'h') ADVANCE(560);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'k') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(537);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(589);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(565);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 's') ADVANCE(564);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(574);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'w') ADVANCE(570);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '{') ADVANCE(583);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '|') ADVANCE(584);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(593);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(593);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(461);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(460);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(325);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(593);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(593);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(594);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 31},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 31},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 31},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 10},
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
  [97] = {.lex_state = 31},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 16},
  [101] = {.lex_state = 28},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 31},
  [106] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__word_common_token1] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [aux_sym__word_common_token4] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_keycode_token1] = ACTIONS(1),
    [aux_sym_keycode_token2] = ACTIONS(1),
    [aux_sym_keycode_token3] = ACTIONS(1),
    [aux_sym_keycode_token4] = ACTIONS(1),
    [aux_sym_keycode_token5] = ACTIONS(1),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(1),
    [aux_sym_keycode_token6] = ACTIONS(1),
    [aux_sym_keycode_token7] = ACTIONS(1),
    [sym_optional] = ACTIONS(1),
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
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(23),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LF2] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [aux_sym_h1_token1] = ACTIONS(33),
    [aux_sym_h2_token1] = ACTIONS(35),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
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
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(23),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LF2] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [aux_sym_h1_token1] = ACTIONS(33),
    [aux_sym_h2_token1] = ACTIONS(35),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
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
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(23),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [aux_sym_h1_token1] = ACTIONS(33),
    [aux_sym_h2_token1] = ACTIONS(35),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
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
    [ts_builtin_sym_end] = ACTIONS(45),
    [aux_sym_word_noli_token1] = ACTIONS(47),
    [aux_sym_word_noli_token2] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [aux_sym__word_common_token3] = ACTIONS(56),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(56),
    [aux_sym__word_common_token4] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(56),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(56),
    [aux_sym_keycode_token1] = ACTIONS(68),
    [aux_sym_keycode_token2] = ACTIONS(68),
    [aux_sym_keycode_token3] = ACTIONS(68),
    [aux_sym_keycode_token4] = ACTIONS(68),
    [aux_sym_keycode_token5] = ACTIONS(71),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(71),
    [aux_sym_keycode_token6] = ACTIONS(68),
    [aux_sym_keycode_token7] = ACTIONS(68),
    [sym_optional] = ACTIONS(74),
    [aux_sym_uppercase_name_token1] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(80),
    [aux_sym_line_li_token1] = ACTIONS(83),
    [aux_sym_h1_token1] = ACTIONS(86),
    [aux_sym_h2_token1] = ACTIONS(89),
    [sym_url_word] = ACTIONS(92),
    [anon_sym_BQUOTE] = ACTIONS(95),
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
    [ts_builtin_sym_end] = ACTIONS(98),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(23),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [aux_sym_h1_token1] = ACTIONS(33),
    [aux_sym_h2_token1] = ACTIONS(35),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
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
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(23),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_LF2] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [aux_sym_h1_token1] = ACTIONS(33),
    [aux_sym_h2_token1] = ACTIONS(35),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
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
    [aux_sym_word_noli_token1] = ACTIONS(102),
    [aux_sym_word_noli_token2] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [aux_sym__word_common_token3] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(111),
    [aux_sym__word_common_token4] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(111),
    [aux_sym_keycode_token1] = ACTIONS(123),
    [aux_sym_keycode_token2] = ACTIONS(123),
    [aux_sym_keycode_token3] = ACTIONS(123),
    [aux_sym_keycode_token4] = ACTIONS(123),
    [aux_sym_keycode_token5] = ACTIONS(126),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(126),
    [aux_sym_keycode_token6] = ACTIONS(123),
    [aux_sym_keycode_token7] = ACTIONS(123),
    [sym_optional] = ACTIONS(129),
    [aux_sym_uppercase_name_token1] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(135),
    [anon_sym_LF2] = ACTIONS(137),
    [aux_sym_line_li_token1] = ACTIONS(137),
    [aux_sym_h1_token1] = ACTIONS(139),
    [aux_sym_h2_token1] = ACTIONS(142),
    [sym_url_word] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(148),
  },
  [8] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_line_li_repeat2] = STATE(8),
    [aux_sym_word_noli_token1] = ACTIONS(151),
    [aux_sym_word_noli_token2] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [aux_sym__word_common_token3] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(154),
    [aux_sym__word_common_token4] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_TILDE] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(154),
    [aux_sym_keycode_token1] = ACTIONS(169),
    [aux_sym_keycode_token2] = ACTIONS(169),
    [aux_sym_keycode_token3] = ACTIONS(169),
    [aux_sym_keycode_token4] = ACTIONS(169),
    [aux_sym_keycode_token5] = ACTIONS(172),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(172),
    [aux_sym_keycode_token6] = ACTIONS(169),
    [aux_sym_keycode_token7] = ACTIONS(169),
    [sym_optional] = ACTIONS(175),
    [aux_sym_uppercase_name_token1] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LF2] = ACTIONS(183),
    [aux_sym_line_li_token1] = ACTIONS(183),
    [sym_url_word] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(188),
  },
  [9] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_line_li_repeat2] = STATE(8),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(191),
    [aux_sym_uppercase_name_token1] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_LF2] = ACTIONS(197),
    [aux_sym_line_li_token1] = ACTIONS(197),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [10] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_line_li_repeat2] = STATE(8),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(191),
    [aux_sym_uppercase_name_token1] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LF2] = ACTIONS(201),
    [aux_sym_line_li_token1] = ACTIONS(201),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [11] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_line_li_repeat2] = STATE(8),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(191),
    [aux_sym_uppercase_name_token1] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_LF2] = ACTIONS(205),
    [aux_sym_line_li_token1] = ACTIONS(205),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [12] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_line_li_repeat2] = STATE(8),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(191),
    [aux_sym_uppercase_name_token1] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LF2] = ACTIONS(209),
    [aux_sym_line_li_token1] = ACTIONS(209),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [13] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_line_li_repeat2] = STATE(9),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(191),
    [aux_sym_uppercase_name_token1] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_LF2] = ACTIONS(213),
    [aux_sym_line_li_token1] = ACTIONS(213),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [14] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_line_li_repeat2] = STATE(10),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(191),
    [aux_sym_uppercase_name_token1] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_LF2] = ACTIONS(217),
    [aux_sym_line_li_token1] = ACTIONS(217),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [15] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_line_li_repeat2] = STATE(11),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(191),
    [aux_sym_uppercase_name_token1] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_LF2] = ACTIONS(221),
    [aux_sym_line_li_token1] = ACTIONS(221),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [16] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(87),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(65),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_line_li_repeat2] = STATE(12),
    [aux_sym_word_noli_token1] = ACTIONS(5),
    [aux_sym_word_noli_token2] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym__word_common_token3] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(11),
    [aux_sym__word_common_token4] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [aux_sym_keycode_token1] = ACTIONS(19),
    [aux_sym_keycode_token2] = ACTIONS(19),
    [aux_sym_keycode_token3] = ACTIONS(19),
    [aux_sym_keycode_token4] = ACTIONS(19),
    [aux_sym_keycode_token5] = ACTIONS(21),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(21),
    [aux_sym_keycode_token6] = ACTIONS(19),
    [aux_sym_keycode_token7] = ACTIONS(19),
    [sym_optional] = ACTIONS(191),
    [aux_sym_uppercase_name_token1] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LF2] = ACTIONS(225),
    [aux_sym_line_li_token1] = ACTIONS(225),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(231), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      sym_optional,
    ACTIONS(235), 1,
      anon_sym_LF2,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(64), 1,
      sym_codeblock,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 6,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
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
  [73] = 18,
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
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym_optional,
    ACTIONS(237), 1,
      anon_sym_TILDE,
    ACTIONS(239), 1,
      anon_sym_LF2,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(53), 1,
      sym_codeblock,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 5,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [148] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(231), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      sym_optional,
    ACTIONS(241), 1,
      anon_sym_LF2,
    STATE(13), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 6,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
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
  [221] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(231), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      sym_optional,
    ACTIONS(243), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(63), 1,
      sym_codeblock,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 6,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
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
  [294] = 18,
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
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym_optional,
    ACTIONS(245), 1,
      anon_sym_TILDE,
    ACTIONS(247), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(52), 1,
      sym_codeblock,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 5,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
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
  [369] = 17,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(231), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      sym_optional,
    ACTIONS(249), 1,
      anon_sym_LF2,
    STATE(15), 1,
      sym_codeblock,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 6,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_COMMA,
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
  [442] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym_optional,
    ACTIONS(251), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
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
  [510] = 15,
    ACTIONS(256), 1,
      anon_sym_STAR,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      sym_optional,
    ACTIONS(280), 1,
      anon_sym_LF2,
    ACTIONS(282), 1,
      sym_url_word,
    ACTIONS(285), 1,
      anon_sym_BQUOTE,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(253), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
    ACTIONS(271), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(274), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(262), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
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
  [578] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym_optional,
    ACTIONS(288), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
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
  [646] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym_optional,
    ACTIONS(290), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
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
  [714] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym_optional,
    ACTIONS(292), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
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
  [782] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym_optional,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
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
  [847] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym_optional,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
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
  [912] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym_optional,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
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
  [977] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_url_word,
    ACTIONS(39), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      sym_optional,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(85), 1,
      sym__word_common,
    ACTIONS(227), 2,
      aux_sym_word_token1,
      anon_sym_LBRACK,
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
    ACTIONS(229), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
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
  [1042] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(296), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(294), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1087] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(32), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(300), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(298), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1132] = 5,
    ACTIONS(29), 1,
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
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(302), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1177] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(308), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(306), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1222] = 6,
    ACTIONS(312), 1,
      anon_sym_LF2,
    ACTIONS(315), 1,
      aux_sym_line_code_token1,
    STATE(36), 1,
      aux_sym_codeblock_repeat1,
    STATE(49), 1,
      sym_line_code,
    ACTIONS(318), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(310), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1269] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(296), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(294), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1314] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(34), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(322), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(320), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1359] = 6,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(328), 1,
      aux_sym_line_li_token1,
    STATE(35), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(326), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(324), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1406] = 5,
    ACTIONS(29), 1,
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
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(320), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1451] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(37), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(300), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(298), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1496] = 6,
    ACTIONS(332), 1,
      anon_sym_LF2,
    ACTIONS(334), 1,
      aux_sym_line_code_token1,
    STATE(36), 1,
      aux_sym_codeblock_repeat1,
    STATE(49), 1,
      sym_line_code,
    ACTIONS(336), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(330), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1543] = 5,
    ACTIONS(342), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(340), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(338), 17,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1588] = 6,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(328), 1,
      aux_sym_line_li_token1,
    STATE(40), 1,
      aux_sym_help_file_repeat1,
    STATE(50), 1,
      sym__blank,
    ACTIONS(347), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(345), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1635] = 5,
    ACTIONS(349), 1,
      anon_sym_LF2,
    ACTIONS(352), 1,
      aux_sym_line_code_token1,
    STATE(45), 1,
      aux_sym_codeblock_repeat1,
    STATE(61), 1,
      sym_line_code,
    ACTIONS(310), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1678] = 5,
    ACTIONS(355), 1,
      anon_sym_LF2,
    ACTIONS(357), 1,
      aux_sym_line_code_token1,
    STATE(45), 1,
      aux_sym_codeblock_repeat1,
    STATE(61), 1,
      sym_line_code,
    ACTIONS(330), 28,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1721] = 2,
    ACTIONS(361), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(359), 18,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1758] = 2,
    ACTIONS(365), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(363), 29,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1795] = 2,
    ACTIONS(369), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(367), 29,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1832] = 2,
    ACTIONS(373), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(371), 18,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1869] = 2,
    ACTIONS(375), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(377), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1905] = 2,
    ACTIONS(379), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(381), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1941] = 2,
    ACTIONS(383), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(385), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1977] = 2,
    ACTIONS(387), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(389), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2013] = 2,
    ACTIONS(391), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(393), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2049] = 2,
    ACTIONS(395), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(397), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2085] = 2,
    ACTIONS(399), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(401), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2121] = 2,
    ACTIONS(403), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(405), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2157] = 2,
    ACTIONS(407), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(409), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2193] = 2,
    ACTIONS(411), 14,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(413), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2229] = 2,
    ACTIONS(369), 1,
      anon_sym_LF2,
    ACTIONS(367), 29,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2264] = 2,
    ACTIONS(365), 1,
      anon_sym_LF2,
    ACTIONS(363), 29,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
      aux_sym_line_li_token1,
      aux_sym_line_code_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2299] = 2,
    ACTIONS(379), 13,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(381), 16,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2333] = 2,
    ACTIONS(383), 13,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(385), 16,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2367] = 2,
    ACTIONS(415), 13,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(417), 16,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2401] = 4,
    ACTIONS(425), 1,
      aux_sym_optionlink_token1,
    ACTIONS(423), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(421), 11,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
    ACTIONS(419), 14,
      aux_sym_word_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      sym_url_word,
      anon_sym_BQUOTE,
  [2438] = 4,
    ACTIONS(431), 1,
      aux_sym_uppercase_name_token2,
    STATE(67), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(427), 11,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(429), 14,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [2474] = 4,
    ACTIONS(438), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(434), 11,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(436), 14,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [2510] = 3,
    ACTIONS(440), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(419), 8,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(421), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      sym_url_word,
      anon_sym_BQUOTE,
  [2544] = 4,
    ACTIONS(438), 1,
      aux_sym_uppercase_name_token2,
    STATE(67), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(442), 11,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(444), 14,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [2580] = 3,
    ACTIONS(446), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(419), 8,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(421), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      sym_url_word,
      anon_sym_BQUOTE,
  [2614] = 5,
    ACTIONS(438), 1,
      aux_sym_uppercase_name_token2,
    STATE(67), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(448), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(442), 11,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(444), 12,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      sym_url_word,
      anon_sym_BQUOTE,
  [2652] = 5,
    ACTIONS(438), 1,
      aux_sym_uppercase_name_token2,
    STATE(72), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(450), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(434), 11,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(436), 12,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      sym_url_word,
      anon_sym_BQUOTE,
  [2690] = 3,
    ACTIONS(452), 1,
      aux_sym_taglink_token1,
    ACTIONS(421), 2,
      aux_sym__word_common_token3,
      anon_sym_LF2,
    ACTIONS(419), 23,
      aux_sym_word_token1,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      sym_url_word,
      anon_sym_BQUOTE,
  [2723] = 3,
    ACTIONS(454), 1,
      anon_sym_LF,
    ACTIONS(419), 8,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(421), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      sym_url_word,
      anon_sym_BQUOTE,
  [2756] = 3,
    ACTIONS(460), 1,
      anon_sym_SQUOTE2,
    ACTIONS(456), 8,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(458), 17,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [2789] = 3,
    ACTIONS(462), 1,
      aux_sym_tag_token1,
    ACTIONS(421), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(419), 23,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      sym_url_word,
      anon_sym_BQUOTE,
  [2822] = 3,
    ACTIONS(464), 1,
      anon_sym_LF,
    ACTIONS(419), 8,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(421), 17,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      sym_url_word,
      anon_sym_BQUOTE,
  [2855] = 3,
    ACTIONS(466), 1,
      aux_sym_argument_token1,
    ACTIONS(421), 3,
      anon_sym_LBRACE_RBRACE,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
    ACTIONS(419), 22,
      aux_sym_word_token1,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      sym_url_word,
      anon_sym_BQUOTE,
  [2888] = 2,
    ACTIONS(468), 12,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token2,
    ACTIONS(470), 14,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [2919] = 2,
    ACTIONS(472), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(474), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [2949] = 2,
    ACTIONS(476), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(478), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [2979] = 2,
    ACTIONS(480), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(482), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3009] = 2,
    ACTIONS(484), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(486), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3039] = 2,
    ACTIONS(488), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(490), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3069] = 2,
    ACTIONS(492), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(494), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3099] = 2,
    ACTIONS(496), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(498), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3129] = 2,
    ACTIONS(500), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(502), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3159] = 2,
    ACTIONS(504), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(506), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3189] = 2,
    ACTIONS(508), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(510), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3219] = 2,
    ACTIONS(512), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(514), 18,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_optional,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3249] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(516), 1,
      anon_sym_LT,
    STATE(41), 1,
      sym__blank,
    STATE(94), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3266] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(518), 1,
      anon_sym_LT,
    STATE(38), 1,
      sym__blank,
    STATE(94), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3283] = 4,
    ACTIONS(520), 1,
      anon_sym_LT,
    ACTIONS(523), 1,
      anon_sym_LF2,
    ACTIONS(525), 1,
      aux_sym_line_li_token1,
    STATE(94), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3297] = 4,
    ACTIONS(332), 1,
      anon_sym_LF2,
    ACTIONS(334), 1,
      aux_sym_line_code_token1,
    STATE(42), 1,
      aux_sym_codeblock_repeat1,
    STATE(49), 1,
      sym_line_code,
  [3310] = 4,
    ACTIONS(355), 1,
      anon_sym_LF2,
    ACTIONS(357), 1,
      aux_sym_line_code_token1,
    STATE(46), 1,
      aux_sym_codeblock_repeat1,
    STATE(61), 1,
      sym_line_code,
  [3323] = 3,
    ACTIONS(528), 1,
      anon_sym_STAR,
    ACTIONS(530), 1,
      anon_sym_LF2,
    STATE(25), 1,
      sym_tag,
  [3333] = 1,
    ACTIONS(532), 1,
      anon_sym_PIPE2,
  [3337] = 1,
    ACTIONS(534), 1,
      anon_sym_STAR2,
  [3341] = 1,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
  [3345] = 1,
    ACTIONS(538), 1,
      aux_sym_codespan_token1,
  [3349] = 1,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
  [3353] = 1,
    ACTIONS(542), 1,
      anon_sym_SQUOTE2,
  [3357] = 1,
    ACTIONS(462), 1,
      aux_sym_tag_token1,
  [3361] = 1,
    ACTIONS(328), 1,
      aux_sym_line_li_token1,
  [3365] = 1,
    ACTIONS(544), 1,
      anon_sym_BQUOTE2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 73,
  [SMALL_STATE(19)] = 148,
  [SMALL_STATE(20)] = 221,
  [SMALL_STATE(21)] = 294,
  [SMALL_STATE(22)] = 369,
  [SMALL_STATE(23)] = 442,
  [SMALL_STATE(24)] = 510,
  [SMALL_STATE(25)] = 578,
  [SMALL_STATE(26)] = 646,
  [SMALL_STATE(27)] = 714,
  [SMALL_STATE(28)] = 782,
  [SMALL_STATE(29)] = 847,
  [SMALL_STATE(30)] = 912,
  [SMALL_STATE(31)] = 977,
  [SMALL_STATE(32)] = 1042,
  [SMALL_STATE(33)] = 1087,
  [SMALL_STATE(34)] = 1132,
  [SMALL_STATE(35)] = 1177,
  [SMALL_STATE(36)] = 1222,
  [SMALL_STATE(37)] = 1269,
  [SMALL_STATE(38)] = 1314,
  [SMALL_STATE(39)] = 1359,
  [SMALL_STATE(40)] = 1406,
  [SMALL_STATE(41)] = 1451,
  [SMALL_STATE(42)] = 1496,
  [SMALL_STATE(43)] = 1543,
  [SMALL_STATE(44)] = 1588,
  [SMALL_STATE(45)] = 1635,
  [SMALL_STATE(46)] = 1678,
  [SMALL_STATE(47)] = 1721,
  [SMALL_STATE(48)] = 1758,
  [SMALL_STATE(49)] = 1795,
  [SMALL_STATE(50)] = 1832,
  [SMALL_STATE(51)] = 1869,
  [SMALL_STATE(52)] = 1905,
  [SMALL_STATE(53)] = 1941,
  [SMALL_STATE(54)] = 1977,
  [SMALL_STATE(55)] = 2013,
  [SMALL_STATE(56)] = 2049,
  [SMALL_STATE(57)] = 2085,
  [SMALL_STATE(58)] = 2121,
  [SMALL_STATE(59)] = 2157,
  [SMALL_STATE(60)] = 2193,
  [SMALL_STATE(61)] = 2229,
  [SMALL_STATE(62)] = 2264,
  [SMALL_STATE(63)] = 2299,
  [SMALL_STATE(64)] = 2333,
  [SMALL_STATE(65)] = 2367,
  [SMALL_STATE(66)] = 2401,
  [SMALL_STATE(67)] = 2438,
  [SMALL_STATE(68)] = 2474,
  [SMALL_STATE(69)] = 2510,
  [SMALL_STATE(70)] = 2544,
  [SMALL_STATE(71)] = 2580,
  [SMALL_STATE(72)] = 2614,
  [SMALL_STATE(73)] = 2652,
  [SMALL_STATE(74)] = 2690,
  [SMALL_STATE(75)] = 2723,
  [SMALL_STATE(76)] = 2756,
  [SMALL_STATE(77)] = 2789,
  [SMALL_STATE(78)] = 2822,
  [SMALL_STATE(79)] = 2855,
  [SMALL_STATE(80)] = 2888,
  [SMALL_STATE(81)] = 2919,
  [SMALL_STATE(82)] = 2949,
  [SMALL_STATE(83)] = 2979,
  [SMALL_STATE(84)] = 3009,
  [SMALL_STATE(85)] = 3039,
  [SMALL_STATE(86)] = 3069,
  [SMALL_STATE(87)] = 3099,
  [SMALL_STATE(88)] = 3129,
  [SMALL_STATE(89)] = 3159,
  [SMALL_STATE(90)] = 3189,
  [SMALL_STATE(91)] = 3219,
  [SMALL_STATE(92)] = 3249,
  [SMALL_STATE(93)] = 3266,
  [SMALL_STATE(94)] = 3283,
  [SMALL_STATE(95)] = 3297,
  [SMALL_STATE(96)] = 3310,
  [SMALL_STATE(97)] = 3323,
  [SMALL_STATE(98)] = 3333,
  [SMALL_STATE(99)] = 3337,
  [SMALL_STATE(100)] = 3341,
  [SMALL_STATE(101)] = 3345,
  [SMALL_STATE(102)] = 3349,
  [SMALL_STATE(103)] = 3353,
  [SMALL_STATE(104)] = 3357,
  [SMALL_STATE(105)] = 3361,
  [SMALL_STATE(106)] = 3365,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, .production_id = 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(87),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(77),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(87),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(74),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(79),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(71),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(18),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(73),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(105),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(29),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(28),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(83),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(101),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(79),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(83),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(101),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(87),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(87),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(77),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(66),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(74),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(79),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(88),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(88),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(17),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(68),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(83),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(101),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(85),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(77),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(66),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(85),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(74),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(79),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(88),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(88),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(84),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(83),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(101),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 14),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 14),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 8),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 8),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 20),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 20),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 19),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 19),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(48),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(48),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 13),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 13),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3, .production_id = 10),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 10),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(47),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(62),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(62),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 6),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, .production_id = 6),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, .production_id = 6),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 4, .production_id = 18),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 4, .production_id = 18),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 6),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 6),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 6),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 6),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(80),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 9),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 9),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 9),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 9),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(105),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(30),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [540] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
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
