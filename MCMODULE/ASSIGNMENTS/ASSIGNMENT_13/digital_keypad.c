#include <xc.h>
#include "digital_keypad.h"

/*initialising the port c rc0, 1, 2, 3 as input pins*/
void init_digital_keypad(void)
{
	TRISC = TRISC | INPUT_PINS;
}

/*function to detect the keypad detection type*/
unsigned char read_digital_keypad(unsigned char detection_type)
{
	static unsigned char once = 1, cnt;

    /*if state change then performing operation based on edge triggering*/
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
    /*if level trigger*/
    else if (detection_type == LEVEL)
    {
        return (KEY_PORT & INPUT_PINS);
    }

    //if nothing pressed
    return ALL_RELEASED;
}
