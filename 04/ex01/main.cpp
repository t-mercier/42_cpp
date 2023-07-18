#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int
main() {

  Animal *punks[6];
  for (int i = 0; i < 6; i++) {
    punks[i] = ((i % 2) ? (Animal *)new Dog() : new Cat());
    if (punks[i]->getType() == "Cat") {
      Cat *catPtr = dynamic_cast<Cat *>(punks[i]);
      if (catPtr) {
        catPtr->getBrain().setIdeas("KILL MOUSES!!");
        std::cout << *punks[i] << catPtr->getBrain();
      }
    }
    if (punks[i]->getType() == "Dog") {
      Dog *dogPtr = dynamic_cast<Dog *>(punks[i]);
      if (dogPtr) {
        dogPtr->getBrain().setIdeas("KILL CATS!!");
        std::cout << *punks[i] << dogPtr->getBrain();
      }
    }
  }

  for (int i = 0; i < 6; i++) {
    delete punks[i];
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