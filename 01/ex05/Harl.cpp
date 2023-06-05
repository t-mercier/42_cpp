#include "Harl.hpp"

void Harl::debug() {
  std::cout << "I love having extra bacon for my burger" << std::endl;
}

void Harl::info() {
  std::cout << "Wow, I cannot believe adding extra bacon costs that much"
            << std::endl;
}

void Harl::warning() {
  std::cout << "I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error() {
  std::cout << "This is unacceptable! Send me the manager, NOW!!!."
            << std::endl;
}

void Harl::complain(std::string level) {
  typedef void (Harl::*f)();
  Harl h;
  
  f msg[4] = {
      &Harl::debug,
      &Harl::info,
      &Harl::warning,
      &Harl::error,
  };

  for (int i = 0; i < 4; i++) { (h.*msg[i])(); }
}
