#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
  PhoneBook pb;
  pb.prompt();
  for (int i = 0;; i++) {
    if (i == 8)
      i = 0;
    pb.fillPb(i);
  }
  return 0;
}
