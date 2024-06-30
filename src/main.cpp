#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "graphics.hpp"
#include "inputs.hpp"


int main() {
    if (!glfwInit()) {
        std::cerr << "row row raggy rits a rash!";
        return -1;
    }

    GLFWmonitor* prm_mon = glfwGetPrimaryMonitor();

    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    glfwWindowHint(GLFW_FOCUSED , GLFW_TRUE);
    glfwWindowHint(GLFW_VISIBLE , GLFW_TRUE);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    GLFWwindow* window = glfwCreateWindow(800, 600, "I really really hope this doesnt break", NULL, NULL);
    glfwMakeContextCurrent(window);
    gladLoadGL();

    glfwSetKeyCallback(window, key_callback);

    while (glfwWindowShouldClose(window) == GLFW_FALSE) {
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        glViewport(0, 0, width, height);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}