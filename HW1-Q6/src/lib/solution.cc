#include "solution.h"

int Solution::Factorial(int n) { 
  if(n < 0){
    return -1;
  }
    
  if(n == 0){
    return 1;
  }
    
  return n * Factorial(n-1);
}

int Solution::FactorialNonRecur(int n){
  if(n < 0){
    return -1;
  }
  if(n == 0){
    return 1;
  }
  int res = 1;
  for(int i = 1; i <= n; i++){
    res *= i;
  }
  return res;
}
