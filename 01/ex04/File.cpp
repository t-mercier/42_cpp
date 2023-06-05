#include "File.hpp"

void File::newLine() {
  j = line.find(s1, i);
  if (j == std::string::npos) {
    s3 = line;
    if (i != 0 || j == line.length()) {
      s3 += line.substr(i, line.size() - i);
    }
  }
  s3 += line.substr(i, j - i) + s2;
  i = j + s1.size();
  return newLine();
}

void File::replace(char **av) {
  out.open("newFile");
  in.open(av[1]);
  if (!in.good() || !out.good()) {
    std::cerr << "Error" << std::endl;
    return;
  }
  s1 = av[2];
  s2 = av[3];
  while (std::getline(in, line)) {
    if (line.find(s1) == )
    out << newLine() << std::endl;
  }
  out.close();
}
