#pragma once
#include <iomanip>
#include <iostream>
#include <string>

class Zombie {
public:
  Zombie();
  Zombie(std::string);

  ~Zombie();

  void announce();
  void setName(std::string);

private:
  std::string _name;
};

Zombie *newZombie(std::string);
Zombie *zombieHorde(int, std::string);