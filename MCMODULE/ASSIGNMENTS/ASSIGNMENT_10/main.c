/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A 4 DIGIT DOWN COUNTER WITH VARIABLE FREQUENCY
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
    unsigned short adc_reg_val, t, wait = 0;
    short int count = 9999;

    init_config();

    while (1)
    {
        adc_reg_val = read_adc(CHANNEL4);

        if(wait++ == 1023 - adc_reg_val)
        {
            if(count-- == 0)
                count = 0;
            wait = 0;
        }

        if(wait > adc_reg_val % 1023)
            wait = 0;

        ssd[0] = digit[count / 1000 % 10];
        ssd[1] = digit[count / 100 % 10];
        ssd[2] = digit[count / 10 % 10]; 
        ssd[3] = digit[count % 10];

        display(ssd);
    }
}
