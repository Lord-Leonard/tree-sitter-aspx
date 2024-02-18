/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports =  grammar({
  name: 'aspx',

  rules: {
    template: $ => repeat(choice(
      $.embedded_code_block,
      $.display_expression,
      $.directive,
      $.data_binding,
      $.data_binding,
      $.comment_expression,
      $.content
    )),

    code: $ => repeat1(choice(/[^%=_-]+|[%=_-]/, '%%>')),

    content: $ => prec.right(repeat1(choice(/[^<]+|</, '<%%'))),

    embedded_code_block: $ => seq(
      choice('<%'),
      optional($.code),
      choice('%>')
    ),

    display_expression: $ => seq(
      choice('<%='),
      optional($.code),
      choice('%>')
    ),

    directive: $ => seq(
      choice('<%@'),
      optional($.code),
      choice('%>')
    ),

    data_binding: $ => seq(
      choice('<%#'),
      optional($.code),
      choice('%>')
    ),

    expression_builder: $ => seq(
      choice('<%$'),
      optional($.code),
      choice('%>')
    ),

    comment_expression: $ => seq(
      choice('<%--'),
      optional(alias($.code, $.comment)),
      choice('--%>')
    ),
  }
});
