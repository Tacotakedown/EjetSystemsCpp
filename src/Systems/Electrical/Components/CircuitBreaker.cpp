
#include "CircuitBreaker.hpp"
#include <cstddef>

namespace Electrical::Component {
    CircuitBreaker::CircuitBreaker(CircuitBreakerID id, E170Systems::Units::ElectricCurrent::Ampere BreakerAmpere) : m_Current(0.0f), m_Voltage(0.0f), m_ID(id), m_CircuitBreakerAmpere(BreakerAmpere) {
    }

    CircuitBreaker::~CircuitBreaker() {
        m_Current = 0.0f;
        m_Voltage = 0.0f;
        m_CircuitBreakerAmpere = 0.0f;
    }
}
