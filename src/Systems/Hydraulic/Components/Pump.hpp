
#pragma once
#include "Units.hpp"
#include <cmath>

using namespace E170Systems::Units::FlowRate;

namespace Hydraulic::Component::HydraulicPump {
    struct TempRange {
        E170Systems::Units::Temperature::Celsius min;
        E170Systems::Units::Temperature::Celsius max;
    };

    class AcMotorPump {
    public:
        AcMotorPump();

        void SetPowerState(const bool state) { m_Powered = state; }

        void SetPressureOverride(const bool state) { m_PressureOverride = state; }

        [[nodiscard]] float GetOutput(float dt, float Pressure) const;

    private:
        LiterPerMinute m_RatedOutputFlow;
        bool m_Powered;
        bool m_PressureOverride;
    };

    class EngineDrivenPump {
    public:
        EngineDrivenPump();

        void SetEngineRpm(const float rpm) { m_EngineRpm = rpm; }
        void SetDepressurizationSolenoid(const bool state) { m_DepressurizationSolenoidEnabled = state; }
        void SetCompensator(const bool state) { m_ConpensatorEnabled = state; }

        [[nodiscard]] float GetLeakback() const;

        [[nodiscard]] float CalculateVolumeFlow(float dt, float Pressure) const;

    private:
        LiterPerMinute m_RatedOutputFlow;
        float m_OperatingRPM;
        TempRange m_OperatingTemperature;
        bool m_ConpensatorEnabled;
        bool m_DepressurizationSolenoidEnabled;
        float m_EngineRpm;
    };
}

inline float CalculatePressureFactor(const float Pressure, const float RatedPressure) {
    const float PressureRatio = Pressure / RatedPressure;
    const float Factor = 1.0f + powf((1.0f - PressureRatio), 2.0f);
    return Factor;
}
