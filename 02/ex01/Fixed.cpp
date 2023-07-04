#include "Fixed.hpp"

const int Fixed::_fract = 8;

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed() : _raw(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _raw(n << _fract) {
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _raw(round(n * (1 << _fract))) {
  std::cout << "Float constructor" << std::endl;
}

Fixed::Fixed(const Fixed &n) : _raw(n._raw) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &f)
    this->_raw = f.getRawBits();
  return *this;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "Set RawBits" << std::endl;
  this->_raw = raw;
}

int Fixed::getRawBits() const {
  std::cout << "Get RawBits" << std::endl;
  return this->_raw;
}

int Fixed::toInt() const { return _raw >> _fract; }

float Fixed::toFloat() const {
  return static_cast<float>(_raw) / (1 << _fract);
}

std::ostream &operator<<(std::ostream &o, const Fixed &f) {
  return o << f.toFloat();
}
