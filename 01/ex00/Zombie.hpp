#pragma once
#include <iomanip>
#include <iostream>
#include <string>

class Zombie {
public:
  Zombie();
  Zombie(std::string name);
  ~Zombie();
  void announce();

private:
  std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);