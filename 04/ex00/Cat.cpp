#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat"){};

void Cat::makeSound() const { self() << " meoww" << std::endl; }

/*=======================================================================*/
/*                            WRONG CAT                                  */
/*=======================================================================*/

wrongCat::wrongCat() : wrongAnimal("wrong cat"){};

void wrongCat::makeSound() const {

  // wrongAnimal animal;

  // animal.getType();
  wrongSelf() << "weird sound" << std::endl;
}