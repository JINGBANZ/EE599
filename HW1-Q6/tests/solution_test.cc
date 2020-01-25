#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Factorial, Result1) {
  Solution solution;
  int input = 3;
  EXPECT_EQ(solution.Factorial(input), 6);
  EXPECT_EQ(solution.FactorialNonRecur(input), 6);
}

TEST(Factorial, Result2) {
  Solution solution;
  int input = -10;
  EXPECT_EQ(solution.Factorial(input), -1);
  EXPECT_EQ(solution.FactorialNonRecur(input), -1);
}

TEST(Factorial, Result3) {
  Solution solution;
  int input = 0;
  EXPECT_EQ(solution.Factorial(input), 1);
  EXPECT_EQ(solution.FactorialNonRecur(input), 1);
}