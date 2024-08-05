#pragma once

#include <string>
#include <GLFW/glfw3.h>

class Window {

public:
  Window(int width, int height, std::string name);
  ~Window();

  bool shouldClose() { return glfwWindowShouldClose(window);}
  void swapBuffers() { glfwSwapBuffers(window); }

private:
  GLFWwindow *window;

  // Constructor fields
  int width;
  int height;
  std::string windowName;

  void initWindow();
  // void framebufferResizeCallback(GLFWwindow *oldwindow, int width, int height) {

  //}
};
