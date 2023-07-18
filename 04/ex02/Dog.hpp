#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
  Dog();
  ~Dog();
  Dog(Dog const&);

  Dog& operator=(Dog const&);
  void makeSound() const;
  Brain& getBrain() const;
  void newBrain();

private:
  Brain* _brain;
};

std::ostream&
operator<<(std::ostream&, Dog const&);