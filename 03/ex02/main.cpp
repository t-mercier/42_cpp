#include "FragTrap.hpp"

int main()
{
  std::cout << "============" << std::endl;
  std::cout << "LOS BANDIDOS" << std::endl;
  std::cout << "============" << std::endl;
  // ClapTrap dc;
  // ClapTrap c("Clap I");
	// c.attack("someone");
	// dc.takeDamage(6);
	// c.beRepaired(4);
  // for (int i = 0; i < 20; i++) c.takeDamage(21);
  FragTrap df;
  FragTrap f("Frag I");
  df.takeDamage(12);
  f.attack("someone");
  f.beRepaired(600);
  f.highFivesGuys();
}
