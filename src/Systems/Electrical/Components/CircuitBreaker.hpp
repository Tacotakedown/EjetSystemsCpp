
#pragma once
#include "ElectricalComponent.hpp"

namespace Electrical::Component {
#define CREATE_ENUM(row, col) row##col,

    enum class CircuitBreakerID {
#define CREATE_ENUM_ROW(row) \
CREATE_ENUM(row, 1) CREATE_ENUM(row, 2) CREATE_ENUM(row, 3) CREATE_ENUM(row, 4) \
CREATE_ENUM(row, 5) CREATE_ENUM(row, 6) CREATE_ENUM(row, 7) CREATE_ENUM(row, 8) \
CREATE_ENUM(row, 9) CREATE_ENUM(row, 10) CREATE_ENUM(row, 11) CREATE_ENUM(row, 12) \
CREATE_ENUM(row, 13) CREATE_ENUM(row, 14) CREATE_ENUM(row, 15) CREATE_ENUM(row, 16) \
CREATE_ENUM(row, 17) CREATE_ENUM(row, 18) CREATE_ENUM(row, 19) CREATE_ENUM(row, 20) \
CREATE_ENUM(row, 21) CREATE_ENUM(row, 22) CREATE_ENUM(row, 23) CREATE_ENUM(row, 24) \
CREATE_ENUM(row, 25) CREATE_ENUM(row, 26) CREATE_ENUM(row, 27) CREATE_ENUM(row, 28) \
CREATE_ENUM(row, 29) CREATE_ENUM(row, 30) CREATE_ENUM(row, 31) CREATE_ENUM(row, 32) \
CREATE_ENUM(row, 33) CREATE_ENUM(row, 34) CREATE_ENUM(row, 35) CREATE_ENUM(row, 36) \
CREATE_ENUM(row, 37) CREATE_ENUM(row, 38) CREATE_ENUM(row, 39) CREATE_ENUM(row, 40)

        CREATE_ENUM_ROW(A)
        CREATE_ENUM_ROW(B)
        CREATE_ENUM_ROW(C)
        CREATE_ENUM_ROW(D)
        CREATE_ENUM_ROW(E)
        CREATE_ENUM_ROW(F)
        CREATE_ENUM_ROW(G)

#undef CREATE_ENUM_ROW
    };

#undef CREATE_ENUM


    class CircuitBreaker final : public ElectricalComponent {
    public:
        CircuitBreaker(CircuitBreakerID id, E170Systems::Units::ElectricCurrent::Ampere BreakerAmpere);

        ~CircuitBreaker() override;

        void setInputCurrent(ElectricalTerminal terminal, const E170Systems::Units::ElectricCurrent::Ampere current) override { m_Current = current; }

        void setInputVoltage(ElectricalTerminal terminal, const E170Systems::Units::Voltage::Volt voltage) override { m_Voltage = voltage; }

        [[nodiscard]] E170Systems::Units::ElectricCurrent::Ampere getOutputCurrent(ElectricalTerminal terminal) const override { return m_Current; }

        [[nodiscard]] E170Systems::Units::Voltage::Volt getOutputVoltage(ElectricalTerminal terminal) const override { return m_Voltage; }

    private:
        E170Systems::Units::Voltage::Volt m_Voltage;
        E170Systems::Units::ElectricCurrent::Ampere m_Current;
        CircuitBreakerID m_ID;
        E170Systems::Units::ElectricCurrent::Ampere m_CircuitBreakerAmpere;
    };
}

