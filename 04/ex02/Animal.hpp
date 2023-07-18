#pragma once
#include <iostream>
#include <ostream>
#include <string>

class Animal {
public:
  Animal();
  Animal(Animal const&);
  virtual ~Animal();

  Animal& operator=(Animal const&);
  std::string getType() const;
  virtual void makeSound() const = 0;

protected:
  std::string _type;
};

std::ostream&
operator<<(std::ostream&, Animal const&);
