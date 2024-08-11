
#pragma once
#include "Units.hpp"


namespace Electrical::Component {
    enum ElectricalTerminal {
        POSITIVE = 0,
        NEGATIVE
    };

    class ElectricalComponent {
    public:
        virtual E170Systems::Units::Voltage::Volt getOutputVoltage(ElectricalTerminal terminal) const = 0;

        virtual E170Systems::Units::ElectricCurrent::Ampere getOutputCurrent(ElectricalTerminal terminal) const =0;

        virtual void setInputVoltage(ElectricalTerminal terminal, E170Systems::Units::Voltage::Volt voltage) = 0;

        virtual void setInputCurrent(ElectricalTerminal terminal, E170Systems::Units::ElectricCurrent::Ampere current) = 0;
    };
}
