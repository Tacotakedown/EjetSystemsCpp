#include "E170Systems.hpp"

#include <iostream>
#include <thread>

#include "Electrical/Electrical.hpp"
#include "Hydraulic/Hydraulic.hpp"
#include "DeltaTime/DeltaTime.hpp"
#include "Shared/SystemStruct.hpp"

using namespace std::chrono_literals;

namespace E170Systems {
    E170Systems::E170Systems(const E170SystemInitializer &init)
        : m_InitData(init), m_DeltaTime(0.0f) {
    }

    E170Systems::~E170Systems() = default;

    void E170Systems::Update(const float deltaTime) {
        m_DeltaTime = deltaTime;
        std::cout << "DeltaTime" << m_DeltaTime << std::endl;
    }

    void E170Systems::Run() {
        auto HydraulicState = Variables::Hydraulic::HydraulicVars{
            .System1 = Variables::Hydraulic::System1Vars{
                .ReservoirLevel = 0.0f,
                .EngineDrivenPumpRPM = 0.0f,
                .AcMotorPumpState = false,
                .PreManifoldPressure = 0.0f,
                .PostManifoldPressure = 0.0f,
                .LhThrustReverserPosition = 0.0f
            }
        };


        auto *hydraulic = new HydraulicSystem(HydraulicState);
        auto *electrical = new Electrical(m_InitData);

        Util::DeltaTime deltaTime;


        bool l_IsRunning = true;

        while (l_IsRunning) {
            m_DeltaTime = deltaTime.getDeltaTime();

            hydraulic->Update(m_DeltaTime);
            electrical->Update(m_DeltaTime);

            std::this_thread::sleep_for(17ms);


            if (m_InitData.abort) {
                l_IsRunning = false;
                // emergency break out, should only be resued in a external enviroment as reinitilizing the loop in wasm is going to be annoying
            }
        }

        delete hydraulic;
        delete electrical;
    }
} // namespace E170Systems
