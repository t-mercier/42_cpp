#include <iostream>

int main(int ac, char *av[]) {
  if (ac == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
  }

  for (int i = 1; i < ac; i++) {
    std::string a(av[i]);
    for (size_t j = 0; j < a.size(); j++)
      a[j] = (char)toupper(a[j]);
    std::cout << a << std::endl;
  }
  return 0;
}
