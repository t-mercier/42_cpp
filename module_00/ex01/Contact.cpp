#include "Contact.hpp"
#include "PhoneBook.hpp"

bool Contact::checkEmpty(int i) {
  if (fName.empty() || lName.empty() || nName.empty() || phone.empty() ||
      secret.empty())
    return (std::cout << "Contact" << i << "is empty or incomplete"
                      << std::endl,
            true);
  return false;
}

std::string Contact::getFirstName() { return fName; }
std::string Contact::getNickName() { return lName; }
std::string Contact::getLastName() { return nName; }
std::string Contact::getPhone() { return phone; }
std::string Contact::getSecret() { return secret; }

Contact *PhoneBook::addContact(int i) {
  std::string s, s1, s2, s3, s4;

  std::cout << "First Name > " << std::endl;
  std::getline(std::cin, s);
  std::cout << "Last Name > " << std::endl;
  std::getline(std::cin, s1);
  std::cout << "Nickname > " << std::endl;
  std::getline(std::cin, s2);
  std::cout << "Phone Number > " << std::endl;
  std::getline(std::cin, s3);
  std::cout << "Secret > " << std::endl;
  std::getline(std::cin, s4);
  contacts[i] = Contact(s, s1, s2, s3, s4);
  return contacts;
}
