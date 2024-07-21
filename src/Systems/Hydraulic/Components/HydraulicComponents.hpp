
#pragma once

#include <string>
#include <variant>


namespace Hydraulic::Components {
    enum class E170System1 {
        Reservoir,
        EngineDrivenPump,
        AcMotorPump,
        FilterManifold,
        ReturnPriorityValve,
        SystemAccumulator,
        ParkingBrakeAccumulator,
        LhThrustReverser,
        PTUValve,
        PTUPriorityValve,
        UpperRudder,
        OutboardBrakeSystem,
        LhOutboardElevator,
        LhRhMFS3,
        LhRhMFS4,
        LhRhGS2,
        ParkingBrake,
        PTU
    };

    enum class E170System2 {
        Reservoir,
        EngineDrivenPump,
        AcMotorPump,
        FilterManifold,
        ReturnPriorityValve,
        SystemAccumulator,
        RhThrustReverser,
        LhRhMFS5,
        LhRhGS1,
        LhInboardAileron,
        RhInboardAileron,
        LhInboardElevator,
        RhInboardElevator,
        InboardBrakeSystem,
        ParkingBrakeAccumulator,
        ParkingBrake,
        GearPriorityValve,
        LandingGearManifold,
        NoseLandingGear,
        MainLandingGear,
        NoseWheelSteering
    };

    enum class E170System3 {
        Reservoir,
        AcMotorPump1,
        AcMotorPump2,
        PumpUnloadValve,
        FilterManifold,
        FlowLimitValve,
        ReturnPriorityValve,
        SystemAccumulator,
        LhOutboardAileron,
        RhOutboardAileron,
        LowerRudder,
        RhOutboardElevator
    };

    class E170HydraulicComponents {
    public:
        using ComponentVariant = std::variant<E170System1, E170System2, E170System3>;

        explicit E170HydraulicComponents(E170System1 component) : component_(component) {
        }

        explicit E170HydraulicComponents(E170System2 component) : component_(component) {
        }

        explicit E170HydraulicComponents(E170System3 component) : component_(component) {
        }

        std::string id() const {
            return std::visit([](auto &&component) -> std::string {
                using T = std::decay_t<decltype(component)>;
                if constexpr (std::is_same_v<T, E170System1>) {
                    switch (component) {
                        case E170System1::Reservoir: return "Sys1Reservoir";
                        case E170System1::EngineDrivenPump: return "Sys1EngineDrivenPump";
                        case E170System1::AcMotorPump: return "Sys1AcMotorPump";
                        case E170System1::FilterManifold: return "Sys1FilterManifold";
                        case E170System1::ReturnPriorityValve: return "Sys1ReturnPriorityValve";
                        case E170System1::SystemAccumulator: return "Sys1SystemAccumulator";
                        case E170System1::ParkingBrakeAccumulator: return "Sys1ParkingBrakeAccumulator";
                        case E170System1::LhThrustReverser: return "Sys1LhThrustReverser";
                        case E170System1::PTUValve: return "Sys1PTUValve";
                        case E170System1::PTUPriorityValve: return "Sys1PTUPriorityValve";
                        case E170System1::UpperRudder: return "Sys1UpperRudder";
                        case E170System1::OutboardBrakeSystem: return "Sys1OutboardBrakeSystem";
                        case E170System1::LhOutboardElevator: return "Sys1LhOutboardElevator";
                        case E170System1::LhRhMFS3: return "Sys1LhRhMFS3";
                        case E170System1::LhRhMFS4: return "Sys1LhRhMFS4";
                        case E170System1::LhRhGS2: return "Sys1LhRhGS2";
                        case E170System1::ParkingBrake: return "Sys1ParkingBrake";
                        case E170System1::PTU: return "Sys1PTU";
                        default: return "";
                    }
                } else if constexpr (std::is_same_v<T, E170System2>) {
                    switch (component) {
                        case E170System2::Reservoir: return "Sys2Reservoir";
                        case E170System2::EngineDrivenPump: return "Sys2EngineDrivenPump";
                        case E170System2::AcMotorPump: return "Sys2AcMotorPump";
                        case E170System2::FilterManifold: return "Sys2FilterManifold";
                        case E170System2::ReturnPriorityValve: return "Sys2ReturnPriorityValve";
                        case E170System2::SystemAccumulator: return "Sys2SystemAccumulator";
                        case E170System2::RhThrustReverser: return "Sys2RhThrustReverser";
                        case E170System2::LhRhMFS5: return "Sys2LhRhMFS5";
                        case E170System2::LhRhGS1: return "Sys2LhRhGS1";
                        case E170System2::LhInboardAileron: return "Sys2LhInboardAileron";
                        case E170System2::RhInboardAileron: return "Sys2RhInboardAileron";
                        case E170System2::LhInboardElevator: return "Sys2LhInboardElevator";
                        case E170System2::RhInboardElevator: return "Sys2RhInboardElevator";
                        case E170System2::InboardBrakeSystem: return "Sys2InboardBrakeSystem";
                        case E170System2::ParkingBrakeAccumulator: return "Sys2ParkingBrakeAccumulator";
                        case E170System2::ParkingBrake: return "Sys2ParkingBrake";
                        case E170System2::GearPriorityValve: return "Sys2GearPriorityValve";
                        case E170System2::LandingGearManifold: return "Sys2LandingGearManifold";
                        case E170System2::NoseLandingGear: return "Sys2NoseLandingGear";
                        case E170System2::MainLandingGear: return "Sys2MainLandingGear";
                        case E170System2::NoseWheelSteering: return "Sys2NoseWheelSteering";
                        default: return "";
                    }
                } else if constexpr (std::is_same_v<T, E170System3>) {
                    switch (component) {
                        case E170System3::Reservoir: return "Sys3Reservoir";
                        case E170System3::AcMotorPump1: return "Sys3AcMotorPump1";
                        case E170System3::AcMotorPump2: return "Sys3AcMotorPump2";
                        case E170System3::PumpUnloadValve: return "Sys3PumpUnloadValve";
                        case E170System3::FilterManifold: return "Sys3FilterManifold";
                        case E170System3::FlowLimitValve: return "Sys3FlowLimitValve";
                        case E170System3::ReturnPriorityValve: return "Sys3ReturnPriorityValve";
                        case E170System3::SystemAccumulator: return "Sys3SystemAccumulator";
                        case E170System3::LhOutboardAileron: return "Sys3LhOutboardAileron";
                        case E170System3::RhOutboardAileron: return "Sys3RhOutboardAileron";
                        case E170System3::LowerRudder: return "Sys3LowerRudder";
                        case E170System3::RhOutboardElevator: return "Sys3RhOutboardElevator";
                        default: return "";
                    }
                }
                return {};
            }, component_);
        }

    private:
        ComponentVariant component_;
    };
}
