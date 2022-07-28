module.exports = grammar({
  name: 'help', // The actual language name is help

  extras: ($) => [/[\t ]/],

  externals: ($) => [
    $.word,
    $._imm_word,
    $.column_name,
    $.uppercase_name,
    $.code_block
  ],

  rules: {
    help_file: ($) =>
      repeat1(choice($.line, '\n', $.column_heading, $.headline, $.code_block)),

    headline: ($) =>
      seq(
        field('delimiter', choice(/===.*===/, /---.*---/)),
        '\n',
        repeat1($._atom),
        '\n',
      ),

    line: ($) => prec.right(seq(repeat1($._atom), optional($.code_block), optional('\n'))),

    _atom: ($) =>
      choice(
        $.word,
        $.tag,
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

    tag: ($) => seq('*', field('name', $._atom), token.immediate('*')),
    option: ($) => wrapped_word($, "'", 'name'),
    hotlink: ($) => wrapped_word($, '|', 'destination'),
    backtick: ($) => wrapped_word($, '`', 'content'),
    argument: ($) => seq("{", field('name', $.word), token.immediate('}'))
  },
});

function wrapped_word($, char, fname) {
  return seq(char, field(fname, alias($._imm_word, $.word)), token.immediate(char));
}
