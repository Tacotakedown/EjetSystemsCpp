
#include "GenericDcComponent.hpp"

namespace Electrical::Component {
    GenericDcComponent::GenericDcComponent(const char *name,const E170Systems::Units::Voltage::Volt requriedVoltage, const E170Systems::Units::ElectricCurrent::Ampere fuse,
                                           const CircuitBreakerID CircuitBreakerID) : m_ComponentName(name), m_CircuitBreaker(CircuitBreakerID, fuse), m_Current(0.0f), m_Voltage(0.0f),
                                                                                      m_RequiredVoltage(requriedVoltage) {
    }

    GenericDcComponent::~GenericDcComponent() {
        m_Current = 0.0f;
        m_Voltage = 0.0f;
        m_ComponentName = nullptr;
    }
}
