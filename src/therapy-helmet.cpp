// Knife motor control
//
// Firmware for atmega328p based dc motor controller with adjustable speed for
// a kinetic sculpture to be presented in the Slovenian Pavilion of Venice
// Biennale 2015.
//
// This is a simple controller based on adjusting motor pwm drive based on
// measured counter emf.
//
// Author: Otto Urpelainen
// Email: oturpe@iki.fi

#include "config.h"

#include <avr/io.h>
#include <util/delay.h>

#include "Attiny26Utils.h"

#ifdef DEBUG
#include "Debug.h"
#endif

/// Initializes pin D6 as phase correct pwm.
///
/// Initialization does not include enabling pwm. That can is done using
/// enablePwm(unit8_t) function. This function leaves the pwm pin value low,
/// so if pwm is disabled with disablePwm() function, pin goes low.
void initializePwm() {
  /* TODO: enable for attiny26
  // Set PD6 as output
  DDRD |= BV(DDD6);

  // Non-inverting mode
  TCCR0A |= BV(COM0A1);
  // Phase correct pwm mode
  TCCR0A |= BV(WGM00);

  Atmega328p::setTimer0Prescaler(PWM_PRESCALER);
  */
}

/// Enables pwm output retaining the duty cycle that was in effect when it was
/// last disabled.
void enablePwm() {
  /* TODO: Enable for attiny26
  TCCR0A |= BV(COM0A1);
  */
}

/// Enables pwm output using given duty cycle.
///
/// \param value
///    Requested duty cycle value
void enablePwm(uint8_t value) {
  /* TODO: Enable for attiny26
  OCR0A = value;
  enablePwm();
  */
}

/// Disables pwm output. It can be enabled again with either enablePwm() or
/// enablePwm(uint8_t) function.
void disablePwm() {
  /* TODO: Enable for attiny26
  TCCR0A &= ~BV(COM0A1);
  */
}

/// Initializes analog to digital conversion by setting the reference and
/// prescaler.
void initializeAdc() {
  /* TODO: enable for attiny26
  Atmega328p::setVoltageReference(Atmega328p::VREF_VCC);
  Atmega328p::setAdcPrescalerValue(ADC_PRESCALER);

  // Enable adc
  ADCSRA |= BV(ADEN);

// Disable digital inout from pins that are used for adc.
  DIDR0 |= BV(ADC0D) | BV(ADC1D) | BV(ADC2D) | BV(ADC3D);
  */
}

/// Limits given value by given minimum and maximum values.
///
/// \param value
///    Value to limit
///
/// \param min
///    Minimum value
///
/// \param max
///    Maximum value
///
/// \return
///    Limited value
int16_t limit(int16_t value, int16_t min, int16_t max) {
  if(value < min)
    return min;
  if(value > max)
    return max;

  return value;
}

int main() {
  // Wait for powr supply capacitors to charge etc.
  _delay_ms(1000);

  initializePwm();
  initializeAdc();

  #ifdef DEBUG
    /* TODO: implement debugging
    Debug debug(DEBUG_FREQ);
    */
  #endif

  DDRB |= BV(DDB0);
  while(true) {
    _delay_ms(1000);
    PORTB |= BV(PORTB0);
    _delay_ms(1000);
    PORTB &= ~BV(PORTB0);
    }
}