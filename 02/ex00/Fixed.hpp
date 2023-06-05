#pragma once

#include <iomanip>
#include <ios>
#include <iostream>
#include <sstream>
#include <string>
#include <sys/types.h>

class Fixed {
private:
  int value;
  static const int fractional_bits = 8;

public:
  Fixed();                              // Default constructor
  Fixed(const Fixed &other);            // Copy constructor
  Fixed &operator=(const Fixed &other); // Copy assignment operator
  ~Fixed();                             // Destructor
  int getRawBits(void) const;     // Ret. raw value of the fixed-point value
  void setRawBits(int const raw); // sets the raw value
                                  // of the fixed-point number
};
