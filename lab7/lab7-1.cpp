#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;

  if (s.size() >= 4) {
    std::string sub = s.substr(1, 3);
    std::cout << "Подстрока: " << sub << "\n";
  } else {
    std::cout << "Строка слишком короткая\n";
  }

  size_t index = s.find('a');
  if (index != std::string::npos) {
    std::cout << "Первое вхождение 'a' на позиции: " << index << "\n";
  } else {
    std::cout << "Символа a не найдено\n";
  }

  return 0;
}
