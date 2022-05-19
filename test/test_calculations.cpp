#include <gtest/gtest.h>
#include "Factorial.hpp"

TEST(test_calculations, FactorialOfZeroShouldBeOne)
{
    ASSERT_EQ(1, factorial(0));
}


TEST(test_calculations, FactorialOfNegativeShouldBeMinusOne)
{
    EXPECT_EQ(-1, factorial(-5));
    EXPECT_EQ(-1, factorial(-1));
    EXPECT_EQ(-1, factorial(-45));
}

TEST(test_calculations, FactorialOfPositiveNos)
{
    ASSERT_EQ(1, factorial(1));
    ASSERT_EQ(24, factorial(4));
    ASSERT_EQ(120, factorial(5));
}

