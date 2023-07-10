#pragma once
#include "Animal.hpp"

class Dog : public Animal {
public:
  Dog();

protected:
  void makeSound() const;
};