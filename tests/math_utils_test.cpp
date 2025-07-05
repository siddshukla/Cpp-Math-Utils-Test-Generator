#include <gtest/gtest.h>
#include "../src/math_utils.h"

TEST(MathUtilsTest, MultiplyWorks) {
    MathUtils math;
    EXPECT_EQ(math.multiply(3, 4), 12);
    EXPECT_EQ(math.multiply(-2, 5), -10);
}

TEST(MathUtilsTest, DivideWorks) {
    MathUtils math;
    EXPECT_EQ(math.divide(10, 2), 5);
    EXPECT_EQ(math.divide(9, 3), 3);
}

TEST(MathUtilsTest, DivideByZeroReturnsZero) {
    MathUtils math;
    EXPECT_EQ(math.divide(5, 0), 0);  // error handling test
}
