#include "solution.h"
#include <iostream>

double Solution::FindMid(std::vector<int> &inputs) {
  int l = inputs.size();
  if(l == 0){
    return -1;
  }

  std::sort(inputs.begin(), inputs.end());
  double result;
  if(l % 2 == 0){
    result = (0.0 + inputs[l/2] + inputs[l/2-1])/2.0;
  }
  else{
    result = inputs[l/2];
  }

  return result;
}




