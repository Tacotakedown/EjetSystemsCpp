
#pragma once
#include "Electrical/Components/ElectricalComponent.hpp"

namespace Electrical::Component {
    class Battery;
    class Wire;
    class GenericAcComponent;
    class GenericDcComponent;


    namespace BusComponents {
        struct AC_ESS_BUS {
            GenericAcComponent &component1;
            GenericAcComponent &component2;
        };

        struct AC_BUS_1 {
            GenericAcComponent &CabinPcOutletRelay;
            GenericAcComponent &IceDet1;
            GenericAcComponent &SatcomAmplifier;
            GenericAcComponent &FwdBidetWaterHtrPower;
            GenericAcComponent &WindshieldWiper2;
            GenericAcComponent &AftBidetWaterHtrPower;
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
            struct FlightControls {
                GenericDcComponent &PitchTrim1;
                // GenericDcComponent & TODO SomethingOutboardSomethingSec
            };
        };

        struct DC_BUS_2 {
        };

        struct DC_ESS_BUS_1 {
            struct FlightControls {
                GenericDcComponent &FlapACE1;
                GenericDcComponent &PAce3_RhOutboardElevatorPri;

                struct P_ACE1 {
                    GenericDcComponent &UpperRudderSec;
                    GenericDcComponent &LhOutboardElevatorPri;
                } pAce1;

                struct FCM {
                    GenericDcComponent &Primary;
                    GenericDcComponent &Secondary;
                } FCM;
            } flightControl;

            struct MAU1 {
                GenericDcComponent &MauPower2;
                GenericDcComponent &MauPower1;
                GenericDcComponent &MauCustomIo1A;
            } mau1;

            struct Display_Control {
                GenericDcComponent &IntegratedStbyPower2;
                GenericDcComponent &EICAS;
                GenericDcComponent &Clock;
            } display_control;

            struct Alerts {
                GenericDcComponent &MasterWarningCaution1;
                GenericDcComponent &Aural1;
            } alerts;

            struct Hydr {
                GenericDcComponent &ElecPump3a;
                GenericDcComponent &EDPSys2;
            } hydr;

            struct Comm {
                GenericDcComponent &MRC1;
                GenericDcComponent &VHF1;
                GenericDcComponent &Audio;
            } comm;

            struct AFCS {
                GenericDcComponent &ChanA2;
                GenericDcComponent &ChanA1;
            } afcs;

            struct NAV {
                GenericDcComponent &VorIls1;
                GenericDcComponent &ADF1;
                GenericDcComponent &DME1;
                GenericDcComponent &Compass;
                GenericDcComponent &Irs1Pwr1;
            } nav;

            struct Engine {
                GenericDcComponent &Engine1OilPressure;

                struct FADEC {
                    GenericDcComponent &Fadec2A;
                    GenericDcComponent &Fadec1A;
                } fadec;

                GenericDcComponent &Eng1Ignition;
                GenericDcComponent &Eng1T2Heater;
            } engine;

            struct LandingGear {
                GenericDcComponent &Sys1Pwr1;
                GenericDcComponent &Sys2Pwr1;
            } landingGear;

            struct SmokeDetectors {
                struct Cargo {
                    GenericDcComponent &Fwd1;
                    GenericDcComponent &Fwd2;
                } cargo;

                GenericDcComponent &LavFwd;
            } smokeDetectors;

            GenericDcComponent &BrkOutboard;

            struct Pressurization {
                GenericDcComponent &CpcsCtrl2B;
                GenericDcComponent &CpcsCtrl2A;
            } pressurization;

            GenericDcComponent &FuelQty1;
            GenericDcComponent &AirCondLowLimit1;

            struct Elec {
                GenericDcComponent &RatBit;
                GenericDcComponent &Spda1IOMod9;
            } elec;

            GenericDcComponent &OxyMaskDeploy2;
        };


        struct DC_ESS_BUS_2 {
            struct FlightControls {
                struct FCM {
                    GenericDcComponent &Secondary;
                    GenericDcComponent &Primary;
                } fcm;

                struct P_ACE_2 {
                    GenericDcComponent &LhInboardElevSecondary;
                    GenericDcComponent &RhInboardElevPrimary;
                } pAce2;

                GenericDcComponent &PAce3LwrRudderPrimary;
                GenericDcComponent &SlatAce2;
                GenericDcComponent &PitchTrim2;
            } flight_controls;

            struct Display_Control {
                GenericDcComponent &MFD;
                GenericDcComponent &CCD;
                GenericDcComponent &MCDU;
                GenericDcComponent &IntegratedStbyPower2;
            } display_control;

            struct Mau3 {
                GenericDcComponent &CustomIO2a;
                GenericDcComponent &Power1;
            } mau3;

            GenericDcComponent &Mau2Power2Primary;

            GenericDcComponent &CommAudio2;

            struct Alerts {
                GenericDcComponent &Aural;
                GenericDcComponent &MasterWarningCaution2;
            } alerts;

            GenericDcComponent &HydraulicEdpSys1;

            struct NAV {
                GenericDcComponent &IRS1Power2;
                GenericDcComponent &ADS3SybyProbe4b;
            } nav;

            struct AFCS {
                GenericDcComponent &ChanB1;
                GenericDcComponent &ChanB2;
            } afcs;

            struct LandingGear {
                GenericDcComponent &Sys2Power2;
                GenericDcComponent &Sys1Power2;
            } landing_gear;

            struct Engine {
                GenericDcComponent &Eng2T2Heater;
                GenericDcComponent &Eng2Ignition;

                struct FADEC {
                    GenericDcComponent &FADEC1B;
                    GenericDcComponent &FADEC2b;
                } fadec;

                GenericDcComponent &Eng2OilPress;
            } engine;

            GenericDcComponent &PressCpcsCtrl1a;

            GenericDcComponent &BRKInboard;

            struct ELT {
                GenericDcComponent &NAV;
                GenericDcComponent &TX;
            } elt;

            struct SmokeDetector {
                GenericDcComponent &CargoFwd3;
                GenericDcComponent &CargoAft2;
            } smoke_detector;

            GenericDcComponent &FuelQty2;
            GenericDcComponent &AirCondLowLimit2;

            struct APU {
                GenericDcComponent &Firex;
                GenericDcComponent &FuelSOV;
            } apu;
        };

        struct DC_ESS_BUS_3 {
            GenericDcComponent &FBWBackupBattery;
            GenericDcComponent &P_ACE3_LowerRudder_Sec;
            GenericDcComponent &PresnCpcsCtrl1B;
            GenericDcComponent &FireExtinguisherCargoPbaLt;
            GenericDcComponent &CabinIph;
            GenericDcComponent &Ampl;
            GenericDcComponent &SmokeDetectorCargoAft1;
            GenericDcComponent &MiscSeatAdjustmentPilot;
            GenericDcComponent &LightsDome;
        };

        struct HOT_BATT_BUS_1 {
            GenericDcComponent &FuelEngineSOV1;
            GenericDcComponent &HydraulicSOVSys1;
            GenericDcComponent &FireExtinguisherEngine2a;
            GenericDcComponent &FireExtinguisherEngine1a;
            GenericDcComponent &EngineOilLevel1;
            GenericDcComponent &LgTowingLtPower2;
            GenericDcComponent &CourtesyLights;
            GenericDcComponent &DcCeilingLights;
        };

        struct HOT_BATT_BUS_2 {
        };
    }

    class Busses {
    };
}

