#pragma once
#include "Units.hpp"
#include <string>
#include <utility>

namespace Electrical::Component::Battery {

using namespace E170Systems::Units::Voltage;
using namespace E170Systems::Units::ElectricStorage;
using namespace E170Systems::Units::ElectricCurrent;

class Battery {

public:
  Battery(std::string name, Volt voltage, std::pair<Volt, Volt> voltage_min_max,
          MilliampHours capacity,
          std::pair<Ampere, Ampere> max_charge_discharge_rate);
  void UpdateState(float DeltaTime);
  void SetChargeDischargeRate(float rate);
  [[nodiscard]] float GetStateOfCharge() const { return m_StateOfCharge; }
  [[nodiscard]] float GetEfficiency() const { return m_Efficiency; }
  [[nodiscard]] float GetHealth() const { return m_Health; }

private:
  std::string m_Name;
  Volt m_voltage;
  std::pair<Volt, Volt> m_VoltageMaxMin;
  MilliampHours m_Capacity;
  float m_StateOfCharge;
  Ampere m_ChargeDischargeRate;
  std::pair<Ampere, Ampere> m_MaxMinDischargeRate;
  float m_Efficiency;
  float m_Health;

  // I liked the simple approach of using a vec for the connected busses but I'm
  // going to connect up the electrical system in a higher level component to
  // have more control over the direction of current flow.
};
} // namespace Electrical::Component::Battery
