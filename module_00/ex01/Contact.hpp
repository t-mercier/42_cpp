#pragma once

#include <iostream> // For std::cout
#include <string>   // For std::string

class Contact {
private:
  std::string firstName;
  std::string lastName;
  std::string nickName;

  // creation of a constructor Contact with
  // an initializer list -> initiates directly
  // the class members when they will be created
public:
    Contact() : firstName(""), lastName(""), nickName(""){};
    Contact(std::string fName, std::string lName, std::string nName)
        : firstName(fName), lastName(lName), nickName(nName){};
  std::string getFirstName();
  std::string getLastName();
  std::string getNickName();
  std::string getInput(std::string);
};
