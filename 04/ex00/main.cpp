#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int
main() {
  const Animal* meta = new Animal();
  const Animal* i = new Cat();
  const Animal* j = new Dog();
  std::cout << i->getType() << " " << std::endl;
  std::cout << j->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  const WrongAnimal* meta2 = new WrongAnimal();
  const WrongAnimal* k = new WrongCat();
  k->makeSound();
  meta2->makeSound();

  delete i;
  delete j;
  delete k;
  delete meta;
  delete meta2;

  return 0;
}
