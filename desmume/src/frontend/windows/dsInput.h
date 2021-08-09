#ifndef DSINPUT_INCLUDED
#define DSINPUT_INCLUDED

#include <Windows.h>

#define DSBTN_X 1
#define DSBTN_O 2
#define DSBTN_SQUARE 3
#define DSBTN_TRIANGLE 4
#define DSBTN_SHARE 5
#define DSBTN_PS 6
#define DSBTN_OPTIONS 7
#define DSBTN_L3 8
#define DSBTN_R3 9
#define DSBTN_L1 10
#define DSBTN_R1 11
#define DSBTN_UP 12
#define DSBTN_DOWN 13
#define DSBTN_LEFT 14
#define DSBTN_RIGHT 15
#define DSBTN_TOUCHPAD 16
#define DSBTN_L2 17
#define DSBTN_R2 18

void dsInput_init();

struct DsInputState
{
	unsigned char dpad;
	unsigned char LX;
	unsigned char LY;
	unsigned char RX;
	unsigned char RY;
	unsigned char LT;
	unsigned char RT;
	bool buttons[32];
};

extern DsInputState dsInputState;
#endif