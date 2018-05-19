#ifndef PIN_H
#define PIN_H

#include "mbed.h"

//IR LEDs
#define IR_R_PIN PA_2
#define IR_DR_PIN PA_3
#define IR_FR_PIN PA_4
#define IR_FL_PIN PB_10
#define IR_DL_PIN PB_12
#define IR_L_PIN PB_13

//Phototransistors
#define PT_R_PIN PA_5
#define PT_DR_PIN PA_6
#define PT_FR_PIN PA_7
#define PT_FL_PIN PC_4
#define PT_DL_PIN PC_5
#define PT_L_PIN PB_0

//Motors
#define MTR_R_FWD_PIN PB_6
#define MTR_R_REV_PIN PB_7
#define MTR_L_FWD_PIN PB_4
#define MTR_L_REV_PIN PB_5

//Encoders
#define L_ENC_A_PIN PA_15
#define L_ENC_B_PIN PB_3
#define R_ENC_A_PIN PA_0
#define R_ENC_B_PIN PA_1

//User I/O
#define LED_1_PIN PC_10
#define LED_2_PIN PC_11
#define BTN_1_PIN PC_0
#define RX_PIN PA_10
#define TX_PIN PA_9
/*
Display Stuff
*/
#define DISP_CE_PIN PC_12
#define DISP_IN_PIN PC_13
#define DISP_CLK_PIN PC_14

#endif