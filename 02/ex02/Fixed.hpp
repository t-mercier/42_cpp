#pragma once

#include <cmath>
#include <iostream>
#include <ostream>

class Fixed {

public:
  ~Fixed();
  Fixed();
  Fixed(const int);
  Fixed(const float);
  Fixed(const Fixed &);

  Fixed              &operator=(const Fixed &);

  int                 getRawBits() const;
  void                setRawBits(int const raw);
  float               toFloat(void) const;
  int                 toInt(void) const;

  bool                operator>(const Fixed &) const;
  bool                operator<(const Fixed &) const;
  bool                operator>=(const Fixed &) const;
  bool                operator<=(const Fixed &) const;
  bool                operator==(const Fixed &) const;
  bool                operator!=(const Fixed &) const;

  Fixed               operator+(const Fixed &) const;
  Fixed               operator-(const Fixed &) const;
  Fixed               operator*(const Fixed &) const;
  Fixed               operator/(const Fixed &) const;

  Fixed              &operator++();    // Prefix increment
  Fixed               operator++(int); // Postfix increment
  Fixed              &operator--();
  Fixed               operator--(int);

  static Fixed       &min(Fixed &, Fixed &);
  const static Fixed &min(const Fixed &, const Fixed &);
  static Fixed       &max(Fixed &, Fixed &);
  const static Fixed &max(const Fixed &, const Fixed &);

private:
  int              _raw;
  static const int _fract; // fractional bits
};

std::ostream &operator<<(std::ostream &, const Fixed &);