#include "lab7-4.h"

int main() {
  std::vector<float> a;
  a = {1, 2, 3, 4, 5};
  printVector(a);

  a.insert(a.begin() + 3, 99);
  printVector(a);

  a.pop_back();
  printVector(a);

  // Settings s;
  // s.Add("a", "b");
  // s.Add("b", "c");

  // s.Print();
  // std::cout << s.Get("b");

  Settings::Add("a", "b");
  Settings::Add("b", "c");

  Settings::Print();
  std::cout << Settings::Get("b");

  return 0;
}

void printVector(const std::vector<float>& v) {
  for (std::size_t i = 0; i < v.size() - 1; ++i) std::cout << v[i] << " ";
  std::cout << v[v.size() - 1] << "\n";
}
