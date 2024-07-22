//
// Created by Taco on 7/9/2024.
//

#include "Hydraulic.hpp"
#include <chrono>

using namespace Hydraulic::Component;

HydraulicSystem::HydraulicSystem(Variables::Hydraulic::HydraulicVars &state) : m_HydraulicVars(state) {}

void HydraulicSystem::Update(float dt) {

    static auto lastTime = std::chrono::steady_clock::now();

    auto *hydraulicFluid = new Fluid::Fluid();

#ifndef HYDRAULICSYSTEM1
#define HYDRAULICSYSTEM1
    auto *system1Reservoir = new Reservoir::Reservoir();
    auto *system1EngineDrivenPump = new HydraulicPump::EngineDrivenPump();
    auto *system1AcMotorPump = new HydraulicPump::AcMotorPump();

    float System1Viscosity = hydraulicFluid->GetViscosity(35.0f);
#endif

#ifndef HYDRAULICSYSTEM2
#define HYDRAULICSYSTEM2

#endif


#ifndef HYDRAULICSYSTEM3
#define HYDRAULICSYSTEM3

#endif


    auto currentTime = std::chrono::steady_clock::now();
    float timeDiff = std::chrono::duration<float, std::chrono::seconds::period>(currentTime - lastTime).count();
    lastTime = currentTime;

    delete hydraulicFluid;
    delete system1Reservoir;
    delete system1EngineDrivenPump;
    delete system1AcMotorPump;

}
