module.exports = grammar({
  name: 'help', // The actual language name is help

  extras: ($) => [/[\t ]/],
  conflicts: ($) => [
    [$._atom, $.column_name],
  ],

  rules: {
    help_file: ($) => repeat1(choice($.line, '\n', $.column_heading)),

    header: ($) => seq($.tag),

    line: ($) => prec.right(seq(repeat1($._atom), optional('\n'))),

    _atom: ($) => choice($.word, $.tag),

    uppercase_name: ($) => repeat1(/[A-Z]+/),
    column_name: ($) => repeat1($.word),
    column_heading: ($) =>
      seq(
        choice(
          seq(field('name', $.uppercase_name), optional($.tag)),
          seq(field('name', $.column_name), '~'),
        ),
        '\n',
      ),

    word: ($) => /[^*|'\n \t]*[^*|'\n \t~]/,
    tag: ($) => wrapped_word($, '*', 'name'),
    option: ($) => wrapped_word($, "'", 'name'),
    hotlink: ($) => wrapped_word($, '|', 'destination'),
  },
});

function wrapped_word($, char, fname) {
  return seq(char, field(fname, $.word), char);
}
