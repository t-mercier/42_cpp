#include "File.hpp"

void File::parse(std::string line) {
  size_t pos = 0;
  if ((pos = line.find(s1)) == std::string::npos) {
    out << line << std::endl;
    return;
  }
  out << line.substr(0, pos) << s2;
  parse(line.substr(pos + s1.length()));
}

void File::replace(char **av) {
  out.open("Muchacho.txt");
  in.open(av[1]);
  std::string line;
  if (!in.good() || !out.good()) {
    std::cout << "Error" << std::endl;
    return;
  }
  s1 = av[2], s2 = av[3];
  while (std::getline(in, line)) {
    if (line.find(s1) == std::string::npos) {
      out << line << std::endl;
      continue;
    }
    parse(line);
  }
  in.close();
  out.close();
}
