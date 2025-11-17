#include <iostream>

#include "lab5.h"

OneTimeGun::OneTimeGun() : Gun(), used(false) {}

OneTimeGun::OneTimeGun(std::string name_, GunType gun_type_, double dmg_,
                       double weight_)
    : Gun(name_, gun_type_, dmg_, weight_), used(false) {}

void OneTimeGun::Attack() {
  if (!used) {
    std::cout << "Атакуем одноразовым оружием\n";
    used = true;
  }

  else
    std::cout << "Оружие уже было использовано\n";
}