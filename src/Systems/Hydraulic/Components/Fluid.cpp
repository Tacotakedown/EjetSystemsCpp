
#include "Fluid.hpp"


namespace Hydraulic::Component::Fluid {
    Fluid::Fluid(): m_IsoGrade(15.0f),
                    m_GravityApi(31.0f),
                    m_BulkModulis(1e-9f),
                    m_SpecificGravity(0.871f),
                    m_Density(119.826f),
                    m_Color("Red"),
                    m_FlashPointC(90.0f),
                    m_PourPointC(-64.0f),
                    m_ViscosityCst(FluidViscosity{.CStMinus54c = 2450.0f, .CStMinus40c = 495.0f, .CSt40C = 13.5f, .CSt100C = 5.1f}),
                    m_ViscosityIndex(382.0f),
                    m_AcidNumber(0.05f),
                    m_CopperCorrosionRating("1b"),
                    m_DielectricStrengthKv(49.6f),
                    m_EvaporationLossPct(13.6f),
                    m_FoamResistance("25-0"),
                    m_FourBallWearScarDiameter(0.65f),
                    m_GravimetricFiltrationMg100ml(6.0f),
                    m_FilterTimeMinutes(6.0f),
                    m_ParticulateContamination(ParticulateContamination{
                        .Size5_15Microns = 1200.0f, .Size16_25Microns = 175.0f, .Size26_50Microns = 60.0f, .Size51_100_Microns = 5.0f, .Size100PlusMicrons = 0.0f
                    }),
                    m_WaterContentPpm(60.0f) {
    }

    NewtonSecondPerSquareMeter Fluid::GetViscosity(const Celsius Temperature) const {
        if (Temperature <= -54.0f) {
            return m_ViscosityCst.CStMinus54c;
        }
        if (Temperature <= -40.0f) {
            const float interpoolate = (m_ViscosityCst.CStMinus40c - m_ViscosityCst.CStMinus54c) / (-40.0f - (-54.0f));
            return m_ViscosityCst.CStMinus54c + interpoolate * (Temperature - (-54.0f));
        }
        if (Temperature <= 40.0f) {
            const float interpoolate = (m_ViscosityCst.CSt40C - m_ViscosityCst.CStMinus40c) / (40.0f - (-40.0f));
            return m_ViscosityCst.CStMinus40c + interpoolate * (Temperature - (-40.0f));
        } else {
            const float interpoolate = (m_ViscosityCst.CSt100C - m_ViscosityCst.CSt40C) / (100.0f - (40.0f));
            return m_ViscosityCst.CSt40C + interpoolate * (Temperature - (40.0f));
        }
    }

    Liter Fluid::GetVolumeChangeFromCompressionPercent(const PSI Pressure, const Liter Volume) const {
        const float deltaV = Volume * m_BulkModulis * Pressure;
        return (deltaV / Volume) * 100.0f;
    }
}
