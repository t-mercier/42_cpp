#include "ClapTrap.hpp"

/*
 * RULES
 * Attack causes the target to lose <attack damage> health points
 * Attack and repair cost 1 energy point each
 * ClapTrap can’t do anything if it has no health points or energy points left
 */

/*============================= constructors =============================*/

ClapTrap::ClapTrap()
    : _name("No Name"), _health(10.), _energy(10.), _damage(0.) {
  self() << "Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _health(10.), _energy(10.), _damage(0.) {
  self() << "Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &o)
    : _name(o._name), _health(o._health), _energy(o._energy),
      _damage(o._damage) {
  self() << "Clone Constructor" << std::endl;
}

/*=============================== methods ===============================*/

std::ostream &ClapTrap::self() {
  return std::cout << "ClapTrap " << _name << " ";
}

std::ostream &ClapTrap::state() {
  return std::cout << " Health (" << _health << ") "
                   << " Energy (" << _energy << ") "
                   << " Damage (" << _damage << ") | ";
}

void ClapTrap::takeDamage(unsigned int amount) {
  _damage += amount;
  _health -= amount;
  self() << "took " << amount << " hit points" << std::endl;
  if (_health <= 0)
    state() << " CRITICAL STATE, NEEDS REPAIR!!" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  if (_energy <= 0 || _health <= 0) {
    state() << " Not strong enough to attack !!";
    return;
  }
  self() << "attack " << target << " causing " << _damage << " damages"
         << std::endl;
  _energy--;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (_energy <= 0 || _health <= 0) {
    state() << " Not strong enough to repair :(" << std::endl;
    return;
  }
  _health += amount, _energy--;
  self() << "gets " << amount << " health points back" << std::endl;
}

/*============================== destructors =============================*/

ClapTrap::~ClapTrap() { self() << "Destructor" << std::endl; }
