module.exports = grammar({
  name: 'help', // The actual language name is help

  extras: ($) => [/[\t ]/],

  externals: ($) => [
    $.word,
    $.column_name,
    $.uppercase_name,
    $.code_block
  ],

  rules: {
    help_file: ($) =>
      repeat1(choice($.line, '\n', $.column_heading, $.headline)),

    headline: ($) =>
      seq(
        field('delimiter', choice(/===.*===/, /---.*---/)),
        '\n',
        seq(repeat1($.word), $.tag),
        '\n',
      ),

    line: ($) => prec.right(seq(repeat1($._atom), optional('\n'))),

    _atom: ($) =>
      choice(
        $.word,
        $.tag,
        $.code_block,
        $.tag,
        $.option,
        $.hotlink,
        $.backtick,
        $.argument,
      ),

    column_heading: ($) =>
      seq(
        choice(
          seq(field('name', $.uppercase_name), optional($.tag)),
          field('name', $.column_name),
        ),
        '\n',
      ),

    tag: ($) => wrapped_word($, '*', 'name'),
    option: ($) => wrapped_word($, "'", 'name'),
    hotlink: ($) => wrapped_word($, '|', 'destination'),
    backtick: ($) => wrapped_word($, '`', 'content'),
    argument: ($) => seq("{", field('name', $.word), token.immediate('}'))
  },
});

function wrapped_word($, char, fname) {
  return seq(char, field(fname, $.word), token.immediate(char));
}
