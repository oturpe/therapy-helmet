// Helpers for working with Attiny26.

// Cleaner setting of bits
#define BV(x) (1<<x)

namespace Attiny26 {

/// Possible prescaler values for timer 0.
enum Timer0PrescalerValue {
  T0_PSV_1,
  T0_PSV_8,
  T0_PSV_64,
  T0_PSV_256,
  T0_PSV_1024
};

/// Possible prescaler values for timer 1.
enum Timer1PrescalerValue {
  T1_PSV_1,
  T1_PSV_2,
  T1_PSV_4,
  T1_PSV_8,
  T1_PSV_16,
  T1_PSV_32,
  T1_PSV_64,
  T1_PSV_128,
  T1_PSV_256,
  T1_PSV_512,
  T1_PSV_1024,
  T1_PSV_2048,
  T1_PSV_4096,
  T1_PSV_8192,
  T1_PSV_16384
};

/// Sets timer 0 prescaler to requested value.
///
/// This function assumes that Clock Select bits have not been touched yet.
///
/// \param value
///   Requested prescaler value
void setTimer0Prescaler(Timer0PrescalerValue value);

/// Sets timer 1 prescaler to requested value.
///
/// This function assumes that Clock Select bits have not been touched yet.
///
/// \param value
///   Requested prescaler value
void setTimer1Prescaler(Timer1PrescalerValue value);

// Possible voltage references
enum VoltageReference {
  // Aref pin
  VREF_AREF,
  // Vcc with external capacitor
  VREF_VCC,
  // Internal 1.1 V with external capacitor
  VREF_INTERNAL_1_1V
};


// Sets analog voltage reference to requested type.
//
// This function assumes that Reference Selection bits have not been touched
// yet.
//
// \param reference
//    Requested voltage reference
void setVoltageReference(VoltageReference reference);

// Possible analog-to-digital converter prescaler values
enum AdcPrescalerValue {
  ADC_PSV_2,
  ADC_PSV_4,
  ADC_PSV_8,
  ADC_PSV_16,
  ADC_PSV_32,
  ADC_PSV_64,
  ADC_PSV_128
};

// Sets analog-to-digital converter prescaler value.
//
// This function assumes that ADV Prescaler Selection bits have not been touched
// yet.
//
// \param value
//    Requested prescaler value
void setAdcPrescalerValue(AdcPrescalerValue value);

} // namespace