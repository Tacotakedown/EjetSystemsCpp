
#pragma once
#include "CircuitBreaker.hpp"
#include "ElectricalComponent.hpp"


namespace Electrical::Component {
    class GenericAcComponent final : public ElectricalComponent {
    public:
        explicit GenericAcComponent(const char *name, E170Systems::Units::Voltage::Volt requriedVoltage, E170Systems::Units::ElectricCurrent::Ampere circuitBreaker, CircuitBreakerID CircuitBreakerId);

        ~GenericAcComponent() override;

        void setInputCurrent(ElectricalTerminal terminal, const E170Systems::Units::ElectricCurrent::Ampere current) override { m_Current = current; }

        void setInputVoltage(ElectricalTerminal terminal, const E170Systems::Units::Voltage::Volt voltage) override { m_Voltage = voltage; }

        [[nodiscard]] E170Systems::Units::ElectricCurrent::Ampere getOutputCurrent(ElectricalTerminal terminal) const override { return m_Current; }

        [[nodiscard]] E170Systems::Units::Voltage::Volt getOutputVoltage(ElectricalTerminal terminal) const override { return m_Voltage; }

    private:
        const char *m_ComponentName;
        CircuitBreaker m_CircuitBreaker;
        E170Systems::Units::ElectricCurrent::Ampere m_Current;
        E170Systems::Units::Voltage::Volt m_Voltage;
        E170Systems::Units::Voltage::Volt m_RequiredVoltage;
    };
}
