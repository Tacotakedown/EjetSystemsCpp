cmake_minimum_required(VERSION 3.5)
project(EjetSystems)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

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


include_directories(${VULKAN_SDK}/include ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/glfw/include ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/ImGui)

add_subdirectory(dependencies/glfw)

add_executable(EjetSystems ${SRC_FILES}
        src/Systems/E170Systems/E170Systems.cpp
        src/Systems/E170Systems/E170Systems.hpp
        src/Systems/Hydraulic/Hydraulic.cpp
        src/Systems/Hydraulic/Hydraulic.hpp
        src/Systems/Electrical/Electrical.cpp
        src/Systems/Electrical/Electrical.hpp
        src/Util/DeltaTime/DeltaTime.cpp
        src/Util/DeltaTime/DeltaTime.hpp
        src/Renderer/Fonts.cpp
        src/Renderer/Fonts.h
        src/Renderer/VulkanUtils.h
)

target_sources(EjetSystems PRIVATE ${IMGUI_SOURCES})

target_include_directories(EjetSystems PRIVATE ${VULKAN_SDK}/include)

target_link_libraries(EjetSystems -L${VULKAN_SDK}/lib -lvulkan glfw)

