#include "HumanB.hpp"

void HumanB::attack() {
  std::cout << name << " attacks with their " << weaponType.getType()
            << std::endl;
}

 void HumanB::setWeapon(Weapon w) {
	weaponType = w;
 }