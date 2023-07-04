#include "File.hpp"

void File::testProgram(std::string file) {
  std::string line;
  bool KO, OK = true;
  _in.open(file);
  for (int l = 1; std::getline(_in, line); l++) {
    line.find(_s1) == std::string::npos ? KO = false : KO = true;
    if (KO) {
      OK = false;
      std::cout << RED << "[ KO ] " << RESET << "[ " << _s1
                << " ] found at Muchacho.txt:" << l << RESET << std::endl;
    }
  }
  if (OK)
    std::cout << GREEN << "[ OK ]" << RESET << " Every occurence of [ " << _s1
              << " ] has been replaced by [ " << _s2 << " ]" << std::endl;
  _in.close();
}

int main(int ac, char **av) {
  (void)ac;
  if (ac != 4)
    return (std::cout << "Usage: <file name> <s1> <s2>" << std::endl), 1;
  File file(av[1], av[2], av[3]);
  file.replace();
  return 0;
}