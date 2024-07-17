#pragma once

#include "imgui.h"
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_vulkan.h"

#include <unordered_map>
#include <string>


#define GLFW_INCLUDE_NONE
#define GLFW_INCLUDE_VULKAN


#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, "legacy_stdio_definitions")
#endif


namespace E170Systems::Renderer {
    using namespace E170Systems::Renderer;

    class FontManager {
    public:
        void AddFont(const std::string &name, ImFont *font);

        ImFont *GetFont(const std::string &name);

        static ImFont *GetFontOutOfScope(const std::string &name);

    private:
        static std::unordered_map<std::string, ImFont *> s_Fonts;
        std::unordered_map<std::string, ImFont *> m_Fonts;
    };

    static void NewImGuiFrame() {
        ImGui_ImplVulkan_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();
    }
}
