#pragma once

#include <cmath>
#include <iostream>

class Fixed {
private:
  int _value;
  static const int _fractional_bits = 8;

public:
  Fixed();
  Fixed(const int &);
  Fixed(const float &);
  Fixed(const Fixed &);
  Fixed &operator=(const Fixed &);
  ~Fixed();
  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt( void ) const;
};
