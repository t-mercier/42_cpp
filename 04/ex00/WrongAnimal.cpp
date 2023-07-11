#include "WrongAnimal.hpp"

/*============================= constructors =============================*/

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
  std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) : _type(a._type) {
  std::cout << "WrongAnimal Clone Constructor" << std::endl;
}

/*=============================== methods ===============================*/

std::string WrongAnimal::getType() const { return _type; }

void WrongAnimal::makeSound() const {
  std::cout << "[ WrongAnimal ]" << std::endl;
};

/*============================== destructors =============================*/

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal Destructor" << std::endl; }