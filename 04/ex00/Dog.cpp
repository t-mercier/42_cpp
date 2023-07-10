#include "Dog.hpp"

Dog::Dog() : Animal("dog"){
  // _type = "dog";
  // self() << "Default Constructor" << std::endl;
};

void Dog::makeSound() const { self() << "barks" << std::endl; }
