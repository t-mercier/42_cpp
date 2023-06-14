#pragma once
#include <fstream>
#include <iostream>
#include <string>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

class File {
private:
  std::string _name;
  std::string _s1;
  std::string _s2;
  std::ofstream _out;
  std::ifstream _in;

public:
  File();
  File(std::string, std::string, std::string);
  void replace();
  void parse(std::string);
  void testProgram(std::string);
};
