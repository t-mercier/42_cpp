#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string w){ type = w;};

const std::string &Weapon::getType() { return type; }

void Weapon::setType(const std::string &t) { type = t; }
