
#pragma once
#include "Electrical/Components/ElectricalComponent.hpp"

namespace Electrical::Component {
    class Battery;
    class Wire;
    class GenericAcComponent;
    class GenericDcComponent;


    namespace Busses {
        struct AC_ESS_BUS {
            GenericAcComponent &component1;
            GenericAcComponent &component2;
        };

        struct AC_BUS_1 {
        };

        struct AC_BUS_2 {
        };

        struct STANDBY_AC_BUS {
        };

        struct AC_GND_SVC {
        };

        struct DC_GND_SVC {
        };

        struct DC_BUS_1 {
        };

        struct DC_BUS_2 {
        };

        struct DC_ESS_BUS_1 {
        };

        struct DC_ESS_BUS_2 {
        };

        struct DC_ESS_BUS_3 {
        };

        struct HOT_BATT_BUS_1 {
        };

        struct HOT_BATT_BUS_2 {
        };
    }
}

