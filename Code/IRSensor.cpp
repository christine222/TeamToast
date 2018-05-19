#include "IRSensor.h"

IRSensor::IRSensor(PinName IR_name, PinName PT_name) :
    mIR(IR_name),
    mPT(PT_name),
    mPT_reading(0)
{
}

void IRSensor::updateSensor()
{
    mIR.write(1);
    mPT_reading = mPT.read();
    mIR.write(0);
}

float IRSensor::getReading()
{
    return mPT_reading;
}