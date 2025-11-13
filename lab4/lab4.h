#ifndef LAB4_H
#define LAB4_H

#include <iostream>
#include <string>

class Gun {
 public:
  std::string name;
  double dmg;
  double weight;

  Gun();
  Gun(std::string name_, double dmg_, double weight_);
  bool can_hold(const double max_weight);
  double total_weight(const Gun& gun);
  double total_weight(const double additional_weight);

  ~Gun();
};

#endif