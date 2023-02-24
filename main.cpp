#include "include/window.h"
#include "include/shader.h"
#include "include/vbo_and_vao.h"
int main()
{

    GLFWwindow *window = initwindows();
    GLuint shaderprogram = loadshader("./shader/fragment.fs", "./shader/vertex.vs");
    GLuint VAO = GenVAO();
    GLuint VBO = GenVBO();

    while (!glfwWindowShouldClose(window))
    {
        // -----
        processInput(window);cd .

        // render
        // ------
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // draw our first triangle
        glUseProgram(shaderprogram);
        glBindVertexArray(VAO); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
        glDrawArrays(GL_TRIANGLES, 0, 3);
        // glBindVertexArray(0); // no need to unbind it every time

        // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
        // -------------------------------------------------------------------------------
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glDeleteProgram(shaderprogram);
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    glfwTerminate();
    return 0;
}
