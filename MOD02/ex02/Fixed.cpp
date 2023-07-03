/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/29 16:45:55 by tmercier      #+#    #+#                 */
/*   Updated: 2023/07/03 11:10:03 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
  // std::cout << "Set Raw Bits" << std::endl;
  this->_raw = raw;
}

int Fixed::getRawBits() const {
  // std::cout << "Get Raw Bits" << std::endl;
  return this->_raw;
}

int Fixed::toInt() const { return getRawBits() >> _fract; }

float Fixed::toFloat() const {
  return static_cast<float>(_raw) / (1 << _fract);
}

std::ostream &operator<<(std::ostream &o, const Fixed &f) {
  return o << f.toFloat();
}

/*============================= comparison operators =========================*/

bool Fixed::operator>(const Fixed &b) const {
  return (getRawBits() > b.getRawBits());
}

bool Fixed::operator==(const Fixed &b) const {
  return (getRawBits() == b.getRawBits());
}

bool Fixed::operator<(const Fixed &b) const { return (b > *this); }

bool Fixed::operator>=(const Fixed &b) const { return !(*this < b); }

bool Fixed::operator<=(const Fixed &b) const { return !(*this > b); }

bool Fixed::operator!=(const Fixed &b) const { return !(b == *this); }

/*============================= arithmetic operators =========================*/

Fixed Fixed::operator+(const Fixed &b) const {
  Fixed r;
  r.setRawBits(getRawBits() + b.getRawBits());
  return r;
}

Fixed Fixed::operator-(const Fixed &b) const {
  Fixed r;
  r.setRawBits(getRawBits() - b.getRawBits());
  return r;
}

Fixed Fixed::operator*(const Fixed &b) const {
  Fixed r;
  r.setRawBits(getRawBits() * b.getRawBits() >> _fract);
  return r;
}
Fixed Fixed::operator/(const Fixed &b) const {
  Fixed r;
  r.setRawBits((getRawBits() << _fract) / b.getRawBits());
  return r;
}

/*============================= increment operators =========================*/

Fixed &Fixed::operator++() {
  _raw++;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed tmp(*this);
  ++(*this);
  return tmp;
}

/*============================= decrement operators =========================*/

Fixed &Fixed::operator--() {
  _raw--;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed tmp(*this);
  --(*this);
  return tmp;
}

/*========================= min max member functions =========================*/

Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a < b) ? a : b; }

const Fixed &Fixed::min(Fixed const &a, Fixed const &b) {
  return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }

const Fixed &Fixed::max(Fixed const &a, Fixed const &b) {
  return (a > b) ? a : b;
}
