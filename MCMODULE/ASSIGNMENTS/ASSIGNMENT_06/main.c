/*
 * NAME         : JAYABHARATHI J
 * DATE         : 01/12/2022
 * DESCRIPTION  : IMPLEMENT A POINT BRIGHTNESS CONTROL
*/

#include <xc.h>
#include "main.h"
#include "digital_keypad.h"
#include "timer0.h"

#define PERIOD			100

unsigned char duty_change = 10, prog_cycle;
long unsigned int count;
bit flag;

void software_pwm(void)
{
    //if prog_cycle is less than duty change then glowing the led if more turning off the led
	if(prog_cycle < duty_change)
	    RB1 = 1;
    else
	    RB1 = 0;
	//if prog_cycle reached period then resetting it with 0
	if(prog_cycle++ == PERIOD)
        prog_cycle = 0;
}

//initialisation needs to be done
static void init_config(void)
{
	ADCON1 = 0x0F;

	TRISB = 0x00;
	PORTB = 0x00;

	init_digital_keypad();
	init_timer0();

	PEIE = 1;
	GIE = 1;
}

void main(void)
{
    unsigned char key, pre_key;
    unsigned long wait = 0;

    //initialisation
    init_config();

    while (1)
    {
        //reading the key
        key = read_digital_keypad(STATE_CHANGE);
        if(key == SWITCH1)
            pre_key = SWITCH1;

        //delay
        if (!wait--)
        {
            wait = 1000;

            //if prekey is switch2 then making the led glow with full brightness after 5 secs making the led with 10% brigfhtness
            if (pre_key == SWITCH1)
            {
                pre_key = ALL_RELAEASED;
                duty_change = 100;
                count = 0;
                flag = 1;
            }
        }
        //calling the function
        software_pwm();
    }
}
