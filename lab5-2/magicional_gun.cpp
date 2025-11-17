#include <string>

#include "lab5.h"

MagicianGun::MagicianGun() : Gun(), additional_dmg(0.0) {}

MagicianGun::MagicianGun(std::string name_, GunType gun_type_, double dmg_,
                         double weight_, double additional_dmg_)
    : Gun(name_, gun_type_, dmg_, weight_), additional_dmg(additional_dmg_) {}

double MagicianGun::get_additional_dmg() const { return additional_dmg; }

double MagicianGun::get_dmg() const {
  return Gun::get_dmg() + get_additional_dmg();
}

void MagicianGun::Attack() { std::cout << "Атакуем магическим оружием\n"; }