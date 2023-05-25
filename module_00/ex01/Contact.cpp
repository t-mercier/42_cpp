#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>

Contact::Contact() {}
Contact::Contact(std::string a1, std::string a2, std::string a3, std::string a4,
                 std::string a5)
    : fName(a1), lName(a2), nName(a3), phone(a5), secret(a4){};

std::string Contact::getFirstName() { return fName; }
std::string Contact::getNickName() { return lName; }
std::string Contact::getLastName() { return nName; }
std::string Contact::getPhone() { return phone; }
std::string Contact::getSecret() { return secret; }

bool Contact::checkEmpty(int i) {
  if (fName.empty() || lName.empty() || nName.empty() || phone.empty() ||
      secret.empty())
    return (std::cout << "Contact" << i << "is empty or incomplete"
                      << std::endl,
            true);
  return false;
}

void Contact::addInput(std::string s, std::string s1) {
  do {
    std::cout << s;
    std::getline(std::cin, s1);
    if (s.empty()) {
      std::cout << "Error: Input cannot be empty. Please enter again."
                << std::endl;
    }
  } while (s.empty());
}

void Contact::buildPb() {
  addInput("First Name > ", fName);
  addInput("Last Name > ", lName);
  addInput("Nickname > ", nName);
  addInput("Phone Number > ", phone);
  addInput("Secret > ", secret);
  Contact() : fName(""), lName(""), nName(""){};
}

Contact *PhoneBook::addContact(int i) {
  contacts[i] = Contact(a1, a2, a3, a4, a5);
  return contacts;
}
