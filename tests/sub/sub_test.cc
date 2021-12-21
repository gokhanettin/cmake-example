#include "sub.h"

#include <gtest/gtest.h>
#include <limits.h>

TEST(SubTest, SubOf4And2Is2) { EXPECT_EQ(Sub(4, 2), 2); }

TEST(SubTest, SubOf2And0Is2) { EXPECT_EQ(Sub(2, 0), 2); }

TEST(SubTest, SubOf0And0Is0) { EXPECT_EQ(Sub(0, 0), 0); }

TEST(SubTest, SubOf0And1IsMaxUnsignedInt32) {
  EXPECT_EQ(Sub(0, 1), std::numeric_limits<uint32_t>::max());
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
