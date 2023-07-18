#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int
main() {

  Animal* animal[20];
  for (int i = 0; i < 20; i++) {
    if (i % 2)
      animal[i] = new Dog;
    else
      animal[i] = new Cat;
  }

  for (int i = 0; i < 20; i++) {
    delete animal[i];
  }

  Cat niceCat;
  Cat meanCat;
  meanCat.getBrain().setIdeas("KILL THE MOUSE!!!");
  std::cout << "mean cat -> " << meanCat << std::endl;
  niceCat = meanCat;
  std::cout << "nice cat -> " << niceCat << std::endl;
  niceCat.getBrain().setIdeas("SAVE THE MOUSE!!!");
  std::cout << "*** set new idea in CAT ***" << std::endl;
  std::cout << "mean cat -> " << meanCat << std::endl;
  std::cout << "nice cat -> " << niceCat << std::endl;
  return 0;
}
