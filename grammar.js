module.exports = grammar({
  name: 'help', // The actual language name is help

  extras: () => [/[\t ]/],

  rules: {
    help_file: ($) =>
      seq(
        repeat(/[\t ]*\n/),  // Eat whitespace at top of file.
        repeat(choice(
          $.block,
          $.h1,
          $.h2,
          $.h3,
        )),
        // Last block may not be followed by a blank line or EOL.
        optional(alias($.block_end, $.block)),
      ),

    _atom: ($) =>
      choice(
        $.word,
        $.tag,
        $.url,
        $.optionlink,
        $.taglink,
        $.codespan,
        $.argument,
      ),

    word: () => choice(
      // Try the more-restrictive pattern at higher relative precedence, so that things like
      // "foo({a})" parse as "(word) (argument)" instead of "(word)".
      token(prec(-1, /[^\n\t~{ ]+/)),
      token(prec(-2, /[^\n\t ]+/)),

      // Special cases:
      //
      // "|====|" and "|----|" are (plain text) table borders, not taglinks.
      /\|(([+=][+=][+=][+=]+)|([+-][+-][+-][+-]+))\|/,
      // NOT optionlink: single "'".
      /[\t ]'[\t ]/,
      // NOT optionlink: contains any non-lowercase char.
      seq("'", token.immediate(/[^'\n\t ]*[^'a-z\n\t ][^'\n\t ]*/), token.immediate("'")),
      // NOT optionlink: single char surrounded by "'".
      seq("'", token.immediate(/[^'\n\t ]/), token.immediate("'")),
      // NOT taglink: single "|".
      /[\t ]\|[\t ]/,
      // NOT taglink: "||".
      /\|\|*/,
      // NOT argument: "{}".
      /\{\}/,
    ),

    // Text block/paragraph: adjacent lines followed by blank line(s).
    block: ($) => prec.right(seq(
        repeat1(choice($.line, $.line_li)),
        repeat1(_blank()),
      )
    ),
    // Special case: last block in the document may not end with blank line (nor even EOL).
    block_end: ($) => prec.right(choice(
      choice(
        alias($.line_noeol, $.line),
        alias($.line_li_noeol, $.line_li)),
      seq(repeat1(choice($.line, $.line_li)),
        choice(
          alias($.line_noeol, $.line),
          alias($.line_li_noeol, $.line_li))))
    ),

    // Code block: preformatted lines delimited by ">" and "<".
    codeblock: ($) => prec.right(seq(
      />[\t ]*\n/,
      repeat1(alias($.line_code, $.line)),
      // Code block ends if a line starts with "<" or a non-empty line starts with a visible char.
      token.immediate(choice(/<[\t ]*\n/, /[^\t\n ]/)),
    )),

    // Lines.
    line: ($) => _line($, true),
    line_noeol: ($) => _line($, false),
    // Listitem line.
    line_li: ($) => seq(/[-*+•][ ]+/, repeat1($._atom), '\n'),
    line_li_noeol: ($) => seq(/[-*+•][ ]+/, repeat1($._atom)),
    // Codeblock lines: must be indented by at least 1 space/tab.
    // Line content (incl. whitespace) is captured as a single atom.
    line_code: () => choice('\n', seq(/[\t ]+[^\n]+/, /\n/)),

    // "Column heading": plaintext followed by "~".
    // Intended for table column names per `:help help-writing`.
    column_heading: ($) =>
      seq(
        field('name', choice($.uppercase_name, repeat1($._atom))),  // TODO: should be $.word (plaintext).
        /~[\t ]*\n/,
      ),

    h1: ($) =>
      seq(
        field('delimiter', /[\t ]*============+[\t ]*\n/),
        repeat1($._atom),
        '\n',
        repeat(_blank()),
      ),

    h2: ($) =>
      seq(
        field('delimiter', /[\t ]*------------+[\t ]*\n/),
        repeat1($._atom),
        '\n',
        repeat(_blank()),
      ),

    // Heading 3: UPPERCASE WORDS, followed by optional *tags*.
    uppercase_name: () => seq(
      token.immediate(/[A-Z0-9.()][-A-Z0-9.()_]+/),  // No whitespace before heading.
      repeat(/[A-Z0-9.()][-A-Z0-9.()_]+/)),
    h3: ($) =>
      seq(
        field('name', $.uppercase_name),
        repeat($.tag),
        '\n',
        repeat(_blank()),
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
    optionlink: ($) => _word($,
      // Option name without surrounding "'".
      /[a-z][a-z]+/,
      "'", "'"),
    // Link to tag: |foo|
    taglink: ($) => _word($,
      /[^|\n\t ]+/,
      '|', '|'),
    // Inline code (may contain whitespace!): `foo bar`
    codespan: ($) => _word($,
      /[^``\n]+/,
      '`', '`'),
    // Argument: {arg}
    argument: ($) => _word($,
      /[^{}\n\t ]+/,
      '{', '}'),
  },
});

// Word delimited by special chars.
// The word_regex capture is aliased to "word" because they are semantically
// the same: atoms of captured plain text.
function _word($, word_regex, c1, c2, fname) {
  fname = fname ?? 'text';
  return seq(c1, field(fname, alias(token.immediate(word_regex), $.word)), token.immediate(c2));
}

function _line($, require_eol) {
  const eol = require_eol ? '\n' : optional('\n');
  return choice(
    $.column_heading,
    seq(repeat($._atom), $.codeblock),
    seq(repeat1($._atom), choice($.codeblock, eol)));
}

function _blank() {
  return field('blank', /[\t ]*\n/);
}
