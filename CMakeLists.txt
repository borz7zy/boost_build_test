cmake_minimum_required(VERSION 3.15)
project(boost-test)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})