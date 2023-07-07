#pragma once

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {
public:
  FragTrap();
  FragTrap(std::string);
  FragTrap(const FragTrap &);
  ~FragTrap();
  void highFivesGuys();

protected:
  std::ostream &self();
};