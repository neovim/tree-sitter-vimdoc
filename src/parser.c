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
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 1
#define TOKEN_COUNT 55
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
  anon_sym_Note_COLON = 19,
  anon_sym_NOTE_COLON = 20,
  anon_sym_Notes_COLON = 21,
  anon_sym_Warning_COLON = 22,
  anon_sym_WARNING_COLON = 23,
  anon_sym_Deprecated = 24,
  anon_sym_DEPRECATED_COLON = 25,
  aux_sym_keycode_token1 = 26,
  aux_sym_keycode_token2 = 27,
  aux_sym_keycode_token3 = 28,
  aux_sym_keycode_token4 = 29,
  aux_sym_keycode_token5 = 30,
  anon_sym_CTRL_DASH_LBRACEchar_RBRACE = 31,
  aux_sym_keycode_token6 = 32,
  aux_sym_keycode_token7 = 33,
  aux_sym_uppercase_name_token1 = 34,
  aux_sym_uppercase_name_token2 = 35,
  anon_sym_LT = 36,
  aux_sym_codeblock_token1 = 37,
  anon_sym_LF = 38,
  anon_sym_LF2 = 39,
  aux_sym_line_li_token1 = 40,
  aux_sym_line_code_token1 = 41,
  aux_sym_h1_token1 = 42,
  aux_sym_h2_token1 = 43,
  aux_sym_tag_token1 = 44,
  anon_sym_STAR2 = 45,
  sym_url_word = 46,
  aux_sym_optionlink_token1 = 47,
  aux_sym_taglink_token1 = 48,
  anon_sym_PIPE2 = 49,
  anon_sym_BQUOTE = 50,
  aux_sym_codespan_token1 = 51,
  anon_sym_BQUOTE2 = 52,
  aux_sym_argument_token1 = 53,
  anon_sym_RBRACE = 54,
  sym_help_file = 55,
  sym__atom = 56,
  sym_word = 57,
  sym__atom_noli = 58,
  sym_word_noli = 59,
  sym__atom_common = 60,
  sym__word_common = 61,
  sym_note = 62,
  sym_keycode = 63,
  sym_uppercase_name = 64,
  sym__uppercase_words = 65,
  sym_block = 66,
  sym_codeblock = 67,
  sym__blank = 68,
  sym_line = 69,
  sym_line_li = 70,
  sym_line_code = 71,
  sym__line_noli = 72,
  sym_column_heading = 73,
  sym_h1 = 74,
  sym_h2 = 75,
  sym_h3 = 76,
  sym_tag = 77,
  sym_url = 78,
  sym_optionlink = 79,
  sym_taglink = 80,
  sym_codespan = 81,
  sym_argument = 82,
  aux_sym_help_file_repeat1 = 83,
  aux_sym_help_file_repeat2 = 84,
  aux_sym_uppercase_name_repeat1 = 85,
  aux_sym_block_repeat1 = 86,
  aux_sym_block_repeat2 = 87,
  aux_sym_codeblock_repeat1 = 88,
  aux_sym_line_li_repeat1 = 89,
  aux_sym_line_li_repeat2 = 90,
  alias_sym_code = 91,
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
  [anon_sym_Note_COLON] = "Note:",
  [anon_sym_NOTE_COLON] = "NOTE:",
  [anon_sym_Notes_COLON] = "Notes:",
  [anon_sym_Warning_COLON] = "Warning:",
  [anon_sym_WARNING_COLON] = "WARNING:",
  [anon_sym_Deprecated] = "Deprecated",
  [anon_sym_DEPRECATED_COLON] = "DEPRECATED:",
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
  [anon_sym_RBRACE] = "}",
  [sym_help_file] = "help_file",
  [sym__atom] = "_atom",
  [sym_word] = "word",
  [sym__atom_noli] = "_atom_noli",
  [sym_word_noli] = "word",
  [sym__atom_common] = "_atom_common",
  [sym__word_common] = "_word_common",
  [sym_note] = "note",
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
  [anon_sym_Note_COLON] = anon_sym_Note_COLON,
  [anon_sym_NOTE_COLON] = anon_sym_NOTE_COLON,
  [anon_sym_Notes_COLON] = anon_sym_Notes_COLON,
  [anon_sym_Warning_COLON] = anon_sym_Warning_COLON,
  [anon_sym_WARNING_COLON] = anon_sym_WARNING_COLON,
  [anon_sym_Deprecated] = anon_sym_Deprecated,
  [anon_sym_DEPRECATED_COLON] = anon_sym_DEPRECATED_COLON,
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
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_help_file] = sym_help_file,
  [sym__atom] = sym__atom,
  [sym_word] = sym_word,
  [sym__atom_noli] = sym__atom_noli,
  [sym_word_noli] = sym_word,
  [sym__atom_common] = sym__atom_common,
  [sym__word_common] = sym__word_common,
  [sym_note] = sym_note,
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
  [anon_sym_Note_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Notes_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Warning_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARNING_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Deprecated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEPRECATED_COLON] = {
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
  [sym_note] = {
    .visible = true,
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
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 34,
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
  [64] = 51,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 69,
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
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(577);
      if (lookahead == '\'') ADVANCE(680);
      if (lookahead == '(') ADVANCE(681);
      if (lookahead == '*') ADVANCE(682);
      if (lookahead == ',') ADVANCE(681);
      if (lookahead == '<') ADVANCE(677);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == 'A') ADVANCE(614);
      if (lookahead == 'C') ADVANCE(623);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'M') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(618);
      if (lookahead == 'W') ADVANCE(598);
      if (lookahead == '[') ADVANCE(681);
      if (lookahead == '`') ADVANCE(680);
      if (lookahead == 'h') ADVANCE(666);
      if (lookahead == '{') ADVANCE(671);
      if (lookahead == '|') ADVANCE(680);
      if (lookahead == '}') ADVANCE(680);
      if (lookahead == '~') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(679);
      if (lookahead != 0) ADVANCE(680);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(577);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(67);
      if (lookahead == 'M') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(60);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(577);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(67);
      if (lookahead == 'M') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(60);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(680);
      if (lookahead == '(') ADVANCE(681);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(681);
      if (lookahead == '<') ADVANCE(677);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == 'A') ADVANCE(614);
      if (lookahead == 'C') ADVANCE(623);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'M') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(618);
      if (lookahead == 'W') ADVANCE(598);
      if (lookahead == '[') ADVANCE(681);
      if (lookahead == '`') ADVANCE(680);
      if (lookahead == 'h') ADVANCE(668);
      if (lookahead == '{') ADVANCE(671);
      if (lookahead == '|') ADVANCE(673);
      if (lookahead == '~') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(680);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(67);
      if (lookahead == 'M') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(60);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(282);
      if (lookahead == 'D') ADVANCE(264);
      if (lookahead == 'M') ADVANCE(267);
      if (lookahead == 'N') ADVANCE(277);
      if (lookahead == 'W') ADVANCE(257);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(320);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(24);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '<') ADVANCE(575);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(226);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(225);
      if (lookahead == 'N') ADVANCE(227);
      if (lookahead == 'W') ADVANCE(223);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(320);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == 8226) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '<') ADVANCE(575);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(226);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(225);
      if (lookahead == 'N') ADVANCE(227);
      if (lookahead == 'W') ADVANCE(223);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(320);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(24);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '<') ADVANCE(575);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(226);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(225);
      if (lookahead == 'N') ADVANCE(227);
      if (lookahead == 'W') ADVANCE(223);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(320);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(24);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == '*') ADVANCE(346);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '<') ADVANCE(358);
      if (lookahead == '>') ADVANCE(416);
      if (lookahead == 'A') ADVANCE(353);
      if (lookahead == 'C') ADVANCE(355);
      if (lookahead == 'D') ADVANCE(351);
      if (lookahead == 'M') ADVANCE(352);
      if (lookahead == 'N') ADVANCE(354);
      if (lookahead == 'W') ADVANCE(350);
      if (lookahead == '[') ADVANCE(407);
      if (lookahead == '`') ADVANCE(788);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead == '{') ADVANCE(391);
      if (lookahead == '|') ADVANCE(387);
      if (lookahead == '~') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(38);
      if (lookahead == 'M') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'W') ADVANCE(37);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(348);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '*') ADVANCE(344);
      if (lookahead == ',') ADVANCE(418);
      if (lookahead == '<') ADVANCE(218);
      if (lookahead == '>') ADVANCE(414);
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'C') ADVANCE(175);
      if (lookahead == 'D') ADVANCE(157);
      if (lookahead == 'M') ADVANCE(161);
      if (lookahead == 'N') ADVANCE(170);
      if (lookahead == 'W') ADVANCE(150);
      if (lookahead == '[') ADVANCE(406);
      if (lookahead == '`') ADVANCE(786);
      if (lookahead == 'h') ADVANCE(213);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead == '|') ADVANCE(385);
      if (lookahead == '~') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(67);
      if (lookahead == 'M') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(60);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(782);
      if (lookahead == '(') ADVANCE(783);
      if (lookahead == '*') ADVANCE(782);
      if (lookahead == ',') ADVANCE(783);
      if (lookahead == '<') ADVANCE(780);
      if (lookahead == '>') ADVANCE(782);
      if (lookahead == 'A') ADVANCE(721);
      if (lookahead == 'C') ADVANCE(730);
      if (lookahead == 'D') ADVANCE(711);
      if (lookahead == 'M') ADVANCE(715);
      if (lookahead == 'N') ADVANCE(725);
      if (lookahead == 'W') ADVANCE(705);
      if (lookahead == '[') ADVANCE(783);
      if (lookahead == '`') ADVANCE(782);
      if (lookahead == 'h') ADVANCE(772);
      if (lookahead == '{') ADVANCE(775);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(782);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(782);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == '*') ADVANCE(345);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '<') ADVANCE(888);
      if (lookahead == '>') ADVANCE(415);
      if (lookahead == 'A') ADVANCE(825);
      if (lookahead == 'C') ADVANCE(834);
      if (lookahead == 'D') ADVANCE(815);
      if (lookahead == 'M') ADVANCE(819);
      if (lookahead == 'N') ADVANCE(829);
      if (lookahead == 'W') ADVANCE(808);
      if (lookahead == '[') ADVANCE(408);
      if (lookahead == '`') ADVANCE(787);
      if (lookahead == 'h') ADVANCE(877);
      if (lookahead == '{') ADVANCE(392);
      if (lookahead == '|') ADVANCE(388);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '~') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(890);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '*') ADVANCE(682);
      if (lookahead == '<') ADVANCE(574);
      if (lookahead == '`') ADVANCE(790);
      if (lookahead == '|') ADVANCE(784);
      if (lookahead == '}') ADVANCE(892);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '>') ADVANCE(449);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(580);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(342);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(342);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(447);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(789);
      END_STATE();
    case 27:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(67);
      if (lookahead == 'M') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(60);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(384);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '<') ADVANCE(328);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(282);
      if (lookahead == 'D') ADVANCE(264);
      if (lookahead == 'M') ADVANCE(267);
      if (lookahead == 'N') ADVANCE(277);
      if (lookahead == 'W') ADVANCE(257);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(320);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(24);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(578);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == '*') ADVANCE(343);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '<') ADVANCE(575);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == '>') ADVANCE(413);
      if (lookahead == 'A') ADVANCE(226);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(224);
      if (lookahead == 'M') ADVANCE(225);
      if (lookahead == 'N') ADVANCE(227);
      if (lookahead == 'W') ADVANCE(223);
      if (lookahead == '[') ADVANCE(405);
      if (lookahead == '`') ADVANCE(785);
      if (lookahead == 'h') ADVANCE(320);
      if (lookahead == '{') ADVANCE(390);
      if (lookahead == '|') ADVANCE(386);
      if (lookahead == '~') ADVANCE(409);
      if (lookahead == 8226) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == 's') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == ':') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == 'p') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'A') ADVANCE(561);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'E') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'E') ADVANCE(564);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'L') ADVANCE(563);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'O') ADVANCE(565);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'T') ADVANCE(560);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '>') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(421);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(475);
      if (lookahead == 'D') ADVANCE(471);
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead == 'P') ADVANCE(467);
      if (lookahead == 'S') ADVANCE(465);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(450);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(111);
      if (lookahead == 'U') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'G') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(132);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(686);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(492);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(478);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(582);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ':') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ':') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ':') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '>') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'A') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'B') ADVANCE(456);
      if (lookahead == 'D') ADVANCE(454);
      if (lookahead == 'I') ADVANCE(455);
      if (lookahead == 'P') ADVANCE(452);
      if (lookahead == 'S') ADVANCE(451);
      if (lookahead == '{') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(458);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'C') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'D') ADVANCE(201);
      if (lookahead == 'U') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'D') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'F') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'G') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'I') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'I') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'L') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'L') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'O') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'P') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'R') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'R') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'g') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'g') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'h') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'k') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'p') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'w') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(684);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(219);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(494);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(489);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(480);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'A') ADVANCE(522);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'E') ADVANCE(520);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'E') ADVANCE(525);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'L') ADVANCE(524);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'O') ADVANCE(526);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'T') ADVANCE(521);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '>') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(421);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(279);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(476);
      if (lookahead == 'D') ADVANCE(472);
      if (lookahead == 'I') ADVANCE(474);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'S') ADVANCE(466);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(450);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(308);
      if (lookahead == 'U') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'G') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'N') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'O') ADVANCE(285);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'P') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'd') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(687);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(685);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(492);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(478);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(375);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(374);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'L') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'O') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'T') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(380);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(380);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(421);
      if (lookahead == 's') ADVANCE(361);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(427);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(430);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '>') ADVANCE(443);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'a') ADVANCE(378);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'c') ADVANCE(364);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'd') ADVANCE(439);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(360);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(365);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(366);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'g') ADVANCE(362);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'i') ADVANCE(373);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'n') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'n') ADVANCE(370);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'p') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'r') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'r') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 't') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 't') ADVANCE(369);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(687);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(686);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '|') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '|') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(383);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(383);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(881);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '{') ADVANCE(395);
      if (lookahead == '}') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(397);
      if (lookahead == '}') ADVANCE(393);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(397);
      if (lookahead == '}') ADVANCE(393);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(880);
      if (lookahead == '}') ADVANCE(393);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(890);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '{') ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '{') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(573);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(891);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(891);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(891);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '>') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'H') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'H') ADVANCE(554);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(74);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(271);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(573);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(573);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(573);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(573);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(533);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(506);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(534);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(535);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'A') ADVANCE(527);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'A') ADVANCE(499);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'B') ADVANCE(532);
      if (lookahead == 'D') ADVANCE(530);
      if (lookahead == 'I') ADVANCE(531);
      if (lookahead == 'P') ADVANCE(529);
      if (lookahead == 'S') ADVANCE(514);
      if (lookahead == '{') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(450);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(450);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'C') ADVANCE(504);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'D') ADVANCE(503);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'E') ADVANCE(501);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'E') ADVANCE(507);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'E') ADVANCE(508);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'F') ADVANCE(528);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'G') ADVANCE(502);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'H') ADVANCE(515);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(512);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'I') ADVANCE(519);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'L') ADVANCE(498);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'N') ADVANCE(516);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'N') ADVANCE(513);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'P') ADVANCE(523);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'R') ADVANCE(517);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'R') ADVANCE(518);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'R') ADVANCE(510);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'T') ADVANCE(497);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'T') ADVANCE(505);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'T') ADVANCE(509);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'T') ADVANCE(511);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'T') ADVANCE(500);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(492);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(492);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(487);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(478);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(478);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == '-') ADVANCE(569);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == '-') ADVANCE(570);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == '-') ADVANCE(572);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'A') ADVANCE(566);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'A') ADVANCE(540);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'C') ADVANCE(545);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'D') ADVANCE(544);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'E') ADVANCE(542);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'E') ADVANCE(548);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'F') ADVANCE(567);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(543);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'I') ADVANCE(552);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'I') ADVANCE(558);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'L') ADVANCE(539);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(555);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(553);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'R') ADVANCE(556);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'R') ADVANCE(557);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'R') ADVANCE(550);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'T') ADVANCE(538);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'T') ADVANCE(546);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'T') ADVANCE(549);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'T') ADVANCE(551);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == 'T') ADVANCE(541);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(573);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(492);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(492);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(477);
      if (lookahead == 'B') ADVANCE(463);
      if (lookahead == 'D') ADVANCE(461);
      if (lookahead == 'I') ADVANCE(462);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'S') ADVANCE(459);
      if (lookahead == '{') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(450);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(450);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(487);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(487);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(478);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(478);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == ' ') ADVANCE(579);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(600);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(596);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(680);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(675);
      if (lookahead == 's') ADVANCE(591);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(675);
      if (lookahead == 's') ADVANCE(592);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(675);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(675);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(681);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(594);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(594);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(584);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(620);
      if (lookahead == 'a') ADVANCE(657);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(627);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'B') ADVANCE(661);
      if (lookahead == 'D') ADVANCE(637);
      if (lookahead == 'I') ADVANCE(651);
      if (lookahead == 'P') ADVANCE(629);
      if (lookahead == 'S') ADVANCE(611);
      if (lookahead == '{') ADVANCE(632);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'C') ADVANCE(599);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(588);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(652);
      if (lookahead == 'U') ADVANCE(653);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(588);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(601);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(602);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(625);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'F') ADVANCE(624);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'G') ADVANCE(588);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'H') ADVANCE(612);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(609);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(617);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(624);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(585);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'N') ADVANCE(613);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'N') ADVANCE(610);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'O') ADVANCE(626);
      if (lookahead == 'o') ADVANCE(664);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'P') ADVANCE(622);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(616);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(615);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(606);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(621);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(584);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(597);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(605);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(607);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(646);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(643);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(658);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(669);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(631);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'd') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(647);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(659);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(588);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(638);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'h') ADVANCE(630);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'i') ADVANCE(650);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'k') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'l') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(645);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(642);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'o') ADVANCE(670);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(589);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(660);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(590);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(649);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(674);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(663);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(636);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 's') ADVANCE(640);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(654);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(665);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(639);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'w') ADVANCE(648);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(672);
      if (lookahead == '}') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(672);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '|') ADVANCE(673);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '}') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(680);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(681);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(684);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(219);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ']') ADVANCE(21);
      if (lookahead != 0) ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(379);
      if (lookahead == 's') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(380);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(379);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(380);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 'p') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(380);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 't') ADVANCE(690);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(380);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(380);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(707);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(703);
      if (lookahead == '>') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(782);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(778);
      if (lookahead == 's') ADVANCE(699);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(778);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(783);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(701);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(701);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(727);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(734);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'B') ADVANCE(766);
      if (lookahead == 'D') ADVANCE(744);
      if (lookahead == 'I') ADVANCE(758);
      if (lookahead == 'P') ADVANCE(736);
      if (lookahead == 'S') ADVANCE(718);
      if (lookahead == '{') ADVANCE(739);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'C') ADVANCE(706);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(697);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(759);
      if (lookahead == 'U') ADVANCE(760);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(726);
      if (lookahead == 'e') ADVANCE(761);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(697);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(708);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(709);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(732);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(731);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'G') ADVANCE(697);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(719);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(716);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(724);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(731);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(694);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'N') ADVANCE(720);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'N') ADVANCE(717);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'O') ADVANCE(733);
      if (lookahead == 'o') ADVANCE(770);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'P') ADVANCE(729);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(723);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(722);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(713);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(728);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(693);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(704);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(764);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(751);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(737);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(740);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(767);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(697);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(745);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(738);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(752);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(749);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(768);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(774);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(765);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(756);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(777);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(743);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(748);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(769);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(747);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(742);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(746);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(755);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '}') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(778);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(779);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(695);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(782);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(380);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(807);
      if (lookahead == '>') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(882);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(811);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(883);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(887);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == 's') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(885);
      if (lookahead == 's') ADVANCE(799);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(885);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(429);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(435);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(432);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(891);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(805);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(805);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(831);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(838);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(794);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'B') ADVANCE(871);
      if (lookahead == 'D') ADVANCE(849);
      if (lookahead == 'I') ADVANCE(863);
      if (lookahead == 'P') ADVANCE(841);
      if (lookahead == 'S') ADVANCE(822);
      if (lookahead == '{') ADVANCE(844);
      if (lookahead == '}') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(890);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'C') ADVANCE(809);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(864);
      if (lookahead == 'U') ADVANCE(865);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(803);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(830);
      if (lookahead == 'e') ADVANCE(866);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(796);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(812);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(814);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(836);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'F') ADVANCE(839);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'G') ADVANCE(801);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'H') ADVANCE(823);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(820);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(828);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(835);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(793);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'N') ADVANCE(824);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'N') ADVANCE(821);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'O') ADVANCE(837);
      if (lookahead == 'o') ADVANCE(875);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'P') ADVANCE(833);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(827);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(826);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(817);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(832);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(792);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(810);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(816);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(818);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(795);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(855);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(869);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(856);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(842);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'd') ADVANCE(438);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(797);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(845);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(859);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(872);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(840);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(802);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(850);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'h') ADVANCE(843);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'k') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'l') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(873);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'o') ADVANCE(879);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(870);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(798);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(861);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(886);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(848);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(853);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(874);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 's') ADVANCE(852);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(847);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(867);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(876);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(851);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'w') ADVANCE(860);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '{') ADVANCE(880);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '|') ADVANCE(881);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(890);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(487);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(890);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(687);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(686);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(885);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(890);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(478);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(890);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(890);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_RBRACE);
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
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 9},
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
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 15},
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
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 16},
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
    [anon_sym_Note_COLON] = ACTIONS(1),
    [anon_sym_NOTE_COLON] = ACTIONS(1),
    [anon_sym_Notes_COLON] = ACTIONS(1),
    [anon_sym_Warning_COLON] = ACTIONS(1),
    [anon_sym_WARNING_COLON] = ACTIONS(1),
    [anon_sym_Deprecated] = ACTIONS(1),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(1),
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
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(101),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(98),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(60),
    [sym__blank] = STATE(46),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
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
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
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
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(98),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(60),
    [sym__blank] = STATE(46),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
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
    [aux_sym_block_repeat2] = STATE(94),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
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
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(98),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(60),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
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
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
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
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(98),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(60),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
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
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(45),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [aux_sym_h1_token1] = ACTIONS(33),
    [aux_sym_h2_token1] = ACTIONS(35),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [5] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(98),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(60),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
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
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym_word_noli_token1] = ACTIONS(49),
    [aux_sym_word_noli_token2] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym__word_common_token3] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(58),
    [aux_sym__word_common_token4] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_Note_COLON] = ACTIONS(70),
    [anon_sym_NOTE_COLON] = ACTIONS(70),
    [anon_sym_Notes_COLON] = ACTIONS(70),
    [anon_sym_Warning_COLON] = ACTIONS(70),
    [anon_sym_WARNING_COLON] = ACTIONS(70),
    [anon_sym_Deprecated] = ACTIONS(70),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(70),
    [aux_sym_keycode_token1] = ACTIONS(73),
    [aux_sym_keycode_token2] = ACTIONS(73),
    [aux_sym_keycode_token3] = ACTIONS(73),
    [aux_sym_keycode_token4] = ACTIONS(73),
    [aux_sym_keycode_token5] = ACTIONS(76),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(76),
    [aux_sym_keycode_token6] = ACTIONS(73),
    [aux_sym_keycode_token7] = ACTIONS(73),
    [aux_sym_uppercase_name_token1] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(82),
    [aux_sym_line_li_token1] = ACTIONS(85),
    [aux_sym_h1_token1] = ACTIONS(88),
    [aux_sym_h2_token1] = ACTIONS(91),
    [sym_url_word] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(97),
  },
  [6] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(98),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(60),
    [sym__blank] = STATE(39),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
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
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(98),
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
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_Note_COLON] = ACTIONS(123),
    [anon_sym_NOTE_COLON] = ACTIONS(123),
    [anon_sym_Notes_COLON] = ACTIONS(123),
    [anon_sym_Warning_COLON] = ACTIONS(123),
    [anon_sym_WARNING_COLON] = ACTIONS(123),
    [anon_sym_Deprecated] = ACTIONS(123),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(123),
    [aux_sym_keycode_token1] = ACTIONS(126),
    [aux_sym_keycode_token2] = ACTIONS(126),
    [aux_sym_keycode_token3] = ACTIONS(126),
    [aux_sym_keycode_token4] = ACTIONS(126),
    [aux_sym_keycode_token5] = ACTIONS(129),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(129),
    [aux_sym_keycode_token6] = ACTIONS(126),
    [aux_sym_keycode_token7] = ACTIONS(126),
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
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(17),
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
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_TILDE] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_Note_COLON] = ACTIONS(169),
    [anon_sym_NOTE_COLON] = ACTIONS(169),
    [anon_sym_Notes_COLON] = ACTIONS(169),
    [anon_sym_Warning_COLON] = ACTIONS(169),
    [anon_sym_WARNING_COLON] = ACTIONS(169),
    [anon_sym_Deprecated] = ACTIONS(169),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(169),
    [aux_sym_keycode_token1] = ACTIONS(172),
    [aux_sym_keycode_token2] = ACTIONS(172),
    [aux_sym_keycode_token3] = ACTIONS(172),
    [aux_sym_keycode_token4] = ACTIONS(172),
    [aux_sym_keycode_token5] = ACTIONS(175),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(175),
    [aux_sym_keycode_token6] = ACTIONS(172),
    [aux_sym_keycode_token7] = ACTIONS(172),
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
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(17),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_LF2] = ACTIONS(195),
    [aux_sym_line_li_token1] = ACTIONS(195),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [10] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(17),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_LF2] = ACTIONS(199),
    [aux_sym_line_li_token1] = ACTIONS(199),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [11] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(17),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LF2] = ACTIONS(203),
    [aux_sym_line_li_token1] = ACTIONS(203),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [12] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(17),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_LF2] = ACTIONS(207),
    [aux_sym_line_li_token1] = ACTIONS(207),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [13] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(17),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_LF2] = ACTIONS(211),
    [aux_sym_line_li_token1] = ACTIONS(211),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [14] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(17),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_LF2] = ACTIONS(215),
    [aux_sym_line_li_token1] = ACTIONS(215),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [15] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(17),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_LF2] = ACTIONS(219),
    [aux_sym_line_li_token1] = ACTIONS(219),
    [sym_url_word] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(39),
  },
  [16] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(88),
    [sym_note] = STATE(17),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_COMMA] = ACTIONS(11),
    [anon_sym_Note_COLON] = ACTIONS(19),
    [anon_sym_NOTE_COLON] = ACTIONS(19),
    [anon_sym_Notes_COLON] = ACTIONS(19),
    [anon_sym_Warning_COLON] = ACTIONS(19),
    [anon_sym_WARNING_COLON] = ACTIONS(19),
    [anon_sym_Deprecated] = ACTIONS(19),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(19),
    [aux_sym_keycode_token1] = ACTIONS(21),
    [aux_sym_keycode_token2] = ACTIONS(21),
    [aux_sym_keycode_token3] = ACTIONS(21),
    [aux_sym_keycode_token4] = ACTIONS(21),
    [aux_sym_keycode_token5] = ACTIONS(23),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(23),
    [aux_sym_keycode_token6] = ACTIONS(21),
    [aux_sym_keycode_token7] = ACTIONS(21),
    [aux_sym_uppercase_name_token1] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_LF2] = ACTIONS(223),
    [aux_sym_line_li_token1] = ACTIONS(223),
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    ACTIONS(229), 1,
      anon_sym_GT,
    ACTIONS(231), 1,
      anon_sym_LF2,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(63), 1,
      sym_codeblock,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [80] = 18,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    ACTIONS(233), 1,
      anon_sym_TILDE,
    ACTIONS(235), 1,
      anon_sym_LF2,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(52), 1,
      sym_codeblock,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(227), 6,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [162] = 17,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    ACTIONS(229), 1,
      anon_sym_GT,
    ACTIONS(237), 1,
      anon_sym_LF2,
    STATE(13), 1,
      sym_codeblock,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [242] = 17,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    ACTIONS(229), 1,
      anon_sym_GT,
    ACTIONS(239), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(64), 1,
      sym_codeblock,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [322] = 18,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    ACTIONS(241), 1,
      anon_sym_TILDE,
    ACTIONS(243), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(51), 1,
      sym_codeblock,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(227), 6,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [404] = 17,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    ACTIONS(229), 1,
      anon_sym_GT,
    ACTIONS(245), 1,
      anon_sym_LF2,
    STATE(15), 1,
      sym_codeblock,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [484] = 15,
    ACTIONS(247), 1,
      aux_sym_word_token1,
    ACTIONS(250), 1,
      anon_sym_STAR,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(259), 1,
      anon_sym_PIPE,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      anon_sym_LF2,
    ACTIONS(276), 1,
      sym_url_word,
    ACTIONS(279), 1,
      anon_sym_BQUOTE,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(268), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(271), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(265), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(256), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [559] = 15,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    ACTIONS(282), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [634] = 15,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    ACTIONS(284), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [709] = 15,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    ACTIONS(286), 1,
      anon_sym_LF2,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [784] = 15,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    ACTIONS(288), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [859] = 14,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [931] = 14,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1003] = 14,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1075] = 14,
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
    ACTIONS(225), 1,
      aux_sym_word_token1,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(81), 1,
      sym__word_common,
    ACTIONS(21), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(23), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(19), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(227), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(92), 11,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_tag,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1147] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(41), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(292), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(290), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1198] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(296), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(294), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1249] = 6,
    ACTIONS(300), 1,
      anon_sym_LF2,
    ACTIONS(302), 1,
      aux_sym_line_code_token1,
    STATE(44), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
    ACTIONS(304), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(298), 34,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
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
  [1302] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(292), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(290), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1353] = 6,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(310), 1,
      aux_sym_line_li_token1,
    STATE(42), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(308), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(306), 23,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1406] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(38), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(314), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(312), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1457] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(296), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(294), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1508] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(314), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(312), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1559] = 6,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(310), 1,
      aux_sym_line_li_token1,
    STATE(35), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(318), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(316), 23,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1612] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(322), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(320), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1663] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(326), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(324), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1714] = 5,
    ACTIONS(332), 1,
      anon_sym_LF2,
    STATE(43), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(330), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(328), 24,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1765] = 6,
    ACTIONS(337), 1,
      anon_sym_LF2,
    ACTIONS(340), 1,
      aux_sym_line_code_token1,
    STATE(44), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
    ACTIONS(343), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(335), 34,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
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
  [1818] = 2,
    ACTIONS(347), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(345), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1861] = 2,
    ACTIONS(351), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(349), 25,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1904] = 5,
    ACTIONS(353), 1,
      anon_sym_LF2,
    ACTIONS(356), 1,
      aux_sym_line_code_token1,
    STATE(47), 1,
      aux_sym_codeblock_repeat1,
    STATE(62), 1,
      sym_line_code,
    ACTIONS(335), 34,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
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
  [1953] = 2,
    ACTIONS(361), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(359), 35,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
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
  [1996] = 2,
    ACTIONS(365), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(363), 35,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
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
  [2039] = 5,
    ACTIONS(367), 1,
      anon_sym_LF2,
    ACTIONS(369), 1,
      aux_sym_line_code_token1,
    STATE(47), 1,
      aux_sym_codeblock_repeat1,
    STATE(62), 1,
      sym_line_code,
    ACTIONS(298), 34,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
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
  [2088] = 2,
    ACTIONS(371), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(373), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2130] = 2,
    ACTIONS(375), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(377), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2172] = 2,
    ACTIONS(379), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(381), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2214] = 2,
    ACTIONS(383), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(385), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2256] = 2,
    ACTIONS(387), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(389), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2298] = 2,
    ACTIONS(391), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(393), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2340] = 2,
    ACTIONS(395), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(397), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2382] = 2,
    ACTIONS(399), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(401), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2424] = 2,
    ACTIONS(403), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(405), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2466] = 2,
    ACTIONS(407), 13,
      aux_sym_word_noli_token1,
      aux_sym_word_noli_token2,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(409), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2508] = 2,
    ACTIONS(365), 1,
      anon_sym_LF2,
    ACTIONS(363), 35,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
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
  [2549] = 2,
    ACTIONS(361), 1,
      anon_sym_LF2,
    ACTIONS(359), 35,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
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
  [2590] = 2,
    ACTIONS(375), 12,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(377), 23,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2630] = 2,
    ACTIONS(371), 12,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(373), 23,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2670] = 2,
    ACTIONS(411), 12,
      aux_sym_word_noli_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token1,
      anon_sym_LT,
    ACTIONS(413), 23,
      aux_sym_word_noli_token2,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2710] = 4,
    ACTIONS(421), 1,
      aux_sym_optionlink_token1,
    ACTIONS(419), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(415), 15,
      aux_sym_word_token1,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Deprecated,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      sym_url_word,
      anon_sym_BQUOTE,
    ACTIONS(417), 16,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
  [2753] = 4,
    ACTIONS(427), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(423), 10,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(425), 21,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [2795] = 5,
    ACTIONS(427), 1,
      aux_sym_uppercase_name_token2,
    STATE(71), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(429), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(423), 10,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(425), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_url_word,
      anon_sym_BQUOTE,
  [2839] = 3,
    ACTIONS(431), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(415), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(417), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [2879] = 4,
    ACTIONS(427), 1,
      aux_sym_uppercase_name_token2,
    STATE(73), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(433), 10,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(435), 21,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [2921] = 5,
    ACTIONS(427), 1,
      aux_sym_uppercase_name_token2,
    STATE(73), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(433), 10,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(435), 19,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      sym_url_word,
      anon_sym_BQUOTE,
  [2965] = 3,
    ACTIONS(439), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(415), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(417), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3005] = 4,
    ACTIONS(445), 1,
      aux_sym_uppercase_name_token2,
    STATE(73), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(441), 10,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(443), 21,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3047] = 2,
    ACTIONS(448), 11,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      aux_sym_uppercase_name_token2,
    ACTIONS(450), 21,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3084] = 3,
    ACTIONS(456), 1,
      anon_sym_SQUOTE2,
    ACTIONS(452), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(454), 24,
      anon_sym_STAR,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3123] = 3,
    ACTIONS(458), 1,
      anon_sym_LF,
    ACTIONS(415), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(417), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3162] = 3,
    ACTIONS(460), 1,
      aux_sym_tag_token1,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(415), 29,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
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
  [3201] = 3,
    ACTIONS(462), 1,
      aux_sym_taglink_token1,
    ACTIONS(417), 2,
      aux_sym__word_common_token3,
      anon_sym_LF2,
    ACTIONS(415), 29,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
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
  [3240] = 3,
    ACTIONS(464), 1,
      anon_sym_LF,
    ACTIONS(415), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(417), 24,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3279] = 3,
    ACTIONS(466), 1,
      aux_sym_argument_token1,
    ACTIONS(417), 3,
      anon_sym_LBRACE_RBRACE,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
    ACTIONS(415), 28,
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
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      sym_url_word,
      anon_sym_BQUOTE,
  [3318] = 2,
    ACTIONS(468), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(470), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3354] = 2,
    ACTIONS(472), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(474), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3390] = 2,
    ACTIONS(476), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(478), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3426] = 2,
    ACTIONS(480), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(482), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3462] = 2,
    ACTIONS(484), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(486), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3498] = 2,
    ACTIONS(488), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(490), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3534] = 2,
    ACTIONS(492), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(494), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3570] = 2,
    ACTIONS(496), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(498), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3606] = 2,
    ACTIONS(500), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(502), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3642] = 2,
    ACTIONS(504), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(506), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3678] = 2,
    ACTIONS(508), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(510), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3714] = 2,
    ACTIONS(512), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(514), 25,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [3750] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(516), 1,
      anon_sym_LT,
    STATE(32), 1,
      sym__blank,
    STATE(95), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3767] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(518), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym__blank,
    STATE(95), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3784] = 4,
    ACTIONS(520), 1,
      anon_sym_LT,
    ACTIONS(523), 1,
      anon_sym_LF2,
    ACTIONS(525), 1,
      aux_sym_line_li_token1,
    STATE(95), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3798] = 4,
    ACTIONS(300), 1,
      anon_sym_LF2,
    ACTIONS(302), 1,
      aux_sym_line_code_token1,
    STATE(34), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
  [3811] = 4,
    ACTIONS(367), 1,
      anon_sym_LF2,
    ACTIONS(369), 1,
      aux_sym_line_code_token1,
    STATE(50), 1,
      aux_sym_codeblock_repeat1,
    STATE(62), 1,
      sym_line_code,
  [3824] = 3,
    ACTIONS(528), 1,
      anon_sym_STAR,
    ACTIONS(530), 1,
      anon_sym_LF2,
    STATE(26), 1,
      sym_tag,
  [3834] = 1,
    ACTIONS(532), 1,
      anon_sym_BQUOTE2,
  [3838] = 1,
    ACTIONS(534), 1,
      aux_sym_codespan_token1,
  [3842] = 1,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
  [3846] = 1,
    ACTIONS(460), 1,
      aux_sym_tag_token1,
  [3850] = 1,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
  [3854] = 1,
    ACTIONS(540), 1,
      anon_sym_PIPE2,
  [3858] = 1,
    ACTIONS(542), 1,
      anon_sym_SQUOTE2,
  [3862] = 1,
    ACTIONS(310), 1,
      aux_sym_line_li_token1,
  [3866] = 1,
    ACTIONS(544), 1,
      anon_sym_STAR2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 80,
  [SMALL_STATE(19)] = 162,
  [SMALL_STATE(20)] = 242,
  [SMALL_STATE(21)] = 322,
  [SMALL_STATE(22)] = 404,
  [SMALL_STATE(23)] = 484,
  [SMALL_STATE(24)] = 559,
  [SMALL_STATE(25)] = 634,
  [SMALL_STATE(26)] = 709,
  [SMALL_STATE(27)] = 784,
  [SMALL_STATE(28)] = 859,
  [SMALL_STATE(29)] = 931,
  [SMALL_STATE(30)] = 1003,
  [SMALL_STATE(31)] = 1075,
  [SMALL_STATE(32)] = 1147,
  [SMALL_STATE(33)] = 1198,
  [SMALL_STATE(34)] = 1249,
  [SMALL_STATE(35)] = 1302,
  [SMALL_STATE(36)] = 1353,
  [SMALL_STATE(37)] = 1406,
  [SMALL_STATE(38)] = 1457,
  [SMALL_STATE(39)] = 1508,
  [SMALL_STATE(40)] = 1559,
  [SMALL_STATE(41)] = 1612,
  [SMALL_STATE(42)] = 1663,
  [SMALL_STATE(43)] = 1714,
  [SMALL_STATE(44)] = 1765,
  [SMALL_STATE(45)] = 1818,
  [SMALL_STATE(46)] = 1861,
  [SMALL_STATE(47)] = 1904,
  [SMALL_STATE(48)] = 1953,
  [SMALL_STATE(49)] = 1996,
  [SMALL_STATE(50)] = 2039,
  [SMALL_STATE(51)] = 2088,
  [SMALL_STATE(52)] = 2130,
  [SMALL_STATE(53)] = 2172,
  [SMALL_STATE(54)] = 2214,
  [SMALL_STATE(55)] = 2256,
  [SMALL_STATE(56)] = 2298,
  [SMALL_STATE(57)] = 2340,
  [SMALL_STATE(58)] = 2382,
  [SMALL_STATE(59)] = 2424,
  [SMALL_STATE(60)] = 2466,
  [SMALL_STATE(61)] = 2508,
  [SMALL_STATE(62)] = 2549,
  [SMALL_STATE(63)] = 2590,
  [SMALL_STATE(64)] = 2630,
  [SMALL_STATE(65)] = 2670,
  [SMALL_STATE(66)] = 2710,
  [SMALL_STATE(67)] = 2753,
  [SMALL_STATE(68)] = 2795,
  [SMALL_STATE(69)] = 2839,
  [SMALL_STATE(70)] = 2879,
  [SMALL_STATE(71)] = 2921,
  [SMALL_STATE(72)] = 2965,
  [SMALL_STATE(73)] = 3005,
  [SMALL_STATE(74)] = 3047,
  [SMALL_STATE(75)] = 3084,
  [SMALL_STATE(76)] = 3123,
  [SMALL_STATE(77)] = 3162,
  [SMALL_STATE(78)] = 3201,
  [SMALL_STATE(79)] = 3240,
  [SMALL_STATE(80)] = 3279,
  [SMALL_STATE(81)] = 3318,
  [SMALL_STATE(82)] = 3354,
  [SMALL_STATE(83)] = 3390,
  [SMALL_STATE(84)] = 3426,
  [SMALL_STATE(85)] = 3462,
  [SMALL_STATE(86)] = 3498,
  [SMALL_STATE(87)] = 3534,
  [SMALL_STATE(88)] = 3570,
  [SMALL_STATE(89)] = 3606,
  [SMALL_STATE(90)] = 3642,
  [SMALL_STATE(91)] = 3678,
  [SMALL_STATE(92)] = 3714,
  [SMALL_STATE(93)] = 3750,
  [SMALL_STATE(94)] = 3767,
  [SMALL_STATE(95)] = 3784,
  [SMALL_STATE(96)] = 3798,
  [SMALL_STATE(97)] = 3811,
  [SMALL_STATE(98)] = 3824,
  [SMALL_STATE(99)] = 3834,
  [SMALL_STATE(100)] = 3838,
  [SMALL_STATE(101)] = 3842,
  [SMALL_STATE(102)] = 3846,
  [SMALL_STATE(103)] = 3850,
  [SMALL_STATE(104)] = 3854,
  [SMALL_STATE(105)] = 3858,
  [SMALL_STATE(106)] = 3862,
  [SMALL_STATE(107)] = 3866,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, .production_id = 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(77),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(88),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(78),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(80),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(72),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(90),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(89),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(89),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(68),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(106),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(29),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(28),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(84),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(100),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(72),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(84),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(100),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(88),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(88),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(77),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(66),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(78),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(80),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(90),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(89),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(89),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(67),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(84),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(100),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(81),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(77),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(66),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(81),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(78),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(80),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(90),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(89),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(89),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(84),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(100),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 13),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 13),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 14),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 14),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3, .production_id = 10),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 10),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 8),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 8),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 20),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 20),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 19),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 19),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(45),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(49),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(49),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(61),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(61),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 6),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 6),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 6),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, .production_id = 6),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, .production_id = 6),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 6),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 6),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 4, .production_id = 18),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 4, .production_id = 18),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(74),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 9),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 9),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 9),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 9),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(106),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(30),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [536] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
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
