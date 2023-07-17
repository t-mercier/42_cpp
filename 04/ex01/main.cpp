#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {

  Animal *punks[12];

  for (int i = 0; i < 12; i++) {
    punks[i] = (i % 2) ? (Animal *)new Dog() : new Cat();
    punks[i]->makeSound();
  }

  Brain &Brains();


  std::cout << *punks[3] << punks[3] ;

  for (int i = 0; i < 12; i++) {
    delete punks[i];
  }

  // Dog* Punk = new Dog();

  return 0;
}
