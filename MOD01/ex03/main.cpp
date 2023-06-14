#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
  Weapon c1 = Weapon("crude spiked club");
  HumanA bob("Bob", c1);
  bob.attack();
  c1.setType("some other type of club");
  bob.attack();

  Weapon c3 = Weapon();
  HumanA peter("Peter", c3);
  peter.attack();
  c3.setType("some other type of club");
  peter.attack();

  Weapon c2 = Weapon("crude spiked club");
  HumanB jim("Jim");
  jim.setWeapon(c2);
  jim.attack();
  c2.setType("some other type of club");
  jim.attack();
  return 0;
}