
#pragma once
#include "Units.hpp"

using namespace E170Systems::Units::Volume;
using namespace E170Systems::Units::Viscosity;
using namespace E170Systems::Units::Temperature;
using namespace E170Systems::Units::Pressure;

namespace Hydraulic::Component::Fluid {
    struct ParticulateContamination {
        float Size5_15Microns;
        float Size16_25Microns;
        float Size26_50Microns;
        float Size51_100_Microns;
        float Size100PlusMicrons;
    };

    struct FluidViscosity {
        float CStMinus54c;
        float CStMinus40c;
        float CSt40C;
        float CSt100C;
    };

    class Fluid {
    public:
        Fluid();

        [[nodiscard]] NewtonSecondPerSquareMeter GetViscosity(Celsius Temperature) const;

        [[nodiscard]] Liter GetVolumeChangeFromCompressionPercent(PSI Pressure, Liter Volume) const;

    private:
        float m_IsoGrade;
        float m_GravityApi;
        float m_BulkModulis;
        float m_SpecificGravity;
        float m_Density;
        const char *m_Color;
        float m_FlashPointC;
        float m_PourPointC;
        FluidViscosity m_ViscosityCst;
        float m_ViscosityIndex;
        float m_AcidNumber;
        const char *m_CopperCorrosionRating;
        float m_DielectricStrengthKv;
        float m_EvaporationLossPct;
        const char *m_FoamResistance;
        float m_FourBallWearScarDiameter;
        float m_GravimetricFiltrationMg100ml;
        float m_FilterTimeMinutes;
        ParticulateContamination m_ParticulateContamination;
        float m_WaterContentPpm;
    };
}
