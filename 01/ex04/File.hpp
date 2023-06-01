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
  void lineCopy();
  std::string newLine();

private:
  size_t i;
  size_t j;
  std::string s1;
  std::string s2;
  std::string s3;
  std::string line;
  std::ifstream in;
  std::ofstream out;
};
