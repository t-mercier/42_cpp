#include "Dog.hpp"

/*_____________________________ constructors _____________________________*/

Dog::Dog() {
  _type = "Dog";
  _brain = new Brain();
  std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(Dog const& o) {
  _type = o._type;
  _brain = new Brain(*o._brain);
  std::cout << "Dog Clone Constructor" << std::endl;
}

/*______________________________ destructor ______________________________*/

Dog::~Dog() {
  delete _brain;
  std::cout << "Dog Destructor" << std::endl;
};

/*_______________________________ overloads ______________________________*/

std::ostream&
operator<<(std::ostream& o, Dog const& rhs) {
  o << rhs.getType() << ": ";
  return o;
}

Dog&
Dog::operator=(Dog const& o) {
  if (&o != this) {
    _type = o._type;
    *_brain = *o._brain;
  }
  return *this;
}

/*________________________________ methods _______________________________*/

void
Dog::makeSound() const {
  std::cout << "[ Dog Sound ]" << std::endl;
}

/*_______________________________ accessors ______________________________*/

Brain&
Dog::getBrain() const {
  return *_brain;
}
