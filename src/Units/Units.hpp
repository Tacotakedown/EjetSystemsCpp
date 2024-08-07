
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
} // namespace Length

namespace Area {
typedef float SquareMeter;
typedef float SquareKilometer;
typedef float SquareCentimeter;
typedef float SquareMillimeter;
typedef float SquareInch;
typedef float SquareFoot;
} // namespace Area

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
} // namespace Volume

namespace Mass {
typedef float Kilogram;
typedef float Gram;
typedef float Tonne;
typedef float MetricTon;
typedef float Pound;
typedef float Ounce;
} // namespace Mass

namespace Time {
typedef float Millisecond;
typedef float Second;
typedef float Minute;
} // namespace Time

namespace Temperature {
typedef float Kelvin;
typedef float Celsius;
typedef float Fahrenheit;
} // namespace Temperature

namespace Force {
typedef float Newton;
typedef float Kilonewton;
typedef float PoundForce;
} // namespace Force

namespace Pressure {
typedef float Pascal;
typedef float Kilopascal;
typedef float Bar;
typedef float Atmosphere;
typedef float PSI;
} // namespace Pressure

namespace Energy {
typedef float Joule;
typedef float Kilojoule;
typedef float Calorie;
typedef float Kilocalorie;
typedef float WattHour;
typedef float KilowattHour;
typedef float ElectronVolt;
} // namespace Energy

namespace Power {
typedef float Watt;
typedef float Kilowatt;
typedef float Megawatt;
typedef float Horsepower;
} // namespace Power

namespace ElectricCurrent {
typedef float Ampere;
typedef float Milliampere;
} // namespace ElectricCurrent

namespace ElectricStorage {
typedef float MilliampHours;
}

namespace Voltage {
typedef float Volt;
typedef float Millivolt;
typedef float Microvolt;
} // namespace Voltage

namespace Resistance {
typedef float Ohm;
typedef float Kiloohm;
typedef float Megaohm;
} // namespace Resistance

namespace Capacitance {
typedef float Farad;
typedef float Microfarad;
typedef float Nanofarad;
typedef float Picofarad;
} // namespace Capacitance

namespace Inductance {
typedef float Henry;
typedef float Millihenry;
typedef float Microhenry;
} // namespace Inductance

namespace MagneticFlux {
typedef float Weber;
typedef float Maxwell;
} // namespace MagneticFlux

namespace MagneticFieldStrength {
typedef float Tesla;
typedef float Gauss;
} // namespace MagneticFieldStrength

namespace Frequency {
typedef float Hertz;
typedef float Kilohertz;
typedef float Megahertz;
typedef float Gigahertz;
} // namespace Frequency

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
} // namespace Radioactivity

namespace AbsorbedDose {
typedef float Gray;
typedef float Rad;
} // namespace AbsorbedDose

namespace EquivalentDose {
typedef float Sievert;
typedef float Rem;
} // namespace EquivalentDose

namespace CatalyticActivity {
typedef float Katal;
}

namespace Angle {
typedef float Radian;
typedef float Degree;
typedef float Gradian;
} // namespace Angle

namespace FlowRate {
typedef float LiterPerMinute;
}

namespace Viscosity {
typedef float NewtonSecondPerSquareMeter;
}
} // namespace E170Systems::Units

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

inline Kilometer metersToKilometers(const Meter m) {
  return m / meters_in_kilometer;
}

inline Meter kilometersToMeters(const Kilometer km) {
  return km * meters_in_kilometer;
}

inline Centimeter metersToCentimeters(const Meter m) {
  return m / meters_in_centimeter;
}

inline Meter centimetersToMeters(const Centimeter cm) {
  return cm * meters_in_centimeter;
}

inline Millimeter metersToMillimeters(const Meter m) {
  return m / meters_in_millimeter;
}

inline Meter millimetersToMeters(const Millimeter mm) {
  return mm * meters_in_millimeter;
}

inline Micrometer metersToMicrometers(const Meter m) {
  return m / meters_in_micrometer;
}

inline Meter micrometersToMeters(const Micrometer um) {
  return um * meters_in_micrometer;
}

inline Nanometer metersToNanometers(const Meter m) {
  return m / meters_in_nanometer;
}

inline Meter nanometersToMeters(const Nanometer nm) {
  return nm * meters_in_nanometer;
}

inline Micron metersToMicrons(const Meter m) { return m / meters_in_micron; }

inline Meter micronsToMeters(const Micron um) { return um * meters_in_micron; }

inline Inch metersToInches(const Meter m) { return m / meters_in_inch; }

inline Meter inchesToMeters(const Inch in) { return in * meters_in_inch; }

inline Foot metersToFeet(const Meter m) { return m / meters_in_foot; }

inline Meter feetToMeters(const Foot ft) { return ft * meters_in_foot; }

inline Mile metersToMiles(const Meter m) { return m / meters_in_mile; }

inline Meter milesToMeters(const Mile mi) { return mi * meters_in_mile; }

inline Yard metersToYards(const Meter m) { return m / meters_in_yard; }

inline Meter yardsToMeters(const Yard yd) { return yd * meters_in_yard; }

inline NauticalMile metersToNauticalMiles(const Meter m) {
  return m / meters_in_nautical_mile;
}

inline Meter nauticalMilesToMeters(const NauticalMile nm) {
  return nm * meters_in_nautical_mile;
}

inline AstronomicalUnit metersToAstronomicalUnits(const Meter m) {
  return m / meters_in_astronomical_unit;
}

inline Meter astronomicalUnitsToMeters(const AstronomicalUnit au) {
  return au * meters_in_astronomical_unit;
}

inline LightYear metersToLightYears(const Meter m) {
  return m / meters_in_light_year;
}

inline Meter lightYearsToMeters(const LightYear ly) {
  return ly * meters_in_light_year;
}

inline Parsec metersToParsecs(const Meter m) { return m / meters_in_parsec; }

inline Meter parsecsToMeters(const Parsec pc) { return pc * meters_in_parsec; }
} // namespace Length

namespace Area {
using namespace E170Systems::Units::Area;
constexpr float square_meters_in_square_kilometer = 1e6f;
constexpr float square_meters_in_square_centimeter = 1e-4f;
constexpr float square_meters_in_square_millimeter = 1e-6f;
constexpr float square_meters_in_square_inch = 0.00064516f;
constexpr float square_meters_in_square_foot = 0.092903f;

inline SquareMeter squareKilometersToSquareMeters(const SquareKilometer km2) {
  return km2 * square_meters_in_square_kilometer;
}

inline SquareKilometer squareMetersToSquareKilometers(const SquareMeter m2) {
  return m2 / square_meters_in_square_kilometer;
}

inline SquareMeter squareCentimetersToSquareMeters(const SquareCentimeter cm2) {
  return cm2 * square_meters_in_square_centimeter;
}

inline SquareCentimeter squareMetersToSquareCentimeters(const SquareMeter m2) {
  return m2 / square_meters_in_square_centimeter;
}

inline SquareMeter squareMillimetersToSquareMeters(const SquareMillimeter mm2) {
  return mm2 * square_meters_in_square_millimeter;
}

inline SquareMillimeter squareMetersToSquareMillimeters(const SquareMeter m2) {
  return m2 / square_meters_in_square_millimeter;
}

inline SquareMeter squareInchesToSquareMeters(const SquareInch in2) {
  return in2 * square_meters_in_square_inch;
}

inline SquareInch squareMetersToSquareInches(const SquareMeter m2) {
  return m2 / square_meters_in_square_inch;
}

inline SquareMeter squareFeetToSquareMeters(const SquareFoot ft2) {
  return ft2 * square_meters_in_square_foot;
}

inline SquareFoot squareMetersToSquareFeet(const SquareMeter m2) {
  return m2 / square_meters_in_square_foot;
}

inline SquareCentimeter
squareKilometersToSquareCentimeters(const SquareKilometer km2) {
  return squareMetersToSquareCentimeters(squareKilometersToSquareMeters(km2));
}

inline SquareKilometer
squareCentimetersToSquareKilometers(const SquareCentimeter cm2) {
  return squareMetersToSquareKilometers(squareCentimetersToSquareMeters(cm2));
}

inline SquareMillimeter
squareKilometersToSquareMillimeters(const SquareKilometer km2) {
  return squareMetersToSquareMillimeters(squareKilometersToSquareMeters(km2));
}

inline SquareKilometer
squareMillimetersToSquareKilometers(const SquareMillimeter mm2) {
  return squareMetersToSquareKilometers(squareMillimetersToSquareMeters(mm2));
}

inline SquareInch squareKilometersToSquareInches(const SquareKilometer km2) {
  return squareMetersToSquareInches(squareKilometersToSquareMeters(km2));
}

inline SquareKilometer squareInchesToSquareKilometers(const SquareInch in2) {
  return squareMetersToSquareKilometers(squareInchesToSquareMeters(in2));
}

inline SquareFoot squareKilometersToSquareFeet(const SquareKilometer km2) {
  return squareMetersToSquareFeet(squareKilometersToSquareMeters(km2));
}

inline SquareKilometer squareFeetToSquareKilometers(const SquareFoot ft2) {
  return squareMetersToSquareKilometers(squareFeetToSquareMeters(ft2));
}

inline SquareMillimeter
squareCentimetersToSquareMillimeters(const SquareCentimeter cm2) {
  return squareMetersToSquareMillimeters(squareCentimetersToSquareMeters(cm2));
}

inline SquareCentimeter
squareMillimetersToSquareCentimeters(const SquareMillimeter mm2) {
  return squareMetersToSquareCentimeters(squareMillimetersToSquareMeters(mm2));
}

inline SquareInch squareCentimetersToSquareInches(const SquareCentimeter cm2) {
  return squareMetersToSquareInches(squareCentimetersToSquareMeters(cm2));
}

inline SquareCentimeter squareInchesToSquareCentimeters(const SquareInch in2) {
  return squareMetersToSquareCentimeters(squareInchesToSquareMeters(in2));
}

inline SquareFoot squareCentimetersToSquareFeet(const SquareCentimeter cm2) {
  return squareMetersToSquareFeet(squareCentimetersToSquareMeters(cm2));
}

inline SquareCentimeter squareFeetToSquareCentimeters(const SquareFoot ft2) {
  return squareMetersToSquareCentimeters(squareFeetToSquareMeters(ft2));
}

inline SquareInch squareMillimetersToSquareInches(const SquareMillimeter mm2) {
  return squareMetersToSquareInches(squareMillimetersToSquareMeters(mm2));
}

inline SquareMillimeter squareInchesToSquareMillimeters(const SquareInch in2) {
  return squareMetersToSquareMillimeters(squareInchesToSquareMeters(in2));
}

inline SquareFoot squareMillimetersToSquareFeet(const SquareMillimeter mm2) {
  return squareMetersToSquareFeet(squareMillimetersToSquareMeters(mm2));
}

inline SquareMillimeter squareFeetToSquareMillimeters(const SquareFoot ft2) {
  return squareMetersToSquareMillimeters(squareFeetToSquareMeters(ft2));
}

inline SquareFoot squareInchesToSquareFeet(const SquareInch in2) {
  return squareMetersToSquareFeet(squareInchesToSquareMeters(in2));
}

inline SquareInch squareFeetToSquareInches(const SquareFoot ft2) {
  return squareMetersToSquareInches(squareFeetToSquareMeters(ft2));
}
} // namespace Area

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

inline CubicMeter cubicCentimetersToCubicMeters(const CubicCentimeter cm3) {
  return cm3 * cubic_meters_in_cubic_centimeter;
}

inline CubicCentimeter cubicMetersToCubicCentimeters(const CubicMeter m3) {
  return m3 / cubic_meters_in_cubic_centimeter;
}

inline CubicMeter cubicMillimetersToCubicMeters(const CubicMillimeter mm3) {
  return mm3 * cubic_meters_in_cubic_millimeter;
}

inline CubicMillimeter cubicMetersToCubicMillimeters(const CubicMeter m3) {
  return m3 / cubic_meters_in_cubic_millimeter;
}

inline CubicMeter litersToCubicMeters(const Liter l) {
  return l * cubic_meters_in_liter;
}

inline Liter cubicMetersToLiters(const CubicMeter m3) {
  return m3 / cubic_meters_in_liter;
}

inline CubicMeter millilitersToCubicMeters(const Milliliter ml) {
  return ml * cubic_meters_in_milliliter;
}

inline Milliliter cubicMetersToMilliliters(const CubicMeter m3) {
  return m3 / cubic_meters_in_milliliter;
}

inline CubicMeter cubicInchesToCubicMeters(const CubicInch in3) {
  return in3 * cubic_meters_in_cubic_inch;
}

inline CubicInch cubicMetersToCubicInches(const CubicMeter m3) {
  return m3 / cubic_meters_in_cubic_inch;
}

inline CubicMeter cubicFeetToCubicMeters(const CubicFoot ft3) {
  return ft3 * cubic_meters_in_cubic_foot;
}

inline CubicFoot cubicMetersToCubicFeet(const CubicMeter m3) {
  return m3 / cubic_meters_in_cubic_foot;
}

inline CubicMeter gallonsToCubicMeters(const Gallon gal) {
  return gal * cubic_meters_in_gallon;
}

inline Gallon cubicMetersToGallons(const CubicMeter m3) {
  return m3 / cubic_meters_in_gallon;
}

inline CubicMeter quartsToCubicMeters(const Quart qt) {
  return qt * cubic_meters_in_quart;
}

inline Quart cubicMetersToQuarts(const CubicMeter m3) {
  return m3 / cubic_meters_in_quart;
}

inline CubicMillimeter
cubicCentimetersToCubicMillimeters(const CubicCentimeter cm3) {
  return cubicMetersToCubicMillimeters(cubicCentimetersToCubicMeters(cm3));
}

inline CubicCentimeter
cubicMillimetersToCubicCentimeters(const CubicMillimeter mm3) {
  return cubicMetersToCubicCentimeters(cubicMillimetersToCubicMeters(mm3));
}

inline Liter cubicCentimetersToLiters(const CubicCentimeter cm3) {
  return cubicMetersToLiters(cubicCentimetersToCubicMeters(cm3));
}

inline CubicCentimeter litersToCubicCentimeters(const Liter l) {
  return cubicMetersToCubicCentimeters(litersToCubicMeters(l));
}

inline Milliliter cubicCentimetersToMilliliters(const CubicCentimeter cm3) {
  return cubicMetersToMilliliters(cubicCentimetersToCubicMeters(cm3));
}

inline CubicCentimeter millilitersToCubicCentimeters(const Milliliter ml) {
  return cubicMetersToCubicCentimeters(millilitersToCubicMeters(ml));
}

inline CubicInch cubicCentimetersToCubicInches(const CubicCentimeter cm3) {
  return cubicMetersToCubicInches(cubicCentimetersToCubicMeters(cm3));
}

inline CubicCentimeter cubicInchesToCubicCentimeters(const CubicInch in3) {
  return cubicMetersToCubicCentimeters(cubicInchesToCubicMeters(in3));
}

inline CubicFoot cubicCentimetersToCubicFeet(const CubicCentimeter cm3) {
  return cubicMetersToCubicFeet(cubicCentimetersToCubicMeters(cm3));
}

inline CubicCentimeter cubicFeetToCubicCentimeters(const CubicFoot ft3) {
  return cubicMetersToCubicCentimeters(cubicFeetToCubicMeters(ft3));
}

inline Gallon cubicCentimetersToGallons(const CubicCentimeter cm3) {
  return cubicMetersToGallons(cubicCentimetersToCubicMeters(cm3));
}

inline CubicCentimeter gallonsToCubicCentimeters(const Gallon gal) {
  return cubicMetersToCubicCentimeters(gallonsToCubicMeters(gal));
}

inline Quart cubicCentimetersToQuarts(const CubicCentimeter cm3) {
  return cubicMetersToQuarts(cubicCentimetersToCubicMeters(cm3));
}

inline CubicCentimeter quartsToCubicCentimeters(const Quart qt) {
  return cubicMetersToCubicCentimeters(quartsToCubicMeters(qt));
}

inline Liter cubicMillimetersToLiters(const CubicMillimeter mm3) {
  return cubicMetersToLiters(cubicMillimetersToCubicMeters(mm3));
}

inline CubicMillimeter litersToCubicMillimeters(const Liter l) {
  return cubicMetersToCubicMillimeters(litersToCubicMeters(l));
}

inline Milliliter cubicMillimetersToMilliliters(const CubicMillimeter mm3) {
  return cubicMetersToMilliliters(cubicMillimetersToCubicMeters(mm3));
}

inline CubicMillimeter millilitersToCubicMillimeters(const Milliliter ml) {
  return cubicMetersToCubicMillimeters(millilitersToCubicMeters(ml));
}

inline CubicInch cubicMillimetersToCubicInches(const CubicMillimeter mm3) {
  return cubicMetersToCubicInches(cubicMillimetersToCubicMeters(mm3));
}

inline CubicMillimeter cubicInchesToCubicMillimeters(const CubicInch in3) {
  return cubicMetersToCubicMillimeters(cubicInchesToCubicMeters(in3));
}

inline CubicFoot cubicMillimetersToCubicFeet(const CubicMillimeter mm3) {
  return cubicMetersToCubicFeet(cubicMillimetersToCubicMeters(mm3));
}

inline CubicMillimeter cubicFeetToCubicMillimeters(const CubicFoot ft3) {
  return cubicMetersToCubicMillimeters(cubicFeetToCubicMeters(ft3));
}

inline Gallon cubicMillimetersToGallons(const CubicMillimeter mm3) {
  return cubicMetersToGallons(cubicMillimetersToCubicMeters(mm3));
}

inline CubicMillimeter gallonsToCubicMillimeters(const Gallon gal) {
  return cubicMetersToCubicMillimeters(gallonsToCubicMeters(gal));
}

inline Quart cubicMillimetersToQuarts(const CubicMillimeter mm3) {
  return cubicMetersToQuarts(cubicMillimetersToCubicMeters(mm3));
}

inline CubicMillimeter quartsToCubicMillimeters(const Quart qt) {
  return cubicMetersToCubicMillimeters(quartsToCubicMeters(qt));
}

inline Milliliter litersToMilliliters(const Liter l) {
  return cubicMetersToMilliliters(litersToCubicMeters(l));
}

inline Liter millilitersToLiters(const Milliliter ml) {
  return cubicMetersToLiters(millilitersToCubicMeters(ml));
}

inline CubicInch litersToCubicInches(const Liter l) {
  return cubicMetersToCubicInches(litersToCubicMeters(l));
}

inline Liter cubicInchesToLiters(const CubicInch in3) {
  return cubicMetersToLiters(cubicInchesToCubicMeters(in3));
}

inline CubicFoot litersToCubicFeet(const Liter l) {
  return cubicMetersToCubicFeet(litersToCubicMeters(l));
}

inline Liter cubicFeetToLiters(const CubicFoot ft3) {
  return cubicMetersToLiters(cubicFeetToCubicMeters(ft3));
}

inline Gallon litersToGallons(const Liter l) {
  return cubicMetersToGallons(litersToCubicMeters(l));
}

inline Liter gallonsToLiters(const Gallon gal) {
  return cubicMetersToLiters(gallonsToCubicMeters(gal));
}

inline Quart litersToQuarts(const Liter l) {
  return cubicMetersToQuarts(litersToCubicMeters(l));
}

inline Liter quartsToLiters(const Quart qt) {
  return cubicMetersToLiters(quartsToCubicMeters(qt));
}

inline CubicInch millilitersToCubicInches(const Milliliter ml) {
  return cubicMetersToCubicInches(millilitersToCubicMeters(ml));
}

inline Milliliter cubicInchesToMilliliters(const CubicInch in3) {
  return cubicMetersToMilliliters(cubicInchesToCubicMeters(in3));
}

inline CubicFoot millilitersToCubicFeet(const Milliliter ml) {
  return cubicMetersToCubicFeet(millilitersToCubicMeters(ml));
}

inline Milliliter cubicFeetToMilliliters(const CubicFoot ft3) {
  return cubicMetersToMilliliters(cubicFeetToCubicMeters(ft3));
}

inline Gallon millilitersToGallons(const Milliliter ml) {
  return cubicMetersToGallons(millilitersToCubicMeters(ml));
}

inline Milliliter gallonsToMilliliters(const Gallon gal) {
  return cubicMetersToMilliliters(gallonsToCubicMeters(gal));
}

inline Quart millilitersToQuarts(const Milliliter ml) {
  return cubicMetersToQuarts(millilitersToCubicMeters(ml));
}

inline Milliliter quartsToMilliliters(const Quart qt) {
  return cubicMetersToMilliliters(quartsToCubicMeters(qt));
}

inline CubicFoot cubicInchesToCubicFeet(const CubicInch in3) {
  return cubicMetersToCubicFeet(cubicInchesToCubicMeters(in3));
}

inline CubicInch cubicFeetToCubicInches(const CubicFoot ft3) {
  return cubicMetersToCubicInches(cubicFeetToCubicMeters(ft3));
}

inline Gallon cubicInchesToGallons(const CubicInch in3) {
  return cubicMetersToGallons(cubicInchesToCubicMeters(in3));
}

inline CubicInch gallonsToCubicInches(const Gallon gal) {
  return cubicMetersToCubicInches(gallonsToCubicMeters(gal));
}

inline Quart cubicInchesToQuarts(const CubicInch in3) {
  return cubicMetersToQuarts(cubicInchesToCubicMeters(in3));
}

inline CubicInch quartsToCubicInches(const Quart qt) {
  return cubicMetersToCubicInches(quartsToCubicMeters(qt));
}

inline Gallon cubicFeetToGallons(const CubicFoot ft3) {
  return cubicMetersToGallons(cubicFeetToCubicMeters(ft3));
}

inline CubicFoot gallonsToCubicFeet(const Gallon gal) {
  return cubicMetersToCubicFeet(gallonsToCubicMeters(gal));
}

inline Quart cubicFeetToQuarts(const CubicFoot ft3) {
  return cubicMetersToQuarts(cubicFeetToCubicMeters(ft3));
}

inline CubicFoot quartsToCubicFeet(const Quart qt) {
  return cubicMetersToCubicFeet(quartsToCubicMeters(qt));
}

inline Quart gallonsToQuarts(const Gallon gal) {
  return cubicMetersToQuarts(gallonsToCubicMeters(gal));
}

inline Gallon quartsToGallons(const Quart qt) {
  return cubicMetersToGallons(quartsToCubicMeters(qt));
}
} // namespace Volume

namespace Mass {
using namespace E170Systems::Units::Mass;

constexpr float grams_in_kilogram = 1000.0f;
constexpr float kilograms_in_tonne = 1000.0f;
constexpr float kilograms_in_metric_ton = 1000.0f;
constexpr float pounds_in_kilogram = 2.20462f;
constexpr float ounces_in_pound = 16.0f;
constexpr float ounces_in_kilogram = pounds_in_kilogram * ounces_in_pound;

inline Kilogram gramsToKilograms(const Gram g) { return g / grams_in_kilogram; }

inline Gram kilogramsToGrams(const Kilogram kg) {
  return kg * grams_in_kilogram;
}

inline Kilogram tonnesToKilograms(const Tonne t) {
  return t * kilograms_in_tonne;
}

inline Tonne kilogramsToTonnes(const Kilogram kg) {
  return kg / kilograms_in_tonne;
}

inline Kilogram metricTonsToKilograms(const MetricTon mt) {
  return mt * kilograms_in_metric_ton;
}

inline MetricTon kilogramsToMetricTons(const Kilogram kg) {
  return kg / kilograms_in_metric_ton;
}

inline Kilogram poundsToKilograms(const Pound lb) {
  return lb / pounds_in_kilogram;
}

inline Pound kilogramsToPounds(const Kilogram kg) {
  return kg * pounds_in_kilogram;
}

inline Kilogram ouncesToKilograms(const Ounce oz) {
  return oz / ounces_in_kilogram;
}

inline Ounce kilogramsToOunces(const Kilogram kg) {
  return kg * ounces_in_kilogram;
}

inline Tonne gramsToTonnes(const Gram g) {
  return kilogramsToTonnes(gramsToKilograms(g));
}

inline Gram tonnesToGrams(const Tonne t) {
  return kilogramsToGrams(tonnesToKilograms(t));
}

inline MetricTon gramsToMetricTons(const Gram g) {
  return kilogramsToMetricTons(gramsToKilograms(g));
}

inline Gram metricTonsToGrams(const MetricTon mt) {
  return kilogramsToGrams(metricTonsToKilograms(mt));
}

inline Pound gramsToPounds(const Gram g) {
  return kilogramsToPounds(gramsToKilograms(g));
}

inline Gram poundsToGrams(const Pound lb) {
  return kilogramsToGrams(poundsToKilograms(lb));
}

inline Ounce gramsToOunces(const Gram g) {
  return kilogramsToOunces(gramsToKilograms(g));
}

inline Gram ouncesToGrams(const Ounce oz) {
  return kilogramsToGrams(ouncesToKilograms(oz));
}

inline MetricTon tonnesToMetricTons(const Tonne t) {
  return kilogramsToMetricTons(tonnesToKilograms(t));
}

inline Tonne metricTonsToTonnes(const MetricTon mt) {
  return kilogramsToTonnes(metricTonsToKilograms(mt));
}

inline Pound tonnesToPounds(const Tonne t) {
  return kilogramsToPounds(tonnesToKilograms(t));
}

inline Tonne poundsToTonnes(const Pound lb) {
  return kilogramsToTonnes(poundsToKilograms(lb));
}

inline Ounce tonnesToOunces(const Tonne t) {
  return kilogramsToOunces(tonnesToKilograms(t));
}

inline Tonne ouncesToTonnes(const Ounce oz) {
  return kilogramsToTonnes(ouncesToKilograms(oz));
}

inline Pound metricTonsToPounds(const MetricTon mt) {
  return kilogramsToPounds(metricTonsToKilograms(mt));
}

inline MetricTon poundsToMetricTons(const Pound lb) {
  return kilogramsToMetricTons(poundsToKilograms(lb));
}

inline Ounce metricTonsToOunces(const MetricTon mt) {
  return kilogramsToOunces(metricTonsToKilograms(mt));
}

inline MetricTon ouncesToMetricTons(const Ounce oz) {
  return kilogramsToMetricTons(ouncesToKilograms(oz));
}

inline Ounce poundsToOunces(const Pound lb) { return lb * ounces_in_pound; }

inline Pound ouncesToPounds(const Ounce oz) { return oz / ounces_in_pound; }
} // namespace Mass

namespace Time {
using namespace E170Systems::Units::Time;

constexpr float milliseconds_in_second = 0.001f;
constexpr float seconds_in_minute = 60.0f;
constexpr float milliseconds_in_minute = seconds_in_minute * 1000.0f;

inline Second millisecondsToSeconds(const Millisecond ms) {
  return ms * milliseconds_in_second;
}

inline Millisecond secondsToMilliseconds(const Second s) {
  return s / milliseconds_in_second;
}

inline Second minutesToSeconds(const Minute min) {
  return min * seconds_in_minute;
}

inline Minute secondsToMinutes(const Second s) { return s / seconds_in_minute; }

inline Minute millisecondsToMinutes(const Millisecond ms) {
  return secondsToMinutes(millisecondsToSeconds(ms));
}

inline Millisecond minutesToMilliseconds(const Minute min) {
  return secondsToMilliseconds(millisecondsToSeconds(min));
}
} // namespace Time
} // namespace E170Systems::UnitConversions
