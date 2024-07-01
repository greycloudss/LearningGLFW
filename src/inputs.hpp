#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "graphics.hpp"
#include <vector>


void esc_checker(GLFWwindow* window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }
    if (glfwGetKey(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS) {
        double xpos,ypos;
        glfwGetCursorPos(window, &xpos, &ypos);

        //placeholders

        if (xpos == 1 && ypos == 1) { //yay

        } else if (xpos == 0 && ypos == 0) { //nay

        }
    }

    
}



void esc_event(GLFWwindow* window) {
    drawRectangle();
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        esc_checker(window);
}