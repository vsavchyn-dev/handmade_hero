/*
    FILE: osx_main.cpp
    Date: 13/08/2024 
    Author: Vladyslav Savchyn
*/

#include "../include/stdafx.hpp"

int main(int agrc, char* argv[]) {
    printf("Handmade hero stoped executing");
    return 0;
}

/*
// non-working version
#define GLFW_INCLUDE_COREARB

#define BUFFER_OFFSET(i) ((char*)NULL + (i))

int main(int argc, const char* argv[]) {
    GLFWindow* window;

    if (!glfwInit()) {
        return -1;
    }

#ifdef __APPLE__
    //We need to explicitly ask for a 3.2 context on OS X
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#endif

    window = glfwCreateWindow(1280, 720, "Handmade Hero", NULL, NULL);

    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glClear(CL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    glfwTerminate();
    printf("Handmade hero finished running without problems\n");
    return 0;
}
*/
