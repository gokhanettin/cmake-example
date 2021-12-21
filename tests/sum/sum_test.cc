#include "sum.h"

#include <gtest/gtest.h>

TEST(SumTest, SumOf4And2Is6) {
  EXPECT_EQ(Sum(4, 2), 6);
  EXPECT_EQ(Sum(2, 4), 6);
}

TEST(SumTest, SumOf0And2Is2) {
  EXPECT_EQ(Sum(0, 2), 2);
  EXPECT_EQ(Sum(2, 0), 2);
}

TEST(SumTest, SumOf0And0Is0) { EXPECT_EQ(Sum(0, 0), 0); }

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
