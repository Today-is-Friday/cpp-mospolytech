#include <iostream>

int main() {
  double a = -1;
  while (a <= 0) std::cin >> a;

  double b = 0;
  for (double i = 0; i < a; ++i) b += i;
  std::cout << "b = " << b << "\n";

  int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;
  for (i = 0; i < 9; ++i) std::cout << *(c + i) << " ";
  std::cout << *(c + i) << "\n";

  for (int i = 0; i < 10; ++i)
    if (i % 2 == 0) std::cout << *(c + i) << " ";

  std::cout << "\n";
  for (int i = 0; i < 10; ++i)
    if (i % 2 == 1) std::cout << *(c + i) << " ";

  return 0;
}