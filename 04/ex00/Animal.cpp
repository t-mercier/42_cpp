#include "Animal.hpp"


/*============================= constructors =============================*/

Animal::Animal() : _type() {
  // self() << "Default Constructor" << std::endl;
}

Animal::Animal(std::string type)
    : _type(type) {
  // self() << "Constructor" << std::endl;
}

Animal::Animal(const Animal &o)
    : _type(o._type) {
  // self() << "Clone Constructor" << std::endl;
}

/*=============================== methods ===============================*/

// std::ostream &Animal::self() {
//   return std::cout << "Animal " << _name << " ";
// }

// std::ostream &Animal::state() {
//   return std::cout << " Health (" << _health << ") "
//                    << " Energy (" << _energy << ") "
//                    << " Damage (" << _damage << ") | ";
// }

// void Animal::takeDamage(unsigned int amount) {
//   _damage += amount;
//   _health -= amount;
//   self() << "took " << amount << " hit points" << std::endl;
//   if (_health <= 0)
//     state() << " CRITICAL STATE, NEEDS REPAIR!!" << std::endl;
// }

// void Animal::attack(const std::string &target) {
//   if (_energy <= 0 || _health <= 0) {
//     state() << " Not strong enough to attack !!";
//     return;
//   }
//   self() << "attack " << target << " causing " << _damage << " damages"
//          << std::endl;
//   _energy--;
// }

// void Animal::beRepaired(unsigned int amount) {
//   if (_energy <= 0 || _health <= 0) {
//     state() << " Not strong enough to repair :(" << std::endl;
//     return;
//   }
//   _health += amount, _energy--;
//   self() << "gets " << amount << " health points back" << std::endl;
// }

/*============================== destructors =============================*/

Animal::~Animal() { std::cout << "Destructor" << std::endl; }
