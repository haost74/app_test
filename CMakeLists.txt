cmake_minimum_required(VERSION 3.2)
project(app)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src)
add_subdirectory(test)
add_executable(app
     main.cpp
)

target_link_libraries(app some_class)