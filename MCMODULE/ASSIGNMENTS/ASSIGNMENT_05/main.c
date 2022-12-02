/*
 * NAME         : JAYABHARATHI J
 * DATE         : 01/12/2022
 * DESCRIPTION  : USING TIMER BASED PWM, IMPLEMENT A LED DIMMER APPLICATION
*/

#include <xc.h>
#include "main.h"
#include "digital_keypad.h"
#include "timer0.h"

#define PERIOD			100

unsigned char duty_change = 50;

void software_pwm(void)
{
	unsigned char key;
	static unsigned short wait = 0;

    //reading key
	key = read_digital_keypad(LEVEL);

    //delay
	if (!wait--)
	{
		wait = 1000;

        //if sw1 pressed incrementing the duty change
		if (key == SWITCH1)
		{
			if (duty_change != PERIOD)
			{
				duty_change++;
			}
		}
		//if sw2 pressed decrementing the dutychange
		if (key == SWITCH2)
		{
			if (duty_change != 0)
			{
				duty_change--;
			}
		}
	}
}

//intialisation needs to be done
static void init_config(void)
{
    //analog to digital setting all pins as digital
	ADCON1 = 0x0F;

    //making led off and output port 
	RB1 = OFF;
	TRISB = 0x00;

    //initialising timer and digital keypad
	init_digital_keypad();
	init_timer0();

    //enabling gie and peie
	PEIE = 1;
	GIE = 1;
}

void main(void)
{
    //initialisation
	init_config();

	while (1)
	{
	    //calling the function to modify the led brightness
		software_pwm();
	}
}
