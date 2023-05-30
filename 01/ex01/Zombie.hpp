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
  void setName(std::string newName);

private:
  std::string name;
};

Zombie *newZombie(std::string name);
Zombie *zombieHorde(int N, std::string name);