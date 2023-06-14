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
  std::cout << "getRawBits member function called" << std::endl;
  return _value;
}

Fixed::Fixed(const int &n) { _value = n << _f; }

Fixed::Fixed(const float &n) { _value = static_cast<int>(n * (1 << _f)); }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

float Fixed::toFloat() const { return static_cast<float>(_value) / (1 << _f); }

int Fixed::toInt() const { return _value >> _f; }

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
  return os << (static_cast<float>(fixed._value) / (1 << fixed._f));
}

/*

int to fixed -> left bit shift by fractional bits _f
fixed to int -> right bit shift by fractional bits _f
fixed to float -> divide 2, raised to the power of
  the fractional bits to obtain the floating-point representation
  of the fixed-point value.

The << operator is overloaded as a friend function
of the Fixed class. It takes two parameters:
- std::ostream& os -> the output stream (std::cout in this case)
- const Fixed& fixed -> the Fixed object to insert into the output stream.
Inside the operator<< function, we convert the _value member of
the Fixed object to a floating-point representation by dividing it
by 2 raised to the power of the _fractional_bits.
This gives the equivalent floating-point value.
Then, we insert this value into the output stream os.

With this operator overload, we can use std::cout << fixedObject
to insert the floating-point representation of the Fixed object
into the output stream and print it to the console.

*/