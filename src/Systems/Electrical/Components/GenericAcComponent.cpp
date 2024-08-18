
#include "GenericAcComponent.hpp"

namespace Electrical::Component {
    GenericAcComponent::GenericAcComponent(const char *name, const E170Systems::Units::Voltage::Volt requriedVoltage, const E170Systems::Units::ElectricCurrent::Ampere circuitBreaker,
                                           const CircuitBreakerID CircuitBreakerID) : m_ComponentName(name), m_CircuitBreaker(CircuitBreakerID, circuitBreaker), m_Current(0.0f), m_Voltage(0.0f),
                                                                                      m_RequiredVoltage(requriedVoltage) {
    }

    GenericAcComponent::~GenericAcComponent() {
        m_Current = 0.0f;
        m_Voltage = 0.0f;
        m_ComponentName = nullptr;
    }
}
