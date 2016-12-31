/******************************************************************************
The radioControl.h in RaspberryPilot project is placed under the MIT license

Copyright (c) 2016 jellyice1986 (Tung-Cheng Wu)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
******************************************************************************/

#define TRANSMIT_TIMER 			50000
#define RECEIVE_TIMER 			20000
#define SERIAL_BAUDRATE 		57600
#define PACKET_FIELD_NUM 		50
#define PACKET_FIELD_LENGTH 	20

typedef enum {
	HEADER_BEGIN,
	HEADER_ENABLE_FLY_SYSTEM,
	HEADER_CONTROL_MOTION,
	HEADER_HALT_PI,
	HEADER_SETUP_FACTOR,
	HEADER_OlED_DISPLAY,
	HEADER_SETUP_PID,
	HEADER_END
} CONTROL_PACKET_HEADER;

typedef enum {
	ENABLE_FLY_SYSTEM_FIWLD_HEADER,
	ENABLE_FLY_SYSTEM_FIWLD_ISENABLE,
	ENABLE_FLY_SYSTEM_FIWLD_END
} ENABLE_FLY_SYSTEM_FIWLD;

typedef enum {
	CONTROL_MOTION_HEADER,
	CONTROL_MOTION_THROTTLE,
	CONTROL_MOTION_ROLL_SP_SHIFT,
	CONTROL_MOTION_PITCH_SP_SHIFT,
	CONTROL_MOTION_YAW_SHIFT_VALUE,
	CONTROL_MOTION_END
} CONTROL_MOTION_FIWLD;

typedef enum {
	SETUP_FACTOR_HEADER,
	SETUP_FACTOR_PERIOD,
	SETUP_FACTOR_POWER_LEVEL_RANGE,
	SETUP_FACTOR_POWER_LIMIT,
	SETUP_FACTOR_GYRO_LIMIT,
	SETUP_FACTOR_ANGULAR_LIMIT,
	SETUP_FACTOR_ROLL_CAL,
	SETUP_FACTOR_PITCH_CAL,
	SETUP_FACTOR_MOTOR_GAIN_0,
	SETUP_FACTOR_MOTOR_GAIN_1,
	SETUP_FACTOR_MOTOR_GAIN_2,
	SETUP_FACTOR_MOTOR_GAIN_3,
	SETUP_FACTOR_VERTICAL_HOLD_ENABLE,
	SETUP_FACTOR_ALTHOLD_ALT_PID_OUTPUT_LIMITATION,
	SETUP_FACTOR_LOG_ENABLED,
	SETUP_FACTOR_END
} SETUP_FACTOR_FIWLD;

typedef enum {
	SETUP_PID_HEADER,
	SETUP_PID_ATTITUDE_ROLL_P,
	SETUP_PID_ATTITUDE_ROLL_I,
	SETUP_PID_ATTITUDE_ROLL_I_LIMIT,
	SETUP_PID_ATTITUDE_ROLL_D,
	SETUP_PID_ATTITUDE_ROLL_DB,
	SETUP_PID_ATTITUDE_PITCH_P,
	SETUP_PID_ATTITUDE_PITCH_I,
	SETUP_PID_ATTITUDE_PITCH_I_LIMIT,
	SETUP_PID_ATTITUDE_PITCH_D,
	SETUP_PID_ATTITUDE_PITCH_DB,
	SETUP_PID_ATTITUDE_YAW_P,
	SETUP_PID_ATTITUDE_YAW_I,
	SETUP_PID_ATTITUDE_YAW_I_LIMIT,
	SETUP_PID_ATTITUDE_YAW_D,
	SETUP_PID_ATTITUDE_YAW_DB,
	SETUP_PID_RATE_ROLL_P,
	SETUP_PID_RATE_ROLL_I,
	SETUP_PID_RATE_ROLL_I_LIMIT,
	SETUP_PID_RATE_ROLL_D,
	SETUP_PID_RATE_ROLL_DB,
	SETUP_PID_RATE_PITCH_P,
	SETUP_PID_RATE_PITCH_I,
	SETUP_PID_RATE_PITCH_I_LIMIT,
	SETUP_PID_RATE_PITCH_D,
	SETUP_PID_RATE_PITCH_DB,
	SETUP_PID_RATE_YAW_P,
	SETUP_PID_RATE_YAW_I,
	SETUP_PID_RATE_YAW_I_LIMIT,
	SETUP_PID_RATE_YAW_D,
	SETUP_PID_RATE_YAW_DB,
	SETUP_PID_VERTICAL_HEIGHT_P,
	SETUP_PID_VERTICAL_HEIGHT_I,
	SETUP_PID_VERTICAL_HEIGHT_I_LIMIT,
	SETUP_PID_VERTICAL_HEIGHT_D,
	SETUP_PID_VERTICAL_HEIGHT_DB,
	SETUP_PID_VERTICAL_SPEED_P,
	SETUP_PID_VERTICAL_SPEED_I,
	SETUP_PID_VERTICAL_SPEED_I_LIMIT,
	SETUP_PID_VERTICAL_SPEED_D,
	SETUP_PID_VERTICAL_SPEED_DB,
	SETUP_PID_END
} SETUP_PID__FIWLD;

bool radioControlInit();

