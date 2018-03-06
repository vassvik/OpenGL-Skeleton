#include <stdio.h>

#include <glad/glad.h>
#include <glad/glad.c>
#include <GLFW/glfw3.h>

void error_callback(int error, const char* description) {
    fprintf(stderr, "Error %d: %s\n", error, description);
}

int main() {
    //
    glfwSetErrorCallback(error_callback);

    //
    if (!glfwInit()) {
        return 1;
    }

    //
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    GLFWwindow *window = glfwCreateWindow(1280, 720, "Title", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return 2;
    }

    //
    glfwMakeContextCurrent(window);

    //
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        printf("Error: Could not load OpenGL functions");
        glfwTerminate();
        return 3;
    }

    //
    glClearColor(1.0, 1.0, 1.0, 1.0);
    while (!glfwWindowShouldClose(window)) {
        //
        glfwPollEvents();

        //
        if (glfwGetKey(window, GLFW_KEY_ESCAPE)) glfwSetWindowShouldClose(window, GLFW_TRUE);

        //
        if (glfwGetKey(window, GLFW_KEY_1)) glClearColor(1.0, 0.7, 0.4, 1.0);
        if (glfwGetKey(window, GLFW_KEY_2)) glClearColor(1.0, 0.4, 0.7, 1.0);
        if (glfwGetKey(window, GLFW_KEY_3)) glClearColor(0.7, 1.0, 0.4, 1.0);
        if (glfwGetKey(window, GLFW_KEY_4)) glClearColor(0.4, 1.0, 0.7, 1.0);
        if (glfwGetKey(window, GLFW_KEY_5)) glClearColor(0.7, 0.4, 1.0, 1.0);
        if (glfwGetKey(window, GLFW_KEY_6)) glClearColor(0.4, 0.7, 1.0, 1.0);
        if (glfwGetKey(window, GLFW_KEY_0)) glClearColor(1.0, 1.0, 1.0, 1.0);
        
        //
        glClear(GL_COLOR_BUFFER_BIT);

        //
        glfwSwapBuffers(window);
    }

    //
    glfwTerminate();

    return 0;
}