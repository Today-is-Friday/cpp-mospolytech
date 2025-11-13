#ifndef LAB4_4_H
#define LAB4_4_H

#include <iostream>
#include <string>

class Gun {
 private:
  std::string name;
  double dmg;
  double weight;
  friend class Characteristic;

 public:
  Gun();
  Gun(std::string name_, double dmg_, double weight_);

  std::string get_name();
  double get_dmg();
  double get_weight();
  void set_dmg(const double dmg_);

  ~Gun();
};

class Characteristic {
 public:
  double power;
  Characteristic(double power_);
  double GetDamage(const Gun& gun);
};

class MyMath {
 public:
  static int count;
  static double Add();
  static double Sub();
  static double Mult();
  static double Div();
};

#endif