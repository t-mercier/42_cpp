#include "Zombie.hpp"

int main(int ac, char **av) {

  (void)av;

  if (ac != 1) {
    std::cout << "ERROR" << std::endl;
    exit(1);
  }
  std::cout << "----------------------------" << std::endl;
  std::cout << "Decollage d'un random Muchacho !!!" << std::endl;
  randomChump("Muchcachoooooo");
  std::cout << "----------------------------" << std::endl;
  std::cout << "Atterissage d'un Muchacho dans la Heap !!!" << std::endl;
  Zombie *Z1 = newZombie("Muchachoooooo");
  Z1->announce();
  delete Z1;
  std::cout << "----------------------------" << std::endl;
  std::cout << "Atterissage d'un Muchacho dans la stack !!!" << std::endl;
  Zombie Z2("Muchachoooooo");
  Z2.announce();
  
  return 0;
}
