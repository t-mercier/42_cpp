#pragma once
#include <iostream>

class Zombie {
public:
  Zombie();
  Zombie(std::string);
  ~Zombie();
  void announce();

private:
  std::string _name;
};

Zombie *newZombie(std::string);
void randomChump(std::string);