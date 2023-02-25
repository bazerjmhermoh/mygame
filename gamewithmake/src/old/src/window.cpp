#include "../include/window.h"
#include <vector>
#include <bits/stdc++.h>
/* Generate VAO, VBOs and return VAO handle */
struct VAO *Buffer(GLenum primitive_mode, int numVertices, const GLfloat *vertex_buffer_data, const GLfloat *color_buffer_data, GLenum fill_mode)
{
    struct VAO *vao = new struct VAO;
    vao->NumVertices = numVertices;
    vao->PrimitiveMode = primitive_mode; // not used
    vao->FillMode = fill_mode;           // not used

    glGenVertexArrays(1, &(vao->VertexArrayID)); // VAO
    glGenBuffers(1, &(vao->VertexBuffer));       // VBO - vertices
    glGenBuffers(1, &(vao->ColorBuffer));        // VBO - colors

    glBindVertexArray(vao->VertexArrayID);                                                                // Bind the VAO
    glBindBuffer(GL_ARRAY_BUFFER, vao->VertexBuffer);                                                     // Bind the VBO vertices
    glBufferData(GL_ARRAY_BUFFER, 3 * numVertices * sizeof(GLfloat), vertex_buffer_data, GL_STATIC_DRAW); // Copy the vertices into VBO
    glVertexAttribPointer(
        0,        // attribute 0. Vertices
        3,        // size (x,y,z)
        GL_FLOAT, // type
        GL_FALSE, // normalized?
        0,        // stride
        (void *)0 // array buffer offset
    );

    glBindBuffer(GL_ARRAY_BUFFER, vao->ColorBuffer);                                                     // Bind the VBO colors
    glBufferData(GL_ARRAY_BUFFER, 3 * numVertices * sizeof(GLfloat), color_buffer_data, GL_STATIC_DRAW); // Copy the vertex colors
    glVertexAttribPointer(
        1,        // attribute 1. Color
        3,        // size (r,g,b)
        GL_FLOAT, // type
        GL_FALSE, // normalized?
        0,        // stride
        (void *)0 // array buffer offset
    );

    return vao;
}

void create3dobject()
{
}

void traingle()
{

    /* ONLY vertices between the bounds specified in glm::ortho will be visible on screen */

    /* Define vertex array as used in glBegin (GL_TRIANGLES) */
    static const GLfloat vertex_buffer_data[] = {
        0, 1, 0,   // vertex 0
        -1, -1, 0, // vertex 1
        1, -1, 0,  // vertex 2
    };

    static const GLfloat color_buffer_data[] = {
        1, 0, 0, // color 0
        0, 1, 0, // color 1
        0, 0, 1, // color 2
    };

    // create3DObject creates and returns a handle to a VAO that can be used later
    Buffer(GL_TRIANGLES, 3, vertex_buffer_data, color_buffer_data, GL_LINE);
}
void initGL(GLFWwindow *window, int width, int height)
{
    GLuint programID;

    traingle();
    programID = LoadShaders("Sample_GL.vert", "Sample_GL.frag");
    // traingle                                                   // review
    // first : write vertex                                       // 1 : shader
    //  2 : create shader                                         // 2 : program
    //  3 : input  shader source code                             // 3 : vba  and vbo
    //  4 : compile the shader                                    // 4 : use program and draw array
    //  5 : do same thing for fragment shader
    //  6 : create shader program
    //  7 : attach each shader to it
    //  8 : link shader

    //  9 : genrate buffer
    //  10 : bind buffer
    //  11 : input data to buffer  wich is vertex
    //  12 : genrate vertex array
    //  13 : bind vertex array
    //  14 : set vertex attribpoint
    //  15 : enable vertex att
    //  16 : binf buffer
    //  17 : bind vertex array
    //  18 : use program
    //  19 : bind vertex array again
    //  20 : gl drow array
    //  21 : swap the buffer

    // load shader from file
}
GLFWwindow *initGLFW(int width, int height)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow *window = glfwCreateWindow(width, height, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return NULL;
    }
    glfwMakeContextCurrent(window);
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return NULL;
    }

    return window;
}

GLuint LoadShaders(const char *vertex_file_path, const char *fragment_file_path)
{
    // Create the shaders
    GLuint VertexShaderID = glCreateShader(GL_VERTEX_SHADER);
    GLuint FragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);

    // Read the Vertex Shader code from the file
    std::string VertexShaderCode;
    std::ifstream VertexShaderStream(vertex_file_path, std::ios::in);
    if (VertexShaderStream.is_open())
    {
        std::string Line = "";
        while (getline(VertexShaderStream, Line))
            VertexShaderCode += "\n" + Line;
        VertexShaderStream.close();
    }

    // Read the Fragment Shader code from the file
    std::string FragmentShaderCode;
    std::ifstream FragmentShaderStream(fragment_file_path, std::ios::in);
    if (FragmentShaderStream.is_open())
    {
        std::string Line = "";
        while (getline(FragmentShaderStream, Line))
            FragmentShaderCode += "\n" + Line;
        FragmentShaderStream.close();
    }

    GLint Result = GL_FALSE;
    int InfoLogLength;

    // Compile Vertex Shader
    printf("Compiling shader : %s\n", vertex_file_path);
    char const *VertexSourcePointer = VertexShaderCode.c_str();
    glShaderSource(VertexShaderID, 1, &VertexSourcePointer, NULL);
    glCompileShader(VertexShaderID);

    // Check Vertex Shader
    glGetShaderiv(VertexShaderID, GL_COMPILE_STATUS, &Result);
    glGetShaderiv(VertexShaderID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    std::vector<char> VertexShaderErrorMessage(InfoLogLength);
    glGetShaderInfoLog(VertexShaderID, InfoLogLength, NULL, &VertexShaderErrorMessage[0]);
    fprintf(stdout, "%s\n", &VertexShaderErrorMessage[0]);

    // Compile Fragment Shader
    printf("Compiling shader : %s\n", fragment_file_path);
    char const *FragmentSourcePointer = FragmentShaderCode.c_str();
    glShaderSource(FragmentShaderID, 1, &FragmentSourcePointer, NULL);
    glCompileShader(FragmentShaderID);

    // Check Fragment Shader
    glGetShaderiv(FragmentShaderID, GL_COMPILE_STATUS, &Result);
    glGetShaderiv(FragmentShaderID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    std::vector<char> FragmentShaderErrorMessage(InfoLogLength);
    glGetShaderInfoLog(FragmentShaderID, InfoLogLength, NULL, &FragmentShaderErrorMessage[0]);
    fprintf(stdout, "%s\n", &FragmentShaderErrorMessage[0]);

    // Link the program
    fprintf(stdout, "Linking program\n");
    GLuint ProgramID = glCreateProgram();
    glAttachShader(ProgramID, VertexShaderID);
    glAttachShader(ProgramID, FragmentShaderID);
    glLinkProgram(ProgramID);

    // Check the program
    glGetProgramiv(ProgramID, GL_LINK_STATUS, &Result);
    glGetProgramiv(ProgramID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    std::vector<char> ProgramErrorMessage(max(InfoLogLength, int(1)));
    glGetProgramInfoLog(ProgramID, InfoLogLength, NULL, &ProgramErrorMessage[0]);
    fprintf(stdout, "%s\n", &ProgramErrorMessage[0]);

    glDeleteShader(VertexShaderID);
    glDeleteShader(FragmentShaderID);

    return ProgramID;
}
