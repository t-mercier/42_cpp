#pragma once
#include <iostream>

class WrongAnimal {
public:
  WrongAnimal();
  WrongAnimal(WrongAnimal const &);
  virtual ~WrongAnimal();
  std::string getType() const;
  void makeSound() const;

protected:
  std::string _type;
};
