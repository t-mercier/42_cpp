
#include "WrongCat.hpp"


WrongCat::WrongCat() {
  _type = "WrongCat";
  std::cout << "WrongCat Constructor" << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << "[ WrongCat Sound ]" << std::endl;
}

WrongCat::~WrongCat() { std::cout << "WrongCat Destructor" << std::endl; };