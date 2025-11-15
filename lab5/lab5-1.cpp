#include <iostream>

#include "lab5.h"

int main() {
  Gun g;
  GunType gun_type = g.get_gun_type();
  if (gun_type == GunType::ONEHANDED)
    std::cout << "Одноручное оружие";
  else if (gun_type == GunType::TWOHANDED)
    std::cout << "Двуручное оружие";
  else if (gun_type == GunType::BOW)
    std::cout << "Лук";
  else if (gun_type == GunType::CROSSBOW)
    std::cout << "Арбалет";

  Player p = {1, "abc", "qwerty123"};
  p.print();

  MagicianGun m_gun("magician bow", GunType::BOW, 10, 1.32, 3);
  std::cout << m_gun.get_name() << " " << m_gun.get_dmg() << " "
            << m_gun.get_weight() << " " << m_gun.get_additional_dmg() << "\n";
  if (m_gun.get_gun_type() == GunType::ONEHANDED)
    std::cout << "Одноручное оружие";
  else if (m_gun.get_gun_type() == GunType::TWOHANDED)
    std::cout << "Двуручное оружие";
  else if (m_gun.get_gun_type() == GunType::BOW)
    std::cout << "Лук";
  else if (m_gun.get_gun_type() == GunType::CROSSBOW)
    std::cout << "Арбалет";

  return 0;
}