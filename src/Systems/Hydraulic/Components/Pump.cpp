
#include "Pump.hpp"


namespace Hydraulic::Component::HydraulicPump {
    AcMotorPump::AcMotorPump(): m_RatedOutputFlow(71.92f),
                                m_Powered(false),
                                m_PressureOverride(false) {
    }

    float AcMotorPump::GetOutput(const float dt, const float Pressure) const {
        if (!m_Powered) {
            return 0.0f;
        }
        if (m_PressureOverride) {
            return 0.0f;
        }
        constexpr float RatedPressure = 2700.0f;
        const float PressureFactor = CalculatePressureFactor(Pressure, RatedPressure);
        const float VolumeFlowRate = m_RatedOutputFlow * PressureFactor;
        const float VolumeFlowRateM3s = VolumeFlowRate * 1e-3f;
        return VolumeFlowRateM3s;
    }

    EngineDrivenPump::EngineDrivenPump(): m_RatedOutputFlow(71.92f),
                                          m_OperatingRPM(4825.0f),
                                          m_OperatingTemperature(TempRange{.min = -54.0f, .max = 85.0f}),
                                          m_ConpensatorEnabled(true),
                                          m_DepressurizationSolenoidEnabled(false),
                                          m_EngineRpm(0.0f) {
    }

    float EngineDrivenPump::GetLeakback() const {
        if (!m_ConpensatorEnabled) {
            return -10.0f;
        } else {
            return 0.0f;
        }
    }

    float EngineDrivenPump::CalculateVolumeFlow(const float dt, const float Pressure) const {
        if (!m_ConpensatorEnabled) {
            return 0.0f;
        }

        constexpr float StepDownGear = 1.0f;
        constexpr float RatedPressure = 3000.0f;

        const float RpmDelta = (m_EngineRpm * StepDownGear) / m_OperatingRPM;

        const float PressureFactor = CalculatePressureFactor(Pressure, RatedPressure);
        const float VolumeFlowRate = m_RatedOutputFlow * RpmDelta * PressureFactor;
        const float VolumeFlowRateM3s = VolumeFlowRate * 1e-3f;

        return VolumeFlowRateM3s * dt;
    }
}
