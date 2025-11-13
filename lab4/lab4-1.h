#ifndef LAB4_1_H
#define LAB4_1_H

#include <iostream>
#include <string>

class Gun {
 public:
  std::string name;
  double dmg;
  double weight;

  Gun() : name("ak-47"), dmg(50), weight(3.47) {};
  Gun(std::string name_, double dmg_, double weight_)
      : name(name_), dmg(dmg_), weight(weight_) {};

  ~Gun();
};

#endif