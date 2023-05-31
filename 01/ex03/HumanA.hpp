#pragma once
#include "HumanB.hpp"
#include "Weapon.hpp"

class HumanA {
public:
  HumanA();
  HumanA(std::string, Weapon &);
  void attack();
  
  void setWeapon(Weapon &);

private:
  std::string name;
  Weapon &weaponType;
};
