#ifndef IRSENSOR_H
#define IRSENSOR_H

#include "mbed.h"

class IRSensor
{
public:
IRSensor(
    //IR LED Pins
    PinName IR_name, 
    //Phototransistor Pins
    PinName PT_name
);

void updateSensor();

float getReading();

private:
//IR LED
DigitalOut mIR;
//Phototransistor
AnalogIn mPT;

volatile float mPT_reading;
};

#endif