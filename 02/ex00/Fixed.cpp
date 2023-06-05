#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
  std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other) : value(other.value) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other)
    value = other.value;
  return *this;
}

int getRawBits(void) {}

void setRawBits(int const raw) {}