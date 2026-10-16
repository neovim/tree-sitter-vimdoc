// https://tree-sitter.github.io/tree-sitter/creating-parsers#conflicting-tokens
// - Match Specificity: Tree-sitter will prefer a token that is specified in
//   the grammar as a String instead of a RegExp.
// - Rule Order: Tree-sitter will prefer the token that appears earlier in the
//   grammar.
//
// https://github.com/nvim-treesitter/nvim-treesitter/wiki/Parser-Development
// - Visibility: Prefer JS regex (/\n/) over literals ('\n') unless it should be
//   exposed to queries as an anonymous node.
// - Rules starting with underscore are hidden in the syntax tree.

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const _uppercase_word = /[A-Z0-9.()][-A-Z0-9.()_]+/;
// Listitem (incl. numbered items).
const _li_token = /([-•]|([0-9]{1,3}\.))[ ]+/;
const _keycode = choice(
  /<[-a-zA-Z0-9_]+>/,
  /<[SCMAD]-.>/,
  /CTRL-./,
  /CTRL-SHIFT-./,
  /CTRL-(Break|PageUp|PageDown|Insert|Del)/,
  'CTRL-{char}',
  /META-./,
  /ALT-./,
);

// Text without surrounding delimiters. Used by "NOT …" cases too.
//
// prec(1): after the opening delimiter, prefer this over a same-length plaintext
// token, so `|` is a codespan, not "`" "|" "`".
//
const _tag_text = prec(1, /[^*\n\t ]+/);
const _codespan_text = prec(1, /[^`\n\t]+/); // Excludes TAB (delimits table cells, see README).
const _argument_text = /[^}\n\t ]+/;
const _optionlink_text = /[a-z][a-z]+/;

module.exports = grammar({
  name: 'vimdoc',

  conflicts: $ => [
    [$._line_noli, $._line_cb, $._column_heading],
    [$._line_any, $._line_noli],
    [$._column_heading],
  ],

  extras: () => [/[\t ]/],

  // inline: ($) => [
  // ],

  rules: {
    help_file: ($) =>
      seq(
        repeat($._blank),  // Eat blank lines at top of file.
        repeat($.block),
        repeat($.modeline),
      ),

    // Single-char uppercase word, e.g. "A" in "USING A COUNT". Same precedence as `word`, so
    // "Hello" stays a word. Defined before `word` to win a same-length tie (rule order).
    _uppercase_char: () => token(prec(-1, /[A-Z0-9]/)),

    _atom: ($) => choice(
      $.word,
      $._atom_common,
    ),
    word: ($) => choice(
      token(prec(-1, /[^.,(\[\n\t ]+/)),
      $._word_common,
    ),

    _atom_noli: ($) => choice(
      alias($.word_noli, $.word),
      // XXX: treesitter (undocumented) prefers an immediate token (uppercase_name) to tie-break
      // e.g. "CTRL-W s". So use immediate() here too, then rule order decides.
      alias(token.immediate(_keycode), $.keycode),
      $._atom_common,
    ),
    // Word NOT matching (numbered) listitem.
    word_noli: ($) => choice(
      // Lines contained by line_li must not start with (numbered) listitem symbol.
      token(prec(-1, /(([^-•\n\t ])|([^0-9\n\t ][^.\n\t ]))[^.(\[\n\t ]*/)),
      token(prec(-1, /[-•][^\n\t ]+/)),
      $._word_common,
    ),

    _atom_common: ($) =>
      choice(
        $.tag,
        $.url,
        $.optionlink,
        $.taglink,
        $.codespan,
        $.argument,
        $.keycode,
        $.note,
      ),

    // NOT tag: "*", "*foo", "*foo*bar". The closing "*" must be followed by
    // whitespace/EOL, because the lexer prefers the longer "*bar" token.
    _not_tag: () => seq('*', optional(seq(
      // Aliased so it stays visible: error recovery skips hidden tokens, so
      // e.g. "===…" + blank line reports ERROR instead of MISSING.
      alias(token.immediate(_tag_text), 'word'),
      optional(token.immediate(/\*[^\n\t ]+/)),
    ))),

    // Explicit special cases: these are plaintext, not errors. Unclosed cases alias
    // their text token to 'word' (see _not_tag).
    _word_common: ($) => choice(
      $._not_tag,
      // NOT codespan: unclosed (same line) "`", "`foo".
      seq('`', optional(alias(token.immediate(_codespan_text), 'word'))),
      // NOT optionlink: ', 'foo
      seq("'", optional(alias(token.immediate(_optionlink_text), 'word'))),
      // NOT optionlink: 'x
      seq("'", token.immediate(/[^'\n\t ]/)),
      // NOT optionlink: 'X (non-lowercase char).
      seq("'", token.immediate(/[a-z]*[^'a-z\n\t ][a-z]*/), optional(token.immediate("'"))),
      // NOT optionlink: 'x' (single char).
      seq("'", token.immediate(/[^'\n\t ]/), token.immediate("'")),
      // NOT taglink: "||", "|"
      /\|\|+/,
      '|', "'|'",
      // NOT argument: {, {foo, {}
      seq('{', optional(alias(token.immediate(_argument_text), 'word'))),
      '{}',
      /\{\{+[0-9]*/,

      '(',
      ')',
      '[',
      ']',
      '~',
      // NOT codeblock: random ">" in middle of the motherflippin text.
      '>',
      ',',
      '.',
    ),

    note: () => choice(
      'Note:', 'NOTE:', 'Notes:',
      'Warning:', 'WARNING:',
      'Deprecated', 'DEPRECATED:'
    ),

    keycode: () => _keycode,

    // First part (minus tags) of h3 or column_heading.
    uppercase_name: ($) => seq(
      token.immediate(_uppercase_word),  // No whitespace before heading.
      repeat(choice(_uppercase_word, $._uppercase_char)),
    ),
    // Line (plaintext) can start with uppercase words; don't flag as "invalid h3".
    _uppercase_words: ($) => prec.left(-1, seq(
      alias(token.immediate(_uppercase_word), $.word),
      alias(repeat(choice(_uppercase_word, $._uppercase_char)), $.word),
    )),

    // Text block/paragraph: adjacent lines followed by blank line(s).
    block: ($) => {
      const lines = choice(
        repeat1($._line_any),
        repeat1($.line_li),
        seq(repeat1($._line_any), repeat1($.line_li)),
      );
      return seq(
        choice(seq(alias($._line_h, $.line), optional(lines)), lines),
        choice(
          token.immediate('<'),  // Treat codeblock-terminating "<" as whitespace.
          $._blank),
        repeat($._blank),
      );
    },
    // Heading (h1/h2/h3) starts a block (ie preceded by a blank line), or follows a codeblock (which
    // consumes blank lines). So "-----" or "FOO" inside a block is plaintext.
    _line_any: ($) => choice(
      $.line,
      seq(alias($._line_cb, $.line), alias($._line_h, $.line)),
    ),
    _line_h: ($) => choice(
      $.h1,
      $.h2,
      // Prefer h3 over UPPERCASE line or column_heading (see `conflicts`), like at block start,
      // e.g. "FOO *tag* ~".
      prec.dynamic(2, $.h3),
    ),

    // Codeblock: preformatted block of lines starting with ">" or ">language" at EOL
    codeblock: ($) => prec.right(seq(
      '>',
      choice(
        alias(token.immediate(/[a-z0-9]+\n/), $.language),
        token.immediate(/\n/)),
      alias(repeat1(alias($.line_code, $.line)), $.code),
      // Codeblock ends if a line starts with non-whitespace.
      // Terminating "<" is consumed in other rules.
    )),

    // Lines.
    _blank: () => field('blank', /\n/),
    line: ($) => choice(
      $.column_heading,
      $._line_noli,
    ),
    // Listitem: consumes prefixed line and all adjacent non-prefixed lines.
    line_li: ($) => prec.right(1, seq(
      optional(token.immediate('<')),  // Treat codeblock-terminating "<" as whitespace.
      alias(_li_token, $.prefix),
      choice(
        alias(seq(repeat1($._atom), /\n/), $.line),
        seq(alias(repeat1($._atom), $.line), $.codeblock),
      ),
      repeat(choice(
        alias($._line_noli, $.line),
        // Codeblock-terminating "<" followed by indented text (same or next line): listitem
        // continues. #163
        token.immediate(/<([\t ]*\n)?[\t ]+/),
      )),
    )),
    // Codeblock lines: must be indented by at least 1 space/tab.
    // Line content (incl. whitespace) is captured as a single atom.
    line_code: () => choice(/\n/, /[\t ]+[^\n]+\n/),
    _line_noli: ($) => choice(
      seq(choice($._atom_noli, $._uppercase_words), repeat($._atom), /\n/),
      $._line_cb,
    ),
    // Line ending with a codeblock. Also a codeblock-only line abutting a listitem. #118
    _line_cb: ($) => seq(
      optional(seq(choice($._atom_noli, $._uppercase_words), repeat($._atom))),
      $.codeblock,
    ),

    // Modeline: must start with "vim:" (optionally preceded by whitespace)
    modeline: ($) => token(prec(2, /vim:[^\n]+\n/)),

    // "Column heading": plaintext followed by "~".
    // Intended for table column names per `:help help-writing`.
    // TODO: children should be $.word (plaintext), not $.atom.
    column_heading: ($) => seq(
      alias($._column_heading, $.heading),
      alias('~', $.delimiter),
      token.immediate(/\n/),
    ),
    // aliasing a seq exposes every item separately: create hidden rule and alias that
    _column_heading: $ => prec.dynamic(1, seq(
      choice($._atom_noli, $._uppercase_words),
      repeat($._atom)
    )),

    h1: ($) =>
      prec(1, seq(
        alias(token.immediate(/============+[\t ]*\n/), $.delimiter),
        alias(repeat1($._atom), $.heading),
        optional(seq($.tag, repeat($._atom))),
        /\n/,
      )),

    h2: ($) =>
      prec(1, seq(
        alias(token.immediate(/------------+[\t ]*\n/), $.delimiter),
        alias(repeat1($._atom), $.heading),
        optional(seq($.tag, repeat($._atom))),
        /\n/,
      )),

    // Heading 3: UPPERCASE NAME, followed by optional *tags*.
    h3: ($) =>
      seq(
        alias($.uppercase_name, $.heading),
        optional(seq(choice($.tag, alias($._not_tag, $.word)), repeat($._atom))),
        /\n/,
      ),

    // Tag: *foo* (see _not_tag).
    tag: ($) => _word($, _tag_text, '*', '*'),

    // URL without surrounding (), [], etc.
    url_word: () => /https?:\/\/[^\n\t\] ]*[^\n\t )\].,:]/,
    url: ($) => choice(
      // seq('(', field('text', prec.left(alias($.url_word, $.word))), token.immediate(')')),
      // seq('[', field('text', prec.left(alias($.url_word, $.word))), token.immediate(']')),
      field('text', alias($.url_word, $.word))
    ),

    // Link to option: 'foo'. Lowercase non-digit ASCII, minimum 2 chars. #14
    optionlink: ($) => _word($, _optionlink_text, "'", "'"),
    // Link to tag: |foo|
    taglink: ($) => _word($, prec(1, /[^|\n\t ]+/), '|', '|'),
    // Inline code (may contain whitespace!): `foo bar`
    codespan: ($) => _word($, _codespan_text, '`', '`'),
    // Argument: {arg} (no whitespace allowed)
    argument: ($) => seq(_word($, _argument_text, '{', '}'), optional(token.immediate('?'))),
  },
});

// Word delimited by special chars.
// `rule` can be a rule function or regex. It is aliased to "word" because they are
// semantically the same: atoms of captured plain text.
function _word($, rule, c1, c2, fname) {
  fname = fname ?? 'text';
  return seq(c1, field(fname, alias(token.immediate(rule), $.word)), token.immediate(c2));
}
