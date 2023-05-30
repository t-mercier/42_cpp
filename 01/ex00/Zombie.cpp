#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string s) { name = std::string(s); }

Zombie::~Zombie() { std::cout << name << ": destroyed" << std::endl; }

void Zombie::announce() {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
