#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string s, Weapon &w) : _name(s), weaponType(w) {}

void HumanA::attack() {
  std::string w = weaponType.getType();
  if (w == "" && std::cout << _name
                           << " is gonna die, cause he doesn't have weapon !!"
                           << std::endl)
    return;
  std::cout << _name << " takes their " << w << std::endl;
}

void HumanA::setWeapon(Weapon &w) { weaponType = w; }
