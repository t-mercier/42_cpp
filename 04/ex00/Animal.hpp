#pragma once
#include <iostream>

class Animal {
public:
  Animal();
  Animal(Animal const&);
  virtual ~Animal();

  Animal& operator=(Animal const&);
  std::string getType() const;
  virtual void makeSound() const;

protected:
  std::string _type;
};
