#include <string>

#include "lab5.h"

MagicianGun::MagicianGun() : additional_dmg(0.0) {}

MagicianGun::MagicianGun(std::string name_, GunType gun_type_, double dmg_,
                         double weight_, double additional_dmg_)
    : Gun(name_, gun_type_, dmg_, weight_), additional_dmg(additional_dmg_) {}

double MagicianGun::get_additional_dmg() { return additional_dmg; }