
#include "Reservoir.hpp"


namespace Hydraulic::Component::Reservoir {

    Reservoir::Reservoir() : m_LowPressureChamber(
            LowPressureChamber{.MaxStorage = 12.3f, .CurrentFluidLevel = 0.0f, .ChamberPressure = 0.0f}),
                             m_BootstrapCylinder(BootstrapCylinder{.SystemPressure=0.0f}),
                             m_Indicators(
                                     Indicators{.MechanicalLevelIndicator=0.0f, .ElectricalLevelIndicator=0.0f, .TemperatureTransducer = 0.0f}) {}
}