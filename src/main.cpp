#include "graphics.hpp"
#include "inputs.hpp"


int main() {
    GLFWwindow* window = initialize();
    if (!window) {
        return -1;
    }

    double xpos, ypos;
    while (!glfwWindowShouldClose(window)) {
        esc_event(window);

        glClearColor(0.07f, 0.13f, 0.17f, 1.0f);

        glfwGetCursorPos(window, &xpos, &ypos);
        

        glClear(GL_COLOR_BUFFER_BIT);
    
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
