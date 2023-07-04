#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string type) : _type(type){};

const std::string &Weapon::getType() { return _type; }

void Weapon::setType(const std::string &t) { _type = t; }
