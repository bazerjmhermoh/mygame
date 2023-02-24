#ifndef SHADER_H
#define SHADER_H

#include <iostream>
#include <fstream>
#include "glad.h"
#include <GLFW/glfw3.h>

//  هنا الخطوات الكبيره
std::string readFile(const char *filePath);
GLuint loadshader(const char *filepath1  , const char *filepath2);
#endif