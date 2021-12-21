#include "mul.h"

#include "private_sum.h"

uint32_t Mul(uint32_t x, uint32_t y) {
  uint32_t mul = 0;
  while (x) {
    mul = PrivateSum(mul, y);
    x--;
  }
  return mul;
}
