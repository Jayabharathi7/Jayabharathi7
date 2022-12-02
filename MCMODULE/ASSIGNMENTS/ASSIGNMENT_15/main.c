#include "main.h"

/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A LEFT SCROLLING NUMBER MARQUEE
*/

static unsigned char ssd[MAX_SSD_CNT];                                                            //array for leds          
static unsigned char digit[] = {ZERO, ONE,TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, SPACE, SPACE};       //array for digits

void init_config(void)
{
    init_ssd_control();                     //initialisation for ssd
}

void main(void)
{
    /*function call to initialisation*/
    init_config();          

    int reset = 0, index, wait = 0;

    while(1)
    {
        /*resetting the index value with reset*/
        index = reset;

        /*storing the digits into the ssd array to display*/
        ssd[0] = digit[index++ % 12];
        ssd[1] = digit[index++ % 12];
        ssd[2] = digit[index++ % 12];
        ssd[3] = digit[index % 12];

        /*delay for increment the reset value*/
        if(wait++ == 200)
        {
            wait = 0;
            reset++;
        }

        /*if reset reaches 12 then resetting the reset value to 0*/
        if(reset == 12)
            reset = 0;

        /*function call to display the digits in ssd*/
        display(ssd);
    }
}
