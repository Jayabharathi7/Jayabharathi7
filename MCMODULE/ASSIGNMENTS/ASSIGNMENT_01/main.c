/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT LED TRAIN PATTERN ON LEDS
*/

#include <xc.h>
#include "main.h"

static void init_config(void)
{
    ADCON1 = 0x0F;
    TRISB = 0x00;
}

void main(void)
{
    unsigned long wait = 0;
    int iter = 0;

    init_config();

    LED_ARRAY = 0x00;
    while (1)
    {
        if(wait++ == 500000)
        {
            /*if iter is less than 32 then*/
            if(iter < 32)
            {
                /*if iter is less than 8 then glowing the leds from left to right*/
                if(iter < 8)
                {
                    LED_ARRAY = LED_ARRAY | (1 << iter);
                }
                /*if iter is less than 16 and greater than 8 then off the leds from left to right*/
                else if(iter < 16)
                {
                    LED_ARRAY = LED_ARRAY & (0xfe << (iter % 8));
                }
                /*if iter is less than 24 and greater than 16 then glowing the leds from right to left*/
                else if(iter < 24)
                {
                    LED_ARRAY = LED_ARRAY | (0x80 >> iter % 8);
                }
                /*if iter is less than 32 and greater than 24 then off the leds from right to left*/
                else if(iter < 32)
                {
                    LED_ARRAY = LED_ARRAY & (0x7f >> (iter % 8));
                }
                iter++;
            }
            else 
            {
                iter = 0;
            }
            wait = 0;
        }
    }
}
