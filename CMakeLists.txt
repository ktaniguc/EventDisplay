# setup the cmake version
cmake_minimum_required(VERSION 2.8)

# define project name
project(NtupleAnalysisTool CXX)

# make .out from .cxx
add_subdirectory(source/src)
add_subdirectory(source/test)
add_subdirectory(source/AtlasStyle)
