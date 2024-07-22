
#pragma once

#include "Units.hpp"

using namespace E170Systems::Units::Volume;
using namespace E170Systems::Units::Pressure;

namespace Hydraulic::Component::Reservoir {

    struct LowPressureChamber {
        Liter MaxStorage;
        Liter CurrentFluidLevel;
        Kilopascal ChamberPressure;
    };

    struct BootstrapCylinder {
        Kilopascal SystemPressure;
    };

    struct Indicators {
        float MechanicalLevelIndicator;
        float ElectricalLevelIndicator;
        float TemperatureTransducer;
    };

    class Reservoir {

    public:
        Reservoir();

        void SetSystemPressure(const Kilopascal pressure) { m_BootstrapCylinder.SystemPressure = pressure; }

        void SetChamberPressure(const Kilopascal pressure) { m_LowPressureChamber.ChamberPressure = pressure; }

        void SetFluidLevel(const Liter level) { m_LowPressureChamber.CurrentFluidLevel = level; }

        void DecreaseFluidLevel(const Liter level) { m_LowPressureChamber.CurrentFluidLevel -= level; }

        void IncreaseFluidLevel(const Liter level) { m_LowPressureChamber.CurrentFluidLevel += level; }

        [[nodiscard]] Liter GetFluidLevel() const { return m_LowPressureChamber.CurrentFluidLevel; }

    private:
        LowPressureChamber m_LowPressureChamber;
        BootstrapCylinder m_BootstrapCylinder;
        Indicators m_Indicators;

    };
}

