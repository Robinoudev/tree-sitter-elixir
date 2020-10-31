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
        parameter_list: $ => seq(
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
            $.number
            // TODO: other kinds of expressions
        ),

        identifier: $ => /[a-z]+/,

        number: $ => /\d+/
    }
});
