#include "Battery.h"
#include <algorithm>
#include <cmath>

namespace Electrical::Component::Battery {
    Battery::Battery(std::string name, Volt voltage,
                     std::pair<Volt, Volt> voltage_min_max, MilliampHours capacity,
                     std::pair<Ampere, Ampere> max_charge_discharge_rate)
        : m_Name(name), m_voltage(voltage), m_VoltageMaxMin(voltage_min_max),
          m_Capacity(capacity), m_StateOfCharge(1.0f), m_ChargeDischargeRate(0.0f),
          m_MaxMinDischargeRate(max_charge_discharge_rate), m_Efficiency(1.0f),
          m_Health(1.0f) {
    }

    void Battery::UpdateState(float DeltaTime) {
        float ChargeDelta = m_ChargeDischargeRate * DeltaTime;
        float StateOfChargeDelta = ChargeDelta / m_Capacity;

        m_StateOfCharge =
                std::max(0.0f, std::min(1.0f, (m_StateOfCharge + StateOfChargeDelta)));

        float VoltageRange = m_VoltageMaxMin.second - m_VoltageMaxMin.first;
        m_voltage = m_VoltageMaxMin.first + m_StateOfCharge * VoltageRange;
    }

    void Battery::SetChargeDischargeRate(float rate) {
        m_ChargeDischargeRate = std::clamp(rate, m_MaxMinDischargeRate.first,
                                           m_MaxMinDischargeRate.second);
    }
} // namespace Electrical::Component::Battery
