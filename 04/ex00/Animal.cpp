#include "Animal.hpp"

/*============================= constructors =============================*/

Animal::Animal() : _type() {
  _type = "Animal";
  self() << "Default Constructor" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
  self() << "Constructor" << std::endl;
}

Animal::Animal(const Animal &o) : _type(o._type) {
  self() << "Clone Constructor" << std::endl;
}

/*=============================== methods ===============================*/

std::string Animal::getType() const { return _type; }

void Animal::makeSound() const { std::cout << "[ Animal Sound ]" << std::endl; };

std::ostream &Animal::self() {
  return std::cout << _type << " ";
}

/*============================== destructors =============================*/

Animal::~Animal() { self() << "Destructor" << std::endl; }
