/*
 
 * NAME          : JAYABHARATHI J
 * DATE          : 01/12/2022
 * DESCRIPTION   : IMPLEMENT A TIMER DOWN COUNT 
 
*/

#include "main.h"

unsigned char ssd[MAX_SSD_CNT];
unsigned char digit[] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

void init_config(void)
{
    //initialising ssd
	init_ssd_control();

	//initialising timer2
	init_timer0();

    //enabling the peripheral interupt 
    PEIE = 1;

    //enabling the global interupt
    GIE = 1;
}

char second, min, flag, I_flag;
int count;

void main(void)
{
    //initialisation
    init_config();

    unsigned char t_key, e_flag = 1, f_flag = 1, wait = 0, e_key;

    while (1)
    {
        //reading key
        t_key = read_digital_keypad(STATE_CHANGE);

        //if field flag is one entering into the edit mode
        if(f_flag)
        {
            //if edit flag is one blinking the second field
            if(e_flag)
            {
                ssd[0] = digit[min / 10];
                ssd[1] = digit[min % 10];

                if(flag)
                {
                    ssd[2] = digit[second / 10];
                    ssd[3] = digit[second % 10];
                }
                else
                {
                    ssd[2] = 0x00;
                    ssd[3] = 0x00;
                }
            }
            //if edit flag 0 flickering the min field
            else 
            {
                ssd[2] = digit[second / 10];
                ssd[3] = digit[second % 10];

                if(flag)
                {
                    ssd[0] = digit[min / 10];
                    ssd[1] = digit[min % 10];
                }
                else
                {
                    ssd[0] = 0x00;
                    ssd[1] = 0x00;
                }
            }

            //if sw3 pressed then changing the field
            if(SWITCH3 == t_key)
                e_flag = !e_flag;

            //reading the edit key like increment or decrement
            e_key = read_digital_keypad(LEVEL);

            //if wait reaches 100 then doing the incremen or decremnt the respective fields
            if(wait++ == 100)
            {
                //if sw1 for increment
                if(e_key == SWITCH1 && e_flag)
                {
                    if(++second == 60)
                        second = 0;
                }
                else if(e_key == SWITCH1)
                {
                    if(++min == 60)
                        min = 0;
                }
                //sw2 for decrement
                else if(e_key == SWITCH2 && e_flag)
                {
                    if(second-- == 0)
                        second = 59;
                }
                else if(e_key == SWITCH2)
                {
                    if(min-- == 0)
                        min = 99;
                }
                wait = 0;
            }
        }
        //setting the timer with updated values
        else
        {
            ssd[0] = digit[min / 10];

            if(flag)
                ssd[1] = digit[min % 10] | 1 << 4;
            else
                ssd[1] = digit[min % 10];

            ssd[2] = digit[second / 10];
            ssd[3] = digit[second % 10];
        }

        //if sw4 pressed toggling flags 
        if(t_key == SWITCH4)
        {
            I_flag = !I_flag;
            f_flag = !f_flag;
            //if field flag 0 then making count as 0
            if(f_flag == 0)
            {
                count = 0;
                TMR0 = 6;
            }
        }

        //displaying the min and secs on ssd
        display(ssd);
    }
}
