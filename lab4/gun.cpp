#include "lab4.h"

Gun::Gun() : name("ak-47"), dmg(50), weight(3.47) {}

Gun::Gun(std::string name_, double dmg_, double weight_)
    : name(name_), dmg(dmg_), weight(weight_) {};

bool Gun::can_hold(const double max_weight) { return max_weight > weight; }

// double Gun::total_weight(const Gun gun) { return weight + gun.weight; }
double Gun::total_weight(const Gun& gun) { return total_weight(gun.weight); }

double Gun::total_weight(const double additional_weight) {
  return weight + additional_weight;
}

#ifndef LAB4_1
Gun::~Gun() { std::cout << name << " " << dmg << " " << weight << "\n"; }
#endif