
#include "Accumulator.hpp"


namespace Hydraulic::Component::Accumulator {
    Accumulator::Accumulator(const Kilopascal NitrogenPressure,const Liter MaxCapacity,const Liter CurrentCapacity): m_NitrogenPressure(NitrogenPressure),
                                                                                                           m_MaxCapacity(MaxCapacity),
                                                                                                           m_CurrentCapacity(CurrentCapacity) {
    }
}
