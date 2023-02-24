cmake_minimum_required(VERSION 3.14)

project(opengl)
add_subdirectory(glfw/)
include_directories(glad)

add_executable(${PROJECT_NAME} main.cpp / glad.c / include/glad.h  include/window.h  windows.cpp  include/shader.h  shader.cpp include/vbo_and_vao.h  
vbo_and_vao.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC glfw)
target_link_libraries(${PROJECT_NAME} PUBLIC glfw)
