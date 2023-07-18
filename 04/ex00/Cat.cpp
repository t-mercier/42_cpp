#include "Cat.hpp"

/*_____________________________ constructors _____________________________*/

Cat::Cat() {
  _type = "Cat";
  std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(Cat const& o) {
  _type = o._type;
  std::cout << "Cat Clone Constructor" << std::endl;
}

/*______________________________ destructor ______________________________*/

Cat::~Cat() { std::cout << "Cat Destructor" << std::endl; };

/*________________________________ methods _______________________________*/

void
Cat::makeSound() const {
  std::cout << "[ Cat Sound ]" << std::endl;
}