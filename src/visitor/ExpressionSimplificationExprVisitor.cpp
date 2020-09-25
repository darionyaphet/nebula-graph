/* Copyright (c) 2020 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#include "context/QueryExpressionContext.h"
#include "visitor/ExpressionSimplificationExprVisitor.h"

namespace nebula {
namespace graph {

void ExpressionSimplificationExprVisitor::visit(ConstantExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(UnaryExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(TypeCastingExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(LabelExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(LabelAttributeExpression *expr) {
    UNUSED(expr);
}

// binary expression
void ExpressionSimplificationExprVisitor::visit(ArithmeticExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(RelationalExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(SubscriptExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(AttributeExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(LogicalExpression *expr) {
    UNUSED(expr);
}

// function call
void ExpressionSimplificationExprVisitor::visit(FunctionCallExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(UUIDExpression *expr) {
    UNUSED(expr);
}

// variable expression
void ExpressionSimplificationExprVisitor::visit(VariableExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(VersionedVariableExpression *expr) {
    UNUSED(expr);
}

// container expression
void ExpressionSimplificationExprVisitor::visit(ListExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(SetExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(MapExpression *expr) {
    UNUSED(expr);
}

// property Expression
void ExpressionSimplificationExprVisitor::visit(TagPropertyExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(EdgePropertyExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(InputPropertyExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(VariablePropertyExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(DestPropertyExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(SourcePropertyExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(EdgeSrcIdExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(EdgeTypeExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(EdgeRankExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(EdgeDstIdExpression *expr) {
    UNUSED(expr);
}

// vertex/edge expression
void ExpressionSimplificationExprVisitor::visit(VertexExpression *expr) {
    UNUSED(expr);
}

void ExpressionSimplificationExprVisitor::visit(EdgeExpression *expr) {
    UNUSED(expr);
}

}   // namespace graph
}   // namespace nebula
