#ifndef window_H
#define window_H
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
typedef struct VAO
{
    GLuint VertexArrayID;
    GLuint VertexBuffer;
    GLuint ColorBuffer;

    GLenum PrimitiveMode;
    GLenum FillMode;
    int NumVertices;
} vao;
GLuint LoadShaders(const char *vertex_file_path, const char *fragment_file_path);
struct VAO *Buffer(GLenum primitive_mode,
                   int numVertices,
                   const GLfloat *vertex_buffer_data,
                   const GLfloat *color_buffer_data, GLenum fill_mode = GL_FILL);
void initGL(GLFWwindow *window, int width, int height);
GLFWwindow *initGLFW(int width, int height);
void traingle();
#endif