#include "E170Systems.hpp"
#include <iostream>
#include <thread>
#include <chrono>

#include "Electrical/Electrical.hpp"
#include "Hydraulic/Hydraulic.hpp"
#include "DeltaTime/DeltaTime.hpp"

using namespace std::chrono_literals;

namespace E170Systems {

    E170Systems::E170Systems(E170SystemInitializer init)
            : m_InitData(init) {}

    E170Systems::~E170Systems() {}

    void E170Systems::Update(float deltaTime) {
        std::cout << "DeltaTime" << deltaTime << std::endl;
    }

    void E170Systems::Run() {

        Hydraulic *hydraulic = new Hydraulic(m_InitData);
        Electrical *electrical = new Electrical(m_InitData);

        Util::DeltaTime deltaTime;

        while (true) {
            m_DeltaTime = deltaTime.getDeltaTime();

            hydraulic->Update(m_DeltaTime);
            electrical->Update(m_DeltaTime);

            std::this_thread::sleep_for(17ms);
        }

        delete hydraulic;
        delete electrical;
    }
} // namespace E170Systems
