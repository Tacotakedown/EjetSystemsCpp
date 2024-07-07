cmake_minimum_required(VERSION 3.5)
project(EjetSystems)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file (GLOB_RECURSE SRC_FILES
"src/*.cpp"
"src/*.hpp"
"src/*.h"
"src/*.c"
)


add_executable(EjetSystems ${SRC_FILES}
src/Systems/E170Systems/E170Systems.cpp
src/Systems/E170Systems/E170Systems.hpp
src/Systems/Hydraulic/Hydraulic.cpp
src/Systems/Hydraulic/Hydraulic.hpp
src/Systems/Electrical/Electrical.cpp
src/Systems/Electrical/Electrical.hpp
src/Util/DeltaTime/DeltaTime.cpp
src/Util/DeltaTime/DeltaTime.hpp
)

