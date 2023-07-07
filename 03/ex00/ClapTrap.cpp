#include "ClapTrap.hpp"

/*============================= constructors =============================*/

ClapTrap::ClapTrap() : name("Muchacho"), hp(10.), ep(10.), ap(0.){};

ClapTrap::ClapTrap(std::string s) : name(s), hp(10.), ep(10.), ap(0.) {}

ClapTrap::ClapTrap(const ClapTrap &o)
    : name(o.name), hp(o.hp), ep(o.ep), ap(o.ap) {}


/*=============================== methods ===============================*/

void ClapTrap::attack(const std::string &target) {
  std::cout << "ClapTrap " << name << "attacks " << target << ", causing "
            << ap << "points of damage!" << std::endl;
}

void takeDamage(unsigned int amount) {
  std::cout << "ClapTrap <name> attacks <target>" << std::endl;
}

void beRepaired(unsigned int amount) {
  std::cout << "ClapTrap <name> attacks <target>" << std::endl;
}