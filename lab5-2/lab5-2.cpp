#include "lab5.h"

int main() {
  // Gun g;

  // lab5-2/lab5-2.cpp: In function ‘int main()’:
  // lab5-2/lab5-2.cpp:4:7: error: cannot declare variable ‘g’ to be of abstract
  // type ‘Gun’
  //     4 |   Gun g;
  //       |       ^
  // In file included from lab5-2/lab5-2.cpp:1:
  // lab5-2/lab5.h:9:7: note:   because the following virtual functions are pure
  // within ‘Gun’:
  //     9 | class Gun {
  //       |       ^~~
  // lab5-2/lab5.h:28:16: note:     ‘virtual void Gun::Attack()’
  //    28 |   virtual void Attack() = 0;
  //       |                ^~~~~~

  MagicianGun m_gun;
  m_gun.Attack();
  OneTimeGun o_gun;
  o_gun.Attack();
  o_gun.Attack();

  int idGun = 32;
  DualWield<OneTimeGun, int> dual_wield(o_gun, idGun);

  dual_wield.getLeft().Attack();
  std::cout << dual_wield.getRight() << "\n";
  dual_wield.setRight(123);
  std::cout << dual_wield.getRight();

  return 0;
}