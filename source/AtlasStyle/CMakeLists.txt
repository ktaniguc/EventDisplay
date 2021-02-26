cmake_minimum_required(VERSION 2.8)

list(APPEND CMAKE_PREFIX_PATH  $ENV{ROOTSYS})
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} $ENV{ROOTSYS}/etc/cmake)

find_package(ROOT REQUIRED COMPONENTS Hist MathCore Tree RIO Net)

include(${ROOT_USE_FILE})
include_directories(${ROOT_INCLUDE_DIRS})
add_definitions(${ROOT_CXX_FLAGS})
add_library(AtlasStyle
    SHARED
    AtlasExample.C
    AtlasLabels.C
    AtlasStyle.C
    AtlasUtils.C
)
target_include_directories(AtlasStyle
    PUBLIC 
    ${PROJECT_SOURCE_DIR}/source/NtupleAnalysisTool
    ${ROOT_INCLUDE_DIRS}
)
target_link_libraries(AtlasStyle ${ROOT_LIBRARIES} )
