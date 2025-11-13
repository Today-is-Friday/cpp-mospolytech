#include "lab3-2.h"

#include <iostream>

int main() {
  double a[] = {1, 2, 3};
  double b = sum(a, a + 2);

  std::cout << b << "\n";
  double c = func_ptr('+')(10, 10);
  std::cout << c << "\n";
  float* float_ptr = new float();
  std::cout << *float_ptr;
  delete float_ptr;

  return 0;
}

double sum(const double* a, const double* b) {
  double result = *a;
  while (a != b) result += *(++a);

  return result;
}

double sum(const double a, const double b) { return a + b; }

double sub(const double a, const double b) { return a - b; }

double (*func_ptr(char c))(const double, const double) {
  double (*ptr)(const double, const double) = nullptr;
  if (c == '+') ptr = sum;

  if (c == '-') ptr = sub;

  return ptr;
}