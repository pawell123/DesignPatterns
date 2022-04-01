cmake_minimum_required(VERSION 3.11...3.22)

project(
  DesignPatterns
  VERSION 0.1
  DESCRIPTION "Basic implementation of design patterns"
  LANGUAGES CXX)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  set(CMAKE_CXX_EXTENSIONS OFF)
  set_property(GLOBAL PROPERTY USE_FOLDERS ON)
endif()

add_subdirectory(Strategy)



