
#pragma once

#include <cmath>
#include <vector>
#include <numeric>


namespace Hydraulic::Math {
    constexpr float PI = 3.141592653589979323846;

    class HydraulicMath {
    public:
        static float flowRateThroughOrifice(const float dischargeCoefficient, const float areaOfOrifice, const float gravityAcceleration, const float heightDiffPressureDrop) {
            return dischargeCoefficient * areaOfOrifice * std::sqrtf(2.0f * gravityAcceleration * heightDiffPressureDrop);
        }

        static float flowRateThroughPipe(const float pipeRadius, const float deltaPressure, const float viscosityOfFluidPa, const float length) {
            return (PI * std::powf(pipeRadius, 4.0f) * deltaPressure) / (8.0f * viscosityOfFluidPa * length);
        }

        static float pascalsLawP(const float force, const float area) {
            return force / area;
        }

        static float pascalsLawF(const float pressurePa, const float area) {
            return pressurePa * area;
        }

        static float hydraulicPower(const float flowRate, const float deltaPressure, const float efficiency) {
            return flowRate * deltaPressure * efficiency;
        }

        static float density(const float mass, const float volume) {
            return mass / volume;
        }

        static float dynamicViscosity(const float shearStress, const float shearRate) {
            return shearStress / shearRate;
        }

        static float darcyLaw(const float flowRateLMin, const float permeability, const float crossSectionalArea, const float dynamicViscosity, const float lengthOfFilter) {
            const float flowRateLSec = flowRateLMin / 60.0f;
            return (flowRateLSec * dynamicViscosity * lengthOfFilter) / (permeability * crossSectionalArea);
        }

        static float pressureFromTemperature(const float density, const float temperature, const float molarMass) {
            return (density * 8.314f * temperature) / molarMass;
        }

        static float pressurePaEstimated(const float density, const float volume, const std::vector<float> &crossSectionalAreas, const float flowRate) {
            const float netCrossSectionalArea = std::accumulate(crossSectionalAreas.begin(), crossSectionalAreas.end(), 0.0f);
            return 0.5f * density * std::pow(flowRate / netCrossSectionalArea, 2.0f);
        }

        static float pressurePaIncrease(const float pressurePa, const float density, const float volume, const std::vector<float> &crossSectionalAreas, const float flowRate) {
            const float netCrossSectionalArea = std::accumulate(crossSectionalAreas.begin(), crossSectionalAreas.end(), 0.0f);
            return pressurePa + 0.5f * density * std::powf(flowRate / netCrossSectionalArea, 2.0f);
        }

        static float paToPsi(const float pressurePa) {
            constexpr float PSI_TO_PA = 6894.76f;
            return pressurePa / PSI_TO_PA;
        }
    };
}

