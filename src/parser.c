#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 1
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_code_token1 = 1,
  anon_sym_PERCENT_PERCENT_GT = 2,
  aux_sym_content_token1 = 3,
  anon_sym_LT_PERCENT_PERCENT = 4,
  anon_sym_LT_PERCENT = 5,
  anon_sym_PERCENT_GT = 6,
  anon_sym_LT_PERCENT_EQ = 7,
  anon_sym_LT_PERCENT_AT = 8,
  anon_sym_LT_PERCENT_POUND = 9,
  anon_sym_LT_PERCENT_DASH_DASH = 10,
  anon_sym_DASH_DASH_PERCENT_GT = 11,
  sym_template = 12,
  sym_code = 13,
  sym_content = 14,
  sym_embedded_code_block = 15,
  sym_display_expression = 16,
  sym_directive = 17,
  sym_data_binding = 18,
  sym_comment_expression = 19,
  aux_sym_template_repeat1 = 20,
  aux_sym_code_repeat1 = 21,
  aux_sym_content_repeat1 = 22,
  alias_sym_comment = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_PERCENT_PERCENT_GT] = "%%>",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LT_PERCENT_PERCENT] = "<%%",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_AT] = "<%@",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [anon_sym_LT_PERCENT_DASH_DASH] = "<%--",
  [anon_sym_DASH_DASH_PERCENT_GT] = "--%>",
  [sym_template] = "template",
  [sym_code] = "code",
  [sym_content] = "content",
  [sym_embedded_code_block] = "embedded_code_block",
  [sym_display_expression] = "display_expression",
  [sym_directive] = "directive",
  [sym_data_binding] = "data_binding",
  [sym_comment_expression] = "comment_expression",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_PERCENT_PERCENT_GT] = anon_sym_PERCENT_PERCENT_GT,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LT_PERCENT_PERCENT] = anon_sym_LT_PERCENT_PERCENT,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_AT] = anon_sym_LT_PERCENT_AT,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [anon_sym_LT_PERCENT_DASH_DASH] = anon_sym_LT_PERCENT_DASH_DASH,
  [anon_sym_DASH_DASH_PERCENT_GT] = anon_sym_DASH_DASH_PERCENT_GT,
  [sym_template] = sym_template,
  [sym_code] = sym_code,
  [sym_content] = sym_content,
  [sym_embedded_code_block] = sym_embedded_code_block,
  [sym_display_expression] = sym_display_expression,
  [sym_directive] = sym_directive,
  [sym_data_binding] = sym_data_binding,
  [sym_comment_expression] = sym_comment_expression,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [alias_sym_comment] = alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_embedded_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_display_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_data_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_comment] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_code, 2,
    sym_code,
    alias_sym_comment,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '<') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '=' ||
          lookahead == '_') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '_') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '<') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(8);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '=' ||
          lookahead == '_') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '_') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_AT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_AT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [anon_sym_LT_PERCENT_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_PERCENT_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(25),
    [sym_content] = STATE(3),
    [sym_embedded_code_block] = STATE(3),
    [sym_display_expression] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_data_binding] = STATE(3),
    [sym_comment_expression] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_AT] = ACTIONS(11),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(13),
    [anon_sym_LT_PERCENT_DASH_DASH] = ACTIONS(15),
  },
  [2] = {
    [sym_content] = STATE(2),
    [sym_embedded_code_block] = STATE(2),
    [sym_display_expression] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_data_binding] = STATE(2),
    [sym_comment_expression] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_content_token1] = ACTIONS(19),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(19),
    [anon_sym_LT_PERCENT] = ACTIONS(22),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(25),
    [anon_sym_LT_PERCENT_AT] = ACTIONS(28),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(31),
    [anon_sym_LT_PERCENT_DASH_DASH] = ACTIONS(34),
  },
  [3] = {
    [sym_content] = STATE(2),
    [sym_embedded_code_block] = STATE(2),
    [sym_display_expression] = STATE(2),
    [sym_directive] = STATE(2),
    [sym_data_binding] = STATE(2),
    [sym_comment_expression] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_AT] = ACTIONS(11),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(13),
    [anon_sym_LT_PERCENT_DASH_DASH] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(41), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(44), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [18] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_content_repeat1,
    ACTIONS(48), 2,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(50), 5,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [36] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 7,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [49] = 2,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 7,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [62] = 2,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 7,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [75] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 7,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [88] = 2,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 7,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [101] = 2,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 7,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [114] = 2,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 7,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [127] = 2,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 7,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [140] = 2,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 7,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [153] = 2,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 7,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_DASH_DASH,
  [166] = 4,
    ACTIONS(94), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(21), 1,
      aux_sym_code_repeat1,
    STATE(27), 1,
      sym_code,
    ACTIONS(92), 2,
      aux_sym_code_token1,
      anon_sym_PERCENT_PERCENT_GT,
  [180] = 4,
    ACTIONS(98), 1,
      anon_sym_PERCENT_GT,
    STATE(22), 1,
      aux_sym_code_repeat1,
    STATE(26), 1,
      sym_code,
    ACTIONS(96), 2,
      aux_sym_code_token1,
      anon_sym_PERCENT_PERCENT_GT,
  [194] = 4,
    ACTIONS(100), 1,
      anon_sym_PERCENT_GT,
    STATE(22), 1,
      aux_sym_code_repeat1,
    STATE(28), 1,
      sym_code,
    ACTIONS(96), 2,
      aux_sym_code_token1,
      anon_sym_PERCENT_PERCENT_GT,
  [208] = 4,
    ACTIONS(102), 1,
      anon_sym_PERCENT_GT,
    STATE(22), 1,
      aux_sym_code_repeat1,
    STATE(29), 1,
      sym_code,
    ACTIONS(96), 2,
      aux_sym_code_token1,
      anon_sym_PERCENT_PERCENT_GT,
  [222] = 4,
    ACTIONS(104), 1,
      anon_sym_PERCENT_GT,
    STATE(22), 1,
      aux_sym_code_repeat1,
    STATE(30), 1,
      sym_code,
    ACTIONS(96), 2,
      aux_sym_code_token1,
      anon_sym_PERCENT_PERCENT_GT,
  [236] = 3,
    ACTIONS(108), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(23), 1,
      aux_sym_code_repeat1,
    ACTIONS(106), 2,
      aux_sym_code_token1,
      anon_sym_PERCENT_PERCENT_GT,
  [247] = 3,
    ACTIONS(108), 1,
      anon_sym_PERCENT_GT,
    STATE(24), 1,
      aux_sym_code_repeat1,
    ACTIONS(110), 2,
      aux_sym_code_token1,
      anon_sym_PERCENT_PERCENT_GT,
  [258] = 3,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(23), 1,
      aux_sym_code_repeat1,
    ACTIONS(112), 2,
      aux_sym_code_token1,
      anon_sym_PERCENT_PERCENT_GT,
  [269] = 3,
    ACTIONS(115), 1,
      anon_sym_PERCENT_GT,
    STATE(24), 1,
      aux_sym_code_repeat1,
    ACTIONS(117), 2,
      aux_sym_code_token1,
      anon_sym_PERCENT_PERCENT_GT,
  [280] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [284] = 1,
    ACTIONS(122), 1,
      anon_sym_PERCENT_GT,
  [288] = 1,
    ACTIONS(124), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
  [292] = 1,
    ACTIONS(126), 1,
      anon_sym_PERCENT_GT,
  [296] = 1,
    ACTIONS(128), 1,
      anon_sym_PERCENT_GT,
  [300] = 1,
    ACTIONS(130), 1,
      anon_sym_PERCENT_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 49,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 101,
  [SMALL_STATE(12)] = 114,
  [SMALL_STATE(13)] = 127,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 153,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 194,
  [SMALL_STATE(19)] = 208,
  [SMALL_STATE(20)] = 222,
  [SMALL_STATE(21)] = 236,
  [SMALL_STATE(22)] = 247,
  [SMALL_STATE(23)] = 258,
  [SMALL_STATE(24)] = 269,
  [SMALL_STATE(25)] = 280,
  [SMALL_STATE(26)] = 284,
  [SMALL_STATE(27)] = 288,
  [SMALL_STATE(28)] = 292,
  [SMALL_STATE(29)] = 296,
  [SMALL_STATE(30)] = 300,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(5),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(17),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(20),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(19),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(18),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_binding, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_binding, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_code_block, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embedded_code_block, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_expression, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_expression, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_code_block, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embedded_code_block, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_expression, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_expression, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_binding, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_binding, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_expression, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_expression, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_expression, 3, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_expression, 3, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(23),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(24),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_aspx(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
