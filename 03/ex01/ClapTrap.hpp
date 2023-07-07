#pragma once

#include <cmath>
#include <iostream>
#include <ostream>

class ClapTrap {
public:
  ClapTrap();
  ClapTrap(std::string);
  ClapTrap(const ClapTrap &);
  ~ClapTrap();

  void attack(const std::string &);
  void takeDamage(unsigned int);
  void beRepaired(unsigned int);

protected:
  virtual std::ostream &self();
  virtual std::ostream &state();
  std::string _name;
  float _health, _energy, _damage;
};