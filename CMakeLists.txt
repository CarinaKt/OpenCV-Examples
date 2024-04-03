cmake_minimum_required(VERSION 3.5)
project(OpenCVExample)

# Find OPenCV package
find_package(OpenCV REQUIRED)

# Include diretories from OpenCV
include_directories(${OpenCV_INCLUDE_DIRS})

# Create an executable
add_executable(OpenCVExample src/main.cpp src/line/line.cpp)

# Link OpenCV libraries
target_link_libraries(OpenCVExample ${OpenCV_LIBS})