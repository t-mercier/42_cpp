#include "Animal.hpp"

/*_____________________________ constructors _____________________________*/

Animal::Animal()
  : _type("Animal") {
  std::cout << "Animal Constructor" << std::endl;
}

Animal::Animal(const Animal& o)
  : _type(o._type) {
  std::cout << "Animal Clone Constructor" << std::endl;
}

/*______________________________ destructor ______________________________*/

Animal::~Animal() { std::cout << "Animal Destructor" << std::endl; }

/*_______________________________ overloads ______________________________*/

std::ostream&
operator<<(std::ostream& o, Animal const& rhs) {
  o << rhs.getType() << ": ";
  return o;
}

Animal&
Animal::operator=(Animal const& o) {
  if (&o != this)
    _type = o._type;
  return *this;
}

/*________________________________ methods _______________________________*/

void
Animal::makeSound() const {
  std::cout << "[ Animal Sound ]" << std::endl;
};

/*_______________________________ accessors ______________________________*/

std::string
Animal::getType() const {
  return _type;
}
