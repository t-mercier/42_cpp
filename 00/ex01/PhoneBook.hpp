#pragma once
#include "Contact.hpp"

class PhoneBook {
private:
  std::string a, b, c, d, e;
  Contact contacts[8];
  int idx;

public:
  void index();
  void add();
  void search();
  void getInput(std::string);
  void addField(std::string &, std::string);
  std::string trunc(std::string);
};

void prompt(std::string);
void error(std::string);