
#include "WrongCat.hpp"

/*_____________________________ constructors _____________________________*/

WrongCat::WrongCat() {
  _type = "WrongCat";
  std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const& o) {
  _type = o._type;
  std::cout << "WrongCat Clone Constructor" << std::endl;
}

/*______________________________ destructor ______________________________*/

WrongCat::~WrongCat() { std::cout << "WrongCat Destructor" << std::endl; };

/*________________________________ methods _______________________________*/

void
WrongCat::makeSound() const {
  std::cout << "[ WrongCat Sound ]" << std::endl;
}
