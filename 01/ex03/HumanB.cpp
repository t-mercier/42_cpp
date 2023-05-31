#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(){};

HumanB::HumanB(std::string s) : name(s){
	s = name; 
}

void HumanB::attack() {
  std::cout << name << " attacks with their " << weaponType->getType()
            << std::endl;
}

void HumanB::setWeapon(Weapon &w) { weaponType = &w; }