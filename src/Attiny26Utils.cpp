#include "Attiny26Utils.h"

#include <avr/io.h>

namespace Attiny26 {

void setTimer0Prescaler(Timer0PrescalerValue value) {
  switch (value) {
  case T0_PSV_1:
    TCCR0 |= BV(CS00);
    break;
  case T0_PSV_8:
    TCCR0 |= BV(CS01);
    break;
  case T0_PSV_64:
    TCCR0 |= BV(CS01) | BV(CS00);
    break;
  case T0_PSV_256:
    TCCR0 |= BV(CS02);
    break;
  case T0_PSV_1024:
    TCCR0 |= BV(CS02) | BV(CS00);
    break;
  }
}

void setTimer1Prescaler(Timer1PrescalerValue value) {
  switch (value) {
  case T1_PSV_1:
    TCCR0 |= BV(CS10);
    break;
  case T1_PSV_2:
    TCCR0 |= BV(CS11);
    break;
  case T1_PSV_4:
    TCCR0 |= BV(CS11) | BV(CS10);
    break;
  case T1_PSV_8:
    TCCR0 |= BV(CS12);
    break;
  case T1_PSV_16:
    TCCR0 |= BV(CS12) | BV(CS10);
    break;
  case T1_PSV_32:
    TCCR1B |= BV(CS12) | BV(CS11);
    break;
  case T1_PSV_64:
    TCCR1B |= BV(CS12) | BV(CS11) | BV(CS10);
    break;
  case T1_PSV_128:
    TCCR1B |= BV(CS13);
    break;
  case T1_PSV_256:
    TCCR1B |= BV(CS13) | BV(CS10);
    break;
  case T1_PSV_512:
    TCCR1B |= BV(CS13) | BV(CS11);
    break;
  case T1_PSV_1024:
    TCCR1B |= BV(CS13) | BV(CS11) | BV(CS10);
    break;
  case T1_PSV_2048:
    TCCR1B |= BV(CS13) | BV(CS12);
    break;
  case T1_PSV_4096:
    TCCR1B |= BV(CS13) | BV(CS12) | BV(CS10);
    break;
  case T1_PSV_8192:
    TCCR1B|= BV(CS13) | BV(CS12) | BV(CS11);
    break;
  case T1_PSV_16384:
    TCCR1B |= BV(CS13) | BV(CS12) | BV(CS11) | BV(CS10);
    break;
  }
}

/* TODO: Create utils

void setVoltageReference(VoltageReference reference) {
  switch(reference) {
  case VREF_AREF:
    // The default, nothing to do
    break;
  case VREF_VCC:
    ADMUX |= BV(REFS0);
    break;
  case VREF_INTERNAL_1_1V:
    ADMUX |= BV(REFS1) | BV(REFS0);
    break;
  }
}

void setAdcPrescalerValue(AdcPrescalerValue value) {
  switch(value) {
  case ADC_T1_PSV_2:
    // The default, nothing to do
    break;
  case ADC_PSV_4:
    ADCSRA |= BV(ADPS1);
    break;
  case ADC_PSV_8:
    ADCSRA |= BV(ADPS1) | BV(ADPS0);
    break;
  case ADC_PSV_16:
    ADCSRA |= BV(ADPS2);
    break;
  case ADC_PSV_32:
    ADCSRA |= BV(ADPS2) | BV(ADPS0);
    break;
  case ADC_PSV_64:
    ADCSRA |= BV(ADPS2) | BV(ADPS1);
    break;
  case ADC_PSV_128:
    ADCSRA |= BV(ADPS2) | BV(ADPS1) | BV(ADPS0);
    break;
  }
}

  */
} // namespace