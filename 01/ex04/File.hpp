#pragma once
#include <fstream>
#include <iostream>
#include <string>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

class File {
public:
  void replace(char **);
  void parse(std::string);
  void testProgram();

private:
  std::string s1;
  std::string s2;
  std::ofstream out;
  std::ifstream in;
};
