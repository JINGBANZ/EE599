#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintINFO();
  std::string expected = "Jingbang Zhong, goodlooking and tall, everyday hustle for job";
  EXPECT_EQ(expected, actual);
}