#pragma once
#include "Animal.hpp"

class Cat : public Animal {
public:
  Cat();
  Cat(Cat const&);
  ~Cat();

  void makeSound() const;
};
