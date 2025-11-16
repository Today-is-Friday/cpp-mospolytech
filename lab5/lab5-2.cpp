#include <iostream>

#include "lab5.h"

int main() {
  MagicianGun m_gun("magician bow", GunType::BOW, 10, 1.32, 3);
  MagicianGun m_gun2("magician bow", GunType::BOW, 9, 1.32, 30);
  if (m_gun.get_dmg() == 13)
    std::cout << "Урон верный";
  else
    std::cout << "Урон неверный";

  if (m_gun2 > m_gun && m_gun < m_gun2)
    std::cout << "\nСравнение верное";
  else
    std::cout << "\nСравнение неверное";

  return 0;
}