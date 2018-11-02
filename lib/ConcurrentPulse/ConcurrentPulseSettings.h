#ifndef CONCURRENT_PULSE_SETTINGS_H_
#define CONCURRENT_PULSE_SETTINGS_H_

#include "Arduino.h"

#define CONPULSE_TRIG_PORTR PORTA
#define CONPULSE_TRIG_PINR  PINA
#define CONPULSE_TRIG_DDR   DDRA

#define CONPULSE_ECHO_PORTR PORTC
#define CONPULSE_ECHO_PINR  PINC
#define CONPULSE_ECHO_DDR   DDRC

#define CONPULSE_TRIG_DURATION 2
#define CONPULSE_ECHO_DURATION 10
#define CONPULSE_TIMEOUT       3000

#define CONPULSE_NUM_SENSORS   8
#endif