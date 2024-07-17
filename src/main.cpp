#include <chrono>
#include <thread>
#include <cstdio>

#include "imgui.h"
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_vulkan.h"

#include "Renderer/VulkanUtils.h"
#include "Renderer/Fonts.h"

#include "SystemsMain/SystemsMain.hpp"

using namespace E170Systems::Renderer;
using namespace std::chrono_literals;


int main(int, const char **) {
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow *window = glfwCreateWindow(1200, 700, "System Viewer", nullptr, nullptr);


    if (!glfwVulkanSupported()) {
        printf("GLFW: Vulkan Not Supported\n");
        return 1;
    }

    ImVector<const char *> extensions;
    uint32_t extensions_count = 0;
    const char **glfw_extensions = glfwGetRequiredInstanceExtensions(&extensions_count);
    for (uint32_t i = 0; i < extensions_count; i++)
        extensions.push_back(glfw_extensions[i]);
    SetupVulkan(extensions);

    VkSurfaceKHR surface;
    VkResult err = glfwCreateWindowSurface(g_Instance, window, g_Allocator, &surface);
    check_vk_result(err);

    int w, h;
    glfwGetFramebufferSize(window, &w, &h);
    ImGui_ImplVulkanH_Window *wd = &g_MainWindowData;
    SetupVulkanWindow(wd, surface, w, h);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    (void) io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;

    ImGui::StyleColorsDark();

    ImGui_ImplGlfw_InitForVulkan(window, true);
    ImGui_ImplVulkan_InitInfo init_info = {};
    init_info.Instance = g_Instance;
    init_info.PhysicalDevice = g_PhysicalDevice;
    init_info.Device = g_Device;
    init_info.QueueFamily = g_QueueFamily;
    init_info.Queue = g_Queue;
    init_info.PipelineCache = g_PipelineCache;
    init_info.DescriptorPool = g_DescriptorPool;
    init_info.RenderPass = wd->RenderPass;
    init_info.Subpass = 0;
    init_info.MinImageCount = g_MinImageCount;
    init_info.ImageCount = wd->ImageCount;
    init_info.MSAASamples = VK_SAMPLE_COUNT_1_BIT;
    init_info.Allocator = g_Allocator;
    init_info.CheckVkResultFn = check_vk_result;
    ImGui_ImplVulkan_Init(&init_info);

    FontManager fontManger;

    io.Fonts->AddFontDefault();
#ifdef __linux__
    ImFont *Vera = io.Fonts->AddFontFromFileTTF("/usr/share/fonts/TTF/Vera.ttf", 18.0f);
    fontManger.AddFont("Default", Vera);
    io.FontDefault = Vera;
    IM_ASSERT(Vera != nullptr);
#else
    ImFont *Arial = io.Fonts->AddFontFromFileTTF(R"(C:\Windows\Fonts\arial.ttf)", 18.0f);
    io.FontDefault = Arial;
    fontManger.AddFont("Default", Arial);
    IM_ASSERT(Arial != nullptr);
#endif

    ImVec4 clear_color = ImVec4(0.0f, 0.0f, 0.0f, 1.00f);

    std::thread systemThread(SystemMain);
    systemThread.detach();

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        InitFrameBuffer(window);
        NewImGuiFrame(); {
            ImGui::Begin("Hello, world!");
            ImGui::Text("This is some useful text.");

            ImGui::End();
        }

        ImGui::Render();
        ImDrawData *draw_data = ImGui::GetDrawData();
        const bool is_minimized = (draw_data->DisplaySize.x <= 0.0f || draw_data->DisplaySize.y <= 0.0f);
        if (!is_minimized) {
            wd->ClearValue.color.float32[0] = clear_color.x * clear_color.w;
            wd->ClearValue.color.float32[1] = clear_color.y * clear_color.w;
            wd->ClearValue.color.float32[2] = clear_color.z * clear_color.w;
            wd->ClearValue.color.float32[3] = clear_color.w;
            FrameRender(wd, draw_data);
            FramePresent(wd);
        }

        std::this_thread::sleep_for(17ms);
    }
    err = vkDeviceWaitIdle(g_Device);
    check_vk_result(err);

    DestroyApp(window);


    return 0;
}
