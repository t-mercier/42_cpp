#include "Brain.hpp"
#include <sstream>

/*_____________________________ constructors _____________________________*/

Brain::Brain() { OUT "Brain Constructor" << std::endl; }

Brain::Brain(Brain const &o) {
  int n = N - 1;
  do {
    _ideas[n] = o._ideas[n];
  } while (n--);
  std::cout << "Brain Clone Constructor" << std::endl;
}

/*______________________________ destructor ______________________________*/

Brain::~Brain() { OUT "Brain Destructor" << std::endl; }

/*_______________________________ overloads ______________________________*/

Brain &Brain::operator=(Brain const &rhs) {
  if (this != &rhs) {
    for (int i = 0; i < 100; i++)
      this->_ideas[i] = rhs._ideas[i];
  }
  return *this;
}

std::ostream &operator<<(std::ostream &o, Brain const &rhs) {

  for (int i = 0; i < Brain::N; i++) {

    o << "idea: " << i << " " << rhs.getIdea(i);
  }
  return o;
}

/*_______________________________ accessors ______________________________*/

void Brain::setIdeas(std::string idea) {
  int n = N - 1;
  do {
    std::ostringstream stream;
    stream << '[' << n << "] " << idea;
    _ideas[n] = stream.str();
  } while (--n);
}

std::string Brain::getIdea(int i) const { return _ideas[i]; }
