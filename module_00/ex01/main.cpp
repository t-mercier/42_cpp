#include "PhoneBook.hpp"

void error(std::string s) {
  if (std::cin.eof())
    exit(0);
  std::cout << RED << "ERROR > " << s << RESET << std::endl;
}

void prompt(std::string s) {
  if (std::cin.eof())
    exit(0);
  std::cout << s << "☎️  > ";
}

int main() {
  PhoneBook pb;
  std::string cmd;
  pb.index();
  while (1) {
    if (std::cin.eof())
      exit(0);
    prompt("ADD | SEARCH | EXIT ");
    getline(std::cin, cmd);
    pb.getInput(cmd);
  }
  return 0;
}