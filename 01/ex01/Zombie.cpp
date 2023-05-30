#include "Zombie.hpp"

void Zombie::announce() {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){};

Zombie::Zombie(std::string s) { name = s; }

Zombie::~Zombie() { std::cout << name << ": destroyed" << std::endl; }