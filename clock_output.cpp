#include "Arduino.h"
#include "clock_output.h"

ClockOutput::ClockOutput(uint8_t divider, uint8_t pin)
{
    this->divider = divider;
    this->pin = pin;
    pinMode(pin, OUTPUT);
}

void ClockOutput::set(uint8_t divider, bool state)
{
    if (divider == this->divider) {
	digitalWrite(this->pin, state);
    }
}
