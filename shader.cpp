#include "include/shader.h"

std::string readFile(const char *filePath)
{
    std::string content;
    // read file in stream of binary
    std::ifstream fileStream(filePath, std::ios::in);

    if (!fileStream.is_open())
    {
        std::cerr << "Could not read file " << filePath << " File does not exist." << std::endl;
        return "";
    }

    std::string line = "";
    while (!fileStream.eof())
    {
        std::getline(fileStream, line);
        content.append(line + "\n");
    }

    fileStream.close();
    return content;
}

GLuint loadshader(const char *filepath1, const char *filepath2)
{
    std::cout << " 1 - Create shader " << std::endl;
    GLuint vertShader = glCreateShader(GL_VERTEX_SHADER);
    GLuint fragShader = glCreateShader(GL_FRAGMENT_SHADER);

    std::cout << " 2 - load shader " << std::endl;
    std::string vertShaderStr = readFile(filepath1);
    std::string fragShaderStr = readFile(filepath2);
    const char *vertShaderSrc = vertShaderStr.c_str();
    const char *fragShaderSrc = fragShaderStr.c_str();

    std::cout << " 3 - load shader in the editer or source " << std::endl;
    glShaderSource(vertShader, 1, &vertShaderSrc, NULL);

    std::cout << " 4 - compile the shader " << std::endl;
    glCompileShader(vertShader);

    std::cout << " 5 - do same thing for fragment shader." << std::endl;
    glShaderSource(fragShader, 1, &fragShaderSrc, NULL);
    glCompileShader(fragShader);

    std::cout << " 6 - create shader program program" << std::endl;
    GLuint program = glCreateProgram();

    std::cout << " 7 - attach shader program program" << std::endl;
    glAttachShader(program, vertShader);
    glAttachShader(program, fragShader);

    std::cout << " 8 - link the shader program program" << std::endl;

    glLinkProgram(program);

    std::cout << " 9 - delete the shader shader program program" << std::endl;

    glDeleteShader(vertShader);
    glDeleteShader(fragShader);

    return program;
}