#include "Cat.hpp"

/*_____________________________ constructors _____________________________*/

Cat::Cat() {
  newBrain();
  _type = "cat";
  std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(Cat const &o) {
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

std::ostream &operator<<(std::ostream &o, Cat const &rhs) {
  o << rhs.getType() << ": ";
  return o;
}

/*________________________________ methods _______________________________*/

void Cat::makeSound() const { std::cout << "[ Cat Sound ]" << std::endl; }

Brain &Cat::getBrain() const { return *_brain; }

void Cat::newBrain(){
  _brain = new(std::nothrow) Brain();
  if (!_brain)
    std::cout << RED << ERR;
}