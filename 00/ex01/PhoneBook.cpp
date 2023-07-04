#include "PhoneBook.hpp"

void PhoneBook::index() { idx = 0; }

std::string PhoneBook::trunc(std::string s) {
  if (s.size() > 10)
    s = s.substr(0, 9) + ".";
  return s;
}

void PhoneBook::search() {
  std::string s;

  prompt("Index Search [ 1 - 8 ] ");
  std::getline(std::cin, s);
  if (std::cin.eof())
    exit(0);
  int i = std::stoi(s);
  if (i < 1 || i > 8) {
    std::cin.ignore(INT_MAX, '\n');
    error("Wrong number");
    return;
  }
  i--;
  Contact c = contacts[i];
  std::cout << std::setw(10) << i + 1 << "|";
  std::cout << std::setw(10) << trunc(c.getFirstName()) << "|";
  std::cout << std::setw(10) << trunc(c.getLastName()) << "|";
  std::cout << std::setw(10) << trunc(c.getNickName()) << "|" << std::endl;
}

void PhoneBook::addField(std::string &x, std::string s) {
  std::cout << GREEN << s << RESET;
  getline(std::cin, x);
}

void PhoneBook::add() {
  addField(a, "First name > ");
  addField(b, "Last name > ");
  addField(c, "Nickname > ");
  addField(d, "Phone > ");
  addField(e, "Secret > ");
  contacts[idx++] = Contact(a, b, c, d, e);
  if (idx == 8)
    idx = 0;
}

void PhoneBook::getInput(std::string cmd) {
  if (std::cin.eof())
    exit(0);
  if (cmd.empty())
    return;
  if (cmd == "ADD")
    add();
  else if (cmd == "SEARCH")
    search();
  else if (cmd == "EXIT")
    exit(0);
  else
    error("Enter a valid command");
}