
#include "Wire.hpp"


namespace Electrical::Component {
    Wire::Wire(const E170Systems::Units::Resistance::Ohm resistance) : m_Resistance(resistance), m_Voltage(0.0f), m_Current(0.0f) {
    }

    void Wire::calculateOutput() {
        m_Voltage = m_Current * m_Resistance; // IDK the math behind this rn
    }
}
