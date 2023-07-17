#include "Dog.hpp"
// #include <new>

/*_____________________________ constructors _____________________________*/

Dog::Dog() {
  newBrain();
  _type = "Dog";
  std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(Dog const &o) {
  _type = o._type;
  _brain = new (std::nothrow) Brain(*o._brain);
  if (!_brain) {
    OUT RED << "Memory allocation failed" << std::endl;
  }
  std::cout << "Dog Clone Constructor" << std::endl;
}

/*______________________________ destructor ______________________________*/

Dog::~Dog() {
  delete _brain;
  std::cout << "Dog Destructor" << std::endl;
};

/*_______________________________ overloads ______________________________*/

std::ostream &operator<<(std::ostream &o, Dog const &rhs) {
  o << rhs.getType() << ": ";
  return o;
}

/*________________________________ methods _______________________________*/

void Dog::makeSound() const { std::cout << "[ Dog Sound ]" << std::endl; }

Brain &Dog::getBrain() const { return *_brain; }

void Dog::newBrain(){
  _brain = new(std::nothrow) Brain();
  if (!_brain)
    std::cout << RED << ERR;
}