#include "Weapon.hpp"

	const std::string& Weapon::getType(){
		return type;
	}

	void Weapon::setType(const std::string& t){
		type = t;
	}
