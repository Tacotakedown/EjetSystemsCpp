#pragma once

#include "System/System.hpp"

namespace E170Systems {
    class E170Systems {
    public:
        explicit E170Systems(const E170SystemInitializer &init);

        ~E170Systems();


        void Run();

    private:
        void Update(float deltaTime);

        E170SystemInitializer m_InitData;

        float m_DeltaTime;
    };
} // namespace E170Systems
