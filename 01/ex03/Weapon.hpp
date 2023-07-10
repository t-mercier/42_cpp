#pragma once
#include <iostream>

class Weapon {
public:
  Weapon();
  Weapon(std::string);
  const std::string &getType();
  void setType(const std::string &);

private:
  std::string _type;
};
