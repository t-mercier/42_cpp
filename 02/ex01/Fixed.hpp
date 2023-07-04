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

  Fixed &operator=(const Fixed &);

  int    getRawBits() const;
  void   setRawBits(int const raw);
  float  toFloat(void) const;
  int    toInt(void) const;

private:
  int              _raw;
  static const int _fract;
};

std::ostream &operator<<(std::ostream &, const Fixed &);