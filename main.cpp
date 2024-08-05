/*
 Goal today: get a window and Makefile running
*/

#include "app.hpp"

#include <cstdlib>
#include <iostream>


int main() {
  App app{};

  try {
    app.run(); 
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
