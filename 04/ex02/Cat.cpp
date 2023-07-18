#include "Cat.hpp"

/*_____________________________ constructors _____________________________*/

Cat::Cat() {
  _brain = new Brain();
  _type = "Cat";
  std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(Cat const& o) {
  _type = o._type;
  _brain = new Brain(*o._brain);
  std::cout << "Cat Clone Constructor" << std::endl;
}

/*______________________________ destructor ______________________________*/

Cat::~Cat() {
  delete _brain;
  std::cout << "Cat Destructor" << std::endl;
};

/*_______________________________ overloads ______________________________*/

std::ostream&
operator<<(std::ostream& o, Cat const& rhs) {
  o << rhs.getBrain().getIdea(0);
  return o;
}

Cat&
Cat::operator=(Cat const& o) {
  if (&o != this) {
    _type = o._type;
    *_brain = *o._brain;
  }
  return *this;
}

/*________________________________ methods _______________________________*/

void
Cat::makeSound() const {
  std::cout << "[ Cat Sound ]" << std::endl;
}

/*_______________________________ accessors ______________________________*/

Brain&
Cat::getBrain() const {
  return *_brain;
}