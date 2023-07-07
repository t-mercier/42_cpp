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

  ClapTrap &operator=(const ClapTrap &);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

protected:
  virtual std::ostream &s();
  std::string name;
  float hp, ep, ap;
};
