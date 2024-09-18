
#pragma once
#include <cmath>

#include "Units.hpp"
#include "Hydraulic/Components/Math.hpp"


namespace E170Systems::Electrical::Util {
    /*
    * Ohm's Law: Relationship between voltage, current, and resistance
    *  I(current) = V(volatage)/ R(resistance)
    */
    inline Units::ElectricCurrent::Ampere OhmLawCurrent(const E170Systems::Units::Voltage::Volt volts, const Units::Resistance::Ohm resistance) {
        return volts / resistance;
    }

    /*
     * Power in a DC circuit
     * P(Watts) = V(voltage) * C(current)
     */
    inline Units::Power::Watt PowerDC(const Units::Voltage::Volt volts, const Units::ElectricCurrent::Ampere current) {
        return volts * current;
    }

    /*
     * Power in an AC circuit
     *  P(Watts) = V(voltage) * I(current) * cos(theta) <- power factor
     */
    inline Units::Power::Watt PowerAC(const Units::Voltage::Volt volts, const Units::ElectricCurrent::Ampere current, const float powerFactor) {
        return volts * current * powerFactor;
    }

    /*
     * Apparent power (S) in AC circuits.
     * S = V * I
     */
    inline Units::Power::Watt ApperentACPower(const Units::Voltage::Volt volt, const Units::ElectricCurrent::Ampere current) {
        return volt * current;
    }


    /*
     * Reactive power based on the current and voltage phase difference.
     * Q = V * I * sin(θ)
     */
    inline Units::Power::Watt ReactiveACPower(const Units::Voltage::Volt volt, const Units::ElectricCurrent::Ampere current, const float powerFactor) {
        return (volt * current * sqrt(1 - powf(powerFactor, 2)));
    }

    /*
     * Calculates the reactance of a capacitor at a given frequency.
     * Xc = 1 / (2πfC)
     */
    inline Units::Resistance::Ohm CapacitiveReactance(const Units::Capacitance::Farad capacitance, const float frequency) {
        return 1 / (2 * Hydraulic::Math::PI * frequency * capacitance);
    }

    /*
     * Calculates the reactance of an inductor at a given frequency.
     *  Xl = 2πfL
     */
    inline Units::Resistance::Ohm InductiveReactance(const Units::Inductance::Henry inductance, const float frequency) {
        return 2 * Hydraulic::Math::PI * frequency * inductance;
    }

    /*
     * Calculates the impedance (Z) of a circuit containing resistance and reactance.
     * Z = √(R² + X²)
     */
    inline Units::Resistance::Ohm Impedance(const Units::Resistance::Ohm resistance, const Units::Resistance::Ohm reactance) {
        return sqrtf(powf(resistance, 2.0f) + powf(resistance, 2.0f));
    }

    /*
     * Energy stored in a capacitor based on capacitance and voltage.
     * E = 0.5 * C * V²
     */
    inline Units::Energy::Joule CapacitorEnerg(const Units::Capacitance::Farad capacatance, const Units::Voltage::Volt voltage) {
        return 0.5f * capacatance * powf(voltage, 2.0f);
    }

    /*
     * Energy stored in an inductor based on inductance and current.
     * E = 0.5 * L * I²
     */
    inline Units::Energy::Joule InductorEnergy(const Units::Inductance::Henry inductance, const Units::ElectricCurrent::Ampere current) {
        return 0.5f * inductance * powf(current, 2.0f);
    }

    /*
     * Kirchhoff's Voltage Law (KVL)
     * Sum of voltages around a closed loop is zero.
     */
    inline Units::Voltage::Volt KirchhoffVoltageLaw(const std::vector<Units::Voltage::Volt> &voltages) {
        float sum = 0.0f;
        for (const float voltage: voltages) {
            sum += voltage;
        }
        return sum;
    }

    /*
    *Kirchhoff's Current Law (KCL)
    *Sum of currents entering a node equals the sum of currents leaving.
    */
    inline Units::ElectricCurrent::Ampere KirchhoffCurrentLaw(const std::vector<Units::ElectricCurrent::Ampere> &currents) {
        float sum = 0.0f;
        for (const double current: currents) {
            sum += current;
        }
        return sum;
    }

    /*
    *DC Voltage Divider
    * Voltage across a resistor in a series circuit.
    * Vout = (R / Rtotal) * Vtotal
    */
    inline Units::Voltage::Volt DCVoltageDivider(const Units::Voltage::Volt totalVoltage, const Units::Resistance::Ohm resistance, const Units::Resistance::Ohm totalResistance) {
        return (resistance / totalResistance) * totalVoltage;
    }

    /*
    *AC Voltage Divider (Impedance-Based)
    *Voltage across a component in a series AC circuit, considering impedance.
    *Vout = (Z / Ztotal) * Vtotal
    */
    inline Units::Voltage::Volt ACVoltageDivider(const Units::Voltage::Volt totalVoltage, const Units::Resistance::Ohm impedance, const Units::Resistance::Ohm totalImpedance) {
        return (impedance / totalImpedance) * totalVoltage;
    }

    /*
    *RMS (Root Mean Square) Voltage
    *Converts peak voltage to RMS voltage.
    * Vrms = Vpeak / √2
    */
    inline Units::Voltage::Volt RmsVoltage(const Units::Voltage::Volt peakVoltage) {
        return peakVoltage / sqrtf(2.0f);
    }

    /*
    *RMS (Root Mean Square) Current
    *Converts peak current to RMS current.
    *Irms = Ipeak / √2
    */
    inline Units::ElectricCurrent::Ampere RmsCurrent(Units::ElectricCurrent::Ampere peakCurrent) {
        return peakCurrent / sqrtf(2.0f);
    }

    /*
     *Efficiency
     *Percent/100
     */
    inline float efficiency(const Units::Power::Watt inputPower, const Units::Power::Watt outputPower) {
        return (outputPower / inputPower) * 100;
    }
}














