#include <iostream>

int main() {
  double a, b;
  char c;

  std::cout << "a = ";
  std::cin >> a;
  std::cout << "b = ";
  std::cin >> b;

  std::cout << "avg: " << (a + b) / 2.0 << "\n";
  std::cout << "+, -, *, / ";
  std::cin >> c;

  // if (c == '+') {
  //   std::cout << a + b;
  // } else if (c == '-') {
  //   std::cout << a - b;
  // } else if (c == '*') {
  //   std::cout << a * b;
  // } else if (c == '/') {
  //   std::cout << a / b;
  // }

  switch (c) {
    case '+':
      std::cout << a + b;
      break;
    case '-':
      std::cout << a - b;
      break;
    case '*':
      std::cout << a * b;
      break;
    case '/':
      std::cout << a / b;
      break;
  }

  return 0;
}