module.exports = grammar({
  name: 'help', // The actual language name is help

  extras: ($) => [/[\t ]/],

  rules: {
    // TODO: add the actual grammar rules
    help_file: ($) => seq($.line, repeat(seq('\n', $.line))),

    header: ($) => seq($.tag),

    line: ($) => repeat1($._atom),

    _atom: ($) => choice($.word, $.tag),

    word: ($) => /[^*'|\n]\S*[^*'|\n]/,
    tag: ($) => wrapped_word($, '*', 'name'),
    option: ($) => /'[a-z]+'/,
    hotlink: ($) => /|[a-z-]+|/,
  },
});

function wrapped_word($, char, fname) {
  return seq(char, field(fname, $.word), char);
}
