cmake_minimum_required(VERSION 3.15)
project(directorytemplategenerator C)

set(CMAKE_C_STANDARD 99)
add_executable(directorytemplategenerator main.c inc/parsetemplate.c)