#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
  self() << "Constructor" << std::endl;
}

void Dog::makeSound() const { std::cout << "[ Dog Sound ]" << std::endl; }

Dog::~Dog() { std::cout << "Destructor" << std::endl; };
