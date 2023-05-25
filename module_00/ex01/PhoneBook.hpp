#pragma once

#include "Contact.hpp"


class PhoneBook {
private:
  Contact contacts[8];

public:
  
  Contact *addContact(int i);
  void fillPb(int);
  void searchContact();
  void prompt();
  void displayLine(std::string);

  // bool checkEmpty(Contact);
};
