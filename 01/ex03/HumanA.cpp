#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>

HumanA::HumanA(std::string s, Weapon &w) : name(s), weaponType(w){}

void HumanA::attack() {
  std::string w = weaponType.getType();
  std::cout << name << " takes their " << w << std::endl;
}

void HumanA::setWeapon(Weapon &w) { weaponType = w; }
