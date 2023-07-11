#pragma once
#include <iostream>

class WrongAnimal {
public:
  WrongAnimal();
  WrongAnimal(std::string);
  WrongAnimal(WrongAnimal const &);
  virtual ~WrongAnimal();
  std::string getType() const;
  virtual void makeSound() const;

protected:
  std::string _type;
  virtual std::ostream &self();
};
