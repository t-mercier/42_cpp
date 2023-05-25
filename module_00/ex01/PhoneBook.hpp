#pragma once

#include "Contact.hpp"
#include <iostream> // For std::cout
#include <string>   // For std::string#include <cstdlib>
#include <iomanip> 

class PhoneBook {
private:
  Contact contacts[8];

public:
  
  Contact *addContact(int i);
  void fillPb(int);
  void searchContact();
  void prompt();
  // bool checkEmpty(Contact);
};
