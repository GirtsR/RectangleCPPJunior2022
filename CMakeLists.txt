cmake_minimum_required(VERSION 3.0.0)
project(Rectangle VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(Rectangle 
    main.cpp
    ${CMAKE_SOURCE_DIR}/include/Rectangle.h
    ${CMAKE_SOURCE_DIR}/src/Rectangle.cpp
)

# Include path to header files
target_include_directories(Rectangle PRIVATE ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(test)
