#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main() {
  const Animal *meta = new Animal();
  const Animal *i = new Cat();
  const Animal *j = new Dog();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  const WrongAnimal *meta2 = new WrongAnimal();
  const WrongAnimal *k = new WrongCat();
  k->makeSound();
  meta2->makeSound();

  return 0;
}

