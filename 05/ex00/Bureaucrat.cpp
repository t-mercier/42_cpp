#include "Bureaucrat.hpp"

/*_____________________________ constructors _____________________________*/

Bureaucrat::Bureaucrat() : _name("Dick") { setGrade(0); };

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name), _grade(grade){};

Bureaucrat::Bureaucrat(Bureaucrat const &o)
    : _name(o._name), _grade(o._grade){};

/*______________________________ destructor ______________________________*/

Bureaucrat::~Bureaucrat(){};

/*______________________________ overloads _______________________________*/

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &o) {
  if (&o != this) {
    _name = o._name;
    setGrade(o._grade);
  }
  return *this;
}

/*______________________________ accessors _______________________________*/

std::string Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::setGrade(int g) {}