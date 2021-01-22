
#ifndef _DriveBoard
#define _DriveBoard

#include "RoveComm.h"
#include "RoveWatchdog.h"

#define FR_MOTOR            PL_5
#define FL_MOTOR            PL_4
#define RR_MOTOR            PL_1
#define RL_MOTOR            PL_0

#define FL_PWM              PF_1
#define FR_PWM              PF_2
#define RL_PWM              PF_3
#define RR_PWM              PG_0

RoveCommEthernet RoveComm;
rovecomm_packet packet;
RoveWatchdog Watchdog;

uint8_t rightspeed;
uint8_t leftspeed;

const byte DRIVE_ZERO        = 127;
const byte ANGLE_DEFAULT     = 0;


uint8_t motorButtons[4] = {FR_MOTOR, RR_MOTOR, FL_MOTOR, RL_MOTOR};
uint8_t motorSpeeds[4] = {DRIVE_ZERO, DRIVE_ZERO, DRIVE_ZERO, DRIVE_ZERO}; //FL, FR, BL, BR
uint8_t pwmEncoders[4] = {FL_PWM, FR_PWM, RL_PWM, RR_PWM};
uint8_t encoderAngle[4] = {ANGLE_DEFAULT, ANGLE_DEFAULT, ANGLE_DEFAULT, ANGLE_DEFAULT}; //FL, FR, BL, BR


void EStop();
void swerveDriveInit(uint16_t dirAngle);

#endif
