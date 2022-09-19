module.exports = grammar({
  name: 'help', // The actual language name is help

  extras: () => [/[\t ]/],

  rules: {
    help_file: ($) =>
      seq(
        repeat(/[\t ]*\n/),  // Eat whitespace at top of file.
        repeat(choice(
          $.block,
          $.column_heading,
          $.headline,
        )),
        // Last block may not be followed by a blank line or EOL.
        optional(alias($.block_end, $.block)),
      ),

    _atom: ($) =>
      choice(
        $.word,
        $.tag,
        $.url,
        $.option,
        $.hotlink,
        $.backtick,
        $.argument,
      ),

    word: () => choice(
      // Try the more-restrictive pattern at higher relative precedence, so that things like
      // "foo({a})" parse as "(word) (argument)" instead of "(word)".
      token(prec(-1, /[^\n\t~{ ]+/)),
      token(prec(-2, /[^\n\t ]+/)),
      // Special case: "|====|" and "|----|" are (plain text) table borders, not hotlinks.
      token(prec(1, /\|(([+=][+=][+=][+=]+)|([+-][+-][+-][+-]+))\|/)),
      // Special case: NOT an option link: single "'".
      /[\t ]'[\t ]/,
      // Special case: NOT an option link: contains any non-lowercase char.
      seq("'", token.immediate(/[^'\n\t ]*[^'a-z\n\t ][^'\n\t ]*/), token.immediate("'")),
      // Special case: NOT an option link: single char surrounded by "'".
      seq("'", token.immediate(/[^'\n\t ]/), token.immediate("'")),
      // Special case: NOT a tag link: single "|".
      /[\t ]\|[\t ]/,
    ),

    // Text block/paragraph: adjacent lines followed by blank line(s).
    block: ($) => prec.right(seq(
        repeat1(choice($.line, $.line_li)),
        _blank(),
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
    code_block: ($) => prec.right(seq(
      />[\t ]*\n/,
      repeat1(alias($.line_code, $.line)),
      // Code block ends if a line starts with "<" or a non-empty line starts with a visible char.
      token.immediate(choice(/<[\t ]*\n/, /[^\t\n ]/)),
    )),

    // Lines.
    line: ($) => _line($, true),
    line_noeol: ($) => _line($, false),
    // Listitem line.
    line_li: ($) => seq(/[*-+•][ ]+/, repeat1($._atom), '\n'),
    line_li_noeol: ($) => seq(/[*-+•][ ]+/, repeat1($._atom)),
    // Codeblock lines: must be indented by at least 1 space/tab.
    // Line content (incl. whitespace) is captured as a single atom.
    line_code: () => choice('\n', seq(/[\t ]+[^\n]+/, /\n/)),

    column_name: ($) => seq(repeat1($._atom), choice('~', token.immediate('~'))),
    uppercase_name: () => seq(
      token.immediate(/[^a-z][A-Z]+[^a-z]/),  // No whitespace before heading.
      repeat(/[^a-z][A-Z]+[^a-z]/)),
    column_heading: ($) =>
      seq(
        choice(
          seq(field('text', $.uppercase_name), repeat($.tag)),
          field('text', $.column_name),
        ),
        '\n',
        repeat(_blank()),
      ),

    headline: ($) =>
      seq(
        field('delimiter', choice(
          seq(/[\t ]*============+[\t ]*\n/)),
          seq(/[\t ]*------------+[\t ]*\n/)),
        repeat1($._atom),
        '\n',
        optional(_blank()),
      ),

    tag: ($) => _word($,
      /[^*\n\t ]+/,  // Tag text without surrounding "*".
      '*', '*'),

    // URL without surrounding (), [], etc.
    url_word: () => /http[s]:[^\n\t)\] ]+/,
    url: ($) => choice(
      // seq('(', field('text', prec.left(alias($.url_word, $.word))), token.immediate(')')),
      // seq('[', field('text', prec.left(alias($.url_word, $.word))), token.immediate(']')),
      field('text', alias($.url_word, $.word))
    ),

    // Link to option: 'foo'. Lowercase non-digit ASCII, minimum 2 chars. #14
    option: ($) => _word($,
      // Option text without surrounding "'".
      /[a-z][a-z]+/,
      "'", "'"),
    // Link to tag: |foo|
    hotlink: ($) => _word($,
      /[^|\n\t ]+/,    // Link text without surrounding "|".
      '|', '|'),
    // Inline code (may contain whitespace!): `foo bar`
    backtick: ($) => _word($,
      /[^``\n]+/,   // Code text without surrounding "`".
      '`', '`'),
    // Argument: {arg}
    argument: ($) => _word($,
      /[^{}\n\t ]+/,   // Argument text without surrounding "{}".
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
    seq(repeat($._atom), $.code_block),
    seq(repeat1($._atom), choice($.code_block, eol)));
}

function _blank() {
  return field('blank', /[\t ]*\n/);
}
