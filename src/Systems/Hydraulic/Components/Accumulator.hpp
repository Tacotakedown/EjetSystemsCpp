
#pragma once

#include "Units.hpp"


namespace Hydraulic::Component::Accumulator {
    using namespace E170Systems::Units::Pressure;
    using namespace E170Systems::Units::Volume;

    class Accumulator {
    public:
        Accumulator(Kilopascal NitrogenPressure, Liter MaxCapacity, Liter CurrentCapacity);

        [[nodiscard]] Liter GetCurrentCapacity() const { return m_CurrentCapacity; }

    private:
        Kilopascal m_NitrogenPressure;
        Liter m_MaxCapacity;
        Liter m_CurrentCapacity;
    };
}

