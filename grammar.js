module.exports = grammar({
  name: 'help', // The actual language name is help

  extras: ($) => [/[\t ]/],

  rules: {
    // TODO: add the actual grammar rules
    help_file: ($) => repeat1($.line),

    header: ($) => seq($.tag),

    line: ($) => prec.right(seq(repeat1($._atom), optional('\n'))),

    _atom: ($) => choice($.word, $.tag),

    word: ($) => /[^*|'\n \t]+/,
    tag: ($) => wrapped_word($, '*', 'name'),
    option: ($) => wrapped_word($, "'", 'name'),
    hotlink: ($) => wrapped_word($, '|', 'destination'),
  },
});

function wrapped_word($, char, fname) {
  return seq(char, field(fname, $.word), char);
}
