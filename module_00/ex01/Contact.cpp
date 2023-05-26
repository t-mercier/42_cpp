#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>

std::string Contact::getFirstName() { return fName; }
std::string Contact::getNickName() { return lName; }
std::string Contact::getLastName() { return nName; }
std::string Contact::getPhone() { return phone; }
std::string Contact::getSecret() { return secret; }
