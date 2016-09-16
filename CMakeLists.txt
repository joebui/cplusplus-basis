cmake_minimum_required(VERSION 3.5)
project(engineer)
#find_package(OpenCV REQUIRED )
set(CMAKE_CXX_COMPILER clang++)
# -lm -lopencv_core -lopencv_highgui -lopencv_video -lopencv_imgproc
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -l sqlite3")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

set(SOURCE_FILES main.cpp Classes/Vehicle.h Classes/Truck.h Classes/Class1.h Classes/Class2.h poly/Shape.h poly/Circle.h poly/Square.h advanced/dynamic.h advanced/destructor.h advanced/FileIO.h advanced/DBAcess.h)
add_executable(engineer ${SOURCE_FILES})

#set(SOURCE_FILES opencv.cpp)
#add_executable(engineer ${SOURCE_FILES})
#target_link_libraries( engineer ${OpenCV_LIBS} )