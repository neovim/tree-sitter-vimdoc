#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 1
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum ts_symbol_identifiers {
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
  aux_sym_codeblock_token2 = 38,
  aux_sym__blank_token1 = 39,
  aux_sym_line_li_token1 = 40,
  aux_sym_line_code_token1 = 41,
  sym_modeline = 42,
  aux_sym_h1_token1 = 43,
  aux_sym_h2_token1 = 44,
  aux_sym_tag_token1 = 45,
  anon_sym_STAR2 = 46,
  sym_url_word = 47,
  aux_sym_optionlink_token1 = 48,
  aux_sym_taglink_token1 = 49,
  anon_sym_PIPE2 = 50,
  anon_sym_BQUOTE = 51,
  aux_sym_codespan_token1 = 52,
  anon_sym_BQUOTE2 = 53,
  aux_sym_argument_token1 = 54,
  anon_sym_RBRACE = 55,
  anon_sym_QMARK = 56,
  sym_help_file = 57,
  sym__atom = 58,
  sym_word = 59,
  sym__atom_noli = 60,
  sym_word_noli = 61,
  sym__atom_common = 62,
  sym__word_common = 63,
  sym_note = 64,
  sym_keycode = 65,
  sym_uppercase_name = 66,
  sym__uppercase_words = 67,
  sym_block = 68,
  sym_codeblock = 69,
  sym__blank = 70,
  sym_line = 71,
  sym_line_li = 72,
  sym_line_code = 73,
  sym__line_noli = 74,
  sym_column_heading = 75,
  sym__column_heading = 76,
  sym_h1 = 77,
  sym_h2 = 78,
  sym_h3 = 79,
  sym_tag = 80,
  sym_url = 81,
  sym_optionlink = 82,
  sym_taglink = 83,
  sym_codespan = 84,
  sym_argument = 85,
  aux_sym_help_file_repeat1 = 86,
  aux_sym_help_file_repeat2 = 87,
  aux_sym_help_file_repeat3 = 88,
  aux_sym_uppercase_name_repeat1 = 89,
  aux_sym_block_repeat1 = 90,
  aux_sym_block_repeat2 = 91,
  aux_sym_codeblock_repeat1 = 92,
  aux_sym_line_li_repeat1 = 93,
  aux_sym_line_li_repeat2 = 94,
  alias_sym_code = 95,
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
  [aux_sym_codeblock_token2] = "codeblock_token2",
  [aux_sym__blank_token1] = "_blank_token1",
  [aux_sym_line_li_token1] = "line_li_token1",
  [aux_sym_line_code_token1] = "line_code_token1",
  [sym_modeline] = "modeline",
  [aux_sym_h1_token1] = "delimiter",
  [aux_sym_h2_token1] = "delimiter",
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
  [anon_sym_QMARK] = "\?",
  [sym_help_file] = "help_file",
  [sym__atom] = "_atom",
  [sym_word] = "word",
  [sym__atom_noli] = "_atom_noli",
  [sym_word_noli] = "word",
  [sym__atom_common] = "_atom_common",
  [sym__word_common] = "_word_common",
  [sym_note] = "note",
  [sym_keycode] = "keycode",
  [sym_uppercase_name] = "heading",
  [sym__uppercase_words] = "_uppercase_words",
  [sym_block] = "block",
  [sym_codeblock] = "codeblock",
  [sym__blank] = "_blank",
  [sym_line] = "line",
  [sym_line_li] = "line_li",
  [sym_line_code] = "line",
  [sym__line_noli] = "_line_noli",
  [sym_column_heading] = "column_heading",
  [sym__column_heading] = "heading",
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
  [aux_sym_help_file_repeat3] = "help_file_repeat3",
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
  [aux_sym_codeblock_token2] = aux_sym_codeblock_token2,
  [aux_sym__blank_token1] = aux_sym__blank_token1,
  [aux_sym_line_li_token1] = aux_sym_line_li_token1,
  [aux_sym_line_code_token1] = aux_sym_line_code_token1,
  [sym_modeline] = sym_modeline,
  [aux_sym_h1_token1] = aux_sym_h1_token1,
  [aux_sym_h2_token1] = aux_sym_h1_token1,
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
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [sym__column_heading] = sym_uppercase_name,
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
  [aux_sym_help_file_repeat3] = aux_sym_help_file_repeat3,
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
  [aux_sym_codeblock_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__blank_token1] = {
    .visible = false,
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
  [sym_modeline] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_h1_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_h2_token1] = {
    .visible = true,
    .named = true,
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
  [anon_sym_QMARK] = {
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
  [sym__column_heading] = {
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
  [aux_sym_help_file_repeat3] = {
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

enum ts_field_identifiers {
  field_blank = 1,
  field_text = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_blank] = "blank",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_blank, 0},
  [1] =
    {field_text, 0},
  [2] =
    {field_text, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_word,
  },
  [4] = {
    [0] = sym_word,
    [1] = sym_word,
  },
  [6] = {
    [2] = alias_sym_code,
  },
  [7] = {
    [1] = sym_line,
    [2] = sym_line,
  },
  [8] = {
    [1] = sym_line,
  },
  [9] = {
    [1] = sym_uppercase_name,
  },
  [10] = {
    [1] = aux_sym_h1_token1,
  },
  [11] = {
    [2] = sym_line,
    [3] = sym_line,
  },
  [12] = {
    [2] = sym_line,
  },
  [13] = {
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
  aux_sym_line_li_repeat1, 3,
    aux_sym_line_li_repeat1,
    sym_line,
    sym_uppercase_name,
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
  [46] = 44,
  [47] = 43,
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
  [61] = 61,
  [62] = 62,
  [63] = 49,
  [64] = 48,
  [65] = 52,
  [66] = 66,
  [67] = 57,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 69,
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
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 584,
        '\'', 688,
        '(', 689,
        '*', 690,
        ',', 689,
        '<', 685,
        '>', 688,
        '?', 688,
        'A', 622,
        'C', 631,
        'D', 612,
        'M', 616,
        'N', 626,
        'W', 606,
        '[', 689,
        '`', 688,
        'h', 674,
        '{', 679,
        '|', 688,
        '}', 688,
        '~', 688,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (lookahead != 0) ADVANCE(688);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(23);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 584,
        '\'', 354,
        '(', 406,
        '*', 350,
        ',', 424,
        '<', 133,
        '>', 420,
        'A', 78,
        'C', 87,
        'D', 69,
        'M', 73,
        'N', 82,
        'W', 62,
        '[', 412,
        '`', 793,
        'h', 37,
        '{', 397,
        '|', 393,
        '~', 416,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 688,
        '(', 689,
        '*', 350,
        ',', 689,
        '<', 685,
        '>', 688,
        'A', 622,
        'C', 631,
        'D', 612,
        'M', 616,
        'N', 626,
        'W', 606,
        '[', 689,
        '`', 688,
        'h', 676,
        '{', 679,
        '|', 681,
        '~', 688,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(688);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 406,
        '*', 350,
        ',', 424,
        '<', 133,
        '>', 420,
        '?', 901,
        'A', 78,
        'C', 87,
        'D', 69,
        'M', 73,
        'N', 82,
        'W', 62,
        '[', 412,
        '`', 793,
        'h', 125,
        '{', 397,
        '|', 393,
        '~', 416,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 406,
        '*', 350,
        ',', 424,
        '<', 133,
        '>', 420,
        'A', 78,
        'C', 87,
        'D', 69,
        'M', 73,
        'N', 82,
        'W', 62,
        '[', 412,
        '`', 793,
        'h', 125,
        '{', 397,
        '|', 393,
        '~', 416,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 406,
        '*', 350,
        ',', 424,
        '<', 335,
        '>', 420,
        'A', 277,
        'C', 286,
        'D', 268,
        'M', 271,
        'N', 281,
        'W', 261,
        '[', 412,
        '`', 793,
        'h', 326,
        '{', 397,
        '|', 393,
        '~', 416,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(26);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 408,
        '*', 350,
        ',', 424,
        '-', 25,
        '<', 582,
        '=', 257,
        '>', 420,
        'A', 229,
        'C', 231,
        'D', 227,
        'M', 228,
        'N', 230,
        'W', 226,
        '[', 412,
        '`', 793,
        'h', 326,
        '{', 397,
        '|', 393,
        '~', 416,
        0x2022, 26,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 408,
        '*', 350,
        ',', 424,
        '-', 25,
        '<', 582,
        '=', 257,
        '>', 420,
        'A', 229,
        'C', 231,
        'D', 227,
        'M', 228,
        'N', 230,
        'W', 226,
        '[', 412,
        '`', 793,
        'h', 326,
        '{', 397,
        '|', 393,
        '~', 416,
        0x2022, 26,
        '\t', 13,
        ' ', 13,
      );
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 408,
        '*', 350,
        ',', 424,
        '<', 582,
        '>', 420,
        'A', 229,
        'C', 231,
        'D', 227,
        'M', 228,
        'N', 230,
        'W', 226,
        '[', 412,
        '`', 793,
        'h', 326,
        '{', 397,
        '|', 393,
        '~', 416,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(26);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 408,
        '*', 350,
        ',', 424,
        '<', 582,
        '>', 420,
        'A', 229,
        'C', 231,
        'D', 227,
        'M', 228,
        'N', 230,
        'W', 226,
        '[', 412,
        '`', 793,
        'h', 326,
        '{', 397,
        '|', 393,
        '~', 416,
        '\t', 13,
        ' ', 13,
        '-', 26,
        0x2022, 26,
      );
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 409,
        '*', 353,
        ',', 426,
        '<', 365,
        '>', 423,
        'A', 360,
        'C', 362,
        'D', 358,
        'M', 359,
        'N', 361,
        'W', 357,
        '[', 414,
        '`', 796,
        'h', 363,
        '{', 398,
        '|', 394,
        '~', 419,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 410,
        '*', 350,
        ',', 424,
        '<', 133,
        '>', 420,
        'A', 42,
        'C', 44,
        'D', 40,
        'M', 41,
        'N', 43,
        'W', 39,
        '[', 412,
        '`', 793,
        'h', 125,
        '{', 397,
        '|', 393,
        '~', 416,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 355,
        '(', 407,
        '*', 351,
        ',', 425,
        '<', 224,
        '>', 421,
        'A', 169,
        'C', 178,
        'D', 160,
        'M', 164,
        'N', 173,
        'W', 153,
        '[', 413,
        '`', 794,
        'h', 216,
        '{', 396,
        '|', 392,
        '~', 417,
        '\t', 13,
        ' ', 13,
        '-', 1,
        0x2022, 1,
      );
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 356,
        '(', 411,
        '*', 352,
        ',', 427,
        '<', 896,
        '>', 422,
        'A', 833,
        'C', 842,
        'D', 823,
        'M', 827,
        'N', 837,
        'W', 816,
        '[', 415,
        '`', 795,
        'h', 885,
        '{', 399,
        '|', 395,
        '}', 134,
        '~', 418,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(898);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 388,
        '(', 406,
        '*', 350,
        ',', 424,
        '<', 133,
        '>', 420,
        'A', 78,
        'C', 87,
        'D', 69,
        'M', 73,
        'N', 82,
        'W', 62,
        '[', 412,
        '`', 793,
        'h', 125,
        '{', 397,
        '|', 393,
        '~', 416,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '\n', 585,
        '\'', 790,
        '(', 791,
        '*', 790,
        ',', 791,
        '<', 788,
        '>', 790,
        'A', 729,
        'C', 738,
        'D', 719,
        'M', 723,
        'N', 733,
        'W', 713,
        '[', 791,
        '`', 790,
        'h', 780,
        '{', 783,
        '|', 393,
        '~', 790,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(790);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '*') ADVANCE(690);
      if (lookahead == '<') ADVANCE(581);
      if (lookahead == '`') ADVANCE(798);
      if (lookahead == '|') ADVANCE(792);
      if (lookahead == '}') ADVANCE(900);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '>') ADVANCE(456);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(587);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(587);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(349);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(454);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(797);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 406,
        '*', 350,
        ',', 424,
        '<', 133,
        '>', 420,
        'A', 78,
        'C', 87,
        'D', 69,
        'M', 73,
        'N', 82,
        'W', 62,
        '[', 412,
        '`', 793,
        'h', 125,
        '{', 397,
        '|', 391,
        '~', 416,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 406,
        '*', 350,
        ',', 424,
        '<', 335,
        '>', 420,
        'A', 277,
        'C', 286,
        'D', 268,
        'M', 271,
        'N', 281,
        'W', 261,
        '[', 412,
        '`', 793,
        'h', 326,
        'v', 306,
        '{', 397,
        '|', 393,
        '~', 416,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30);
      if (lookahead == '-' ||
          lookahead == 0x2022) ADVANCE(26);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      ADVANCE_MAP(
        '\n', 585,
        '\'', 354,
        '(', 408,
        '*', 350,
        ',', 424,
        '-', 25,
        '<', 582,
        '=', 257,
        '>', 420,
        'A', 229,
        'C', 231,
        'D', 227,
        'M', 228,
        'N', 230,
        'W', 226,
        '[', 412,
        '`', 793,
        'h', 326,
        'v', 306,
        '{', 397,
        '|', 393,
        '~', 416,
        0x2022, 26,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(232);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == 's') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == ':') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == 'p') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(583);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'A') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(134);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(134);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(571);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(134);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'L') ADVANCE(570);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(134);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'O') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(134);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'T') ADVANCE(567);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(134);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < ',' || '.' < lookahead) &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(134);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '>') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(134);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(428);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
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
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(134);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      ADVANCE_MAP(
        'B', 482,
        'D', 478,
        'I', 480,
        'P', 474,
        'S', 472,
        '{', 476,
        '\t', 457,
        ' ', 457,
        '(', 457,
        ',', 457,
        '[', 457,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(457);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'G') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(694);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(499);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(494);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(485);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '-' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(19);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '>') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ':') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ':') ADVANCE(429);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ':') ADVANCE(435);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ':') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ':') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '>') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '>') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '>') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'A') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      ADVANCE_MAP(
        '\n', 588,
        'B', 463,
        'D', 461,
        'I', 462,
        'P', 459,
        'S', 458,
        '{', 460,
        '\t', 465,
        ' ', 465,
        '(', 465,
        '[', 465,
      );
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'C') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'D') ADVANCE(204);
      if (lookahead == 'U') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'D') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'E') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'G') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'I') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'L') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'N') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'R') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'R') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'R') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'T') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'h') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'k') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'w') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(692);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(225);
      if (lookahead != 0) ADVANCE(691);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(501);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(496);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(487);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      ADVANCE_MAP(
        '\n', 588,
        '\t', 23,
        ' ', 23,
        '(', 23,
        '[', 23,
        'A', 138,
        'C', 138,
        'D', 138,
        'M', 138,
        'S', 138,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'A') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(336);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(527);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(336);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(532);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(336);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'L') ADVANCE(531);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(336);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'O') ADVANCE(533);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(336);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(528);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(336);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(336);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '>') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(336);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(428);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(336);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      ADVANCE_MAP(
        'B', 483,
        'D', 479,
        'I', 481,
        'P', 475,
        'S', 473,
        '{', 477,
        '\t', 457,
        ' ', 457,
        '(', 457,
        '[', 457,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(457);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'C') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(314);
      if (lookahead == 'U') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'G') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'N') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'N') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'O') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'P') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(695);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(693);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(499);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(494);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(485);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          (lookahead < 'A' || '[' < lookahead)) ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(382);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'L') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'O') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(384);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'T') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(387);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(387);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(428);
      if (lookahead == 's') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(434);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '>') ADVANCE(450);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'a') ADVANCE(385);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'c') ADVANCE(371);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'd') ADVANCE(446);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(367);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(373);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'g') ADVANCE(369);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'i') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'n') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'n') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'p') ADVANCE(383);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'r') ADVANCE(379);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'r') ADVANCE(375);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 't') ADVANCE(374);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 't') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(695);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(694);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '|') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '|') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '|') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(390);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(390);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(889);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '{') ADVANCE(402);
      if (lookahead == '}') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(404);
      if (lookahead == '}') ADVANCE(400);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(404);
      if (lookahead == '}') ADVANCE(400);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(888);
      if (lookahead == '}') ADVANCE(400);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(898);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '{') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '{') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(580);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '>') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'H') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'H') ADVANCE(561);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(76);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(275);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(580);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(580);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(580);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(580);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == '-') ADVANCE(540);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == '-') ADVANCE(513);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == ':') ADVANCE(447);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'A') ADVANCE(534);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'A') ADVANCE(506);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      ADVANCE_MAP(
        '(', 544,
        'B', 539,
        'D', 537,
        'I', 538,
        'P', 536,
        'S', 521,
        '{', 477,
        '\t', 457,
        ' ', 457,
        '[', 457,
      );
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(457);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'C') ADVANCE(511);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'D') ADVANCE(510);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(508);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(514);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'F') ADVANCE(535);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'G') ADVANCE(509);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'H') ADVANCE(522);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'I') ADVANCE(519);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'I') ADVANCE(526);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'L') ADVANCE(505);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'N') ADVANCE(523);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'N') ADVANCE(520);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'P') ADVANCE(530);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'R') ADVANCE(524);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'R') ADVANCE(525);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'R') ADVANCE(517);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(504);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(512);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(516);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(518);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'T') ADVANCE(507);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(499);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(499);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(494);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(494);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(485);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(485);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(544);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == '-') ADVANCE(576);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == '-') ADVANCE(577);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ':') ADVANCE(447);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'A') ADVANCE(573);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'A') ADVANCE(547);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'C') ADVANCE(552);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'D') ADVANCE(551);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(549);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(554);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'E') ADVANCE(555);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'F') ADVANCE(574);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'G') ADVANCE(550);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'I') ADVANCE(559);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'I') ADVANCE(565);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'L') ADVANCE(546);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'N') ADVANCE(562);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'N') ADVANCE(560);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'P') ADVANCE(569);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(563);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(564);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'R') ADVANCE(557);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'T') ADVANCE(545);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'T') ADVANCE(553);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'T') ADVANCE(556);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'T') ADVANCE(558);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(499);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(499);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      ADVANCE_MAP(
        '(', 484,
        'B', 470,
        'D', 468,
        'I', 469,
        'P', 467,
        'S', 466,
        '{', 476,
        '\t', 457,
        ' ', 457,
        ',', 457,
        '[', 457,
      );
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(457);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(494);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(494);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(485);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(485);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_codeblock_token2);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__blank_token1);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == ' ') ADVANCE(586);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_modeline);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(608);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '>') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == 's') ADVANCE(596);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(683);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(683);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(683);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(683);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(602);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(602);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(665);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(635);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      ADVANCE_MAP(
        'B', 669,
        'D', 645,
        'I', 659,
        'P', 637,
        'S', 619,
        '{', 640,
        '(', 689,
        ',', 689,
        '[', 689,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'C') ADVANCE(607);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(596);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(660);
      if (lookahead == 'U') ADVANCE(661);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(627);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(596);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(609);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(610);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'F') ADVANCE(632);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'G') ADVANCE(596);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'H') ADVANCE(620);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(617);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(625);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(632);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'N') ADVANCE(621);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'N') ADVANCE(618);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'O') ADVANCE(634);
      if (lookahead == 'o') ADVANCE(672);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'P') ADVANCE(630);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(624);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(623);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(614);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(629);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(592);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(605);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(613);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(615);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(654);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(639);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'd') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(596);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(646);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'h') ADVANCE(638);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'i') ADVANCE(658);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'k') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'l') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(670);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'o') ADVANCE(678);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(597);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(668);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(598);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(657);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(682);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(671);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(644);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(649);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(675);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(647);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'w') ADVANCE(656);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(680);
      if (lookahead == '}') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(680);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '|') ADVANCE(681);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '}') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(688);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(692);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(225);
      if (lookahead != 0) ADVANCE(691);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ']') ADVANCE(23);
      if (lookahead != 0) ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(695);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(387);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(387);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 'p') ADVANCE(696);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(387);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(387);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(387);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(387);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == '>') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(790);
      if (lookahead == 's') ADVANCE(705);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(786);
      if (lookahead == 's') ADVANCE(707);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(786);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(709);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(709);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(701);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(735);
      if (lookahead == 'a') ADVANCE(771);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(742);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      ADVANCE_MAP(
        'B', 774,
        'D', 752,
        'I', 766,
        'P', 744,
        'S', 726,
        '{', 747,
        '(', 791,
        ',', 791,
        '[', 791,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'C') ADVANCE(714);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(705);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(767);
      if (lookahead == 'U') ADVANCE(768);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(734);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(705);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(716);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(717);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(740);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(739);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'G') ADVANCE(705);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(727);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(724);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(732);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(739);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(702);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'N') ADVANCE(728);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'N') ADVANCE(725);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'O') ADVANCE(741);
      if (lookahead == 'o') ADVANCE(778);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'P') ADVANCE(737);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(731);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(730);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(721);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(701);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(720);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(722);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(759);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(745);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(718);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(705);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(753);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(746);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(760);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(757);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(773);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(706);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(764);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(785);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(751);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(756);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(777);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(750);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(770);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(779);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(754);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(763);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '}') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(790);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(790);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(790);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(797);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(815);
      if (lookahead == '>') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(819);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(891);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(895);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == 's') ADVANCE(808);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(893);
      if (lookahead == 's') ADVANCE(807);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(893);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(439);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(449);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(813);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(813);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(839);
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(846);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(802);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      ADVANCE_MAP(
        'B', 879,
        'D', 857,
        'I', 871,
        'P', 849,
        'S', 830,
        '{', 852,
        '}', 457,
        '\t', 457,
        ' ', 457,
        '(', 899,
        ',', 899,
        '[', 899,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(898);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'C') ADVANCE(817);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(872);
      if (lookahead == 'U') ADVANCE(873);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(811);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(838);
      if (lookahead == 'e') ADVANCE(874);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(804);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(820);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(822);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(844);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'F') ADVANCE(847);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'G') ADVANCE(809);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'H') ADVANCE(831);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(828);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(836);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(843);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(801);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'N') ADVANCE(832);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'N') ADVANCE(829);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'O') ADVANCE(845);
      if (lookahead == 'o') ADVANCE(883);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'P') ADVANCE(841);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(835);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(834);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(825);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(840);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(800);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(818);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(824);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(826);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(803);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(866);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(863);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(877);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(864);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(850);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(805);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(853);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(867);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(821);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(880);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(848);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(810);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(858);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'h') ADVANCE(851);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'k') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'l') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(865);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(862);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(881);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(878);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(806);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(869);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(894);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(856);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(861);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(882);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 's') ADVANCE(860);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(855);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(875);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(884);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'w') ADVANCE(868);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '{') ADVANCE(888);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '|') ADVANCE(889);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(499);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(898);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(898);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(695);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(892);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(694);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(898);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(893);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(898);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(898);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(898);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_QMARK);
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
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
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
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 12},
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
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 31},
  [100] = {.lex_state = 31},
  [101] = {.lex_state = 31},
  [102] = {.lex_state = 31},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 31},
  [105] = {.lex_state = 28},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 31},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 17},
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
    [aux_sym_codeblock_token2] = ACTIONS(1),
    [aux_sym__blank_token1] = ACTIONS(1),
    [aux_sym_tag_token1] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [sym_url_word] = ACTIONS(1),
    [aux_sym_optionlink_token1] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(113),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(59),
    [sym__blank] = STATE(2),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(2),
    [aux_sym_help_file_repeat2] = STATE(4),
    [aux_sym_help_file_repeat3] = STATE(101),
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
    [aux_sym__blank_token1] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [sym_modeline] = ACTIONS(33),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [2] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(59),
    [sym__blank] = STATE(40),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat1] = STATE(40),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_help_file_repeat3] = STATE(100),
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
    [aux_sym__blank_token1] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [sym_modeline] = ACTIONS(45),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [3] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(59),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_help_file_repeat3] = STATE(102),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(47),
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
    [sym_modeline] = ACTIONS(49),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [4] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(59),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_help_file_repeat3] = STATE(100),
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
    [sym_modeline] = ACTIONS(45),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [5] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(59),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(94),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_help_file_repeat2] = STATE(5),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(51),
    [aux_sym_word_noli_token1] = ACTIONS(53),
    [aux_sym_word_noli_token2] = ACTIONS(53),
    [anon_sym_STAR] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [aux_sym__word_common_token3] = ACTIONS(62),
    [anon_sym_PIPE] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(62),
    [aux_sym__word_common_token4] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_TILDE] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_Note_COLON] = ACTIONS(74),
    [anon_sym_NOTE_COLON] = ACTIONS(74),
    [anon_sym_Notes_COLON] = ACTIONS(74),
    [anon_sym_Warning_COLON] = ACTIONS(74),
    [anon_sym_WARNING_COLON] = ACTIONS(74),
    [anon_sym_Deprecated] = ACTIONS(74),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(74),
    [aux_sym_keycode_token1] = ACTIONS(77),
    [aux_sym_keycode_token2] = ACTIONS(77),
    [aux_sym_keycode_token3] = ACTIONS(77),
    [aux_sym_keycode_token4] = ACTIONS(77),
    [aux_sym_keycode_token5] = ACTIONS(80),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(80),
    [aux_sym_keycode_token6] = ACTIONS(77),
    [aux_sym_keycode_token7] = ACTIONS(77),
    [aux_sym_uppercase_name_token1] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(86),
    [aux_sym_line_li_token1] = ACTIONS(89),
    [sym_modeline] = ACTIONS(51),
    [aux_sym_h1_token1] = ACTIONS(92),
    [aux_sym_h2_token1] = ACTIONS(95),
    [sym_url_word] = ACTIONS(98),
    [anon_sym_BQUOTE] = ACTIONS(101),
  },
  [6] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(59),
    [sym__blank] = STATE(41),
    [sym_line] = STATE(7),
    [sym_line_li] = STATE(95),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(95),
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
    [anon_sym_LT] = ACTIONS(104),
    [aux_sym__blank_token1] = ACTIONS(29),
    [aux_sym_line_li_token1] = ACTIONS(31),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [7] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(103),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(59),
    [sym_line] = STATE(7),
    [sym__line_noli] = STATE(59),
    [sym_column_heading] = STATE(59),
    [sym__column_heading] = STATE(104),
    [sym_h1] = STATE(59),
    [sym_h2] = STATE(59),
    [sym_h3] = STATE(59),
    [sym_tag] = STATE(18),
    [sym_url] = STATE(18),
    [sym_optionlink] = STATE(18),
    [sym_taglink] = STATE(18),
    [sym_codespan] = STATE(18),
    [sym_argument] = STATE(18),
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_word_noli_token1] = ACTIONS(106),
    [aux_sym_word_noli_token2] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [aux_sym__word_common_token3] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(115),
    [aux_sym__word_common_token4] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_Note_COLON] = ACTIONS(127),
    [anon_sym_NOTE_COLON] = ACTIONS(127),
    [anon_sym_Notes_COLON] = ACTIONS(127),
    [anon_sym_Warning_COLON] = ACTIONS(127),
    [anon_sym_WARNING_COLON] = ACTIONS(127),
    [anon_sym_Deprecated] = ACTIONS(127),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(127),
    [aux_sym_keycode_token1] = ACTIONS(130),
    [aux_sym_keycode_token2] = ACTIONS(130),
    [aux_sym_keycode_token3] = ACTIONS(130),
    [aux_sym_keycode_token4] = ACTIONS(130),
    [aux_sym_keycode_token5] = ACTIONS(133),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(133),
    [aux_sym_keycode_token6] = ACTIONS(130),
    [aux_sym_keycode_token7] = ACTIONS(130),
    [aux_sym_uppercase_name_token1] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(139),
    [aux_sym__blank_token1] = ACTIONS(141),
    [aux_sym_line_li_token1] = ACTIONS(141),
    [aux_sym_h1_token1] = ACTIONS(143),
    [aux_sym_h2_token1] = ACTIONS(146),
    [sym_url_word] = ACTIONS(149),
    [anon_sym_BQUOTE] = ACTIONS(152),
  },
  [8] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym__uppercase_words] = STATE(20),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(157),
    [aux_sym__blank_token1] = ACTIONS(159),
    [aux_sym_line_li_token1] = ACTIONS(159),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [9] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym__uppercase_words] = STATE(20),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
    [aux_sym_line_li_repeat2] = STATE(9),
    [aux_sym_word_noli_token1] = ACTIONS(161),
    [aux_sym_word_noli_token2] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [aux_sym__word_common_token3] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(164),
    [aux_sym__word_common_token4] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_Note_COLON] = ACTIONS(179),
    [anon_sym_NOTE_COLON] = ACTIONS(179),
    [anon_sym_Notes_COLON] = ACTIONS(179),
    [anon_sym_Warning_COLON] = ACTIONS(179),
    [anon_sym_WARNING_COLON] = ACTIONS(179),
    [anon_sym_Deprecated] = ACTIONS(179),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(179),
    [aux_sym_keycode_token1] = ACTIONS(182),
    [aux_sym_keycode_token2] = ACTIONS(182),
    [aux_sym_keycode_token3] = ACTIONS(182),
    [aux_sym_keycode_token4] = ACTIONS(182),
    [aux_sym_keycode_token5] = ACTIONS(185),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(185),
    [aux_sym_keycode_token6] = ACTIONS(182),
    [aux_sym_keycode_token7] = ACTIONS(182),
    [aux_sym_uppercase_name_token1] = ACTIONS(188),
    [anon_sym_LT] = ACTIONS(191),
    [aux_sym__blank_token1] = ACTIONS(193),
    [aux_sym_line_li_token1] = ACTIONS(193),
    [sym_url_word] = ACTIONS(195),
    [anon_sym_BQUOTE] = ACTIONS(198),
  },
  [10] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym__uppercase_words] = STATE(20),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(201),
    [aux_sym__blank_token1] = ACTIONS(203),
    [aux_sym_line_li_token1] = ACTIONS(203),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [11] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym__uppercase_words] = STATE(20),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(205),
    [aux_sym__blank_token1] = ACTIONS(207),
    [aux_sym_line_li_token1] = ACTIONS(207),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [12] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym__uppercase_words] = STATE(20),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(209),
    [aux_sym__blank_token1] = ACTIONS(211),
    [aux_sym_line_li_token1] = ACTIONS(211),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [13] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym__uppercase_words] = STATE(20),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(213),
    [aux_sym__blank_token1] = ACTIONS(215),
    [aux_sym_line_li_token1] = ACTIONS(215),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [14] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym__uppercase_words] = STATE(20),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(217),
    [aux_sym__blank_token1] = ACTIONS(219),
    [aux_sym_line_li_token1] = ACTIONS(219),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [15] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym__uppercase_words] = STATE(20),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(221),
    [aux_sym__blank_token1] = ACTIONS(223),
    [aux_sym_line_li_token1] = ACTIONS(223),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [16] = {
    [sym__atom_noli] = STATE(20),
    [sym_word_noli] = STATE(20),
    [sym__atom_common] = STATE(20),
    [sym__word_common] = STATE(84),
    [sym_note] = STATE(20),
    [sym_keycode] = STATE(20),
    [sym__uppercase_words] = STATE(20),
    [sym__line_noli] = STATE(66),
    [sym_tag] = STATE(20),
    [sym_url] = STATE(20),
    [sym_optionlink] = STATE(20),
    [sym_taglink] = STATE(20),
    [sym_codespan] = STATE(20),
    [sym_argument] = STATE(20),
    [aux_sym_line_li_repeat2] = STATE(13),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(225),
    [aux_sym__blank_token1] = ACTIONS(227),
    [aux_sym_line_li_token1] = ACTIONS(227),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(233), 1,
      anon_sym_GT,
    ACTIONS(235), 1,
      aux_sym__blank_token1,
    STATE(14), 1,
      sym_codeblock,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(90), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(237), 1,
      anon_sym_TILDE,
    ACTIONS(240), 1,
      aux_sym__blank_token1,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(52), 1,
      sym_codeblock,
    STATE(88), 1,
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
    ACTIONS(231), 6,
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
    STATE(90), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(233), 1,
      anon_sym_GT,
    ACTIONS(242), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(67), 1,
      sym_codeblock,
    STATE(88), 1,
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
    ACTIONS(231), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(90), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(233), 1,
      anon_sym_GT,
    ACTIONS(244), 1,
      aux_sym__blank_token1,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(65), 1,
      sym_codeblock,
    STATE(88), 1,
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
    ACTIONS(231), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(90), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    ACTIONS(249), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(57), 1,
      sym_codeblock,
    STATE(88), 1,
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
    ACTIONS(231), 6,
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
    STATE(90), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(233), 1,
      anon_sym_GT,
    ACTIONS(251), 1,
      aux_sym__blank_token1,
    STATE(8), 1,
      sym_codeblock,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(90), 11,
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
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(253), 1,
      aux_sym__blank_token1,
    STATE(30), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(255), 1,
      aux_sym__blank_token1,
    STATE(27), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
    ACTIONS(257), 1,
      aux_sym_word_token1,
    ACTIONS(260), 1,
      anon_sym_STAR,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      aux_sym__blank_token1,
    ACTIONS(286), 1,
      sym_url_word,
    ACTIONS(289), 1,
      anon_sym_BQUOTE,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
      sym__word_common,
    ACTIONS(278), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(281), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(275), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(266), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(292), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(294), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
  [859] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(296), 1,
      aux_sym__blank_token1,
    STATE(24), 1,
      sym_tag,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [936] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(298), 1,
      aux_sym__blank_token1,
    STATE(23), 1,
      sym_tag,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 10,
      sym__atom,
      sym_word,
      sym__atom_common,
      sym_note,
      sym_keycode,
      sym_url,
      sym_optionlink,
      sym_taglink,
      sym_codespan,
      sym_argument,
  [1013] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(300), 1,
      aux_sym__blank_token1,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
  [1088] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    ACTIONS(302), 1,
      aux_sym__blank_token1,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
  [1163] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    STATE(29), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
  [1235] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    STATE(28), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
  [1307] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
  [1379] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      aux_sym_word_token1,
    STATE(17), 1,
      aux_sym_line_li_repeat1,
    STATE(88), 1,
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
    ACTIONS(231), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(90), 11,
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
  [1451] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(42), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(306), 13,
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
    ACTIONS(304), 25,
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
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1501] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(312), 1,
      aux_sym_line_li_token1,
    STATE(39), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(310), 13,
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
    ACTIONS(308), 24,
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
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1553] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(312), 1,
      aux_sym_line_li_token1,
    STATE(42), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(306), 13,
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
    ACTIONS(304), 24,
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
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1605] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(306), 13,
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
    ACTIONS(304), 25,
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
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1655] = 4,
    ACTIONS(318), 1,
      aux_sym__blank_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(316), 13,
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
    ACTIONS(314), 25,
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
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1705] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(39), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(310), 13,
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
    ACTIONS(308), 25,
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
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1755] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(40), 2,
      sym__blank,
      aux_sym_help_file_repeat1,
    ACTIONS(323), 13,
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
    ACTIONS(321), 25,
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
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1805] = 6,
    ACTIONS(327), 1,
      aux_sym__blank_token1,
    ACTIONS(329), 1,
      aux_sym_line_code_token1,
    STATE(44), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
    ACTIONS(331), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(325), 34,
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
  [1858] = 6,
    ACTIONS(335), 1,
      aux_sym__blank_token1,
    ACTIONS(338), 1,
      aux_sym_line_code_token1,
    STATE(44), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
    ACTIONS(341), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(333), 34,
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
  [1911] = 2,
    ACTIONS(345), 13,
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
    ACTIONS(343), 26,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1955] = 5,
    ACTIONS(347), 1,
      aux_sym__blank_token1,
    ACTIONS(350), 1,
      aux_sym_line_code_token1,
    STATE(46), 1,
      aux_sym_codeblock_repeat1,
    STATE(64), 1,
      sym_line_code,
    ACTIONS(333), 34,
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
  [2004] = 5,
    ACTIONS(353), 1,
      aux_sym__blank_token1,
    ACTIONS(355), 1,
      aux_sym_line_code_token1,
    STATE(46), 1,
      aux_sym_codeblock_repeat1,
    STATE(64), 1,
      sym_line_code,
    ACTIONS(325), 34,
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
  [2053] = 2,
    ACTIONS(359), 3,
      aux_sym__blank_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(357), 35,
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
  [2096] = 2,
    ACTIONS(363), 3,
      aux_sym__blank_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(361), 35,
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
  [2139] = 2,
    ACTIONS(365), 13,
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
    ACTIONS(367), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2181] = 2,
    ACTIONS(369), 13,
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
    ACTIONS(371), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2223] = 2,
    ACTIONS(373), 13,
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
    ACTIONS(375), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2265] = 2,
    ACTIONS(377), 13,
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
    ACTIONS(379), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2307] = 2,
    ACTIONS(381), 13,
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
    ACTIONS(383), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2349] = 2,
    ACTIONS(385), 13,
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
    ACTIONS(387), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2391] = 2,
    ACTIONS(389), 13,
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
    ACTIONS(391), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2433] = 2,
    ACTIONS(393), 13,
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
    ACTIONS(395), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2475] = 2,
    ACTIONS(397), 13,
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
    ACTIONS(399), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2517] = 2,
    ACTIONS(401), 13,
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
    ACTIONS(403), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2559] = 2,
    ACTIONS(405), 13,
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
    ACTIONS(407), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2601] = 2,
    ACTIONS(409), 13,
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
    ACTIONS(411), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2643] = 2,
    ACTIONS(413), 13,
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
    ACTIONS(415), 24,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2685] = 2,
    ACTIONS(363), 1,
      aux_sym__blank_token1,
    ACTIONS(361), 35,
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
  [2726] = 2,
    ACTIONS(359), 1,
      aux_sym__blank_token1,
    ACTIONS(357), 35,
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
  [2767] = 2,
    ACTIONS(373), 12,
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
    ACTIONS(375), 23,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2807] = 2,
    ACTIONS(417), 12,
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
    ACTIONS(419), 23,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2847] = 2,
    ACTIONS(393), 12,
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
    ACTIONS(395), 23,
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
      aux_sym__blank_token1,
      aux_sym_line_li_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [2887] = 4,
    ACTIONS(427), 1,
      aux_sym_optionlink_token1,
    ACTIONS(425), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(421), 15,
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
    ACTIONS(423), 16,
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
      aux_sym__blank_token1,
  [2930] = 3,
    ACTIONS(429), 2,
      aux_sym_codeblock_token1,
      aux_sym_codeblock_token2,
    ACTIONS(421), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym__blank_token1,
    ACTIONS(423), 24,
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
  [2970] = 4,
    ACTIONS(435), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(431), 10,
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
    ACTIONS(433), 21,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3012] = 5,
    ACTIONS(444), 1,
      aux_sym_uppercase_name_token2,
    STATE(74), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(440), 2,
      anon_sym_STAR,
      aux_sym__blank_token1,
    ACTIONS(438), 10,
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
    ACTIONS(442), 19,
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
  [3056] = 4,
    ACTIONS(444), 1,
      aux_sym_uppercase_name_token2,
    STATE(75), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(438), 10,
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
    ACTIONS(442), 21,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3098] = 3,
    ACTIONS(446), 2,
      aux_sym_codeblock_token1,
      aux_sym_codeblock_token2,
    ACTIONS(421), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      aux_sym__blank_token1,
    ACTIONS(423), 24,
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
  [3138] = 5,
    ACTIONS(444), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(450), 2,
      anon_sym_STAR,
      aux_sym__blank_token1,
    ACTIONS(448), 10,
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
    ACTIONS(452), 19,
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
  [3182] = 4,
    ACTIONS(444), 1,
      aux_sym_uppercase_name_token2,
    STATE(70), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(448), 10,
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
    ACTIONS(452), 21,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3224] = 3,
    ACTIONS(454), 1,
      aux_sym_tag_token1,
    ACTIONS(423), 2,
      anon_sym_STAR,
      aux_sym__blank_token1,
    ACTIONS(421), 29,
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
  [3263] = 3,
    ACTIONS(460), 1,
      anon_sym_QMARK,
    ACTIONS(456), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(458), 25,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3302] = 3,
    ACTIONS(462), 1,
      aux_sym_argument_token1,
    ACTIONS(423), 3,
      anon_sym_LBRACE_RBRACE,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym__blank_token1,
    ACTIONS(421), 28,
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
  [3341] = 3,
    ACTIONS(468), 1,
      anon_sym_SQUOTE2,
    ACTIONS(464), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(466), 24,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3380] = 3,
    ACTIONS(470), 1,
      aux_sym_taglink_token1,
    ACTIONS(423), 2,
      aux_sym__word_common_token3,
      aux_sym__blank_token1,
    ACTIONS(421), 29,
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
  [3419] = 2,
    ACTIONS(472), 11,
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
    ACTIONS(474), 21,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3456] = 2,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3492] = 2,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3528] = 2,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3564] = 2,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3600] = 2,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3636] = 2,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3672] = 2,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3708] = 2,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3744] = 2,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3780] = 2,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3816] = 2,
    ACTIONS(516), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(518), 25,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3852] = 2,
    ACTIONS(520), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(522), 25,
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
      aux_sym__blank_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [3888] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(524), 1,
      anon_sym_LT,
    STATE(41), 1,
      sym__blank,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3905] = 5,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(526), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym__blank,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3922] = 4,
    ACTIONS(528), 1,
      anon_sym_LT,
    ACTIONS(531), 1,
      aux_sym__blank_token1,
    ACTIONS(533), 1,
      aux_sym_line_li_token1,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3936] = 4,
    ACTIONS(327), 1,
      aux_sym__blank_token1,
    ACTIONS(329), 1,
      aux_sym_line_code_token1,
    STATE(43), 1,
      aux_sym_codeblock_repeat1,
    STATE(48), 1,
      sym_line_code,
  [3949] = 4,
    ACTIONS(353), 1,
      aux_sym__blank_token1,
    ACTIONS(355), 1,
      aux_sym_line_code_token1,
    STATE(47), 1,
      aux_sym_codeblock_repeat1,
    STATE(64), 1,
      sym_line_code,
  [3962] = 3,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(538), 1,
      sym_modeline,
    STATE(99), 1,
      aux_sym_help_file_repeat3,
  [3972] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 1,
      sym_modeline,
    STATE(99), 1,
      aux_sym_help_file_repeat3,
  [3982] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(541), 1,
      sym_modeline,
    STATE(99), 1,
      aux_sym_help_file_repeat3,
  [3992] = 3,
    ACTIONS(541), 1,
      sym_modeline,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
    STATE(99), 1,
      aux_sym_help_file_repeat3,
  [4002] = 3,
    ACTIONS(545), 1,
      anon_sym_STAR,
    ACTIONS(547), 1,
      aux_sym__blank_token1,
    STATE(31), 1,
      sym_tag,
  [4012] = 1,
    ACTIONS(549), 1,
      anon_sym_TILDE,
  [4016] = 1,
    ACTIONS(551), 1,
      aux_sym_codespan_token1,
  [4020] = 1,
    ACTIONS(553), 1,
      aux_sym_codeblock_token2,
  [4024] = 1,
    ACTIONS(454), 1,
      aux_sym_tag_token1,
  [4028] = 1,
    ACTIONS(555), 1,
      anon_sym_BQUOTE2,
  [4032] = 1,
    ACTIONS(557), 1,
      anon_sym_STAR2,
  [4036] = 1,
    ACTIONS(312), 1,
      aux_sym_line_li_token1,
  [4040] = 1,
    ACTIONS(559), 1,
      anon_sym_SQUOTE2,
  [4044] = 1,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
  [4048] = 1,
    ACTIONS(563), 1,
      ts_builtin_sym_end,
  [4052] = 1,
    ACTIONS(565), 1,
      anon_sym_PIPE2,
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
  [SMALL_STATE(29)] = 936,
  [SMALL_STATE(30)] = 1013,
  [SMALL_STATE(31)] = 1088,
  [SMALL_STATE(32)] = 1163,
  [SMALL_STATE(33)] = 1235,
  [SMALL_STATE(34)] = 1307,
  [SMALL_STATE(35)] = 1379,
  [SMALL_STATE(36)] = 1451,
  [SMALL_STATE(37)] = 1501,
  [SMALL_STATE(38)] = 1553,
  [SMALL_STATE(39)] = 1605,
  [SMALL_STATE(40)] = 1655,
  [SMALL_STATE(41)] = 1705,
  [SMALL_STATE(42)] = 1755,
  [SMALL_STATE(43)] = 1805,
  [SMALL_STATE(44)] = 1858,
  [SMALL_STATE(45)] = 1911,
  [SMALL_STATE(46)] = 1955,
  [SMALL_STATE(47)] = 2004,
  [SMALL_STATE(48)] = 2053,
  [SMALL_STATE(49)] = 2096,
  [SMALL_STATE(50)] = 2139,
  [SMALL_STATE(51)] = 2181,
  [SMALL_STATE(52)] = 2223,
  [SMALL_STATE(53)] = 2265,
  [SMALL_STATE(54)] = 2307,
  [SMALL_STATE(55)] = 2349,
  [SMALL_STATE(56)] = 2391,
  [SMALL_STATE(57)] = 2433,
  [SMALL_STATE(58)] = 2475,
  [SMALL_STATE(59)] = 2517,
  [SMALL_STATE(60)] = 2559,
  [SMALL_STATE(61)] = 2601,
  [SMALL_STATE(62)] = 2643,
  [SMALL_STATE(63)] = 2685,
  [SMALL_STATE(64)] = 2726,
  [SMALL_STATE(65)] = 2767,
  [SMALL_STATE(66)] = 2807,
  [SMALL_STATE(67)] = 2847,
  [SMALL_STATE(68)] = 2887,
  [SMALL_STATE(69)] = 2930,
  [SMALL_STATE(70)] = 2970,
  [SMALL_STATE(71)] = 3012,
  [SMALL_STATE(72)] = 3056,
  [SMALL_STATE(73)] = 3098,
  [SMALL_STATE(74)] = 3138,
  [SMALL_STATE(75)] = 3182,
  [SMALL_STATE(76)] = 3224,
  [SMALL_STATE(77)] = 3263,
  [SMALL_STATE(78)] = 3302,
  [SMALL_STATE(79)] = 3341,
  [SMALL_STATE(80)] = 3380,
  [SMALL_STATE(81)] = 3419,
  [SMALL_STATE(82)] = 3456,
  [SMALL_STATE(83)] = 3492,
  [SMALL_STATE(84)] = 3528,
  [SMALL_STATE(85)] = 3564,
  [SMALL_STATE(86)] = 3600,
  [SMALL_STATE(87)] = 3636,
  [SMALL_STATE(88)] = 3672,
  [SMALL_STATE(89)] = 3708,
  [SMALL_STATE(90)] = 3744,
  [SMALL_STATE(91)] = 3780,
  [SMALL_STATE(92)] = 3816,
  [SMALL_STATE(93)] = 3852,
  [SMALL_STATE(94)] = 3888,
  [SMALL_STATE(95)] = 3905,
  [SMALL_STATE(96)] = 3922,
  [SMALL_STATE(97)] = 3936,
  [SMALL_STATE(98)] = 3949,
  [SMALL_STATE(99)] = 3962,
  [SMALL_STATE(100)] = 3972,
  [SMALL_STATE(101)] = 3982,
  [SMALL_STATE(102)] = 3992,
  [SMALL_STATE(103)] = 4002,
  [SMALL_STATE(104)] = 4012,
  [SMALL_STATE(105)] = 4016,
  [SMALL_STATE(106)] = 4020,
  [SMALL_STATE(107)] = 4024,
  [SMALL_STATE(108)] = 4028,
  [SMALL_STATE(109)] = 4032,
  [SMALL_STATE(110)] = 4036,
  [SMALL_STATE(111)] = 4040,
  [SMALL_STATE(112)] = 4044,
  [SMALL_STATE(113)] = 4048,
  [SMALL_STATE(114)] = 4052,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(76),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(68),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(73),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(71),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(110),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(32),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(87),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2, 0, 0), SHIFT_REPEAT(105),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, 0, 8),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, 0, 8),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(76),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(68),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(80),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(93),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(72),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(87),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2, 0, 0), SHIFT_REPEAT(105),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, 0, 12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, 0, 12),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, 0, 11),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, 0, 11),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 8),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 8),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 7),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 7),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 12),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 12),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, 0, 11),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, 0, 11),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, 0, 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, 0, 7),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__column_heading, 1, 1, 0), SHIFT(88),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__column_heading, 2, 1, 0), SHIFT(88),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, 0, 0),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3, 0, 6),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, 0, 6),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, 0, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, 0, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 5, 0, 9),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 5, 0, 9),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 4, 0, 9),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 4, 0, 9),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 5, 0, 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 5, 0, 9),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, 0, 10),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, 0, 10),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3, 0, 9),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3, 0, 9),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3, 0, 9),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3, 0, 9),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 4, 0, 9),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 4, 0, 9),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, 0, 13),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, 0, 13),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2, 0, 0),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, 0, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, 0, 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, 0, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, 0, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, 0, 5),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, 0, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, 0, 5),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, 0, 5),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 4, 0, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, 0, 5),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 5),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, 0, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 3),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, 0, 5),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, 0, 5),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, 0, 5),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, 0, 5),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0), SHIFT_REPEAT(110),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat3, 2, 0, 0),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat3, 2, 0, 0), SHIFT_REPEAT(99),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 3, 0, 0),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [563] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_vimdoc(void) {
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
