/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A TEMPERATURE SENSOR NODE WITH CLCD DISPLAY
*/

#include "main.h"
#include "adc.h"
#include <xc.h>
#include "clcd.h"

static void init_config(void)
{
    init_adc();
    init_clcd();
    clcd_print("Room Temprature:", LINE1(0));
}

void main(void)
{
    unsigned short adc_reg_val, wait = 100, t;

    init_config();

    while (1)
    {
        adc_reg_val = read_adc();

        if(wait++ == 100)
        {
            wait = 0;
            t = adc_reg_val * 0.00488 * 1000 / 10;

        }
        clcd_putch('0' + (t / 10 % 10), LINE2(0));
        clcd_putch('0' + (t % 10), LINE2(1));
        clcd_putch(0xDF, LINE2(2));
        clcd_putch('c', LINE2(3));
    }
}
