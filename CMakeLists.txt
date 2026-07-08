cmake_minimum_required(VERSION 3.20)

project(UnderwaterROV)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(asio INTERFACE)

target_include_directories(asio INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/ThirdParty/asio/asio/include
)

add_subdirectory(Common)
add_subdirectory(GroundStation)
add_subdirectory(Rover)