cmake_minimum_required (VERSION 2.6)
project (Practice)

#include_directories ("${PROJECT_SOURCE_DIR}/lib")
#add_subdirectory (lib)

#add_executable(Practice src/hello.cpp)
ADD_EXECUTABLE(Practice src/Point.cpp src/main.cpp)

