#pragma once
#include <iostream>

class WrongAnimal {
public:
  WrongAnimal();
  WrongAnimal(WrongAnimal const&);
  virtual ~WrongAnimal();

  WrongAnimal& operator=(WrongAnimal const&);
  std::string getType() const;
  void makeSound() const;

protected:
  std::string _type;
};
