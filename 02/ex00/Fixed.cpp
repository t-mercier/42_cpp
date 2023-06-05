#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
  std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &n) : _value(n._value) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int &n) : _value(n._value) {
  std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float) : _value() {
  std::cout << "Float constructor called" << std::endl;
};

Fixed &Fixed::operator=(const Fixed &n) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->_value = n.getRawBits();
  return *this;
}

void Fixed::setRawBits(int const raw) { _value = raw; }

int Fixed::getRawBits() const {
  // Fixed copy;
  std::cout << "getRawBits member function called" << std::endl;
  return _value;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }