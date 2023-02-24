#include "include/window.h"

void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
    glViewport(0, 0, width, height);
}

void processInput(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

GLFWwindow *initwindows()
{
    // glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // glfw window creation
    // --------------------
    GLFWwindow *window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return NULL;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // glad: load all OpenGL function pointers
    // ---------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return NULL;
    }
    return window;
}

// قصه االغه كيف تتعلم لغه
// اولا : تقسم الغه الى مواضيع تريد الحديث فيها
// ثانيا : تحول الموضوع الى قصه
// ثالثا: تحفض القصه
// رابعا تكمل  القصص الى ان تصل الى 1000 كلمه

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
