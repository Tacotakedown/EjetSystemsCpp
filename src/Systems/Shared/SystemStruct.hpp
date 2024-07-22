#pragma once

#include "Units.hpp"

using namespace E170Systems::Units::Pressure;
using namespace E170Systems::Units::Volume;


namespace E170Systems::Variables {
    namespace Hydraulic {

        struct System1Vars {
            Liter ReservoirLevel;
            float EngineDrivenPumpRPM;
            bool AcMotorPumpState;
            PSI PreManifoldPressure;
            PSI PostManifoldPressure;
            float LhThrustReverserPosition;
        };

        struct HydraulicVars {
            System1Vars System1;
        };

    }

    namespace Electrical {

    }
}