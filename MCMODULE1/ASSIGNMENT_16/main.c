#include "main.h"

/*
 * NAME         : JAYABHARATHI J
 * DATE         : 01/12/2022
 * DESCRIPTION  : IMPLEMENT A SCROLLING NUMBER MARQUEE WITH DIRECTION CONTROL
*/

static unsigned char ssd[MAX_SSD_CNT];                                                            //array for leds          
static unsigned char digit[] = {ZERO, ONE,TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, SPACE, SPACE};       //array for digits


void init_config(void)
{
    init_ssd_control();                     //initialisation for ssd
    init_digital_keypad();                  //initialisation for digital keypad
}

void main(void)
{
    /*function call to initialisation*/
    init_config();          

    int cur_key = SWITCH1, key, reset = 0, flag = 1, wait = 0, index, temp;

    while(1)
    {
        /*reading the key*/
        key = read_digital_keypad(STATE_CHANGE);

        /*if any of the key pressed then storing the key in current key*/
        if(key != ALL_RELEASED)
            cur_key = key;

        /*if key is switch3 then start and stop operation*/
       if(cur_key == SWITCH3)
       {
           flag = !flag;
           cur_key = temp;
       }

       /*if switch1 then backward marquee*/
        if(flag && cur_key == SWITCH1)
        {
            index = reset;

            /*storing the digits into ssd array*/
            ssd[0] = digit[index++ % 12];
            ssd[1] = digit[index++ % 12];
            ssd[2] = digit[index++ % 12];
            ssd[3] = digit[index % 12];

            /*delay for reset incrrementation*/
            if(wait++ == 200)
            {
                wait = 0;
                reset++;
            }

            /*if reset reaches 12 then resetting it into zero*/
            if(reset == 12)
                reset = 0;

            /*storing the last key value*/
            temp = cur_key;
        }
        else if(flag && cur_key == SWITCH2)
        {
            index = reset - 1;

            /*storing the digits into ssd array*/
            ssd[0] = digit[index++ % 12];
            ssd[1] = digit[index++ % 12];
            ssd[2] = digit[index++ % 12];
            ssd[3] = digit[index % 12];

            /*delay for reset incrrementation*/
            if(wait++ == 200)
            {
                wait = 0;
                reset--;
            }

            /*if reset reaches 1 then resetting it into 12*/
            if(reset < 1)
                reset = 12;

            /*storing the last key value*/
            temp = cur_key;
        }

        /*function call to display the digits*/
        display(ssd);
    }
}
