#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, 5};
  std::cout << "inputs: {1, 5, 3, 4, 2}, output: " << solution.FindMid(inputs)
            << std::endl;

  inputs = {12};
  std::cout << "inputs: {12}, output: " << solution.FindMid(inputs) << std::endl;

  return 0;
}