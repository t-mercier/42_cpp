#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iterator>
#include <string>

void Contact::displayPb() {
  std::cout << "|" << std::endl;
  std::cout << std::setw(10) << std::right << fName + "|" << std::endl;
}

void PhoneBook::prompt() {
  std::string usage = "\nUSAGE\nADD > Save a new contact\nSEARCH > display a "
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
  i--;
  if (!contacts[i].checkEmpty(i)) {
    std::cout << "First Name " << contacts[i].getFirstName() << std::endl;
    std::cout << "Last Name " << contacts[i].getLastName() << std::endl;
    std::cout << "Nickname " << contacts[i].getNickName() << std::endl;
    std::cout << "Secret " << contacts[i].getSecret() << std::endl;
  }
}

void PhoneBook::fillPb(int i) {
  std::string input;

  std::cin >> input;
  if (input == "ADD")
    addContact(i);
  else if (input == "SEARCH")
    searchContact();
  else if (input == "EXIT") {
    std::cout << "Exiting PhoneBook" << std::endl;
    exit(0);
  } else {
    prompt();
  }
}
