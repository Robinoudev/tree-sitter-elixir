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

        identifier: _ => prec(2, /[a-z]+/),

        number: _ => /\d+/,

        boolean: _ => choice("true", "false"),

        // TODO(robin): Fix this string matcher. Right now it can only match
        // one word
        string: _ => prec(1, /[a-z]+/),
    }
});
