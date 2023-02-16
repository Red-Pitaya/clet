cmake_minimum_required(VERSION 3.5)
 
project(libtorch_demo LANGUAGES CXX)
 
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
 
set(Torch_DIR /home/liana/clet-main/libtorch/share/cmake/Torch)
find_package(Torch REQUIRED)
 
add_executable(libtorch_demo main.cpp)
target_link_libraries(libtorch_demo "${TORCH_LIBRARIES}")
set_property(TARGET libtorch_demo PROPERTY CXX_STANDARD 17)
