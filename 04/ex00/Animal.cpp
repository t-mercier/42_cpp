#include "Animal.hpp"

/*============================= constructors =============================*/

Animal::Animal() : _type("Animal") {
  std::cout  << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const Animal &o) : _type(o._type) {
  std::cout  << "Animal Clone Constructor" << std::endl;
}

/*=============================== methods ===============================*/

std::string Animal::getType() const { return _type; }

void Animal::makeSound() const { std::cout << "[ Animal Sound ]" << std::endl; };

/*============================== destructors =============================*/

Animal::~Animal() { std::cout  << "Animal Destructor" << std::endl; }
