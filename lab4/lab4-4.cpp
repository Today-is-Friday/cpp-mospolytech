#include "lab4-4.h"

#include <iostream>

int main() {
  Gun ak;
  std::cout << ak.get_dmg() << " " << ak.get_name() << " " << ak.get_weight()
            << "\n";
  ak.set_dmg(1);
  std::cout << ak.get_dmg() << "\n";
  Characteristic c(10);
  std::cout << c.GetDamage(ak) << "\n";
  MyMath::Add();
  MyMath::Sub();
  MyMath::Mult();
  MyMath::Div();
  std::cout << MyMath::count << "\n";

  return 0;
}

Gun::Gun() : name("ak-47"), dmg(50), weight(3.47) {}

Gun::Gun(std::string name_, double dmg_, double weight_)
    : name(name_), dmg(dmg_), weight(weight_) {};

std::string Gun::get_name() { return name; }

double Gun::get_dmg() { return dmg; }

double Gun::get_weight() { return weight; }

void Gun::set_dmg(const double dmg_) { dmg = dmg_; }

Gun::~Gun() { std::cout << name << " " << dmg << " " << weight << "\n"; }

Characteristic::Characteristic(double power_) : power(power_) {};

double Characteristic::GetDamage(const Gun& gun) { return gun.dmg + power; }

int MyMath::count = 0;

double MyMath::Add() {
  count++;

  return 0;
}

double MyMath::Sub() {
  count++;

  return 0;
}

double MyMath::Mult() {
  count++;

  return 0;
}

double MyMath::Div() {
  count++;

  return 0;
}