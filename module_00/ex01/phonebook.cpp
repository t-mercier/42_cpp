#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

 
void PhoneBook::displayLine(std::string s) {
  if (s.size() > 9)
    s = s.substr(0, 9) + ".";
  std::cout << std::setw(10) << std::right << s + "|";
}

void PhoneBook::prompt() {
  std::string usage = "\nADD > Save a new contact\nSEARCH > display a "
                      "specific contact\nEXIT > Quit the program\n";
  std::cout << "--------" << usage << "--------" << std::endl;
}

void PhoneBook::searchContact() {
  std::string s, s2;
  int i;

  std::cout << "Enter Contact Index" << std::endl;
  std::cin >> i;
  if ((i < 1 || i > 8)) {
    std::cout << "Error > Index range is [ 1 - 8 ]" << std::endl;
    return;
  }
  if (!contacts[i].checkEmpty(i)) {
    i--;
	std::cout << "|";
    displayLine(contacts[i].getFirstName());
    displayLine(contacts[i].getLastName());
    displayLine(contacts[i].getNickName());
    displayLine(contacts[i].getSecret());
  }
}

void PhoneBook::fillPb(int i) {
  std::string input;

  std::getline(std::cin, input);
  std::cin.clear();
  if (input == "ADD")
    addContact(i);
  else if (input == "SEARCH")
    searchContact();
  else if (input == "EXIT") {
    std::cout << "Exiting PhoneBook" << std::endl;
    exit(0);
  } else
    std::cout << "> ";
}
