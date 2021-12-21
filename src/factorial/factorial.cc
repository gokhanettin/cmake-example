#include "factorial.h"

#include "mul.h"

uint32_t Factorial(uint32_t x) {
  uint32_t factorial = 1;
  while (x) {
    factorial = Mul(factorial, x);
    x--;
  }
  return factorial;
}
