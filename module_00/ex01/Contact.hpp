#pragma once

#include <iostream> // For std::cout
#include <string>   // For std::string

class Contact {
private:
  int index;
  std::string firstName;
  std::string lastName;
  std::string nickName;

public:
  // creation of a constructor Contact with
  // an initializer list -> initiates directly
  // the class members when they will be created
  Contact(int idx, std::string fName, std::string lName, std::string nName)
      : index(idx), firstName(fName), lastName(lName), nickName(nName) {}
  void setIndex();
  void setFname();
  void setLname();
  void setNname();
};
