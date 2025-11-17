#include "lab6.h"

int main() {
  int a;
  std::cin >> a;
  if (a == 1)
    std::cout << "Один";
  else if (a == 2)
    std::cout << "Два";
  else if (a == 3)
    std::cout << "Три";
  else
    throw std::invalid_argument("Нужно вписать число от 1 до 3.");

  int year;
  std::cin >> year;
  try {
    if (year < 1850)
      throw MyException(ErrorCode::TooSmall, "Что-то не верится.");
    if (year > 2025)
      throw MyException(ErrorCode::TooBig, "Вы еще не родились.");
    std::cout << "Спасибо!";
  } catch (const MyException& e) {
    std::cout << e.what();
  }
  return 0;
}