#include "Dog.hpp"

Dog::Dog() {
  _type = "Dog";
  std::cout << "Dog Constructor" << std::endl;
}

void Dog::makeSound() const { std::cout << "[ Dog Sound ]" << std::endl; }

Dog::~Dog() { std::cout << "Dog Destructor" << std::endl; };
