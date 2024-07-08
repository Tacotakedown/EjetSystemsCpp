//
// Created by taco on 7/7/24.
//

#ifndef EJETSYSTEMS_FONTS_H
#define EJETSYSTEMS_FONTS_H

#include "imgui.h"
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_vulkan.h"
#include "VulkanUtils.h"
#include <unordered_map>
#include <string>
#include <cstdio>
#include <cstdlib>

#define GLFW_INCLUDE_NONE
#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>

#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, "legacy_stdio_definitions")
#endif


namespace E170Systems::Renderer {

    using namespace E170Systems::Renderer;

    class FontManager {

    public:
        void AddFont(std::string name, ImFont *font);

        ImFont *GetFont(std::string name);

        static ImFont *GetFontOutOfScope(std::string name);

    private:
        static std::unordered_map<std::string, ImFont *> m_fonts;

    };

    static void NewImGuiFrame() {
        ImGui_ImplVulkan_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();
    }


}


#endif //EJETSYSTEMS_FONTS_H
