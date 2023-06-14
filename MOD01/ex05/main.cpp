#include "Harl.hpp"

int main(int ac, char **av) {
  (void)ac;
  Harl h;
  if (ac == 2)
    h.complain(std::string(av[1]));
  else
   std::cout << "usage: ./out <LEVEL>" << std::endl;
  return 0;
}