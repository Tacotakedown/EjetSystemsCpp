cmake_minimum_required(VERSION 3.4...3.30 FATAL_ERROR)
project(EjetSystems VERSION 0.1 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (DEFINED ENV{VULKAN_SDK})
    message(STATUS "VULKAN_SDK is set to: $ENV{VULKAN_SDK}")
else ()
    message(FATAL_ERROR "VULKAN_SDK environment variable is not set, please add it to your environment variables! The vulkan SDK can be found in the readme")
endif ()

set(VULKAN_SDK $ENV{VULKAN_SDK})


file(GLOB_RECURSE SRC_FILES
        "src/*.cpp"
        "src/*.hpp"
        "src/*.h"
        "src/*.c"
)

set(IMGUI_SOURCES
        dependencies/ImGui/imgui.cpp
        dependencies/ImGui/imgui_draw.cpp
        dependencies/ImGui/imgui_widgets.cpp
        dependencies/ImGui/imgui_tables.cpp
        dependencies/ImGui/misc/cpp/imgui_stdlib.cpp
        dependencies/ImGui/backends/imgui_impl_glfw.cpp
        dependencies/ImGui/backends/imgui_impl_vulkan.cpp
)

include_directories(
        ${VULKAN_SDK}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/glfw/include
        ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/ImGui
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Systems
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Renderer
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Util
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Units
)

if (NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/dependencies/glfw/CMakeLists.txt")
    message(FATAL_ERROR "The GLFW submodule is missing. Please ensure you have recursively cloned the repository with 'git clone --recursive' or run 'git submodule update --init --recursive'.")
endif ()
add_subdirectory(dependencies/glfw)

add_executable(EjetSystems ${SRC_FILES}
        src/Systems/E170Systems/E170Systems.cpp
        src/Systems/E170Systems/E170Systems.hpp
        src/Util/DeltaTime/DeltaTime.cpp
        src/Util/DeltaTime/DeltaTime.hpp
        src/Renderer/Fonts.cpp
        src/Renderer/Fonts.h
        src/Renderer/VulkanUtils.h
        src/Systems/SystemsMain/SystemsMain.hpp
        src/Systems/System/System.hpp
        src/Systems/Electrical/Electrical.cpp
        src/Systems/Electrical/Electrical.hpp
        src/Systems/Hydraulic/Hydraulic.cpp
        src/Systems/Hydraulic/Hydraulic.hpp
        src/Units/Units.hpp
        src/Systems/Hydraulic/Components/Accumulator.cpp
        src/Systems/Hydraulic/Components/Accumulator.hpp
        src/Systems/Hydraulic/Components/Actuator.cpp
        src/Systems/Hydraulic/Components/Actuator.hpp
        src/Systems/Hydraulic/Components/FilterManifold.cpp
        src/Systems/Hydraulic/Components/FilterManifold.hpp
        src/Systems/Hydraulic/Components/Fluid.cpp
        src/Systems/Hydraulic/Components/Fluid.hpp
        src/Systems/Hydraulic/Components/HydraulicLine.cpp
        src/Systems/Hydraulic/Components/HydraulicLine.hpp
        src/Systems/Hydraulic/Components/Math.hpp
        src/Systems/Hydraulic/Components/Pump.cpp
        src/Systems/Hydraulic/Components/Pump.hpp
        src/Systems/Hydraulic/Components/Reservoir.cpp
        src/Systems/Hydraulic/Components/Reservoir.hpp
        src/Systems/Hydraulic/Components/HydraulicComponents.hpp
        src/Systems/Shared/SystemStruct.hpp
)

target_sources(EjetSystems PRIVATE ${IMGUI_SOURCES})

target_include_directories(EjetSystems PRIVATE ${VULKAN_SDK}/include)

if (WIN32)
    target_link_libraries(EjetSystems ${VULKAN_SDK}/Lib/vulkan-1.lib glfw)
else ()
    target_link_libraries(EjetSystems -L${VULKAN_SDK}/lib -lvulkan glfw)
endif ()