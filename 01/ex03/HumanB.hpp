#pragma once
#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB {
public:
  HumanB();
  HumanB(std::string);
  void attack();

  void setWeapon(Weapon&);
  Weapon& getWeapon();

private:
  std::string name;
  Weapon* weaponType;
};
