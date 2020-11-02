const PREC = {
    COMMA: -1,
    FUNCTION: 1
};

EQUALS_LEVELS = 5

module.exports = grammar({
    name: 'elixir',

    rules: {
        source_file: $ => repeat($._definition),
        _definition: $ => choice(
            $.function_definition
        ),
        function_definition: $ => seq(
            'def',
            $.identifier,
            $.parameter_list,
            $.block
        ),
        parameter_list: _ => seq(
            '(',
                // TODO: parameters
            ')'
        ),
        block: $ => seq(
            'do',
            repeat($._statement),
            'end'
        ),
        _statement: $ => choice(
            $.return_statement
            // TODO: other kinds of statements
        ),

        return_statement: $ => seq(
            'return',
            $._expression
        ),

        _expression: $ => choice(
            $.identifier,
            $.number,
            $.boolean,
            $.string
            // TODO: other kinds of expressions
        ),

        identifier: _ => /[a-z]+/,

        number: _ => /\d+/,

        boolean: _ => choice("true", "false"),

        // TODO(robin): Fix this string matcher to exclude comments
        string: _ => choice(
            basic_string_style("'"),
            basic_string_style('"'),
            ...[...Array(EQUALS_LEVELS).keys()].map((level) => elixir_string_level(level))
        ),
    }
});

function anything_but(tok) {
  return new RegExp('[^' + tok + ']*');
}

function basic_string_style(tok) {
  return seq(
    tok,
    anything_but(tok),
    tok
  );
}

function elixir_string_level(level) {
  if (level >= 0) {
    return token(seq(
      ''.concat('[', '='.repeat(level), '['),
      /.*/,
      ''.concat(']', '='.repeat(level), ']'),
    ));
  }
}
