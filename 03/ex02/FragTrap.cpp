#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  _name = "No Name";
  _health = 100.;
  _energy = 100.;
  _damage = 30.;
  self() << "Default Constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  _name = name;
  _health = 100.;
  _energy = 50.;
  _damage = 20.;
  self() << "Constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &o) : ClapTrap(o) {
  _name = o._name;
  _health = o._health;
  _energy = o._energy;
  _damage = o._damage;
  self() << "Clone Constructor" << std::endl;
}
FragTrap::~FragTrap() { self() << "Destructor" << std::endl; };

/*=============================== methods ===============================*/

std::ostream &FragTrap::self() {
  return std::cout << "FragTrap " << _name << " ";
}

void FragTrap::highFivesGuys() {
  if (_health <= 0)
    return;
  self() << "gives a high five" << std::endl;
};