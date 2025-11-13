#include "lab2-3.h"

int main() {
  double a[2][3] = {{1, 2, 3}, {4, 5, 6}};
  double b;
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 3; ++j) b += i[a][j];

  std::cout << b << "\n";
  double c[3] = {0};
  for (int j = 0; j < 3; ++j) {
    for (int i = 0; i < 2; ++i) j[c] += i[a][j];

    std::cout << j[c] << " ";
  }

  float d = 20.84;
  float& e = d;
  float& g = d;

  e = 12;
  std::cout << "\n" << d << " " << g << "\n";

  std::cout << sum() << "\n";

  double h = 10, i = 12, j, k;
  sum(h, i, j, k);

  std::cout << j << " " << k << "\n";

  char l = 7;

  std::cout << l << "\n";
  for (int i = 0; i < 3; ++i) {
    std::cout << l << "\n";
    char m = rand() / 256 - 128;
    std::cout << m << "\n";
  }

  // std::cout << m << "\n";

  // lab2/lab2-3.cpp: In function ‘int main()’:
  // lab2/lab2-3.cpp:66:16: error: ‘m’ was not declared in this scope
  // 66 |   std::cout << m << "\n";
  //    |

  return 0;
}

double sum(const double num) {
  double result = 0;
  for (int i = 0; i <= num; ++i) result += i;

  return result;
}

void sum(const double num1, const double num2, double& num3, double& num4) {
  num3 = num1 + num2;
  num4 = num1 * num2;
}