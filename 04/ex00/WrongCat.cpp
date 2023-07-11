
#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  self() << "Constructor" << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << "[ WrongCat Sound ]" << std::endl;
}

WrongCat::~WrongCat() { std::cout << "Destructor" << std::endl; };