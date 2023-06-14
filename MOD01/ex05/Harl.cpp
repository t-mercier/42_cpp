#include "Harl.hpp"

void Harl::debug() { std::cout << "Debug!!" << std::endl; }

void Harl::info() { std::cout << "Give infos !!!" << std::endl; }

void Harl::warning() { std::cout << "Watchout, 1st warning !!" << std::endl; }

void Harl::error() { std::cout << "Die!!!! Game Over!!!!!" << std::endl; }

typedef void (Harl::*F)();
void Harl::complain(std::string level) {

  std::string cmd[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  F msg[4] = {
      &Harl::debug,
      &Harl::info,
      &Harl::warning,
      &Harl::error,
  };

  for (int i = 0; i < 4; i++) {
    if (cmd[i] == level) {
      std::cout << "Harl: ";
      return (this->*msg[i])();
    }
  }
  std::cout << "What's up ??" << std::endl;
}
