/*
 * NAME         : JAYABHARATHI J
 * DATE         : 02/12/2022
 * DESCRIPTION  : IMPLEMENT A LED DIMMER APPLICATION USING PWM(TIMER ISR BASED)
 */

#include <xc.h>
#include "main.h"
#include "timer0.h"
#include "matrix_keypad.h"
#include "clcd.h"

#define PERIOD			100

unsigned char duty_change = 0;

void software_pwm(void)
{
	char key, i;
	static unsigned short wait = 0;

    //reading key
    key = read_switches(LEVEL_CHANGE);

    //delay
	if (!wait--)
	{
		wait = 100;

        //if sw1 pressed incrementing the duty change
		if (key == MK_SW1)
		{
			if (duty_change != PERIOD)
			{
				duty_change++;
				for(i = 0; i < duty_change / 10; i++)
                {
                    clcd_putch(0xFF, LINE2(i));
                }
			}
		}
		//if sw2 pressed decrementing the dutychange
		if (key == MK_SW2)
		{
			if (duty_change != 0)
			{
				duty_change--;
				for(i = 0; i <= duty_change / 10 ; i++)
                {
                    clcd_putch(' ', LINE2(duty_change / 10));
                }
			}
		}
	}
    clcd_putch('0' + duty_change / 100, LINE1(12));
    clcd_putch('0' + duty_change / 10 % 10, LINE1(13));
    clcd_putch('0' + duty_change % 10, LINE1(14));
    clcd_putch('%', LINE1(15));
}

//intialisation needs to be done
static void init_config(void)
{
    //analog to digital setting all pins as digital
	ADCON1 = 0x0F;

    //initialising timer and digital keypad
	init_timer0();
	init_matrix_keypad();
	init_clcd();

	TRISB = TRISB & 0xFE;

    clcd_print("ProgressBar:", LINE1(0));

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
