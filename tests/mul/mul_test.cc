#include "mul.h"

#include <gtest/gtest.h>

TEST(MulTest, MulOf4And2Is8) {
  EXPECT_EQ(Mul(4, 2), 8);
  EXPECT_EQ(Mul(2, 4), 8);
}

TEST(MulTest, MulOf2And0Is0) {
  EXPECT_EQ(Mul(2, 0), 0);
  EXPECT_EQ(Mul(0, 2), 0);
}

TEST(MulTest, Mulof0And0Is0) { EXPECT_EQ(Mul(0, 0), 0); }

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
