#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
  self() << "Constructor" << std::endl;
}

void Cat::makeSound() const { std::cout << "[ Cat Sound ]" << std::endl; }

Cat::~Cat() { self() << "Destructor" << std::endl; };
