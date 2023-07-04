#include "File.hpp"

File::File(){};

File::File(std::string name, std::string s1, std::string s2) : _name(name), _s1(s1), _s2(s2) {}

void File::parse(std::string line) {
  size_t pos = line.find(_s1);
  if (pos == std::string::npos) {
    _out << line << std::endl;
  } else {
    _out << line.substr(0, pos) << _s2;
    parse(line.substr(pos + _s1.length()));
  }
}

void File::replace() {
  std::string name = _name;
  size_t pos = name.find(".");
  if (pos != std::string::npos) {
    name.erase(pos);
  }
  name += ".replace";
  _in.open(_name);
  _out.open(name);

  if (!_in.good() || !_out.good()) {
    std::cout << "Error: invalid file" << std::endl;
    return;
  }

  std::string line;
  while (std::getline(_in, line)) {
    parse(line);
  }
}
