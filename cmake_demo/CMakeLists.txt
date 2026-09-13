# Specify the minimum Cmake verison
cmake_minimum_required(VERSION 3.28.0)

# create project
project(
    hello_world
    VERSION 1.0
    DESCRIPTION "The Classic"
    LANGUAGES C
)

#create static lib target named "my_lib"
add_library(
    my_lib
    STATIC
    src/hello.c
)

#set the include directories for the library
target_include_directories(
    my_lib
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

#create a excutable target with the same name as the project name
add_executable(
    ${PROJECT_NAME}
    src/main.c
)

#link the library to the executable
target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
    my_lib
)


