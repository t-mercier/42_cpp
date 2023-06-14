#include "Fixed.hpp"

Fixed::Fixed() : _v(0) {
  std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int &n) : _v(n << _f) {}
Fixed::Fixed(const float &n) : _v(static_cast<int>(n * (1 << _f))) {}
Fixed::Fixed(const Fixed &other) : _v(other._v) {
  std::cout << "Copy constructor called" << std::endl;
}
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

void Fixed::setRawBits(int const raw) { _v = raw; }
int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return _v;
}

float Fixed::toFloat() const { return static_cast<float>(_v) / (1 << _f); }
int Fixed::toInt() const { return _v >> _f; }

Fixed &Fixed::operator=(const Fixed &other) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->_v = other.getRawBits();
  return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
  return os << (static_cast<float>(fixed._v) / (1 << fixed._f));
}
// The const keyword at the end of the function declaration means that
// this function does not modify the object it's called on. 
bool Fixed::operator>(const Fixed &other) const { return _v > other._v; }

Fixed Fixed::operator+(const Fixed &other) { return (_v + other._v); }

static int min(Fixed &, Fixed &);
static const int minConst(const Fixed &, const Fixed &);
static int max(Fixed &, Fixed &);
static const int maxConst(const Fixed &, const Fixed &);

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