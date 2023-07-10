#include "Animal.hpp"

/*============================= constructors =============================*/

Animal::Animal() : _type("an animal") { self() << "Default Constructor" << std::endl; }

Animal::Animal(const std::string &type) : _type(type) {
  self() << "Constructor" << std::endl;
}

/*=============================== methods ===============================*/

std::string Animal::getType() const { return _type; }
void Animal::makeSound() const {self() << "a sound" << std::endl;};
std::ostream &Animal::self() const { return std::cout << _type << " -> "; }

/*============================== destructors =============================*/

Animal::~Animal() { self() << "Destructor" << std::endl; }


/*=======================================================================*/
/*                            WRONG ANIMAL                               */
/*=======================================================================*/

wrongAnimal::wrongAnimal() : _type("a non-animal") { wrongSelf() << "Default Constructor" << std::endl; }

wrongAnimal::wrongAnimal(const std::string &type) : _type(type) {
  wrongSelf() << "Constructor" << std::endl;
}

/*=============================== methods ===============================*/

std::string wrongAnimal::getType() const { return _type; }
void wrongAnimal::makeSound() const {wrongSelf() << "gygygg" << std::endl;};
std::ostream &wrongAnimal::wrongSelf() const { return std::cout << _type << " -> "; }

/*============================== destructors =============================*/

wrongAnimal::~wrongAnimal() { wrongSelf() << "Destructor" << std::endl; }
