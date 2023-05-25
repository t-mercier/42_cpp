#pragma once

#include "Contact.hpp"
#include <iostream> // For std::cout
#include <string>   // For std::string

class PhoneBook {
private:
  Contact contacts[8];

public:
  Contact *addContact(int i);
  void fillBook(int);
  void searchContact();
  void displayContact(std::string);
  void prompt();
  
};