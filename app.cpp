#include "app.hpp"
#include <GL/gl.h>
#include <GLFW/glfw3.h>

App::App() { }

App::~App() { }

void App::run() {
  while (!window.shouldClose()) {

    glClearColor(0.5f, 0.6f, 0.8f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    window.swapBuffers();
    glfwPollEvents();
  }
}
