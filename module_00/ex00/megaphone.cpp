#include <cctype>
#include <iostream>
#include <string>

int main(int ac, char *av[]) {
  for (int i = 1; i < ac; i++) {
    std::string arg(av[i]);
    for (size_t j = 0; j < arg.length(); j++) {
      arg[j] = toupper(arg[j]);
    }
    std::cout << arg << std::endl;
  }
  return 0;
}
