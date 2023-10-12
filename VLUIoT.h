#ifndef VLUIoT_h
#define VLUIoT_h

#include "Arduino.h"

class VLUIoT
{
public:
    VLUIoT(int ledPin);
    void turnOn(int seconds);
    void turnOff();

private:
    int _ledPin;
    bool _isOn;
    unsigned long _startTime;
};

#endif
