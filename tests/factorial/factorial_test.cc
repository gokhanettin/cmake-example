#include "factorial.h"

#include <gtest/gtest.h>
#include <limits.h>

TEST(FactorialTest, Factorial5Is120) { EXPECT_EQ(Factorial(5), 120); }

TEST(FactorialTest, FactorialOf0Is1) { EXPECT_EQ(Factorial(0), 1); }

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
