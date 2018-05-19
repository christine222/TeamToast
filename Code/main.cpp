//#define DEBUG

#include "mbed.h"

#include "pin.h"
#include "IRSensor.h"

IRSensor rightIR(IR_R_PIN, PT_R_PIN);
IRSensor dRightIR(IR_DR_PIN, PT_DR_PIN);
IRSensor dLeftIR(IR_DL_PIN, PT_L_PIN);
IRSensor leftIR(IR_L_PIN, PT_L_PIN);

Serial serial(TX_PIN, RX_PIN);


float delay = .05; // 50 ms

volatile float left;
volatile float dleft;
volatile float dright;
volatile float right;

int main()
{
    while (1)
    {
        leftIR.updateSensor();
        left = leftIR.getReading();
        dLeftIR.updateSensor();
        dleft = dLeftIR.getReading();
        dRightIR.updateSensor();
        dright = dRightIR.getReading();
        rightIR.updateSensor();
        right = rightIR.getReading(); 
        serial.printf("%f, %f, %f, %f\r\n", left, dleft, dright, right);
        wait(delay);

    }
}
