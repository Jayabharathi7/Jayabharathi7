/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT PATTERN GENERATOR ON LEDS CONTROLLED BY SWITCHES
*/

#include "main.h"

unsigned long int wait = 0;
int iter = 0;
int flag = 1;

/*intialising ports*/
static void init_config(void)
{
    /*making all ports as digital*/
    ADCON1 = 0x0F;

    /*making portb as input AND making the led off*/
    TRISB = 0x00;
    LED_ARRAY = 0x00;

    /*calling digital keypad initialising function*/
    init_digital_keypad();
}

void main(void)
{
    unsigned char key, key1;

    /*function call to initialize*/
    init_config();

    while (1)
    {
        /*for delay*/
        if(wait++ == 50000)
        {
            /*if flag is one then turning on the leds from left to right*/
            if(flag)
            {
                /*turning on the led from left to right*/
                if(iter < 8)
                {
                    LED_ARRAY = LED_ARRAY | (1 << iter);
                    iter++;
                }

                /*turning on the led from left to right*/
                else if(iter < 16) 
                {
                    LED_ARRAY = LED_ARRAY << 1;
                    iter++;
                }

                /*if iter value reaches greater than 15 than resetting it to 0*/
                else 
                    iter = 0;
            }

            /*if iteration value is greater than 7 than glowing the led from right to left*/
            else if(iter > 7) 
            {
                LED_ARRAY = LED_ARRAY >> 1 | 0x80 ;
                iter--;
            }

            /*if iterration becomes greater than or equal to 0 than turning off the led from right to left*/
            else if(iter >= 0) 
            {
                LED_ARRAY = LED_ARRAY >> 1;
                iter--;
            }

            /*if iter reaches negative than resetting iter to 15*/
            else 
                iter = 15;

            wait = 0;
        }

        /*reading the direction change input*/
        key = read_digital_keypad(STATE_CHANGE);

        /*if DCI occurs than changing the flag value*/
        if(key == SWITCH1)
            flag = !flag;
    }
}
