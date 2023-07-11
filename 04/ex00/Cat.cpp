#include "Cat.hpp"

Cat::Cat() {
  _type = "cat";
  std::cout << "Cat Constructor" << std::endl;
}

void Cat::makeSound() const { std::cout << "[ Cat Sound ]" << std::endl; }

Cat::~Cat() { std::cout << "Cat Destructor" << std::endl; };
