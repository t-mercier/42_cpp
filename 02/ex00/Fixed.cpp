#include "Fixed.hpp"

const int Fixed::_fract = 8;

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed() : _raw(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const Fixed &other) : _raw(other._raw) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->_raw = other.getRawBits();
  return *this;
}

void Fixed::setRawBits(int const raw) { _raw = raw; }

int  Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return _raw;
}
