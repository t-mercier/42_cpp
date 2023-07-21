#pragma once
#include <iostream>
#include <istream>

#define ERR "Memory allocation failed\n"

#define WHITE "\x1B[0;37m"
#define RED "\x1B[0;31m"
#define PURPLE "\x1B[0;35m"
#define CYAN "\x1B[0;36m"
#define GREEN "\x1B[0;32m"
#define YELLOW "\x1B[0;33m"
#define NONE "\x1B[0m"

/**
 * @brief Allocate memory and check for failure
 * 
 *! Usage
 ** MyClass *obj = createObject<obj>();
 */

template <typename T> T *createObject() {
  {
    T *object = new (std::nothrow) T();
    if (!object) {
      std::cerr << "Memory allocation failed!\n";
      std::exit(EXIT_FAILURE);
    }
    return object;
  }
}

/*_____________________________ constructors _____________________________*/
/*______________________________ destructor ______________________________*/
/*_______________________________ methods ________________________________*/
/*______________________________ overloads _______________________________*/
/*______________________________ accessors _______________________________*/


