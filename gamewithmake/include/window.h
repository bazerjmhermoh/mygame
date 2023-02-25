#ifndef window_H
#define window_H
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
void initGL(GLFWwindow *window, int width, int height);
GLFWwindow *initGLFW(int width, int height);
void create3dobject();
#endif