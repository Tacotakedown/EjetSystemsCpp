//
// Created by Taco on 7/10/2024.
//


namespace E170Systems::Units {

    namespace Length {
        typedef float Meter;
        typedef float Kilometer;
        typedef float Centimeter;
        typedef float Millimeter;
        typedef float Micrometer;
        typedef float Nanometer;
        typedef float Micron;
        typedef float Inch;
        typedef float Foot;
        typedef float Mile;
        typedef float Yard;
        typedef float NauticalMile;
        typedef float AstronomicalUnit;
        typedef float LightYear;
        typedef float Parsec;
    }

    namespace Area {
        typedef float SquareMeter;
        typedef float SquareKilometer;
        typedef float SquareCentimeter;
        typedef float SquareMillimeter;
        typedef float SquareInch;
        typedef float SquareFoot;
    }

    namespace Volume {
        typedef float CubicMeter;
        typedef float CubicCentimeter;
        typedef float CubicMillimeter;
        typedef float Liter;
        typedef float Milliliter;
        typedef float CubicInch;
        typedef float CubicFoot;
        typedef float Gallon;
        typedef float Quart;
    }

    namespace Mass {
        typedef float Kilogram;
        typedef float Gram;
        typedef float Tonne;
        typedef float MetricTon;
        typedef float Pound;
        typedef float Ounce;
    }

    namespace Time {
        typedef float Millisecond;
        typedef float Second;
        typedef float Minute;
    }

    namespace Temperature {
        typedef float Kelvin;
        typedef float Celsius;
        typedef float Fahrenheit;
    }

    namespace Force {
        typedef float Newton;
        typedef float Kilonewton;
        typedef float PoundForce;
    }

    namespace Pressure {
        typedef float Pascal;
        typedef float Kilopascal;
        typedef float Bar;
        typedef float Atmosphere;
        typedef float PSI;
    }

    namespace Energy {
        typedef float Joule;
        typedef float Kilojoule;
        typedef float Calorie;
        typedef float Kilocalorie;
        typedef float WattHour;
        typedef float KilowattHour;
        typedef float ElectronVolt;
    }

    namespace Power {
        typedef float Watt;
        typedef float Kilowatt;
        typedef float Megawatt;
        typedef float Horsepower;
    }

    namespace ElectricCurrent {
        typedef float Ampere;
        typedef float Milliampere;
    }

    namespace Voltage {
        typedef float Volt;
        typedef float Millivolt;
        typedef float Microvolt;
    }

    namespace Resistance {
        typedef float Ohm;
        typedef float Kiloohm;
        typedef float Megaohm;
    }

    namespace Capacitance {
        typedef float Farad;
        typedef float Microfarad;
        typedef float Nanofarad;
        typedef float Picofarad;
    }

    namespace Inductance {
        typedef float Henry;
        typedef float Millihenry;
        typedef float Microhenry;
    }

    namespace MagneticFlux {
        typedef float Weber;
        typedef float Maxwell;
    }

    namespace MagneticFieldStrength {
        typedef float Tesla;
        typedef float Gauss;
    }

    namespace Frequency {
        typedef float Hertz;
        typedef float Kilohertz;
        typedef float Megahertz;
        typedef float Gigahertz;
    }

    namespace LuminousIntensity {
        typedef float Candela;
    }

    namespace LuminousFlux {
        typedef float Lumen;
    }

    namespace Illuminance {
        typedef float Lux;
    }

    namespace Radioactivity {
        typedef float Becquerel;
        typedef float Curie;
    }

    namespace AbsorbedDose {
        typedef float Gray;
        typedef float Rad;
    }

    namespace EquivalentDose {
        typedef float Sievert;
        typedef float Rem;
    }

    namespace CatalyticActivity {
        typedef float Katal;
    }

    namespace Angle {
        typedef float Radian;
        typedef float Degree;
        typedef float Gradian;
    }
}
namespace E170Systems::UnitConversions {
    namespace Length {
        using namespace E170Systems::Units::Length;
        constexpr float meters_in_kilometer = 1000.0f;
        constexpr float meters_in_centimeter = 0.01f;
        constexpr float meters_in_millimeter = 0.001f;
        constexpr float meters_in_micrometer = 1e-6f;
        constexpr float meters_in_nanometer = 1e-9f;
        constexpr float meters_in_micron = 1e-6f;
        constexpr float meters_in_inch = 0.0254f;
        constexpr float meters_in_foot = 0.3048f;
        constexpr float meters_in_mile = 1609.344f;
        constexpr float meters_in_yard = 0.9144f;
        constexpr float meters_in_nautical_mile = 1852.0f;
        constexpr float meters_in_astronomical_unit = 1.495978707e11f;
        constexpr float meters_in_light_year = 9.4607e15f;
        constexpr float meters_in_parsec = 3.0857e16f;

        Kilometer metersToKilometers(Meter m) { return m / meters_in_kilometer; }

        Meter kilometersToMeters(Kilometer km) { return km * meters_in_kilometer; }

        Centimeter metersToCentimeters(Meter m) { return m / meters_in_centimeter; }

        Meter centimetersToMeters(Centimeter cm) { return cm * meters_in_centimeter; }

        Millimeter metersToMillimeters(Meter m) { return m / meters_in_millimeter; }

        Meter millimetersToMeters(Millimeter mm) { return mm * meters_in_millimeter; }

        Micrometer metersToMicrometers(Meter m) { return m / meters_in_micrometer; }

        Meter micrometersToMeters(Micrometer um) { return um * meters_in_micrometer; }

        Nanometer metersToNanometers(Meter m) { return m / meters_in_nanometer; }

        Meter nanometersToMeters(Nanometer nm) { return nm * meters_in_nanometer; }

        Micron metersToMicrons(Meter m) { return m / meters_in_micron; }

        Meter micronsToMeters(Micron um) { return um * meters_in_micron; }

        Inch metersToInches(Meter m) { return m / meters_in_inch; }

        Meter inchesToMeters(Inch in) { return in * meters_in_inch; }

        Foot metersToFeet(Meter m) { return m / meters_in_foot; }

        Meter feetToMeters(Foot ft) { return ft * meters_in_foot; }

        Mile metersToMiles(Meter m) { return m / meters_in_mile; }

        Meter milesToMeters(Mile mi) { return mi * meters_in_mile; }

        Yard metersToYards(Meter m) { return m / meters_in_yard; }

        Meter yardsToMeters(Yard yd) { return yd * meters_in_yard; }

        NauticalMile metersToNauticalMiles(Meter m) { return m / meters_in_nautical_mile; }

        Meter nauticalMilesToMeters(NauticalMile nm) { return nm * meters_in_nautical_mile; }

        AstronomicalUnit metersToAstronomicalUnits(Meter m) { return m / meters_in_astronomical_unit; }

        Meter astronomicalUnitsToMeters(AstronomicalUnit au) { return au * meters_in_astronomical_unit; }

        LightYear metersToLightYears(Meter m) { return m / meters_in_light_year; }

        Meter lightYearsToMeters(LightYear ly) { return ly * meters_in_light_year; }

        Parsec metersToParsecs(Meter m) { return m / meters_in_parsec; }

        Meter parsecsToMeters(Parsec pc) { return pc * meters_in_parsec; }
    }

    namespace Area {
        using namespace E170Systems::Units::Area;
        constexpr float square_meters_in_square_kilometer = 1e6f;
        constexpr float square_meters_in_square_centimeter = 1e-4f;
        constexpr float square_meters_in_square_millimeter = 1e-6f;
        constexpr float square_meters_in_square_inch = 0.00064516f;
        constexpr float square_meters_in_square_foot = 0.092903f;

        SquareMeter squareKilometersToSquareMeters(SquareKilometer km2) { return km2 * square_meters_in_square_kilometer; }

        SquareKilometer squareMetersToSquareKilometers(SquareMeter m2) { return m2 / square_meters_in_square_kilometer; }

        SquareMeter squareCentimetersToSquareMeters(SquareCentimeter cm2) { return cm2 * square_meters_in_square_centimeter; }

        SquareCentimeter squareMetersToSquareCentimeters(SquareMeter m2) { return m2 / square_meters_in_square_centimeter; }

        SquareMeter squareMillimetersToSquareMeters(SquareMillimeter mm2) { return mm2 * square_meters_in_square_millimeter; }

        SquareMillimeter squareMetersToSquareMillimeters(SquareMeter m2) { return m2 / square_meters_in_square_millimeter; }

        SquareMeter squareInchesToSquareMeters(SquareInch in2) { return in2 * square_meters_in_square_inch; }

        SquareInch squareMetersToSquareInches(SquareMeter m2) { return m2 / square_meters_in_square_inch; }

        SquareMeter squareFeetToSquareMeters(SquareFoot ft2) { return ft2 * square_meters_in_square_foot; }

        SquareFoot squareMetersToSquareFeet(SquareMeter m2) { return m2 / square_meters_in_square_foot; }

        SquareCentimeter squareKilometersToSquareCentimeters(SquareKilometer km2) { return squareMetersToSquareCentimeters(squareKilometersToSquareMeters(km2)); }

        SquareKilometer squareCentimetersToSquareKilometers(SquareCentimeter cm2) { return squareMetersToSquareKilometers(squareCentimetersToSquareMeters(cm2)); }

        SquareMillimeter squareKilometersToSquareMillimeters(SquareKilometer km2) { return squareMetersToSquareMillimeters(squareKilometersToSquareMeters(km2)); }

        SquareKilometer squareMillimetersToSquareKilometers(SquareMillimeter mm2) { return squareMetersToSquareKilometers(squareMillimetersToSquareMeters(mm2)); }

        SquareInch squareKilometersToSquareInches(SquareKilometer km2) { return squareMetersToSquareInches(squareKilometersToSquareMeters(km2)); }

        SquareKilometer squareInchesToSquareKilometers(SquareInch in2) { return squareMetersToSquareKilometers(squareInchesToSquareMeters(in2)); }

        SquareFoot squareKilometersToSquareFeet(SquareKilometer km2) { return squareMetersToSquareFeet(squareKilometersToSquareMeters(km2)); }

        SquareKilometer squareFeetToSquareKilometers(SquareFoot ft2) { return squareMetersToSquareKilometers(squareFeetToSquareMeters(ft2)); }

        SquareMillimeter squareCentimetersToSquareMillimeters(SquareCentimeter cm2) { return squareMetersToSquareMillimeters(squareCentimetersToSquareMeters(cm2)); }

        SquareCentimeter squareMillimetersToSquareCentimeters(SquareMillimeter mm2) { return squareMetersToSquareCentimeters(squareMillimetersToSquareMeters(mm2)); }

        SquareInch squareCentimetersToSquareInches(SquareCentimeter cm2) { return squareMetersToSquareInches(squareCentimetersToSquareMeters(cm2)); }

        SquareCentimeter squareInchesToSquareCentimeters(SquareInch in2) { return squareMetersToSquareCentimeters(squareInchesToSquareMeters(in2)); }

        SquareFoot squareCentimetersToSquareFeet(SquareCentimeter cm2) { return squareMetersToSquareFeet(squareCentimetersToSquareMeters(cm2)); }

        SquareCentimeter squareFeetToSquareCentimeters(SquareFoot ft2) { return squareMetersToSquareCentimeters(squareFeetToSquareMeters(ft2)); }

        SquareInch squareMillimetersToSquareInches(SquareMillimeter mm2) { return squareMetersToSquareInches(squareMillimetersToSquareMeters(mm2)); }

        SquareMillimeter squareInchesToSquareMillimeters(SquareInch in2) { return squareMetersToSquareMillimeters(squareInchesToSquareMeters(in2)); }

        SquareFoot squareMillimetersToSquareFeet(SquareMillimeter mm2) { return squareMetersToSquareFeet(squareMillimetersToSquareMeters(mm2)); }

        SquareMillimeter squareFeetToSquareMillimeters(SquareFoot ft2) { return squareMetersToSquareMillimeters(squareFeetToSquareMeters(ft2)); }

        SquareFoot squareInchesToSquareFeet(SquareInch in2) { return squareMetersToSquareFeet(squareInchesToSquareMeters(in2)); }

        SquareInch squareFeetToSquareInches(SquareFoot ft2) { return squareMetersToSquareInches(squareFeetToSquareMeters(ft2)); }
    }

    namespace Volume {
        using namespace E170Systems::Units::Volume;

        constexpr float cubic_meters_in_cubic_centimeter = 1e-6f;
        constexpr float cubic_meters_in_cubic_millimeter = 1e-9f;
        constexpr float cubic_meters_in_liter = 0.001f;
        constexpr float cubic_meters_in_milliliter = 1e-6f;
        constexpr float cubic_meters_in_cubic_inch = 1.6387e-5f;
        constexpr float cubic_meters_in_cubic_foot = 0.0283168f;
        constexpr float cubic_meters_in_gallon = 0.00378541f;
        constexpr float cubic_meters_in_quart = 0.000946353f;

        CubicMeter cubicCentimetersToCubicMeters(CubicCentimeter cm3) { return cm3 * cubic_meters_in_cubic_centimeter; }

        CubicCentimeter cubicMetersToCubicCentimeters(CubicMeter m3) { return m3 / cubic_meters_in_cubic_centimeter; }

        CubicMeter cubicMillimetersToCubicMeters(CubicMillimeter mm3) { return mm3 * cubic_meters_in_cubic_millimeter; }

        CubicMillimeter cubicMetersToCubicMillimeters(CubicMeter m3) { return m3 / cubic_meters_in_cubic_millimeter; }

        CubicMeter litersToCubicMeters(Liter l) { return l * cubic_meters_in_liter; }

        Liter cubicMetersToLiters(CubicMeter m3) { return m3 / cubic_meters_in_liter; }

        CubicMeter millilitersToCubicMeters(Milliliter ml) { return ml * cubic_meters_in_milliliter; }

        Milliliter cubicMetersToMilliliters(CubicMeter m3) { return m3 / cubic_meters_in_milliliter; }

        CubicMeter cubicInchesToCubicMeters(CubicInch in3) { return in3 * cubic_meters_in_cubic_inch; }

        CubicInch cubicMetersToCubicInches(CubicMeter m3) { return m3 / cubic_meters_in_cubic_inch; }

        CubicMeter cubicFeetToCubicMeters(CubicFoot ft3) { return ft3 * cubic_meters_in_cubic_foot; }

        CubicFoot cubicMetersToCubicFeet(CubicMeter m3) { return m3 / cubic_meters_in_cubic_foot; }

        CubicMeter gallonsToCubicMeters(Gallon gal) { return gal * cubic_meters_in_gallon; }

        Gallon cubicMetersToGallons(CubicMeter m3) { return m3 / cubic_meters_in_gallon; }

        CubicMeter quartsToCubicMeters(Quart qt) { return qt * cubic_meters_in_quart; }

        Quart cubicMetersToQuarts(CubicMeter m3) { return m3 / cubic_meters_in_quart; }

        CubicMillimeter cubicCentimetersToCubicMillimeters(CubicCentimeter cm3) { return cubicMetersToCubicMillimeters(cubicCentimetersToCubicMeters(cm3)); }

        CubicCentimeter cubicMillimetersToCubicCentimeters(CubicMillimeter mm3) { return cubicMetersToCubicCentimeters(cubicMillimetersToCubicMeters(mm3)); }

        Liter cubicCentimetersToLiters(CubicCentimeter cm3) { return cubicMetersToLiters(cubicCentimetersToCubicMeters(cm3)); }

        CubicCentimeter litersToCubicCentimeters(Liter l) { return cubicMetersToCubicCentimeters(litersToCubicMeters(l)); }

        Milliliter cubicCentimetersToMilliliters(CubicCentimeter cm3) { return cubicMetersToMilliliters(cubicCentimetersToCubicMeters(cm3)); }

        CubicCentimeter millilitersToCubicCentimeters(Milliliter ml) { return cubicMetersToCubicCentimeters(millilitersToCubicMeters(ml)); }

        CubicInch cubicCentimetersToCubicInches(CubicCentimeter cm3) { return cubicMetersToCubicInches(cubicCentimetersToCubicMeters(cm3)); }

        CubicCentimeter cubicInchesToCubicCentimeters(CubicInch in3) { return cubicMetersToCubicCentimeters(cubicInchesToCubicMeters(in3)); }

        CubicFoot cubicCentimetersToCubicFeet(CubicCentimeter cm3) { return cubicMetersToCubicFeet(cubicCentimetersToCubicMeters(cm3)); }

        CubicCentimeter cubicFeetToCubicCentimeters(CubicFoot ft3) { return cubicMetersToCubicCentimeters(cubicFeetToCubicMeters(ft3)); }

        Gallon cubicCentimetersToGallons(CubicCentimeter cm3) { return cubicMetersToGallons(cubicCentimetersToCubicMeters(cm3)); }

        CubicCentimeter gallonsToCubicCentimeters(Gallon gal) { return cubicMetersToCubicCentimeters(gallonsToCubicMeters(gal)); }

        Quart cubicCentimetersToQuarts(CubicCentimeter cm3) { return cubicMetersToQuarts(cubicCentimetersToCubicMeters(cm3)); }

        CubicCentimeter quartsToCubicCentimeters(Quart qt) { return cubicMetersToCubicCentimeters(quartsToCubicMeters(qt)); }

        Liter cubicMillimetersToLiters(CubicMillimeter mm3) { return cubicMetersToLiters(cubicMillimetersToCubicMeters(mm3)); }

        CubicMillimeter litersToCubicMillimeters(Liter l) { return cubicMetersToCubicMillimeters(litersToCubicMeters(l)); }

        Milliliter cubicMillimetersToMilliliters(CubicMillimeter mm3) { return cubicMetersToMilliliters(cubicMillimetersToCubicMeters(mm3)); }

        CubicMillimeter millilitersToCubicMillimeters(Milliliter ml) { return cubicMetersToCubicMillimeters(millilitersToCubicMeters(ml)); }

        CubicInch cubicMillimetersToCubicInches(CubicMillimeter mm3) { return cubicMetersToCubicInches(cubicMillimetersToCubicMeters(mm3)); }

        CubicMillimeter cubicInchesToCubicMillimeters(CubicInch in3) { return cubicMetersToCubicMillimeters(cubicInchesToCubicMeters(in3)); }

        CubicFoot cubicMillimetersToCubicFeet(CubicMillimeter mm3) { return cubicMetersToCubicFeet(cubicMillimetersToCubicMeters(mm3)); }

        CubicMillimeter cubicFeetToCubicMillimeters(CubicFoot ft3) { return cubicMetersToCubicMillimeters(cubicFeetToCubicMeters(ft3)); }

        Gallon cubicMillimetersToGallons(CubicMillimeter mm3) { return cubicMetersToGallons(cubicMillimetersToCubicMeters(mm3)); }

        CubicMillimeter gallonsToCubicMillimeters(Gallon gal) { return cubicMetersToCubicMillimeters(gallonsToCubicMeters(gal)); }

        Quart cubicMillimetersToQuarts(CubicMillimeter mm3) { return cubicMetersToQuarts(cubicMillimetersToCubicMeters(mm3)); }

        CubicMillimeter quartsToCubicMillimeters(Quart qt) { return cubicMetersToCubicMillimeters(quartsToCubicMeters(qt)); }

        Milliliter litersToMilliliters(Liter l) { return cubicMetersToMilliliters(litersToCubicMeters(l)); }

        Liter millilitersToLiters(Milliliter ml) { return cubicMetersToLiters(millilitersToCubicMeters(ml)); }

        CubicInch litersToCubicInches(Liter l) { return cubicMetersToCubicInches(litersToCubicMeters(l)); }

        Liter cubicInchesToLiters(CubicInch in3) { return cubicMetersToLiters(cubicInchesToCubicMeters(in3)); }

        CubicFoot litersToCubicFeet(Liter l) { return cubicMetersToCubicFeet(litersToCubicMeters(l)); }

        Liter cubicFeetToLiters(CubicFoot ft3) { return cubicMetersToLiters(cubicFeetToCubicMeters(ft3)); }

        Gallon litersToGallons(Liter l) { return cubicMetersToGallons(litersToCubicMeters(l)); }

        Liter gallonsToLiters(Gallon gal) { return cubicMetersToLiters(gallonsToCubicMeters(gal)); }

        Quart litersToQuarts(Liter l) { return cubicMetersToQuarts(litersToCubicMeters(l)); }

        Liter quartsToLiters(Quart qt) { return cubicMetersToLiters(quartsToCubicMeters(qt)); }

        CubicInch millilitersToCubicInches(Milliliter ml) { return cubicMetersToCubicInches(millilitersToCubicMeters(ml)); }

        Milliliter cubicInchesToMilliliters(CubicInch in3) { return cubicMetersToMilliliters(cubicInchesToCubicMeters(in3)); }

        CubicFoot millilitersToCubicFeet(Milliliter ml) { return cubicMetersToCubicFeet(millilitersToCubicMeters(ml)); }

        Milliliter cubicFeetToMilliliters(CubicFoot ft3) { return cubicMetersToMilliliters(cubicFeetToCubicMeters(ft3)); }

        Gallon millilitersToGallons(Milliliter ml) { return cubicMetersToGallons(millilitersToCubicMeters(ml)); }

        Milliliter gallonsToMilliliters(Gallon gal) { return cubicMetersToMilliliters(gallonsToCubicMeters(gal)); }

        Quart millilitersToQuarts(Milliliter ml) { return cubicMetersToQuarts(millilitersToCubicMeters(ml)); }

        Milliliter quartsToMilliliters(Quart qt) { return cubicMetersToMilliliters(quartsToCubicMeters(qt)); }

        CubicFoot cubicInchesToCubicFeet(CubicInch in3) { return cubicMetersToCubicFeet(cubicInchesToCubicMeters(in3)); }

        CubicInch cubicFeetToCubicInches(CubicFoot ft3) { return cubicMetersToCubicInches(cubicFeetToCubicMeters(ft3)); }

        Gallon cubicInchesToGallons(CubicInch in3) { return cubicMetersToGallons(cubicInchesToCubicMeters(in3)); }

        CubicInch gallonsToCubicInches(Gallon gal) { return cubicMetersToCubicInches(gallonsToCubicMeters(gal)); }

        Quart cubicInchesToQuarts(CubicInch in3) { return cubicMetersToQuarts(cubicInchesToCubicMeters(in3)); }

        CubicInch quartsToCubicInches(Quart qt) { return cubicMetersToCubicInches(quartsToCubicMeters(qt)); }

        Gallon cubicFeetToGallons(CubicFoot ft3) { return cubicMetersToGallons(cubicFeetToCubicMeters(ft3)); }

        CubicFoot gallonsToCubicFeet(Gallon gal) { return cubicMetersToCubicFeet(gallonsToCubicMeters(gal)); }

        Quart cubicFeetToQuarts(CubicFoot ft3) { return cubicMetersToQuarts(cubicFeetToCubicMeters(ft3)); }

        CubicFoot quartsToCubicFeet(Quart qt) { return cubicMetersToCubicFeet(quartsToCubicMeters(qt)); }

        Quart gallonsToQuarts(Gallon gal) { return cubicMetersToQuarts(gallonsToCubicMeters(gal)); }

        Gallon quartsToGallons(Quart qt) { return cubicMetersToGallons(quartsToCubicMeters(qt)); }
    }

    namespace Mass {
        using namespace E170Systems::Units::Mass;

        constexpr float grams_in_kilogram = 1000.0f;
        constexpr float kilograms_in_tonne = 1000.0f;
        constexpr float kilograms_in_metric_ton = 1000.0f;
        constexpr float pounds_in_kilogram = 2.20462f;
        constexpr float ounces_in_pound = 16.0f;
        constexpr float ounces_in_kilogram = pounds_in_kilogram * ounces_in_pound;

        Kilogram gramsToKilograms(Gram g) { return g / grams_in_kilogram; }

        Gram kilogramsToGrams(Kilogram kg) { return kg * grams_in_kilogram; }

        Kilogram tonnesToKilograms(Tonne t) { return t * kilograms_in_tonne; }

        Tonne kilogramsToTonnes(Kilogram kg) { return kg / kilograms_in_tonne; }

        Kilogram metricTonsToKilograms(MetricTon mt) { return mt * kilograms_in_metric_ton; }

        MetricTon kilogramsToMetricTons(Kilogram kg) { return kg / kilograms_in_metric_ton; }

        Kilogram poundsToKilograms(Pound lb) { return lb / pounds_in_kilogram; }

        Pound kilogramsToPounds(Kilogram kg) { return kg * pounds_in_kilogram; }

        Kilogram ouncesToKilograms(Ounce oz) { return oz / ounces_in_kilogram; }

        Ounce kilogramsToOunces(Kilogram kg) { return kg * ounces_in_kilogram; }

        Tonne gramsToTonnes(Gram g) { return kilogramsToTonnes(gramsToKilograms(g)); }

        Gram tonnesToGrams(Tonne t) { return kilogramsToGrams(tonnesToKilograms(t)); }

        MetricTon gramsToMetricTons(Gram g) { return kilogramsToMetricTons(gramsToKilograms(g)); }

        Gram metricTonsToGrams(MetricTon mt) { return kilogramsToGrams(metricTonsToKilograms(mt)); }

        Pound gramsToPounds(Gram g) { return kilogramsToPounds(gramsToKilograms(g)); }

        Gram poundsToGrams(Pound lb) { return kilogramsToGrams(poundsToKilograms(lb)); }

        Ounce gramsToOunces(Gram g) { return kilogramsToOunces(gramsToKilograms(g)); }

        Gram ouncesToGrams(Ounce oz) { return kilogramsToGrams(ouncesToKilograms(oz)); }

        MetricTon tonnesToMetricTons(Tonne t) { return kilogramsToMetricTons(tonnesToKilograms(t)); }

        Tonne metricTonsToTonnes(MetricTon mt) { return kilogramsToTonnes(metricTonsToKilograms(mt)); }

        Pound tonnesToPounds(Tonne t) { return kilogramsToPounds(tonnesToKilograms(t)); }

        Tonne poundsToTonnes(Pound lb) { return kilogramsToTonnes(poundsToKilograms(lb)); }

        Ounce tonnesToOunces(Tonne t) { return kilogramsToOunces(tonnesToKilograms(t)); }

        Tonne ouncesToTonnes(Ounce oz) { return kilogramsToTonnes(ouncesToKilograms(oz)); }

        Pound metricTonsToPounds(MetricTon mt) { return kilogramsToPounds(metricTonsToKilograms(mt)); }

        MetricTon poundsToMetricTons(Pound lb) { return kilogramsToMetricTons(poundsToKilograms(lb)); }

        Ounce metricTonsToOunces(MetricTon mt) { return kilogramsToOunces(metricTonsToKilograms(mt)); }

        MetricTon ouncesToMetricTons(Ounce oz) { return kilogramsToMetricTons(ouncesToKilograms(oz)); }

        Ounce poundsToOunces(Pound lb) { return lb * ounces_in_pound; }

        Pound ouncesToPounds(Ounce oz) { return oz / ounces_in_pound; }
    }

    namespace Time {
        using namespace E170Systems::Units::Time;

        constexpr float milliseconds_in_second = 0.001f;
        constexpr float seconds_in_minute = 60.0f;
        constexpr float milliseconds_in_minute = seconds_in_minute * 1000.0f;

        Second millisecondsToSeconds(Millisecond ms) { return ms * milliseconds_in_second; }

        Millisecond secondsToMilliseconds(Second s) { return s / milliseconds_in_second; }

        Second minutesToSeconds(Minute min) { return min * seconds_in_minute; }

        Minute secondsToMinutes(Second s) { return s / seconds_in_minute; }

        Minute millisecondsToMinutes(Millisecond ms) { return secondsToMinutes(millisecondsToSeconds(ms)); }

        Millisecond minutesToMilliseconds(Minute min) { return secondsToMilliseconds(millisecondsToSeconds(min)); }

    }
}
