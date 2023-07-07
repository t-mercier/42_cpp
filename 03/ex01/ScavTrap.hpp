#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  ScavTrap();
  ScavTrap(std::string);
  ScavTrap(const ScavTrap &);
  ~ScavTrap();
  void guardGate();

protected:
  std::ostream &self();
};