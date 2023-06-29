#pragma once

#include <iostream>

class Fixed {
public:
  ~Fixed();
  Fixed();
  Fixed(const Fixed &);

  Fixed &operator=(const Fixed &);
  int    getRawBits() const;
  void   setRawBits(int const raw);

private:
  int              _raw;
  static const int _fract;
};