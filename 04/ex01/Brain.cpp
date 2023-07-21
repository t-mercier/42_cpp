#include "Brain.hpp"

/*_____________________________ constructors _____________________________*/

Brain::Brain() { OUT "Brain Constructor" << std::endl; }

Brain::Brain(Brain const &o) {
  for (int i = 0; i != Brain::N; i++)
    _ideas[i] = o._ideas[i];
  std::cout << "Brain Clone Constructor " << std::endl;
}

/*______________________________ destructor ______________________________*/

Brain::~Brain() { OUT "Brain Destructor" << std::endl; }

/*_______________________________ overloads ______________________________*/

Brain &Brain::operator=(Brain const &rhs) {
  if (this != &rhs) {
    for (int i = 0; i < N; i++)
      this->_ideas[i] = rhs._ideas[i];
  }
  return *this;
}

std::ostream &operator<<(std::ostream &o, Brain const &rhs) {
  for (int i = 0; i != Brain::N; i++) {
    o << " Brain Idea " << rhs.getIdea(i) << std::endl;
  }
  return o;
}

/*_______________________________ accessors ______________________________*/

void Brain::setIdeas(std::string idea) {
  int n = N - 1;
  do {
    std::ostringstream stream;
    stream << '[' << n + 1 << "] " << idea;
    _ideas[n] = stream.str();
  } while (n-- > 0);
}

std::string Brain::getIdea(int i) const { return _ideas[i]; }
