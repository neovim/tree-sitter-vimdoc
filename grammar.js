// https://tree-sitter.github.io/tree-sitter/creating-parsers#conflicting-tokens
// - Match Specificity: Tree-sitter will prefer a token that is specified in
//   the grammar as a String instead of a RegExp.
// - Rule Order: Tree-sitter will prefer the token that appears earlier in the
//   grammar.
//
// https://tree-sitter.github.io/tree-sitter/creating-parsers
// - Rules starting with underscore are hidden in the syntax tree.

const _uppercase_word = /[A-Z0-9.()][-A-Z0-9.()_]+/;
const _li_token = /[-*+•][ ]+/;

module.exports = grammar({
  name: 'help', // The actual language name is help

  extras: () => [/[\t ]/],

  // inline: ($) => [
  // ],

  rules: {
    help_file: ($) =>
      seq(
        repeat($._blank),  // Eat blank lines at top of file.
        repeat($.block),
      ),

    _atom: ($) => choice(
      $.word,
      $._atom_common
    ),
    word: ($) => choice(
      // Try the more-restrictive pattern at higher relative precedence, so that things like
      // "foo({a})" parse as "(word) (argument)" instead of "(word)".
      token(prec(-1, /[^\n\t{ ][^\n\t ]*/)),
      token(prec(-2, /[^\n\t ]+/)),
      choice($._word_common),
    ),

    _atom_noli: ($) => prec(1, choice(
      alias($.word_noli, $.word),
      $._atom_common
    )),
    word_noli: ($) => prec(1, choice(
      // Lines contained by line_li must not start with a listitem symbol.
      token(prec(-1, /[^-*+•\n\t ][^\n\t ]*/)),
      token(prec(-1, /[-*+•][^\n\t ]+/)),
      choice($._word_common),
    )),

    _atom_common: ($) =>
      choice(
        $.tag,
        $.url,
        $.optionlink,
        $.taglink,
        $.codespan,
        $.argument,
        $.keycode,
      ),

    // Explicit special cases: these are plaintext, not errors.
    _word_common: () => choice(
      // NOT optionlink: '
      "'",
      // NOT optionlink: 'x
      seq("'", token.immediate(/[^'\n\t ]/)),
      // NOT optionlink: followed by non-lowercase char.
      seq("'", token.immediate(/[a-z]*[^'a-z\n\t ][a-z]*/), optional(token.immediate("'"))),
      // NOT optionlink: single char surrounded by "'".
      seq("'", token.immediate(/[^'\n\t ]/), token.immediate("'")),
      // NOT taglink: "||", "|"
      /\|\|+/,
      '|',
      // NOT listitem: "-" or "•" followed by tab.
      /[-•]\t/,
      // NOT argument:
      '{',
      '}',
      '{}',
      /\{\{+[0-9]*/,
      '(',
      /\w+\(/,
      '~',
    ),

    keycode: () => choice(
      /<[-a-zA-Z0-9_]+>/,
      /<[SCMAD]-.>/,
      /CTRL-./,
      /CTRL-SHIFT-./,
      /CTRL-(Break|PageUp|PageDown|Insert|Del)/,
      /CTRL-\{char\}/,
      /META-./,
      /ALT-./,
    ),

    // First part (minus tags) of h3 or column_heading.
    uppercase_name: () => seq(
      token.immediate(_uppercase_word),  // No whitespace before heading.
      repeat(_uppercase_word),
    ),
    // Line (plaintext) can start with uppercase words; don't flag as "invalid h3".
    _uppercase_words: ($) => prec.left(-1, seq(
      alias(token.immediate(_uppercase_word), $.word),
      alias(repeat(_uppercase_word), $.word),
    )),

    // Text block/paragraph: adjacent lines followed by blank line(s).
    block: ($) => seq(
      choice(
        repeat1($.line),
        repeat1($.line_li),
        seq(repeat1($.line), repeat1($.line_li)),
      ),
      choice(
        token.immediate('<'),  // Treat codeblock-terminating "<" as whitespace.
        $._blank),
      repeat($._blank),
    ),

    // Codeblock: preformatted block of lines starting with ">".
    codeblock: ($) => prec.right(seq(
      />[\t ]*\n/,
      repeat1(alias($.line_code, $.line)),
      // Codeblock ends if a line starts with non-whitespace.
      // Terminating "<" is consumed in other rules.
    )),

    // Lines.
    _blank: () => field('blank', '\n'),
    line: ($) => choice(
      $.column_heading,
      $.h1,
      $.h2,
      $.h3,
      $.codeblock,
      $._line_noli,
    ),
    // Listitem: consumes prefixed line and all adjacent non-prefixed lines.
    line_li: ($) => prec.right(1, seq(
      optional(token.immediate('<')),  // Treat codeblock-terminating "<" as whitespace.
      _li_token,
      choice(
        alias(seq(repeat1($._atom), '\n'), $.line),
        seq(alias(repeat1($._atom), $.line), $.codeblock),
      ),
      repeat(alias($._line_noli, $.line)),
    )),
    // Codeblock lines: must be indented by at least 1 space/tab.
    // Line content (incl. whitespace) is captured as a single atom.
    line_code: () => choice('\n', /[\t ]+[^\n]+\n/),
    _line_noli: ($) => seq(
      choice($._atom_noli, $._uppercase_words),
      repeat($._atom),
      choice($.codeblock, '\n')
    ),

    // "Column heading": plaintext followed by "~".
    // Intended for table column names per `:help help-writing`.
    // TODO: children should be $.word (plaintext), not $.atom.
    column_heading: ($) => seq(
      field('name', seq(choice($._atom_noli, $._uppercase_words), repeat($._atom))),
      /~\n/,
    ),

    h1: ($) =>
      seq(
        token.immediate(field('delimiter', /============+[\t ]*\n/)),
        repeat1($._atom),
        '\n',
      ),

    h2: ($) =>
      seq(
        token.immediate(field('delimiter', /------------+[\t ]*\n/)),
        repeat1($._atom),
        '\n',
      ),

    // Heading 3: UPPERCASE NAME, followed by optional *tags*.
    h3: ($) =>
      seq(
        field('name', $.uppercase_name),
        repeat($.tag),
        '\n',
      ),

    tag: ($) => _word($,
      /[^*\n\t ]+/,  // Tag text without surrounding "*".
      '*', '*'),

    // URL without surrounding (), [], etc.
    url_word: () => /https?:[^\n\t)\] ]+/,
    url: ($) => choice(
      // seq('(', field('text', prec.left(alias($.url_word, $.word))), token.immediate(')')),
      // seq('[', field('text', prec.left(alias($.url_word, $.word))), token.immediate(']')),
      field('text', alias($.url_word, $.word))
    ),

    // Link to option: 'foo'. Lowercase non-digit ASCII, minimum 2 chars. #14
    optionlink: ($) => _word($, /[a-z][a-z]+/, "'", "'"),
    // Link to tag: |foo|
    taglink: ($) => _word($, choice(
          token.immediate(/[^|\n\t ]+/),
          // Special cases: |(| |{| …
          token.immediate('{'),
          token.immediate('}'),
          token.immediate('('),
          token.immediate(')'),
          token.immediate('`'),
    ), '|', '|'),
    // Inline code (may contain whitespace!): `foo bar`
    codespan: ($) => _word($, /[^``\n]+/, '`', '`'),
    // Argument: {arg}
    argument: ($) => _word($, /[^{}\n\t ][^{}\n\t]*/, '{', '}'),
  },
});

// Word delimited by special chars.
// `rule` can be a rule function or regex. It is aliased to "word" because they are
// semantically the same: atoms of captured plain text.
function _word($, rule, c1, c2, fname) {
  rule = rule.test !== undefined ? token.immediate(rule) : rule
  fname = fname ?? 'text';
  return seq(c1, field(fname, alias(rule, $.word)), token.immediate(c2));
}
