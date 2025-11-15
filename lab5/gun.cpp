#include "lab5.h"

Gun::Gun()
    : name("ak-47"), gun_type(GunType::TWOHANDED), dmg(50), weight(3.47) {}

Gun::Gun(std::string name_, GunType gun_type_, double dmg_, double weight_)
    : name(name_), gun_type(gun_type_), dmg(dmg_), weight(weight_) {};

std::string Gun::get_name() { return name; }

GunType Gun::get_gun_type() { return gun_type; }

double Gun::get_dmg() { return dmg; }

double Gun::get_weight() { return weight; }

void Gun::set_dmg(const double dmg_) { dmg = dmg_; }

void Gun::set_gun_type(const GunType gun_type_) { gun_type = gun_type_; }
