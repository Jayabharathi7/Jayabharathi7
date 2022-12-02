/*
 
 * NAME          : JAYABHARATHI J
 * DATE          : 01/12/2022
 * DESCRIPTION   : IMPLEMENT A STATIC CLOCK ON SSD USING INTERNAL TIMER
 
*/

#include <xc.h>
#include "timer2.h"
#include "main.h"
#include "ssd_display.h"

static unsigned char ssd[MAX_SSD_CNT];
static unsigned char digit[] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

void init_config(void)
{
    //initialising ssd
	init_ssd_control();

	//initialising timer2
	init_timer2();

    //enabling the peripheral interupt 
	PEIE = 1;

	//enabling the global interupt
	GIE = 1;
}

unsigned char second = 0, min = 0, hour = 12,flag;

void main(void)
{
    //initialisation
	init_config();
	while (1)
    {
	    ssd[0] = digit[hour / 10];

        //toggle the led for every half second
	    if(flag)
            ssd[1] = digit[hour % 10] | 1 << 4;
        else
            ssd[1] = digit[hour % 10];

	    ssd[2] = digit[min / 10];
	    ssd[3] = digit[min % 10];

        //display the time
	    display(ssd);
	}
}

