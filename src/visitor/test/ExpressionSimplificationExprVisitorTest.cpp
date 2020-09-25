/* Copyright (c) 2020 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#include <gtest/gtest.h>
#include "visitor/ExpressionSimplificationExprVisitor.h"
#include "util/ObjectPool.h"

namespace nebula {
namespace graph {

class ExpressionSimplificationExprVisitorTest : public ::testing::Test {
public:
    void TearDown() override {
        pool.clear();
    }

    static ArithmeticExpression *add(Expression *lhs, Expression *rhs) {
        return new ArithmeticExpression(Expression::Kind::kAdd, lhs, rhs);
    }

    static ArithmeticExpression *multiplication(Expression *lhs, Expression *rhs) {
        return new ArithmeticExpression(Expression::Kind::kMultiply, lhs, rhs);
    }

protected:
    ObjectPool pool;
};

TEST_F(ExpressionSimplificationExprVisitorTest, TestArithmeticExpr) {
    // 0 + x => x

    // 1 * x => x

    // 0 * x => 0
}

}   // namespace graph
}   // namespace nebula
