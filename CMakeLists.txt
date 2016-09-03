cmake_minimum_required(VERSION 3.5)
project(engineer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

set(SOURCE_FILES main.cpp Classes/Vehicle.h Classes/Truck.h Classes/Class1.h Classes/Class2.h poly/Shape.h poly/Circle.h poly/Square.h)
add_executable(engineer ${SOURCE_FILES})