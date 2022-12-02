/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A TEMPERATURE SENSOR NODE WITH SSD DISPLAY
*/

#include "main.h"
#include "adc.h"
#include <xc.h>
#include "ssd_display.h"

static void init_config(void)
{
    init_adc();
    init_ssd_control();
}

unsigned char ssd[4];
unsigned char digit[] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

void main(void)
{
    unsigned short adc_reg_val, t, wait = 100;

    init_config();

    while (1)
    {
        adc_reg_val = read_adc(CHANNEL4);

        if(wait++ == 100)
        {
            wait = 0;
            t = 0.00488 * adc_reg_val * 1000 / 10;
        }

        ssd[0] = digit[t / 10 % 10];
        ssd[1] = digit[t % 10];
        ssd[2] = 0x10; 
        ssd[3] = 0xC6;

        display(ssd);
    }
}
