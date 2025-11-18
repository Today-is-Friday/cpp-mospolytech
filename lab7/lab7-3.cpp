#include <cmath>
#include <fstream>
#include <iostream>
#include <string>

int main() {
  double r;
  std::cin >> r;
  double length = 2 * M_PI * r;
  std::cout << "Длина окружности: " << round(length * 1000) / 1000 << "\n";

  std::string filename = "output.txt";
  std::string input;
  std::getline(std::cin, input);
  while (input != "exit") {
    std::cout << "---\n";

    if (input == "read") {
      std::ifstream f(filename);
      if (!f) {
        std::cout << "Файл пуст или отсутствует\n";
      } else {
        std::string line;
        while (std::getline(f, line)) {
          std::cout << line << "\n";
        }
      }
    } else if (input == "erase") {
      std::ofstream fout(filename);
      std::cout << "Файл очищен\n";
    } else {
      // Записать строку в файл (в конец)
      std::ofstream fout(filename, std::ios::app);
      fout << input << "\n";
    }

    std::getline(std::cin, input);
  }

  return 0;
}
