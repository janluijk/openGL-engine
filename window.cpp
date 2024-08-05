#include "window.hpp"
#include <GLFW/glfw3.h>
#include <cassert>
  
Window::Window(int w, int h, std::string n) : width{w}, height{h}, windowName{n} {  
  initWindow();
}

Window::~Window() {
  glfwDestroyWindow(window);
  glfwTerminate();
}

void Window::initWindow() {
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); 

  window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
  assert(window && "Failed to create GLFW window!");

  glfwMakeContextCurrent(window);

  glfwSetWindowUserPointer(window, this);
  /*glfwSetFramebufferSizeCallback(window, framebufferResizeCallback);*/
}
