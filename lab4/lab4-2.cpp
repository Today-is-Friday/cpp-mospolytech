#include "lab4.h"

int main() {
  Gun ak;
  Gun* ak2 = new Gun();
  std::cout << "ak2 = " << ak2->name << " " << ak2->dmg << " " << ak2->weight
            << "\n";
  delete ak2;
  Gun ak3;
  std::cout << ak.can_hold(10);
  std::cout << ak.total_weight(10);
  std::cout << ak.total_weight(ak3);

  return 0;
}