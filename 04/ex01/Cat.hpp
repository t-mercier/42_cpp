#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
  Cat();
  ~Cat();
  Cat(Cat const &);

  Cat &operator=(Cat const &);
  void makeSound() const;
  Brain &getBrain() const;
  void newBrain();

private:
  Brain *_brain;
};

std::ostream &operator<<(std::ostream &, Cat const &);
