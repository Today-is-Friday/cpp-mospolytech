#include "lab2-4.h"

namespace sti {
void sum(const double num) {
  static double num_1 = 0;
  cout << num_1 + num << "\n";
  num_1 = num;
}
}  // namespace sti

int main() {
  for (double j = 0; j < 3; ++j) sum(j);

  cout << macro_sum(10, 2);
  return 0;
}