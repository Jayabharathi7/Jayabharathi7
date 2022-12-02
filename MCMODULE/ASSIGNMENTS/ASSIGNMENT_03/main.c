/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT MULTIPLE PATTERNS ON LEDS CONTROLLED BY SWITCHES
 */

#include <xc.h>
#include "main.h"
#include "digital_keypad.h"

unsigned long int wait = 0;
int iter = 0;

void glow_on_press(unsigned char key)
{
    if(wait++ == 50000)
    {
        if (key == SWITCH1)
        {
            /*if iter is less than 8 then glowing the leds from left to right*/
            if(iter < 8)
            {
                LED_ARRAY = LED_ARRAY | (1 << iter);
                iter++;
            }
            /*if iter is less than 16 and greater than 8 then off the leds from left to right*/
            else if(iter < 16)
            {
                LED_ARRAY = LED_ARRAY & (0xfe << (iter % 8));
                iter++;
            }
            /*if iter is less than 24 and greater than 16 then glowing the leds from right to left*/
            else if(iter < 24)
            {
                LED_ARRAY = LED_ARRAY | (0x80 >> iter % 8);
                iter++;
            }
            /*if iter is less than 32 and greater than 24 then off the leds from right to left*/
            else if(iter < 32)
            {
                LED_ARRAY = LED_ARRAY & (0x7f >> (iter % 8));
                iter++;
            }
            /*if iter reaches greater than the 32 then reseting the iter value to 0*/
            else 
            {
                iter = 0;
            }
        }
        /*if switch2 is pressed then performing the light glowing and turning off from left right*/
        else if(key == SWITCH2)         
        {
            if(iter < 8)
            {
                LED_ARRAY = LED_ARRAY | (1 << iter);
                iter++;

            }
            else if(iter < 16)
            {
                LED_ARRAY = LED_ARRAY & (0xfe << (iter % 8));
                iter++;
            }
            else 
            {
                iter = 0;
            }
        }
        /*if switch3 or switch4 or pressed then toggling the leds*/
        else if(key == SWITCH3 || key == SWITCH4)
        {
            LED_ARRAY = ~LED_ARRAY;
        }
        /*if all switches released*/
        else 
            LED_ARRAY = 0x00;
        /*if wait reaches 50000 then reseting wait to 0*/
        wait = 0;
    }
}

/*initialisations required*/
static void init_config(void)
{
    //setting all ports as digital
    ADCON1 = 0x0F;

    //setting port b as output and making the led initially turn off
    TRISB = 0x00;
    LED_ARRAY = 0x00;

    //function call to initialising the digital keypad 
    init_digital_keypad();
}

void main(void)
{
    unsigned char key, key1;

    /*function call to initialisation*/
    init_config();

    while (1)
    {
        //reading the key
        key = read_digital_keypad(STATE_CHANGE);

        /*if key not equal to all released then storing key value into key1*/
        if(key != ALL_RELEASED)
        {
            LED_ARRAY = 0x00;

            //if switch1 or switch2 pressed then making iter as 0
            if(key == SWITCH1 || key == SWITCH2)
                iter = 0;

            /*if switch 3 pressed then toggling the alternate leds*/
            else if(key == SWITCH3)
                LED_ARRAY = 0x55;

            /*if switch 4 pressedx then toggling the nibble leds*/
            else  if(key == SWITCH4)
                LED_ARRAY = 0x0F;

            key1 = key;
        }

        /*calling the function with key one value*/
        glow_on_press(key1);
    }
}
