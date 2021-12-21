#include <iostream>

#include "factorial.h"
#include "mul.h"
#include "sum.h"

int main() {
  std::cout << "Factorial(5) = " << Factorial(5) << "\n"
            << "Sum(6, 2) = " << Sum(6, 2) << "\n"
            << "Mul(7, 3) = " << Mul(7, 3) << "\n";
  return 0;
}
