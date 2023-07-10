#pragma once
#include <iostream>

class Animal {
public:
  Animal();
  Animal(const std::string &);
  virtual ~Animal();

  std::string getType() const;
  virtual void makeSound() const;

protected:
  std::string _type;
  virtual std::ostream &self() const;
};


/*=======================================================================*/
/*                            WRONG ANIMAL                               */
/*=======================================================================*/


class wrongAnimal {
public:
  wrongAnimal();
  wrongAnimal(const std::string &);
  virtual ~wrongAnimal();

  std::string getType() const;
  void makeSound() const;

protected:
  std::string _type;
  virtual std::ostream &wrongSelf() const;
};
