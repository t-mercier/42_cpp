#include "Zombie.hpp"

int main() {
  int N = 3;
  Zombie *horde = zombieHorde(N, "muchachoooo");
  while (N--)
    horde[N].announce();
  delete [] horde;
}