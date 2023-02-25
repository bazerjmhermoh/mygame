#include <../include/window.h>

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;
int main()
{
    int width = 700;
    int height = 700;

    GLFWwindow *window = initGLFW(SCR_WIDTH, SCR_HEIGHT);
    if (!window)
    {
        printf("error in windows \n");
    }
    initGL(window, width, height);
    while (!glfwWindowShouldClose(window))
    {
        // 0.2f, 0.3f, 0.3f, 1.0f
        glClearColor(0, 0, 0, 0);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();

    return 0;
}
