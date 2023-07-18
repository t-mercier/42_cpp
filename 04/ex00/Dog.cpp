#include "Dog.hpp"

/*_____________________________ constructors _____________________________*/

Dog::Dog() {
  _type = "Dog";
  std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(Dog const& o) {
  _type = o._type;
  std::cout << "Dog Clone Constructor" << std::endl;
}

/*______________________________ destructor ______________________________*/

Dog::~Dog() { std::cout << "Dog Destructor" << std::endl; };

/*________________________________ methods _______________________________*/

void
Dog::makeSound() const {
  std::cout << "[ Dog Sound ]" << std::endl;
}