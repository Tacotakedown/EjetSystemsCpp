#pragma once

#include "System/System.hpp"
#include "Shared/SystemStruct.hpp"

#include "Components/Accumulator.hpp"
#include "Components/Actuator.hpp"
#include "Components/FilterManifold.hpp"
#include "Components/Fluid.hpp"
#include "Components/HydraulicComponents.hpp"
#include "Components/HydraulicLine.hpp"
#include "Components/Math.hpp"
#include "Components/Pump.hpp"
#include "Components/Reservoir.hpp"

using namespace E170Systems;

class HydraulicSystem final : public System {
public:
    explicit HydraulicSystem(Variables::Hydraulic::HydraulicVars &state);

    void Update(float dt) override;


    [[nodiscard]] Variables::Hydraulic::HydraulicVars &GetVars() { return m_HydraulicVars; }

    [[nodiscard]] const Variables::Hydraulic::HydraulicVars &GetVars() const { return m_HydraulicVars; }

private:
    Variables::Hydraulic::HydraulicVars &m_HydraulicVars;

};
