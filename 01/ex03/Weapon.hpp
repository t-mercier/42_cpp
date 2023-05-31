#pragma once
#include <iomanip>
#include <iostream>
#include <string>

class Weapon {
public:
  Weapon();
  Weapon(std::string);
  const std::string &getType();
  void setType(const std::string &);

private:
  std::string type;
};
