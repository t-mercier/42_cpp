#pragma once
#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

class Contact {

public:
  Contact() : fName(""), lName(""), nName(""){};
  Contact(std::string a, std::string b, std::string c, std::string d,
          std::string e)
      : fName(a), lName(b), nName(c), phone(d), secret(e){};
  std::string getFirstName();
  std::string getLastName();
  std::string getNickName();
  std::string getPhone();
  std::string getSecret();

private:
  std::string fName, lName, nName, phone, secret;
};
