#pragma once
#include "../Utils.hpp"
#include "Animal.hpp"
#include <sstream>

#define OUT std::cout <<

class Brain {
public:
  Brain();
  Brain(const Brain&);
  ~Brain();

  Brain& operator=(Brain const&);
  void setIdeas(std::string);
  std::string getIdea(int) const;
  static const int N = 100;
  void newBrain();

private:
  std::string _ideas[N];
};

std::ostream&
operator<<(std::ostream&, Brain const&);