#include "VLUIoT.h"

VLUIoT::VLUIoT(int ledPin)
{
    _ledPin = ledPin;
    _isOn = false;
}

void VLUIoT::turnOn(int seconds)
{
    digitalWrite(_ledPin, HIGH);
    _isOn = true;
    _startTime = millis();
}

void VLUIoT::turnOff()
{
    digitalWrite(_ledPin, LOW);
    _isOn = false;
}
