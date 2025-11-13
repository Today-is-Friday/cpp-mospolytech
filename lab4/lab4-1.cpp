#include "lab4-1.h"

#include <iostream>
int main() {
  Gun ak;
  Gun m4("m4a1", 30, 3.52);

  std::cout << ak.name << " " << ak.dmg << " " << ak.weight << "\n";
  std::cout << m4.name << " " << m4.dmg << " " << m4.weight;

  return 0;
}