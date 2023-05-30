#include "Zombie.hpp"

int main(int ac, char **av) {

  (void)av;

  if (ac != 1) {
    std::cout << "ERROR" << std::endl;
    exit(1);
  }
  randomChump("C.Z");

  Zombie *Z1 = newZombie("Z.1");
  Z1->announce();
  delete Z1;

  Zombie Z2("Z.2");
  Z2.announce();
  
  return 0;
}
