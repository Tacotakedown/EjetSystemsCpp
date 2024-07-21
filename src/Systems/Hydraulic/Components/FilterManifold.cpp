
#include "FilterManifold.hpp"

#include "Math.hpp"


namespace Hydraulic::Component::FilterManifold {
    FilterManifold::FilterManifold(const Pascal Resistance, const Micron FilterSize): m_Resistance(Resistance),
                                                                                      m_FilterSize(FilterSize) {
    }

    PSI FilterManifold::CalculatePressureDrop(const LiterPerMinute FlowRate, const NewtonSecondPerSquareMeter DynamicViscocity) const {
        constexpr float Permability = 1.5e-2f;
        constexpr float CrossSectionalArea = 1e-4f;

        return Math::HydraulicMath::darcyLaw(FlowRate, Permability, CrossSectionalArea, DynamicViscocity, m_FilterSize);
    }
}
