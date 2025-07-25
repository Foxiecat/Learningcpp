cmake_minimum_required(VERSION 3.31)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 23)

add_executable(HelloWorld "Source Files/main.cpp"
        "Source Files/Log.cpp")
