#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
  PhoneBook pb;
  pb.prompt();
  for (int i = 0;; i++) {
    pb.fillPb(i);
    if (i == 7)
      i = 0;
  }
  return 0;
}
