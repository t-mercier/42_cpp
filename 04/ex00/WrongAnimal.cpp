#include "WrongAnimal.hpp"

/*============================= constructors =============================*/

WrongAnimal::WrongAnimal() : _type() {
  _type = "WrongAnimal";
  self() << "Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
  self() << "Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) : _type(a._type) {
  self() << "Clone Constructor" << std::endl;
}

/*=============================== methods ===============================*/

std::string WrongAnimal::getType() const { return _type; }

void WrongAnimal::makeSound() const {
  std::cout << "[ WrongAnimal ]" << std::endl;
};

std::ostream &WrongAnimal::self() {
  return std::cout << _type << " ";
}

/*============================== destructors =============================*/

WrongAnimal::~WrongAnimal() { self() << "Destructor" << std::endl; }