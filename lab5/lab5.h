#ifndef LAB_5_H
#define LAB_5_H

#include <iostream>
#include <string>

enum class GunType { ONEHANDED, TWOHANDED, BOW, CROSSBOW };

class Gun {
 private:
  std::string name;
  GunType gun_type;
  double dmg;
  double weight;
  friend class Characteristic;

 public:
  Gun();
  Gun(std::string name_, GunType gun_type_, double dmg_, double weight_);

  std::string get_name();
  double get_dmg();
  double get_weight();
  GunType get_gun_type();
  void set_dmg(const double dmg_);
  void set_gun_type(const GunType gun_type_);
};

class MagicianGun : public Gun {
 private:
  double additional_dmg;

 public:
  MagicianGun();
  MagicianGun(std::string name_, GunType gun_type_, double dmg_, double weight_,
              double additional_dmg_);

  double get_additional_dmg();
};

struct Player {
  int id;
  std::string login;
  std::string password;

  void print() {
    std::cout << "-\n" << id << "\n" << login << "\n" << password << "\n-\n";
  }
};

#endif