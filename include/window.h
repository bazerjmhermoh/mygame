#ifndef WINDOWS_H
#define WINDOWS_H
#include "glad.h"
#include <GLFW/glfw3.h>
#include <iostream>

void processInput(GLFWwindow *window);
void framebuffer_size_callback(GLFWwindow *window, int width, int height);
GLFWwindow *initwindows();

#endif