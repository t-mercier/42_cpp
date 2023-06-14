#pragma once

#include <cmath>
#include <iostream>
#include <ostream>

class Fixed {
private:
  int _value;
  static const int _f = 8; // fractional bits

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
  int toInt(void) const;
  friend std::ostream &operator<<(std::ostream &, const Fixed &);
};
