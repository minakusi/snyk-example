cmake_minimum_required(VERSION 3.10)

project(StaticAnalysisExample)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)  # compile_commands.json 생성

add_executable(StaticAnalysisExample main.cpp)