#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  _name = "No Name";
  _health = 100.;
  _energy = 50.;
  _damage = 20.;
  self() << "Default Constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  _name = name;
  _health = 100.;
  _energy = 50.;
  _damage = 20.;
  self() << "Constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &o) : ClapTrap(o) {
  _name = o._name;
  _health = o._health;
  _energy = o._energy;
  _damage = o._damage;
  self() << "Clone Constructor" << std::endl;
}
ScavTrap::~ScavTrap() { self() << "Destructor" << std::endl; };

/*=============================== methods ===============================*/

std::ostream &ScavTrap::self() {
  return std::cout << "ScavTrap " << _name << " ";
}

void ScavTrap::guardGate() {
  if (_health <= 0)
    return;
  self() << "is now in Gate keeper mode" << std::endl;
};