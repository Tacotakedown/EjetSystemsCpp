//
// Created by taco on 7/7/24.
//

#include "Fonts.h"


namespace E170Systems::Renderer {
    std::unordered_map<std::string, ImFont *> FontManager::s_Fonts;

    void FontManager::AddFont(const std::string &name, ImFont *font) {
        s_Fonts[name] = font;
        // static is only there to call out of scope, we will just sync the static to the member var
        m_Fonts[name] = font;
    }

    ImFont *FontManager::GetFont(const std::string &name) {
        // this function doesnt need to exist but we are going to keep it tto ensure that we are not calling an empty hashmap in the scope
        const auto it = m_Fonts.find(name);
        return (it != m_Fonts.end()) ? it->second : nullptr;
    }

    ImFont *FontManager::GetFontOutOfScope(const std::string &name) {
        const auto it = s_Fonts.find(name);
        return (it != s_Fonts.end()) ? it->second : nullptr;
    }
}
