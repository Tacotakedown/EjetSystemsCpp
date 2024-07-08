//
// Created by taco on 7/7/24.
//

#include "Fonts.h"


namespace E170Systems::Renderer {

    std::unordered_map<std::string, ImFont *> FontManager::m_fonts;


    void FontManager::AddFont(std::string name, ImFont *font) {
        m_fonts[name] = font;
    }

    ImFont *FontManager::GetFont(std::string name) {
        auto it = m_fonts.find(name);
        return (it != m_fonts.end()) ? it->second : nullptr;
    }

    ImFont *FontManager::GetFontOutOfScope(std::string name) {
        auto it = m_fonts.find(name);
        return (it != m_fonts.end()) ? it->second : nullptr;
    }


}