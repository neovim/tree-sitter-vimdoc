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
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 1
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 21

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
  anon_sym_LF = 38,
  anon_sym_LF2 = 39,
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
  sym_h1 = 76,
  sym_h2 = 77,
  sym_h3 = 78,
  sym_tag = 79,
  sym_url = 80,
  sym_optionlink = 81,
  sym_taglink = 82,
  sym_codespan = 83,
  sym_argument = 84,
  aux_sym_help_file_repeat1 = 85,
  aux_sym_help_file_repeat2 = 86,
  aux_sym_help_file_repeat3 = 87,
  aux_sym_uppercase_name_repeat1 = 88,
  aux_sym_block_repeat1 = 89,
  aux_sym_block_repeat2 = 90,
  aux_sym_codeblock_repeat1 = 91,
  aux_sym_line_li_repeat1 = 92,
  aux_sym_line_li_repeat2 = 93,
  alias_sym_code = 94,
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
  [sym_modeline] = "modeline",
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
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LF2] = anon_sym_LF,
  [aux_sym_line_li_token1] = aux_sym_line_li_token1,
  [aux_sym_line_code_token1] = aux_sym_line_code_token1,
  [sym_modeline] = sym_modeline,
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
  [sym_modeline] = {
    .visible = true,
    .named = true,
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
  [47] = 43,
  [48] = 44,
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
  [62] = 50,
  [63] = 52,
  [64] = 64,
  [65] = 54,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 67,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '\'') ADVANCE(689);
      if (lookahead == '(') ADVANCE(690);
      if (lookahead == '*') ADVANCE(691);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '>') ADVANCE(689);
      if (lookahead == '?') ADVANCE(689);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'C') ADVANCE(632);
      if (lookahead == 'D') ADVANCE(613);
      if (lookahead == 'M') ADVANCE(617);
      if (lookahead == 'N') ADVANCE(627);
      if (lookahead == 'W') ADVANCE(607);
      if (lookahead == '[') ADVANCE(690);
      if (lookahead == '`') ADVANCE(689);
      if (lookahead == 'h') ADVANCE(675);
      if (lookahead == '{') ADVANCE(680);
      if (lookahead == '|') ADVANCE(689);
      if (lookahead == '}') ADVANCE(689);
      if (lookahead == '~') ADVANCE(689);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ' ') ADVANCE(587);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(63);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(585);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(63);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(689);
      if (lookahead == '(') ADVANCE(690);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(690);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '>') ADVANCE(689);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'C') ADVANCE(632);
      if (lookahead == 'D') ADVANCE(613);
      if (lookahead == 'M') ADVANCE(617);
      if (lookahead == 'N') ADVANCE(627);
      if (lookahead == 'W') ADVANCE(607);
      if (lookahead == '[') ADVANCE(690);
      if (lookahead == '`') ADVANCE(689);
      if (lookahead == 'h') ADVANCE(677);
      if (lookahead == '{') ADVANCE(680);
      if (lookahead == '|') ADVANCE(682);
      if (lookahead == '~') ADVANCE(689);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(689);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == '?') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(63);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(63);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(278);
      if (lookahead == 'C') ADVANCE(287);
      if (lookahead == 'D') ADVANCE(269);
      if (lookahead == 'M') ADVANCE(272);
      if (lookahead == 'N') ADVANCE(282);
      if (lookahead == 'W') ADVANCE(262);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(27);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '<') ADVANCE(583);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(228);
      if (lookahead == 'M') ADVANCE(229);
      if (lookahead == 'N') ADVANCE(231);
      if (lookahead == 'W') ADVANCE(227);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == 8226) ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '<') ADVANCE(583);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(228);
      if (lookahead == 'M') ADVANCE(229);
      if (lookahead == 'N') ADVANCE(231);
      if (lookahead == 'W') ADVANCE(227);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == 8226) ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(583);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(228);
      if (lookahead == 'M') ADVANCE(229);
      if (lookahead == 'N') ADVANCE(231);
      if (lookahead == 'W') ADVANCE(227);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(583);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(228);
      if (lookahead == 'M') ADVANCE(229);
      if (lookahead == 'N') ADVANCE(231);
      if (lookahead == 'W') ADVANCE(227);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead == ',') ADVANCE(427);
      if (lookahead == '<') ADVANCE(366);
      if (lookahead == '>') ADVANCE(424);
      if (lookahead == 'A') ADVANCE(361);
      if (lookahead == 'C') ADVANCE(363);
      if (lookahead == 'D') ADVANCE(359);
      if (lookahead == 'M') ADVANCE(360);
      if (lookahead == 'N') ADVANCE(362);
      if (lookahead == 'W') ADVANCE(358);
      if (lookahead == '[') ADVANCE(415);
      if (lookahead == '`') ADVANCE(797);
      if (lookahead == 'h') ADVANCE(364);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '|') ADVANCE(395);
      if (lookahead == '~') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(41);
      if (lookahead == 'M') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'W') ADVANCE(40);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead == '(') ADVANCE(408);
      if (lookahead == '*') ADVANCE(352);
      if (lookahead == ',') ADVANCE(426);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '>') ADVANCE(422);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'C') ADVANCE(179);
      if (lookahead == 'D') ADVANCE(161);
      if (lookahead == 'M') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(174);
      if (lookahead == 'W') ADVANCE(154);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == '`') ADVANCE(795);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == '{') ADVANCE(397);
      if (lookahead == '|') ADVANCE(393);
      if (lookahead == '~') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(1);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(63);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(791);
      if (lookahead == '(') ADVANCE(792);
      if (lookahead == '*') ADVANCE(791);
      if (lookahead == ',') ADVANCE(792);
      if (lookahead == '<') ADVANCE(789);
      if (lookahead == '>') ADVANCE(791);
      if (lookahead == 'A') ADVANCE(730);
      if (lookahead == 'C') ADVANCE(739);
      if (lookahead == 'D') ADVANCE(720);
      if (lookahead == 'M') ADVANCE(724);
      if (lookahead == 'N') ADVANCE(734);
      if (lookahead == 'W') ADVANCE(714);
      if (lookahead == '[') ADVANCE(792);
      if (lookahead == '`') ADVANCE(791);
      if (lookahead == 'h') ADVANCE(781);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(791);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '<') ADVANCE(897);
      if (lookahead == '>') ADVANCE(423);
      if (lookahead == 'A') ADVANCE(834);
      if (lookahead == 'C') ADVANCE(843);
      if (lookahead == 'D') ADVANCE(824);
      if (lookahead == 'M') ADVANCE(828);
      if (lookahead == 'N') ADVANCE(838);
      if (lookahead == 'W') ADVANCE(817);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == '`') ADVANCE(796);
      if (lookahead == 'h') ADVANCE(886);
      if (lookahead == '{') ADVANCE(400);
      if (lookahead == '|') ADVANCE(396);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead == '~') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(899);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '*') ADVANCE(691);
      if (lookahead == '<') ADVANCE(582);
      if (lookahead == '`') ADVANCE(799);
      if (lookahead == '|') ADVANCE(793);
      if (lookahead == '}') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(588);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead == '-') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(350);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(455);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(798);
      END_STATE();
    case 30:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(63);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(392);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(278);
      if (lookahead == 'C') ADVANCE(287);
      if (lookahead == 'D') ADVANCE(269);
      if (lookahead == 'M') ADVANCE(272);
      if (lookahead == 'N') ADVANCE(282);
      if (lookahead == 'W') ADVANCE(262);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == 'v') ADVANCE(307);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '-' ||
          lookahead == 8226) ADVANCE(27);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(586);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '<') ADVANCE(583);
      if (lookahead == '=') ADVANCE(258);
      if (lookahead == '>') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(228);
      if (lookahead == 'M') ADVANCE(229);
      if (lookahead == 'N') ADVANCE(231);
      if (lookahead == 'W') ADVANCE(227);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == '`') ADVANCE(794);
      if (lookahead == 'h') ADVANCE(327);
      if (lookahead == 'v') ADVANCE(307);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '|') ADVANCE(394);
      if (lookahead == '~') ADVANCE(417);
      if (lookahead == 8226) ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == 's') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == ':') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == 'p') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(584);
      if (lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\n') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'A') ADVANCE(569);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(567);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(572);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'L') ADVANCE(571);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'O') ADVANCE(573);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(568);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '>') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
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
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(429);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '>') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(28);
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
      if (lookahead == '>') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'B') ADVANCE(483);
      if (lookahead == 'D') ADVANCE(479);
      if (lookahead == 'I') ADVANCE(481);
      if (lookahead == 'P') ADVANCE(475);
      if (lookahead == 'S') ADVANCE(473);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'C') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'U') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'F') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'G') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'k') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(135);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(695);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(500);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(495);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(486);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ',' &&
          lookahead != '[') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(20);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(591);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '>') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ':') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ':') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '>') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '>') ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '>') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'A') ADVANCE(176);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'A') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'A') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'B') ADVANCE(464);
      if (lookahead == 'D') ADVANCE(462);
      if (lookahead == 'I') ADVANCE(463);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == 'S') ADVANCE(459);
      if (lookahead == '{') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(466);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'C') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'D') ADVANCE(205);
      if (lookahead == 'U') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'E') ADVANCE(175);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'E') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'E') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'E') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'F') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'I') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'L') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'L') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'N') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'N') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'O') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'P') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'R') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'R') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'T') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'T') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'T') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'g') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'g') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'h') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'k') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'l') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'p') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'p') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'w') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(693);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(226);
      if (lookahead != 0) ADVANCE(692);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(502);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(497);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(488);
      if (lookahead != 0) ADVANCE(487);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'A') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'E') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'E') ADVANCE(533);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'L') ADVANCE(532);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'O') ADVANCE(534);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(529);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '>') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '-') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(429);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(331);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == ':') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '>') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'B') ADVANCE(484);
      if (lookahead == 'D') ADVANCE(480);
      if (lookahead == 'I') ADVANCE(482);
      if (lookahead == 'P') ADVANCE(476);
      if (lookahead == 'S') ADVANCE(474);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'C') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(315);
      if (lookahead == 'U') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'D') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'E') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'F') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'G') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'I') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'L') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'N') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'N') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'O') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'R') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'T') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'c') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'h') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'k') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'p') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'r') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 's') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(696);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(694);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(500);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(495);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(486);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_word_noli_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(592);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_word_noli_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(383);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(382);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'E') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'L') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(385);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'T') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(388);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(388);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__word_common_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(429);
      if (lookahead == 's') ADVANCE(369);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(435);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == ':') ADVANCE(438);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '>') ADVANCE(451);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'a') ADVANCE(386);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'c') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'd') ADVANCE(447);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(373);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'e') ADVANCE(374);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'g') ADVANCE(370);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'i') ADVANCE(381);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'n') ADVANCE(379);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'n') ADVANCE(378);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'p') ADVANCE(384);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'r') ADVANCE(380);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 'r') ADVANCE(376);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 't') ADVANCE(375);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == 't') ADVANCE(377);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(696);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(695);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__word_common_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '|') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__word_common_token3);
      if (lookahead == '|') ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '|') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(391);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(403);
      if (lookahead == '}') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(405);
      if (lookahead == '}') ADVANCE(401);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(405);
      if (lookahead == '}') ADVANCE(401);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(889);
      if (lookahead == '}') ADVANCE(401);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(899);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '{') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (lookahead == '{') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__word_common_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(581);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(900);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(900);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_GT);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(900);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_Note_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_NOTE_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_Notes_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_Warning_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_WARNING_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_Deprecated);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_DEPRECATED_COLON);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '>') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_keycode_token1);
      if (lookahead == '>') ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_keycode_token2);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'H') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(77);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'H') ADVANCE(276);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'a') ADVANCE(304);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_keycode_token3);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(581);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_keycode_token4);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(581);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_keycode_token5);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_CTRL_DASH_LBRACEchar_RBRACE);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_keycode_token6);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(581);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_keycode_token7);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(581);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ':') ADVANCE(432);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ':') ADVANCE(441);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'A') ADVANCE(535);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'A') ADVANCE(507);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'B') ADVANCE(540);
      if (lookahead == 'D') ADVANCE(538);
      if (lookahead == 'I') ADVANCE(539);
      if (lookahead == 'P') ADVANCE(537);
      if (lookahead == 'S') ADVANCE(522);
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(458);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'C') ADVANCE(512);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'D') ADVANCE(511);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'E') ADVANCE(509);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'E') ADVANCE(516);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'G') ADVANCE(510);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'H') ADVANCE(523);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'I') ADVANCE(520);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'I') ADVANCE(527);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'L') ADVANCE(506);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'N') ADVANCE(524);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'N') ADVANCE(521);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'P') ADVANCE(531);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'R') ADVANCE(525);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'R') ADVANCE(526);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'R') ADVANCE(518);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(505);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(513);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(517);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(519);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'T') ADVANCE(508);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == 'r') ADVANCE(302);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(500);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(500);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(495);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(495);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '[') ADVANCE(486);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(486);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(') ADVANCE(545);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == '-') ADVANCE(577);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ':') ADVANCE(432);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ':') ADVANCE(441);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ':') ADVANCE(448);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'A') ADVANCE(574);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'A') ADVANCE(548);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'C') ADVANCE(553);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'D') ADVANCE(552);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(550);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(555);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'E') ADVANCE(556);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'G') ADVANCE(551);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'I') ADVANCE(560);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'I') ADVANCE(566);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'L') ADVANCE(547);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'N') ADVANCE(563);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'N') ADVANCE(561);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'P') ADVANCE(570);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'R') ADVANCE(564);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'R') ADVANCE(565);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'R') ADVANCE(558);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(546);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(554);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(557);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(559);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(549);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(500);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(500);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(485);
      if (lookahead == 'B') ADVANCE(471);
      if (lookahead == 'D') ADVANCE(469);
      if (lookahead == 'I') ADVANCE(470);
      if (lookahead == 'P') ADVANCE(468);
      if (lookahead == 'S') ADVANCE(467);
      if (lookahead == '{') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(458);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(458);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(495);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(495);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(486);
      if (lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(486);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_uppercase_name_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_codeblock_token1);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == ' ') ADVANCE(587);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_line_li_token1);
      if (lookahead == ' ') ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_line_code_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_modeline);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_h1_token1);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_h2_token1);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(609);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '-') ADVANCE(605);
      if (lookahead == '>') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(684);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(684);
      if (lookahead == 's') ADVANCE(601);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(684);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ':') ADVANCE(684);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(690);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '>') ADVANCE(603);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(603);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'A') ADVANCE(636);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'B') ADVANCE(670);
      if (lookahead == 'D') ADVANCE(646);
      if (lookahead == 'I') ADVANCE(660);
      if (lookahead == 'P') ADVANCE(638);
      if (lookahead == 'S') ADVANCE(620);
      if (lookahead == '{') ADVANCE(641);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'C') ADVANCE(608);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(597);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'D') ADVANCE(661);
      if (lookahead == 'U') ADVANCE(662);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(597);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(610);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(611);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'E') ADVANCE(634);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'G') ADVANCE(597);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'H') ADVANCE(621);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(618);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'I') ADVANCE(626);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(633);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'L') ADVANCE(594);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'N') ADVANCE(622);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'N') ADVANCE(619);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'O') ADVANCE(635);
      if (lookahead == 'o') ADVANCE(673);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'P') ADVANCE(631);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(625);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(624);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'R') ADVANCE(615);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(630);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(593);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(606);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(614);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'T') ADVANCE(616);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(652);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(653);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'c') ADVANCE(640);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'd') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(642);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(597);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'g') ADVANCE(647);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'h') ADVANCE(639);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'i') ADVANCE(659);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'k') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(654);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(671);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(598);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(669);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'p') ADVANCE(599);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(658);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(683);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(672);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(645);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(650);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(644);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(663);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(665);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(676);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'w') ADVANCE(657);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead == '}') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '{') ADVANCE(681);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '|') ADVANCE(682);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '}') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(689);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(689);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '*') ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(693);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(226);
      if (lookahead != 0) ADVANCE(692);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ')' ||
          lookahead == ']') ADVANCE(24);
      if (lookahead != 0) ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(695);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_url_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(696);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == 's') ADVANCE(698);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(388);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(388);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 'p') ADVANCE(697);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(388);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(388);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_optionlink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(388);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(716);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '-') ADVANCE(712);
      if (lookahead == '>') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(791);
      if (lookahead == 's') ADVANCE(706);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(787);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ':') ADVANCE(787);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(792);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '>') ADVANCE(710);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(710);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(736);
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'A') ADVANCE(743);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'B') ADVANCE(775);
      if (lookahead == 'D') ADVANCE(753);
      if (lookahead == 'I') ADVANCE(767);
      if (lookahead == 'P') ADVANCE(745);
      if (lookahead == 'S') ADVANCE(727);
      if (lookahead == '{') ADVANCE(748);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'C') ADVANCE(715);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(706);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'D') ADVANCE(768);
      if (lookahead == 'U') ADVANCE(769);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(735);
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(706);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(717);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(718);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'E') ADVANCE(741);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'F') ADVANCE(740);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'G') ADVANCE(706);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'H') ADVANCE(728);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(725);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'I') ADVANCE(733);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(740);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'L') ADVANCE(703);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'N') ADVANCE(729);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'N') ADVANCE(726);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'O') ADVANCE(742);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'P') ADVANCE(738);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(732);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(731);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'R') ADVANCE(722);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(737);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(702);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(713);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(721);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'T') ADVANCE(723);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(782);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'c') ADVANCE(746);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'd') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(719);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(776);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'e') ADVANCE(744);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(706);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'g') ADVANCE(754);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'h') ADVANCE(747);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'k') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'l') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(761);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(758);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'n') ADVANCE(777);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(774);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'p') ADVANCE(707);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(765);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(752);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(757);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'r') ADVANCE(778);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 's') ADVANCE(756);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(751);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(780);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == 'w') ADVANCE(764);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(785);
      if (lookahead == '}') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '{') ADVANCE(785);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '}') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(791);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_taglink_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '|') ADVANCE(792);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\n') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(388);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_codespan_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(798);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(816);
      if (lookahead == '>') ADVANCE(899);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(891);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(820);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(892);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(896);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(894);
      if (lookahead == 's') ADVANCE(808);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(894);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(450);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(899);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(899);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(900);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '>') ADVANCE(814);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(814);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(840);
      if (lookahead == 'a') ADVANCE(877);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(847);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'A') ADVANCE(803);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'B') ADVANCE(880);
      if (lookahead == 'D') ADVANCE(858);
      if (lookahead == 'I') ADVANCE(872);
      if (lookahead == 'P') ADVANCE(850);
      if (lookahead == 'S') ADVANCE(831);
      if (lookahead == '{') ADVANCE(853);
      if (lookahead == '}') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(899);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'C') ADVANCE(818);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(873);
      if (lookahead == 'U') ADVANCE(874);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'D') ADVANCE(812);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(839);
      if (lookahead == 'e') ADVANCE(875);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(805);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(821);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(823);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'E') ADVANCE(845);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'F') ADVANCE(848);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'G') ADVANCE(810);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'H') ADVANCE(832);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(829);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'I') ADVANCE(837);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(844);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'L') ADVANCE(802);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'N') ADVANCE(833);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'N') ADVANCE(830);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'O') ADVANCE(846);
      if (lookahead == 'o') ADVANCE(884);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'P') ADVANCE(842);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(836);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(835);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'R') ADVANCE(826);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(841);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(801);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(819);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(825);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(827);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'T') ADVANCE(804);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(867);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(864);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(887);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(878);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(865);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'c') ADVANCE(851);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'd') ADVANCE(446);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(868);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(822);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(849);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(811);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'g') ADVANCE(859);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'h') ADVANCE(852);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'k') ADVANCE(899);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'l') ADVANCE(899);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(899);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(866);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(863);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(882);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'o') ADVANCE(888);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(899);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(879);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(807);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(870);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(895);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(857);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(862);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'r') ADVANCE(883);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 's') ADVANCE(861);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(899);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(856);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(876);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(885);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'w') ADVANCE(869);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '{') ADVANCE(889);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '|') ADVANCE(890);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(899);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(899);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(696);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(893);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(695);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(899);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(899);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(486);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(899);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'D' ||
          lookahead == 'M' ||
          lookahead == 'S') ADVANCE(800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '(' ||
          lookahead == ',' ||
          lookahead == '[') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(899);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '}') ADVANCE(900);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_QMARK);
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
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 32},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 18},
  [96] = {.lex_state = 18},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 32},
  [100] = {.lex_state = 32},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 32},
  [103] = {.lex_state = 32},
  [104] = {.lex_state = 32},
  [105] = {.lex_state = 32},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 18},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 18},
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
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_help_file] = STATE(107),
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(102),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(4),
    [sym_codeblock] = STATE(60),
    [sym__blank] = STATE(46),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(95),
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
    [aux_sym_help_file_repeat3] = STATE(101),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(95),
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
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(102),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(3),
    [sym_codeblock] = STATE(60),
    [sym__blank] = STATE(46),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(95),
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
    [aux_sym_help_file_repeat1] = STATE(33),
    [aux_sym_help_file_repeat2] = STATE(3),
    [aux_sym_help_file_repeat3] = STATE(104),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(95),
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
    [anon_sym_LF2] = ACTIONS(29),
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
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(102),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(60),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(95),
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
    [aux_sym_help_file_repeat3] = STATE(100),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(95),
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
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(102),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(60),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(95),
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
    [aux_sym_help_file_repeat3] = STATE(99),
    [aux_sym_block_repeat1] = STATE(6),
    [aux_sym_block_repeat2] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(51),
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
    [sym_modeline] = ACTIONS(53),
    [aux_sym_h1_token1] = ACTIONS(35),
    [aux_sym_h2_token1] = ACTIONS(37),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [5] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(102),
    [sym__uppercase_words] = STATE(18),
    [sym_block] = STATE(5),
    [sym_codeblock] = STATE(60),
    [sym_line] = STATE(6),
    [sym_line_li] = STATE(95),
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
    [aux_sym_block_repeat2] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(55),
    [aux_sym_word_noli_token1] = ACTIONS(57),
    [aux_sym_word_noli_token2] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [aux_sym__word_common_token3] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(66),
    [aux_sym__word_common_token4] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_TILDE] = ACTIONS(66),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_Note_COLON] = ACTIONS(78),
    [anon_sym_NOTE_COLON] = ACTIONS(78),
    [anon_sym_Notes_COLON] = ACTIONS(78),
    [anon_sym_Warning_COLON] = ACTIONS(78),
    [anon_sym_WARNING_COLON] = ACTIONS(78),
    [anon_sym_Deprecated] = ACTIONS(78),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(78),
    [aux_sym_keycode_token1] = ACTIONS(81),
    [aux_sym_keycode_token2] = ACTIONS(81),
    [aux_sym_keycode_token3] = ACTIONS(81),
    [aux_sym_keycode_token4] = ACTIONS(81),
    [aux_sym_keycode_token5] = ACTIONS(84),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(84),
    [aux_sym_keycode_token6] = ACTIONS(81),
    [aux_sym_keycode_token7] = ACTIONS(81),
    [aux_sym_uppercase_name_token1] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(90),
    [aux_sym_line_li_token1] = ACTIONS(93),
    [sym_modeline] = ACTIONS(55),
    [aux_sym_h1_token1] = ACTIONS(96),
    [aux_sym_h2_token1] = ACTIONS(99),
    [sym_url_word] = ACTIONS(102),
    [anon_sym_BQUOTE] = ACTIONS(105),
  },
  [6] = {
    [sym__atom_noli] = STATE(18),
    [sym_word_noli] = STATE(18),
    [sym__atom_common] = STATE(18),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(102),
    [sym__uppercase_words] = STATE(18),
    [sym_codeblock] = STATE(60),
    [sym__blank] = STATE(40),
    [sym_line] = STATE(7),
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
    [aux_sym_block_repeat1] = STATE(7),
    [aux_sym_block_repeat2] = STATE(94),
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
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_LF2] = ACTIONS(29),
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
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(18),
    [sym_keycode] = STATE(18),
    [sym_uppercase_name] = STATE(102),
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
    [aux_sym_word_noli_token1] = ACTIONS(110),
    [aux_sym_word_noli_token2] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [aux_sym__word_common_token3] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(119),
    [aux_sym__word_common_token4] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_Note_COLON] = ACTIONS(131),
    [anon_sym_NOTE_COLON] = ACTIONS(131),
    [anon_sym_Notes_COLON] = ACTIONS(131),
    [anon_sym_Warning_COLON] = ACTIONS(131),
    [anon_sym_WARNING_COLON] = ACTIONS(131),
    [anon_sym_Deprecated] = ACTIONS(131),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(131),
    [aux_sym_keycode_token1] = ACTIONS(134),
    [aux_sym_keycode_token2] = ACTIONS(134),
    [aux_sym_keycode_token3] = ACTIONS(134),
    [aux_sym_keycode_token4] = ACTIONS(134),
    [aux_sym_keycode_token5] = ACTIONS(137),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(137),
    [aux_sym_keycode_token6] = ACTIONS(134),
    [aux_sym_keycode_token7] = ACTIONS(134),
    [aux_sym_uppercase_name_token1] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_LF2] = ACTIONS(145),
    [aux_sym_line_li_token1] = ACTIONS(145),
    [aux_sym_h1_token1] = ACTIONS(147),
    [aux_sym_h2_token1] = ACTIONS(150),
    [sym_url_word] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(156),
  },
  [8] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(17),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(64),
    [sym_tag] = STATE(17),
    [sym_url] = STATE(17),
    [sym_optionlink] = STATE(17),
    [sym_taglink] = STATE(17),
    [sym_codespan] = STATE(17),
    [sym_argument] = STATE(17),
    [aux_sym_line_li_repeat2] = STATE(8),
    [aux_sym_word_noli_token1] = ACTIONS(159),
    [aux_sym_word_noli_token2] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [aux_sym__word_common_token3] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(162),
    [aux_sym__word_common_token4] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_Note_COLON] = ACTIONS(177),
    [anon_sym_NOTE_COLON] = ACTIONS(177),
    [anon_sym_Notes_COLON] = ACTIONS(177),
    [anon_sym_Warning_COLON] = ACTIONS(177),
    [anon_sym_WARNING_COLON] = ACTIONS(177),
    [anon_sym_Deprecated] = ACTIONS(177),
    [anon_sym_DEPRECATED_COLON] = ACTIONS(177),
    [aux_sym_keycode_token1] = ACTIONS(180),
    [aux_sym_keycode_token2] = ACTIONS(180),
    [aux_sym_keycode_token3] = ACTIONS(180),
    [aux_sym_keycode_token4] = ACTIONS(180),
    [aux_sym_keycode_token5] = ACTIONS(183),
    [anon_sym_CTRL_DASH_LBRACEchar_RBRACE] = ACTIONS(183),
    [aux_sym_keycode_token6] = ACTIONS(180),
    [aux_sym_keycode_token7] = ACTIONS(180),
    [aux_sym_uppercase_name_token1] = ACTIONS(186),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LF2] = ACTIONS(191),
    [aux_sym_line_li_token1] = ACTIONS(191),
    [sym_url_word] = ACTIONS(193),
    [anon_sym_BQUOTE] = ACTIONS(196),
  },
  [9] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(17),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(64),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_LF2] = ACTIONS(203),
    [aux_sym_line_li_token1] = ACTIONS(203),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [10] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(17),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(64),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_LF2] = ACTIONS(207),
    [aux_sym_line_li_token1] = ACTIONS(207),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [11] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(17),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(64),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(209),
    [anon_sym_LF2] = ACTIONS(211),
    [aux_sym_line_li_token1] = ACTIONS(211),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [12] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(17),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(64),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_LF2] = ACTIONS(215),
    [aux_sym_line_li_token1] = ACTIONS(215),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [13] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(17),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(64),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_LF2] = ACTIONS(219),
    [aux_sym_line_li_token1] = ACTIONS(219),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [14] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(17),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(64),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_LF2] = ACTIONS(223),
    [aux_sym_line_li_token1] = ACTIONS(223),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [15] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(17),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(64),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_LF2] = ACTIONS(227),
    [aux_sym_line_li_token1] = ACTIONS(227),
    [sym_url_word] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(41),
  },
  [16] = {
    [sym__atom_noli] = STATE(17),
    [sym_word_noli] = STATE(17),
    [sym__atom_common] = STATE(17),
    [sym__word_common] = STATE(85),
    [sym_note] = STATE(17),
    [sym_keycode] = STATE(17),
    [sym__uppercase_words] = STATE(17),
    [sym__line_noli] = STATE(64),
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
    [aux_sym_uppercase_name_token1] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_LF2] = ACTIONS(231),
    [aux_sym_line_li_token1] = ACTIONS(231),
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
    ACTIONS(233), 1,
      aux_sym_word_token1,
    ACTIONS(237), 1,
      anon_sym_GT,
    ACTIONS(239), 1,
      anon_sym_LF2,
    STATE(20), 1,
      aux_sym_line_li_repeat1,
    STATE(63), 1,
      sym_codeblock,
    STATE(84), 1,
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
    ACTIONS(235), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(233), 1,
      aux_sym_word_token1,
    ACTIONS(241), 1,
      anon_sym_TILDE,
    ACTIONS(243), 1,
      anon_sym_LF2,
    STATE(21), 1,
      aux_sym_line_li_repeat1,
    STATE(52), 1,
      sym_codeblock,
    STATE(84), 1,
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
    ACTIONS(235), 6,
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
    STATE(88), 11,
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
    ACTIONS(233), 1,
      aux_sym_word_token1,
    ACTIONS(237), 1,
      anon_sym_GT,
    ACTIONS(245), 1,
      anon_sym_LF2,
    STATE(13), 1,
      sym_codeblock,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
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
    ACTIONS(235), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(233), 1,
      aux_sym_word_token1,
    ACTIONS(237), 1,
      anon_sym_GT,
    ACTIONS(247), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(65), 1,
      sym_codeblock,
    STATE(84), 1,
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
    ACTIONS(235), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(233), 1,
      aux_sym_word_token1,
    ACTIONS(249), 1,
      anon_sym_TILDE,
    ACTIONS(251), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(54), 1,
      sym_codeblock,
    STATE(84), 1,
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
    ACTIONS(235), 6,
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
    STATE(88), 11,
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
    ACTIONS(233), 1,
      aux_sym_word_token1,
    ACTIONS(237), 1,
      anon_sym_GT,
    ACTIONS(253), 1,
      anon_sym_LF2,
    STATE(15), 1,
      sym_codeblock,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
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
    ACTIONS(235), 7,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(255), 1,
      aux_sym_word_token1,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_LF2,
    ACTIONS(284), 1,
      sym_url_word,
    ACTIONS(287), 1,
      anon_sym_BQUOTE,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
      sym__word_common,
    ACTIONS(276), 3,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(279), 5,
      aux_sym_keycode_token4,
      aux_sym_keycode_token5,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      aux_sym_keycode_token6,
      aux_sym_keycode_token7,
    ACTIONS(273), 7,
      anon_sym_Note_COLON,
      anon_sym_NOTE_COLON,
      anon_sym_Notes_COLON,
      anon_sym_Warning_COLON,
      anon_sym_WARNING_COLON,
      anon_sym_Deprecated,
      anon_sym_DEPRECATED_COLON,
    ACTIONS(264), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(233), 1,
      aux_sym_word_token1,
    ACTIONS(290), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
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
    ACTIONS(235), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      aux_sym_word_token1,
    ACTIONS(292), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
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
    ACTIONS(235), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(233), 1,
      aux_sym_word_token1,
    ACTIONS(294), 1,
      anon_sym_LF2,
    STATE(23), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
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
    ACTIONS(235), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(233), 1,
      aux_sym_word_token1,
    ACTIONS(296), 1,
      anon_sym_LF2,
    STATE(25), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
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
    ACTIONS(235), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      aux_sym_word_token1,
    STATE(24), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
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
    ACTIONS(235), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      aux_sym_word_token1,
    STATE(26), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
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
    ACTIONS(235), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      aux_sym_word_token1,
    STATE(22), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
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
    ACTIONS(235), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(88), 11,
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
    ACTIONS(39), 1,
      sym_url_word,
    ACTIONS(41), 1,
      anon_sym_BQUOTE,
    ACTIONS(233), 1,
      aux_sym_word_token1,
    STATE(19), 1,
      aux_sym_line_li_repeat1,
    STATE(84), 1,
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
    ACTIONS(235), 8,
      aux_sym__word_common_token3,
      anon_sym_LBRACE_RBRACE,
      aux_sym__word_common_token4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_GT,
      anon_sym_COMMA,
    STATE(88), 11,
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
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(300), 13,
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
    ACTIONS(298), 25,
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
  [1199] = 5,
    ACTIONS(306), 1,
      anon_sym_LF2,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(304), 13,
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
    ACTIONS(302), 25,
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
  [1251] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(311), 13,
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
    ACTIONS(309), 25,
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
  [1303] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(315), 13,
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
    ACTIONS(313), 25,
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
  [1355] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(300), 13,
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
    ACTIONS(298), 25,
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
  [1407] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(34), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(319), 13,
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
    ACTIONS(317), 25,
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
  [1459] = 6,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(325), 1,
      aux_sym_line_li_token1,
    STATE(35), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
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
    ACTIONS(321), 24,
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
  [1513] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(33), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(319), 13,
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
    ACTIONS(317), 25,
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
  [1565] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(32), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(329), 13,
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
    ACTIONS(327), 25,
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
  [1617] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    STATE(36), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(329), 13,
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
    ACTIONS(327), 25,
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
  [1669] = 6,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(325), 1,
      aux_sym_line_li_token1,
    STATE(39), 1,
      aux_sym_help_file_repeat1,
    STATE(46), 1,
      sym__blank,
    ACTIONS(333), 13,
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
    ACTIONS(331), 24,
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
  [1723] = 6,
    ACTIONS(337), 1,
      anon_sym_LF2,
    ACTIONS(340), 1,
      aux_sym_line_code_token1,
    STATE(43), 1,
      aux_sym_codeblock_repeat1,
    STATE(49), 1,
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
  [1776] = 6,
    ACTIONS(347), 1,
      anon_sym_LF2,
    ACTIONS(349), 1,
      aux_sym_line_code_token1,
    STATE(43), 1,
      aux_sym_codeblock_repeat1,
    STATE(49), 1,
      sym_line_code,
    ACTIONS(351), 2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(345), 34,
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
  [1829] = 2,
    ACTIONS(355), 13,
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
    ACTIONS(353), 26,
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
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1873] = 2,
    ACTIONS(359), 13,
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
    ACTIONS(357), 26,
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
      sym_modeline,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
      sym_url_word,
      anon_sym_BQUOTE,
  [1917] = 5,
    ACTIONS(361), 1,
      anon_sym_LF2,
    ACTIONS(364), 1,
      aux_sym_line_code_token1,
    STATE(47), 1,
      aux_sym_codeblock_repeat1,
    STATE(61), 1,
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
  [1966] = 5,
    ACTIONS(367), 1,
      anon_sym_LF2,
    ACTIONS(369), 1,
      aux_sym_line_code_token1,
    STATE(47), 1,
      aux_sym_codeblock_repeat1,
    STATE(61), 1,
      sym_line_code,
    ACTIONS(345), 34,
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
  [2015] = 2,
    ACTIONS(373), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(371), 35,
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
  [2058] = 2,
    ACTIONS(377), 3,
      anon_sym_LF2,
      aux_sym_h1_token1,
      aux_sym_h2_token1,
    ACTIONS(375), 35,
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
  [2101] = 2,
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
  [2143] = 2,
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
  [2185] = 2,
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
  [2227] = 2,
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
  [2269] = 2,
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
  [2311] = 2,
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
  [2353] = 2,
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
  [2395] = 2,
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
  [2437] = 2,
    ACTIONS(411), 13,
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
    ACTIONS(413), 24,
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
  [2479] = 2,
    ACTIONS(415), 13,
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
    ACTIONS(417), 24,
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
  [2521] = 2,
    ACTIONS(373), 1,
      anon_sym_LF2,
    ACTIONS(371), 35,
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
  [2562] = 2,
    ACTIONS(377), 1,
      anon_sym_LF2,
    ACTIONS(375), 35,
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
  [2603] = 2,
    ACTIONS(383), 12,
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
    ACTIONS(385), 23,
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
  [2643] = 2,
    ACTIONS(419), 12,
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
    ACTIONS(421), 23,
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
  [2683] = 2,
    ACTIONS(391), 12,
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
    ACTIONS(393), 23,
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
  [2723] = 4,
    ACTIONS(429), 1,
      aux_sym_optionlink_token1,
    ACTIONS(427), 2,
      aux_sym__word_common_token1,
      aux_sym__word_common_token2,
    ACTIONS(423), 15,
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
    ACTIONS(425), 16,
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
  [2766] = 3,
    ACTIONS(431), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(423), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(425), 24,
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
  [2806] = 4,
    ACTIONS(437), 1,
      aux_sym_uppercase_name_token2,
    STATE(68), 1,
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
  [2848] = 4,
    ACTIONS(444), 1,
      aux_sym_uppercase_name_token2,
    STATE(68), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(440), 10,
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
      anon_sym_LF2,
      sym_url_word,
      anon_sym_BQUOTE,
  [2890] = 5,
    ACTIONS(444), 1,
      aux_sym_uppercase_name_token2,
    STATE(73), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(448), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(446), 10,
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
    ACTIONS(450), 19,
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
  [2934] = 4,
    ACTIONS(444), 1,
      aux_sym_uppercase_name_token2,
    STATE(69), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(446), 10,
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
  [2976] = 3,
    ACTIONS(452), 2,
      aux_sym_codeblock_token1,
      anon_sym_LF,
    ACTIONS(423), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(425), 24,
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
  [3016] = 5,
    ACTIONS(444), 1,
      aux_sym_uppercase_name_token2,
    STATE(68), 1,
      aux_sym_uppercase_name_repeat1,
    ACTIONS(454), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(440), 10,
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
  [3060] = 3,
    ACTIONS(460), 1,
      anon_sym_SQUOTE2,
    ACTIONS(456), 7,
      aux_sym_word_token1,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(458), 24,
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
  [3099] = 3,
    ACTIONS(462), 1,
      aux_sym_tag_token1,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_LF2,
    ACTIONS(423), 29,
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
  [3138] = 2,
    ACTIONS(464), 11,
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
    ACTIONS(466), 21,
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
  [3175] = 3,
    ACTIONS(468), 1,
      aux_sym_taglink_token1,
    ACTIONS(425), 2,
      aux_sym__word_common_token3,
      anon_sym_LF2,
    ACTIONS(423), 29,
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
  [3214] = 3,
    ACTIONS(474), 1,
      anon_sym_QMARK,
    ACTIONS(470), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(472), 25,
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
  [3253] = 3,
    ACTIONS(476), 1,
      anon_sym_LF,
    ACTIONS(423), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(425), 24,
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
  [3292] = 3,
    ACTIONS(478), 1,
      anon_sym_LF,
    ACTIONS(423), 7,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
      anon_sym_LF2,
    ACTIONS(425), 24,
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
  [3331] = 3,
    ACTIONS(480), 1,
      aux_sym_argument_token1,
    ACTIONS(425), 3,
      anon_sym_LBRACE_RBRACE,
      anon_sym_CTRL_DASH_LBRACEchar_RBRACE,
      anon_sym_LF2,
    ACTIONS(423), 28,
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
  [3370] = 2,
    ACTIONS(482), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(484), 25,
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
  [3406] = 2,
    ACTIONS(486), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(488), 25,
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
  [3442] = 2,
    ACTIONS(490), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(492), 25,
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
  [3478] = 2,
    ACTIONS(494), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(496), 25,
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
  [3514] = 2,
    ACTIONS(498), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(500), 25,
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
  [3550] = 2,
    ACTIONS(502), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(504), 25,
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
  [3586] = 2,
    ACTIONS(506), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(508), 25,
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
  [3622] = 2,
    ACTIONS(510), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(512), 25,
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
  [3658] = 2,
    ACTIONS(514), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(516), 25,
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
  [3694] = 2,
    ACTIONS(518), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(520), 25,
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
  [3730] = 2,
    ACTIONS(522), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(524), 25,
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
  [3766] = 2,
    ACTIONS(526), 6,
      aux_sym_word_token1,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      aux_sym_keycode_token1,
      aux_sym_keycode_token2,
      aux_sym_keycode_token3,
    ACTIONS(528), 25,
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
  [3802] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(530), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym__blank,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3819] = 5,
    ACTIONS(29), 1,
      anon_sym_LF2,
    ACTIONS(31), 1,
      aux_sym_line_li_token1,
    ACTIONS(532), 1,
      anon_sym_LT,
    STATE(41), 1,
      sym__blank,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3836] = 4,
    ACTIONS(534), 1,
      anon_sym_LT,
    ACTIONS(537), 1,
      anon_sym_LF2,
    ACTIONS(539), 1,
      aux_sym_line_li_token1,
    STATE(96), 2,
      sym_line_li,
      aux_sym_block_repeat2,
  [3850] = 4,
    ACTIONS(347), 1,
      anon_sym_LF2,
    ACTIONS(349), 1,
      aux_sym_line_code_token1,
    STATE(44), 1,
      aux_sym_codeblock_repeat1,
    STATE(49), 1,
      sym_line_code,
  [3863] = 4,
    ACTIONS(367), 1,
      anon_sym_LF2,
    ACTIONS(369), 1,
      aux_sym_line_code_token1,
    STATE(48), 1,
      aux_sym_codeblock_repeat1,
    STATE(61), 1,
      sym_line_code,
  [3876] = 3,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 1,
      sym_modeline,
    STATE(103), 1,
      aux_sym_help_file_repeat3,
  [3886] = 3,
    ACTIONS(544), 1,
      sym_modeline,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      aux_sym_help_file_repeat3,
  [3896] = 3,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 1,
      sym_modeline,
    STATE(103), 1,
      aux_sym_help_file_repeat3,
  [3906] = 3,
    ACTIONS(548), 1,
      anon_sym_STAR,
    ACTIONS(550), 1,
      anon_sym_LF2,
    STATE(27), 1,
      sym_tag,
  [3916] = 3,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    ACTIONS(554), 1,
      sym_modeline,
    STATE(103), 1,
      aux_sym_help_file_repeat3,
  [3926] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(544), 1,
      sym_modeline,
    STATE(103), 1,
      aux_sym_help_file_repeat3,
  [3936] = 1,
    ACTIONS(325), 1,
      aux_sym_line_li_token1,
  [3940] = 1,
    ACTIONS(557), 1,
      aux_sym_codespan_token1,
  [3944] = 1,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
  [3948] = 1,
    ACTIONS(462), 1,
      aux_sym_tag_token1,
  [3952] = 1,
    ACTIONS(561), 1,
      anon_sym_BQUOTE2,
  [3956] = 1,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
  [3960] = 1,
    ACTIONS(565), 1,
      anon_sym_PIPE2,
  [3964] = 1,
    ACTIONS(567), 1,
      anon_sym_SQUOTE2,
  [3968] = 1,
    ACTIONS(569), 1,
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
  [SMALL_STATE(33)] = 1199,
  [SMALL_STATE(34)] = 1251,
  [SMALL_STATE(35)] = 1303,
  [SMALL_STATE(36)] = 1355,
  [SMALL_STATE(37)] = 1407,
  [SMALL_STATE(38)] = 1459,
  [SMALL_STATE(39)] = 1513,
  [SMALL_STATE(40)] = 1565,
  [SMALL_STATE(41)] = 1617,
  [SMALL_STATE(42)] = 1669,
  [SMALL_STATE(43)] = 1723,
  [SMALL_STATE(44)] = 1776,
  [SMALL_STATE(45)] = 1829,
  [SMALL_STATE(46)] = 1873,
  [SMALL_STATE(47)] = 1917,
  [SMALL_STATE(48)] = 1966,
  [SMALL_STATE(49)] = 2015,
  [SMALL_STATE(50)] = 2058,
  [SMALL_STATE(51)] = 2101,
  [SMALL_STATE(52)] = 2143,
  [SMALL_STATE(53)] = 2185,
  [SMALL_STATE(54)] = 2227,
  [SMALL_STATE(55)] = 2269,
  [SMALL_STATE(56)] = 2311,
  [SMALL_STATE(57)] = 2353,
  [SMALL_STATE(58)] = 2395,
  [SMALL_STATE(59)] = 2437,
  [SMALL_STATE(60)] = 2479,
  [SMALL_STATE(61)] = 2521,
  [SMALL_STATE(62)] = 2562,
  [SMALL_STATE(63)] = 2603,
  [SMALL_STATE(64)] = 2643,
  [SMALL_STATE(65)] = 2683,
  [SMALL_STATE(66)] = 2723,
  [SMALL_STATE(67)] = 2766,
  [SMALL_STATE(68)] = 2806,
  [SMALL_STATE(69)] = 2848,
  [SMALL_STATE(70)] = 2890,
  [SMALL_STATE(71)] = 2934,
  [SMALL_STATE(72)] = 2976,
  [SMALL_STATE(73)] = 3016,
  [SMALL_STATE(74)] = 3060,
  [SMALL_STATE(75)] = 3099,
  [SMALL_STATE(76)] = 3138,
  [SMALL_STATE(77)] = 3175,
  [SMALL_STATE(78)] = 3214,
  [SMALL_STATE(79)] = 3253,
  [SMALL_STATE(80)] = 3292,
  [SMALL_STATE(81)] = 3331,
  [SMALL_STATE(82)] = 3370,
  [SMALL_STATE(83)] = 3406,
  [SMALL_STATE(84)] = 3442,
  [SMALL_STATE(85)] = 3478,
  [SMALL_STATE(86)] = 3514,
  [SMALL_STATE(87)] = 3550,
  [SMALL_STATE(88)] = 3586,
  [SMALL_STATE(89)] = 3622,
  [SMALL_STATE(90)] = 3658,
  [SMALL_STATE(91)] = 3694,
  [SMALL_STATE(92)] = 3730,
  [SMALL_STATE(93)] = 3766,
  [SMALL_STATE(94)] = 3802,
  [SMALL_STATE(95)] = 3819,
  [SMALL_STATE(96)] = 3836,
  [SMALL_STATE(97)] = 3850,
  [SMALL_STATE(98)] = 3863,
  [SMALL_STATE(99)] = 3876,
  [SMALL_STATE(100)] = 3886,
  [SMALL_STATE(101)] = 3896,
  [SMALL_STATE(102)] = 3906,
  [SMALL_STATE(103)] = 3916,
  [SMALL_STATE(104)] = 3926,
  [SMALL_STATE(105)] = 3936,
  [SMALL_STATE(106)] = 3940,
  [SMALL_STATE(107)] = 3944,
  [SMALL_STATE(108)] = 3948,
  [SMALL_STATE(109)] = 3952,
  [SMALL_STATE(110)] = 3956,
  [SMALL_STATE(111)] = 3960,
  [SMALL_STATE(112)] = 3964,
  [SMALL_STATE(113)] = 3968,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2, .production_id = 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(85),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(75),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(66),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(85),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(77),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(81),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(72),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(92),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(90),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(90),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(70),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(105),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(30),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(29),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(28),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(83),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat2, 2), SHIFT_REPEAT(106),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(85),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(75),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(85),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(81),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(72),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(92),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(83),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(106),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(85),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(85),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(75),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(66),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(77),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(81),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(92),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(90),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(90),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(71),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(83),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 2), SHIFT_REPEAT(106),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 16),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 5, .production_id = 15),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 12),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 11),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 16),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 4, .production_id = 15),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 12),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_li, 3, .production_id = 11),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(84),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(75),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(66),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(84),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(77),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(81),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(92),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(90),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(90),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(83),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 2), SHIFT_REPEAT(106),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 14),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 14),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(45),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 20),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 20),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 19),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 19),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 13),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 13),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, .production_id = 8),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, .production_id = 8),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(50),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(50),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 3, .production_id = 10),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 3, .production_id = 10),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank, 1, .production_id = 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank, 1, .production_id = 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_help_file_repeat1, 1, .production_id = 4),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(62),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 2), SHIFT_REPEAT(62),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_codeblock_repeat1, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_codeblock_repeat1, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_code, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_code, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 3, .production_id = 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 3, .production_id = 6),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 2, .production_id = 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 2, .production_id = 6),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_noli, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_noli, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h3, 4, .production_id = 6),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h3, 4, .production_id = 6),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 4, .production_id = 18),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 4, .production_id = 18),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_heading, 3, .production_id = 6),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_heading, 3, .production_id = 6),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h2, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h2, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h1, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h1, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat2, 1, .production_id = 17),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 2), SHIFT_REPEAT(76),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 2, .production_id = 5),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uppercase_words, 1, .production_id = 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uppercase_name, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uppercase_name_repeat1, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 3, .production_id = 9),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3, .production_id = 9),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionlink, 3, .production_id = 9),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1, .production_id = 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, .production_id = 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_noli, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_noli, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 4, .production_id = 9),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 4, .production_id = 9),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codespan, 3, .production_id = 9),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_li_repeat1, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taglink, 3, .production_id = 9),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keycode, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keycode, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_common, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_common, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, .production_id = 9),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 9),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(105),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(30),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_help_file, 3, .production_id = 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_help_file_repeat3, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_help_file_repeat3, 2), SHIFT_REPEAT(103),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [559] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
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

TS_PUBLIC const TSLanguage *tree_sitter_vimdoc() {
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
