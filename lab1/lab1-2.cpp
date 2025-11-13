#include <iostream>
#include <string>

int main() {
  int a = 150;
  float b = 15.933;
  unsigned char c = 250;  // 1 byte
  std::cout << "a = " << a << " b = " << b << " c = " << +c << "\n";

  int day = 25, year = 2005;
  std::string month = "ноября";

  std::cout << "Моя дата рождения: " << day << " " << month << " " << year
            << " года\n";

  const double num = 2.4;
  const std::string str = "WINDOWS";

  std::cout << num << " " << str;

  return 0;
}