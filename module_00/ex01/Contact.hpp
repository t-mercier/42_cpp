#pragma once

#include <iostream> // For std::cout
#include <string>   // For std::string

class Contact {
private:
  std::string fName;
  std::string lName;
  std::string nName;
  std::string phone;
  std::string secret;

  // creation of a constructor Contact with
  // an initializer list -> initiates directly
  // the class members when they will be created
public:
  Contact() : fName(""), lName(""), nName(""){};
  Contact(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5)
      : fName(s1), lName(s2), nName(s3), phone(s5), secret(s4){};
  std::string getFirstName();
  std::string getLastName();
  std::string getNickName();
  std::string getPhone();
  std::string getSecret();
  std::string getInput(std::string);
  bool checkEmpty(int);
  void displayPb();

};
