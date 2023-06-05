#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
  std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other) : _value(other._value) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->_value = other.getRawBits();
  return *this;
}

void Fixed::setRawBits(int const raw) { _value = raw; }

int Fixed::getRawBits() const {
  // Fixed copy;
  std::cout << "getRawBits member function called" << std::endl;
  return _value;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }