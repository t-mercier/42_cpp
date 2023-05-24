#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <map>
#include <string>

// Function prototypes
void addContact();
void searchContact();

int checkArgs(std::string s) {
  if (s == "ADD")
    return 1;
  return 0;
}

void PhoneBook::prompt() {
  std::cout << "ADD > Save a new contact\nSEARCH > display a "
               "specific contact\nEXIT > Quit the program"
            << std::endl;
}

void PhoneBook::addContact() {
//   Contact first;
  std::cout << "First Name > " << std::endl;
//   first.getFname();
}

void PhoneBook::searchContact() {
  std::cout << "Searching for a contact..." << std::endl;
}

void PhoneBook::displayContact() {
  std::cout << "Searching for a contact..." << std::endl;
}

void getFName() {
  std::string s;
  std::getline(std::cin, s);
}


int main() {
  PhoneBook pb;

  pb.prompt();
  std::string input;

  std::getline(std::cin, input);
  return 0;
}