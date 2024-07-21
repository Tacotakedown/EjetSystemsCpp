
#pragma once
#include "Units.hpp"

namespace Hydraulic::Component::FilterManifold {
    using namespace E170Systems::Units::Pressure;
    using namespace E170Systems::Units::Length;
    using namespace E170Systems::Units::FlowRate;
    using namespace E170Systems::Units::Viscosity;

    class FilterManifold {
    public:
        FilterManifold(Pascal Resistance, Micron FilterSize);

        [[nodiscard]] PSI CalculatePressureDrop(LiterPerMinute FlowRate, NewtonSecondPerSquareMeter DynamicViscocity) const;

    private:
        Pascal m_Resistance;
        Micron m_FilterSize;
    };
}

