#include <iostream>

int main() {
  int a = 0;
  int* b = &a;
  std::cout << b << " " << *b << "\n";
  *b = 10;
  std::cout << a << "\n";
  int c[2] = {};
  std::cout << *c << " " << *(c + 1) << "\n";
  int d = 5;
  int* const e = &d;
  // e = a;

  // lab3/lab3-1.cpp: In function ‘int main()’:
  // lab3/lab3-1.cpp:13:5: error: assignment of read-only variable ‘e’
  //  13 |   e = a;
  //     |   ~~^~~
  *e = 12;
  std::cout << d;

  return 0;
}