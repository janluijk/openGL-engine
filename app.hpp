#pragma once

#include "window.hpp"

class App {

public:
  
  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 800;

  App();
  ~App();

  void run();
private:

  Window window{WIDTH, HEIGHT, "Engine"};
};
