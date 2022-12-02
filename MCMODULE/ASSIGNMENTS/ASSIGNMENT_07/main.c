/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A BRIGHTNESS CONTROL USING POTENTIOMETER
*/

#include "main.h"
#include "adc.h"
#include <xc.h>

#define PERIOD 100

char cycle;

void glow_led(unsigned short adc_reg_val)
{
    if (cycle < adc_reg_val)
    {
        LED1 = ON;
    }
    else
    {
        LED1 = OFF;
    }
    if(cycle++ == PERIOD)
        cycle = 0;
}

static void init_config(void)
{
	LED1 = OFF;

	TRISB0 = 0;

    init_adc();
}

void main(void)
{
    unsigned short adc_reg_val;

    init_config();

    while (1)
    {
        adc_reg_val = read_adc(CHANNEL4);
        glow_led(adc_reg_val / 10);
    }
}
