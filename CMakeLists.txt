cmake_minimum_required(VERSION 3.27)

project(projeto_01)

include_directories(${CMAKE_SOURCE_DIR}/src/include)

set(SOURCES 
    src/main.cpp
    src/codigo.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)