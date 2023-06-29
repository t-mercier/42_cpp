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
  std::cout << "Set Raw Bits" << std::endl;
  this->_raw = raw;
}
int Fixed::getRawBits() const {
  std::cout << "Get Raw Bits" << std::endl;
  return this->_raw;
}

int Fixed::toInt() const { return getRawBits() >> _fract; }
float Fixed::toFloat() const {
  return ((float)getRawBits()) / (float)(1 << _fract);
}

std::ostream &operator<<(std::ostream &o, const Fixed &f) {
  return o << f.toFloat();
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