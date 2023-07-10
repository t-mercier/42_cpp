#include <iostream>

int main() {

  std::string s = "HI THIS IS BRAIN";
  std::string *stringPTR = &s;
  std::string &stringREF = s;
  std::cout << "Memory address of s: " << &s << std::endl;
  std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
  std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
  std::cout << "--------------------------------------------" << std::endl;
  std::cout << "Value of s: " << s << std::endl;
  std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
  std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}