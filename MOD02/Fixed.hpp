#pragma once

#include <cmath>
#include <iostream>
#include <ostream>

class Fixed {
private:
  int _v;
  static const int _f = 8; // fractional bits

public:
  Fixed();
  Fixed(const int &);
  Fixed(const float &);
  Fixed(const Fixed &);
  Fixed& operator=(const Fixed &);
  ~Fixed();
  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

  bool operator>(const Fixed &);
  bool operator<(const Fixed &);
  bool operator>=(const Fixed &);
  bool operator<=(const Fixed &);
  bool operator!=(const Fixed &);

  Fixed operator+(const Fixed &);
  Fixed operator-(const Fixed &);
  Fixed operator*(const Fixed &);
  Fixed operator/(const Fixed &);

  static int min(Fixed &, Fixed &);
  static const int minConst(const Fixed &, const Fixed &);
  static int max(Fixed &, Fixed &);
  static const int maxConst(const Fixed &, const Fixed &);

};

std::ostream &operator<<(std::ostream &, const Fixed &);