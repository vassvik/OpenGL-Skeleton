# OpenGL-Skeleton

A minimal OpenGL 3.3 example using `GLFW` for window management and input handling, and `glad` for OpenGL function pointer loading.

In Linux, install `libglfw3-dev` or the equivalent package for your distro, or build it from source (https://github.com/glfw/glfw)

In Windows, get the binaries (http://www.glfw.org/download.html), or build it from source (https://github.com/glfw/glfw).

In Linux, build with `gcc main.c -Iinclude -lglfw3 -lm -ldl` if using the system install of `GLFW`, or `gcc main.c -Iinclude -Llib -lglfw3 -lm -ldl` if you built yourself.

In Windows, build with `cl main.c /MT /include lib\glfw3.lib gdi32.lib user32.lib shell32.lib libcmt.lib`. 