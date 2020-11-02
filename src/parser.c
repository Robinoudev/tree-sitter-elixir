#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_def = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_do = 4,
  anon_sym_end = 5,
  anon_sym_return = 6,
  sym_identifier = 7,
  sym_number = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_string_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_token2 = 14,
  aux_sym_string_token3 = 15,
  aux_sym_string_token4 = 16,
  aux_sym_string_token5 = 17,
  aux_sym_string_token6 = 18,
  aux_sym_string_token7 = 19,
  sym_source_file = 20,
  sym__definition = 21,
  sym_function_definition = 22,
  sym_parameter_list = 23,
  sym_block = 24,
  sym__statement = 25,
  sym_return_statement = 26,
  sym__expression = 27,
  sym_boolean = 28,
  sym_string = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_block_repeat1 = 31,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_def] = "def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [aux_sym_string_token4] = "string_token4",
  [aux_sym_string_token5] = "string_token5",
  [aux_sym_string_token6] = "string_token6",
  [aux_sym_string_token7] = "string_token7",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [aux_sym_string_token4] = aux_sym_string_token4,
  [aux_sym_string_token5] = aux_sym_string_token5,
  [aux_sym_string_token6] = aux_sym_string_token6,
  [aux_sym_string_token7] = aux_sym_string_token7,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token7] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '[') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '[') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '[') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '[') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == '[') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == ']') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ']') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == ']') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == ']') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(54);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == ']') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token5);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_token6);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_token7);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 65},
  [21] = {.lex_state = 68},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
    [aux_sym_string_token4] = ACTIONS(1),
    [aux_sym_string_token5] = ACTIONS(1),
    [aux_sym_string_token6] = ACTIONS(1),
    [aux_sym_string_token7] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym__definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 3,
      sym__expression,
      sym_boolean,
      sym_string,
    ACTIONS(17), 5,
      aux_sym_string_token3,
      aux_sym_string_token4,
      aux_sym_string_token5,
      aux_sym_string_token6,
      aux_sym_string_token7,
  [29] = 3,
    ACTIONS(19), 1,
      anon_sym_end,
    ACTIONS(21), 1,
      anon_sym_return,
    STATE(5), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [41] = 3,
    ACTIONS(23), 1,
      anon_sym_end,
    ACTIONS(25), 1,
      anon_sym_return,
    STATE(4), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [53] = 3,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(28), 1,
      anon_sym_end,
    STATE(4), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [65] = 3,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(7), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [77] = 3,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_def,
    STATE(7), 3,
      sym__definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [89] = 1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [94] = 2,
    ACTIONS(39), 1,
      anon_sym_do,
    STATE(10), 1,
      sym_block,
  [101] = 1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [106] = 2,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_parameter_list,
  [113] = 1,
    ACTIONS(45), 2,
      anon_sym_end,
      anon_sym_return,
  [118] = 1,
    ACTIONS(47), 2,
      anon_sym_end,
      anon_sym_return,
  [123] = 1,
    ACTIONS(49), 2,
      anon_sym_end,
      anon_sym_return,
  [128] = 1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [133] = 1,
    ACTIONS(53), 2,
      anon_sym_end,
      anon_sym_return,
  [138] = 1,
    ACTIONS(55), 1,
      anon_sym_do,
  [142] = 1,
    ACTIONS(57), 1,
      sym_identifier,
  [146] = 1,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
  [150] = 1,
    ACTIONS(61), 1,
      aux_sym_string_token1,
  [154] = 1,
    ACTIONS(63), 1,
      aux_sym_string_token2,
  [158] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
  [162] = 1,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
  [166] = 1,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 89,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 101,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 113,
  [SMALL_STATE(13)] = 118,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 133,
  [SMALL_STATE(17)] = 138,
  [SMALL_STATE(18)] = 142,
  [SMALL_STATE(19)] = 146,
  [SMALL_STATE(20)] = 150,
  [SMALL_STATE(21)] = 154,
  [SMALL_STATE(22)] = 158,
  [SMALL_STATE(23)] = 162,
  [SMALL_STATE(24)] = 166,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elixir(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
