#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMidTest, HandlesConsecutiveNumbersEven) {
  Solution solution;
  std::vector<int> inputs = {2, 1, 4, 3};
  EXPECT_EQ(solution.FindMid(inputs), 2.5);
}

TEST(FindMidTest, HandlesConsecutiveNumbersOddLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, -1};
  EXPECT_EQ(solution.FindMid(inputs), 2);
}

TEST(FindMidTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_EQ(solution.FindMid(inputs), 2);
}

TEST(FindMidTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindMid(inputs), -1);
}
