#include "File.hpp"

std::string File::newLine() {
  j = line.find(s1, i);
  if (j == std::string::npos) {
    s3 = line;
    if (i != 0 || j == line.length()) {
      s3 += line.substr(i, line.size() - i);
    }
    return s3;
  }
  s3 += line.substr(i, j - i) + s2;
  i = j + s1.size();
  if (i == line.length())
    return s3;
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
    i = 0, j = 0;
    s3 = "";
    out << newLine() << std::endl;
  }
  out.close();
}
