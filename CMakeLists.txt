cmake_minimum_required(VERSION 3.10)
project(Portafolio-CXX LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)

# Create one executable per exercise (each source file contains its own main)
foreach(src ${SRC_FILES})
    get_filename_component(name ${src} NAME_WE)
    add_executable(${name} ${src})
endforeach()

message(STATUS "Found exercise sources: ${SRC_FILES}")
