#pragma once
#include "Animal.hpp"

class Cat : public Animal {
public:
  Cat();

protected:
  void makeSound() const;
};

/*=======================================================================*/
/*                            WRONG CAT                                  */
/*=======================================================================*/


class wrongCat : public wrongAnimal {
public:
  wrongCat();

protected:
  void makeSound() const;
};
