#include "HumanA.hpp"

void HumanA::attack() {
  std::cout << name << " takes their " << weaponType.getType()
            << std::endl;
}

 void HumanB::setWeapon(Weapon w) {
	weaponType = w;
 }