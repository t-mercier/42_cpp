#pragma once

#include "iostream"

class Bureaucrat {
public:
  Bureaucrat();
  Bureaucrat(std::string, int);
  Bureaucrat(Bureaucrat const &);
  Bureaucrat &operator=(Bureaucrat const &);
  ~Bureaucrat();

  //   class GradeTooHighException : public std::exception {
  //   public:
  //     explicit GradeTooHighException(const std::string message)
  //       : msg_(message){};
  //     explicit GradeTooHighException(const std::string& message)
  //       : msg_(message){};
  //     ~GradeTooHighException() throw(){};

  //     const char* what() const throw() { return msg_.c_str(); };

  //   protected:
  //     std::string msg_;
  //   };

  std::string getName() const;
  int getGrade() const;
  void setGrade(int);

  void GradeTooHighException();
  void GradeTooLowException();

private:
  std::string _name;
  int _grade;
};