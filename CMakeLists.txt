cmake_minimum_required(VERSION 3.13)
project(HelloOpenCV)

find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hello_opencv hello.cc)

target_include_directories(hello_opencv PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(hello_opencv ${OpenCV_LIBS})
