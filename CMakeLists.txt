cmake_minimum_required(VERSION 3.14)
project(family)

set(CMAKE_CXX_STANDARD 14)

find_package(SWIG 4.0)
find_package(Python3 REQUIRED COMPONENTS Development)

include(${SWIG_USE_FILE})

set_property(SOURCE family.i PROPERTY CPLUSPLUS ON)

swig_add_library(${PROJECT_NAME} LANGUAGE python TYPE SHARED SOURCES family.i source/Parent.cpp source/Child.cpp)

set_property(TARGET ${PROJECT_NAME} PROPERTY SWIG_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR})
set_property(TARGET ${PROJECT_NAME} PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE Python3::Python)

if(APPLE)
    # we change the suffix because swig generates a file expecting a .so on mac.
    set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".so")
endif()
