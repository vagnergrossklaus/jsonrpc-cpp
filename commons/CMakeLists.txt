cmake_minimum_required(VERSION 3.14)

project(commons LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} SHARED
  commons_global.h
  commons.cpp
  commons.h
  gen/abstractstubserver.h
  gen/stubclient.h
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_definitions(${PROJECT_NAME} PRIVATE COMMONS_LIBRARY)
