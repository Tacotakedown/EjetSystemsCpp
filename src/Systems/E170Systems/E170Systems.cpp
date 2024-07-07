#include "E170Systems.hpp"
#include <iostream>

namespace E170Systems
{

    E170Systems::E170Systems(const char **simconnectId, E170SystemInitializer init) : m_InitData(init)
    {
    }

    E170Systems::~E170Systems()
    {
    }
    void E170Systems::Update(float deltaTime)
    {
        std::cout << "DeltaTime" << deltaTime << std::endl;
    }
} // namespace E170Systems
