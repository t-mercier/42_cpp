#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
	Zombie *muchacho = new Zombie[N];
	for (int i = 0; i < N; i++)
		muchacho[i].setName(name);
	return muchacho;
}