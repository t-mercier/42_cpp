#pragma once

#include "Contact.hpp"
#include <iostream> // For std::cout
#include <string>   // For std::string

class PhoneBook {
private:
  Contact contacts[8];

public:
  void addContact();
  void searchContact();
  void displayContact();
  void prompt();
};