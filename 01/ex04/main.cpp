#include "File.hpp"

void File::testProgram() {
  std::string line;
  bool KO, OK = true;
  in.open("Muchacho.txt");
  for (int l = 1; std::getline(in, line); l++) {
    line.find(s1) == std::string::npos ? KO = false : KO = true;
    if (KO) {
      OK = false;
      std::cout << RED << "[ KO ] " << RESET << "[ " << s1
                << " ] found at Muchacho.txt:" << l << RESET << std::endl;
    }
  }
  if (OK)
    std::cout << GREEN << "[ OK ]" << RESET << " Every occurence of [ " << s1
              << " ] has been replaced by [ " << s2 << " ]" << std::endl;
  in.close();
}

int main(int ac, char **av) {
  (void)ac;
  File file;
  file.replace(av);
  file.testProgram();
}