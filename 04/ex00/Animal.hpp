#pragma once
#include <iostream>

class Animal {
public:
  Animal();
  Animal(Animal const &);
  virtual ~Animal();
  std::string getType() const;
  virtual void makeSound() const;

protected:
  std::string _type;
};
