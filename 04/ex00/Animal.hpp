#pragma once
#include <iostream>

class Animal {
public:
  Animal();
  Animal(std::string);
  Animal(const Animal &);
  ~Animal();

  void attack(const std::string &);
  void takeDamage(unsigned int);
  void beRepaired(unsigned int);

protected:
  std::string _type;
  // virtual std::ostream &self();
};
