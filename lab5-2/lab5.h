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

 public:
  Gun();
  Gun(std::string name_, GunType gun_type_, double dmg_, double weight_);

  std::string get_name() const;
  virtual double get_dmg() const;
  double get_weight() const;
  GunType get_gun_type() const;
  void set_dmg(const double dmg_);
  void set_gun_type(const GunType gun_type_);

  virtual void Attack() = 0;

  bool operator>(const Gun& other);
  bool operator<(const Gun& other);
};

class MagicianGun : public Gun {
 private:
  double additional_dmg;

 public:
  MagicianGun();
  MagicianGun(std::string name_, GunType gun_type_, double dmg_, double weight_,
              double additional_dmg_);

  double get_additional_dmg() const;
  double get_dmg() const override;

  void Attack() override;
};

class OneTimeGun : public Gun {
 private:
  bool used;

 public:
  OneTimeGun();
  OneTimeGun(std::string name_, GunType gun_type_, double dmg_, double weight_);

  void Attack() override;
};

template <typename LeftWeapon, typename RightWeapon>
class DualWield {
 private:
  LeftWeapon left;
  RightWeapon right;

 public:
  DualWield(const LeftWeapon& l, const RightWeapon& r) : left(l), right(r) {}

  LeftWeapon& getLeft() { return left; }
  RightWeapon& getRight() { return right; }

  void setLeft(const LeftWeapon& left_) { left = left_; }
  void setRight(const RightWeapon& right_) { right = right_; }
};

#endif