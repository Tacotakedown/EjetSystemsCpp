
#pragma once

#include "ElectricalComponent.hpp"
#include "tuple"

namespace Electrical::Component {
    class Wire final : public ElectricalComponent {
        explicit Wire(E170Systems::Units::Resistance::Ohm resistance);

        ~Wire() = default;

        [[nodiscard]] E170Systems::Units::Voltage::Volt getOutputVoltage(ElectricalTerminal terminal) const override { return m_Voltage; }
        [[nodiscard]] E170Systems::Units::ElectricCurrent::Ampere getOutputCurrent(ElectricalTerminal terminal) const override { return m_Current; }

        [[nodiscard]] std::tuple<E170Systems::Units::Voltage::Volt, E170Systems::Units::ElectricCurrent::Ampere> getWireOutput(ElectricalTerminal terminal) const {
            return std::make_tuple(m_Voltage, m_Current);
        }

        void setInputCurrent(ElectricalTerminal terminal, const E170Systems::Units::ElectricCurrent::Ampere current) override { m_Current = current; }
        void setInputVoltage(ElectricalTerminal terminal, const E170Systems::Units::Voltage::Volt voltage) override { m_Voltage = voltage; }

    private:
        void calculateOutput();

    private:
        E170Systems::Units::Resistance::Ohm m_Resistance;
        E170Systems::Units::Voltage::Volt m_Voltage;
        E170Systems::Units::ElectricCurrent::Ampere m_Current;
    };
}

