#include "WrongAnimal.hpp"

/*_____________________________ constructors _____________________________*/

WrongAnimal::WrongAnimal()
  : _type("WrongAnimal") {
  std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a)
  : _type(a._type) {
  std::cout << "WrongAnimal Clone Constructor" << std::endl;
}

/*______________________________ destructor ______________________________*/

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal Destructor" << std::endl;
}

/*_______________________________ overloads ______________________________*/

WrongAnimal&
WrongAnimal::operator=(WrongAnimal const& rhs) {
  if (&rhs != this)
    _type = rhs._type;
  return *this;
}

/*________________________________ methods _______________________________*/

void
WrongAnimal::makeSound() const {
  std::cout << "[ WrongAnimal Sound ]" << std::endl;
};

/*_______________________________ accessors ______________________________*/

std::string
WrongAnimal::getType() const {
  return _type;
}
