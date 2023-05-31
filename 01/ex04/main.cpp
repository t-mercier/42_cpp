#include <_stdio.h>
#include <filesystem>
#include <fstream>
#include <iostream>

void replace() {}

int main(int ac, char **av) {
  (void)ac;
  std::ofstream outFile("newFile");
  std::ifstream inFile(av[1]);

  if (!inFile.good()) {
    return 1;
  }

  std::string line;
  while (std::getline(inFile, line)) {

    outFile << line << std::endl;
  } 
  outFile.close();
}