#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <strings.h>

void PhoneBook::prompt() {
  std::cout << "ADD > Save a new contact\nSEARCH > display a "
               "specific contact\nEXIT > Quit the program"
            << std::endl;
}

void PhoneBook::searchContact() {
  std::string s, s2;
  int i;
  std::cin >> i;
    if ((i < 1 || i > 8)) {
      std::cout << "Contact %s not found" << std::endl;
      return;
    }
	i--;
    std::cout << "First Name " << contacts[i].getFirstName() << std::endl;
    std::cout << "Last Name " << contacts[i].getLastName() << std::endl;
    std::cout << "Nickname " << contacts[i].getNickName() << std::endl;
}

std::string Contact::getFirstName() { return firstName; }
std::string Contact::getNickName() { return lastName; }
std::string Contact::getLastName() { return nickName; }

Contact *PhoneBook::addContact(int i) {
  std::string s, s1, s2;
  std::cout << "First Name > " << std::endl;
  std::getline(std::cin, s);
  std::cout << "Last Name > " << std::endl;
  std::getline(std::cin, s1);
  std::cout << "Nickname > " << std::endl;
  std::getline(std::cin, s2);
  contacts[i] = Contact(s, s1, s2);
  return contacts;
}

void PhoneBook::fillBook(int i) {
  std::string input;
  std::getline(std::cin, input);
  if (input == "ADD")
    addContact(i);
  else if (input == "SEARCH")
    searchContact();
  else if (input == "EXIT") {
    std::cout << "Exiting PhoneBook" << std::endl;
    exit(0);
  }
}

int main() {
  PhoneBook book;
  Contact contact;
  book.prompt();
  for (int i = 0;; i++) {
    if (i == 8)
      i = 0;
    book.fillBook(i);
  }
  return 0;
}