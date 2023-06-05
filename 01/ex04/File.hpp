#pragma once
#include <_stdio.h>
#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

class File {
public:
  void replace(char **);
  void newLine(std::string);

private:
  size_t i;
  size_t j;
  std::string s1;
  std::string s2;
  std::string line;
  std::ifstream in;
  std::ofstream out;
};
