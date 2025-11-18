#include <iostream>
#include <regex>
#include <string>

int main() {
  std::string name;
  std::cin >> name;

  std::regex latin("^[A-Z][a-zA-Z]{1,31}$");
  std::regex cyrillic("^[А-ЯЁ][а-яёА-ЯЁ]{1,31}$");  // Не работает 😍💨💨

  if (std::regex_match(name, latin) || std::regex_match(name, cyrillic)) {
    std::cout << "Имя корректно.\n";
  } else {
    std::cout << "Некорректное имя!\n";
  }

  std::string text =
      "test@mail.com, hello.world@domain.org user123@example.net @wrong.com";

  std::regex emailRegex(R"(([a-zA-Z0-9._-]+@[a-zA-Z0-9]+\.[A-Za-z]{2,}))");

  std::smatch match;
  std::string s = text;

  std::cout << "\nНайденные email адреса:\n";

  while (std::regex_search(s, match, emailRegex)) {
    std::cout << match[0] << "\n";
    s = match.suffix();
  }

  return 0;
}
