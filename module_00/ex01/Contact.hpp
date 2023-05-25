#pragma once

#include <iomanip>
#include <iostream> // For std::cout
#include <iterator>
#include <string> // For std::string#include <cstdlib>

class Contact {

public:
  Contact() : fName(""), lName(""), nName(""){};
    Contact(std::string a1, std::string a2, std::string a3, std::string a4,
            std::string a5)
        : fName(a1), lName(a2), nName(a3), phone(a5), secret(a4){};
  std::string getFirstName();
  std::string getLastName();
  std::string getNickName();
  std::string getPhone();
  std::string getSecret();
  std::string getInput(std::string);
  bool checkEmpty(int);
  void addInput(std::string, std::string);
  void buildPb();

private:
  std::string fName, lName, nName, phone, secret;
};
