#pragma once
#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA {
public:
  HumanA();
  HumanA(std::string, Weapon);

  void attack();
  void setWeapon();

private:
  std::string name;
  Weapon weaponType;
};
