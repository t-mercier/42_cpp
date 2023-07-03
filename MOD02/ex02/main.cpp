
#include "Fixed.hpp"

int main(void) {
  Fixed       a;
  Fixed const b(Fixed(5.05f) * Fixed(2));
  Fixed const c(Fixed(5.05f) / Fixed(2));
  Fixed const d(Fixed(5.05f) + Fixed(2));

  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;

  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;
  std::cout << "d: " << d << std::endl;

  std::cout << Fixed::max(a, b) << std::endl;

  return 0;
}
