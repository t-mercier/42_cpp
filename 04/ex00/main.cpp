#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main() {
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  // std::cout << j->getType() << " " << std::endl;
  // std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  const wrongAnimal *meta2 = new wrongAnimal();
  const wrongAnimal *k = new wrongCat();
  // std::cout << j->getType() << " " << std::endl;
  // std::cout << i->getType() << " " << std::endl;
  k->makeSound(); // will output the cat sound!
  meta2->makeSound();

  return 0;
}
