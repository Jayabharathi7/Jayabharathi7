#include "main.h"

/*intialising the port c 4 pins as input*/
void init_digital_keypad(void)
{
	TRISC = TRISC | INPUT_PINS;
}

/*reading the digital keypad input*/
unsigned char read_digital_keypad(unsigned char detection_type)
{
	static unsigned char once = 1;

    /*if edge triggering*/
	if (detection_type == STATE_CHANGE)
	{
		if (((KEY_PORT & INPUT_PINS) != ALL_RELEASED) && once)
		{
			once = 0;

			return (KEY_PORT & INPUT_PINS);
		}
		else if ((KEY_PORT & INPUT_PINS) == ALL_RELEASED)
		{
			once = 1;
		}
	}
	/*if level triggering*/
	else if (detection_type == LEVEL)
	{
		return (KEY_PORT & INPUT_PINS);
	}

    /*if key not pressed*/
	return ALL_RELEASED;
}
