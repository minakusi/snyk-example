cmake_minimum_required(VERSION 3.10)
project(StaticAnalysisExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# include 디렉토리 추가
include_directories(include)

# 하위 디렉토리 추가
add_subdirectory(src)