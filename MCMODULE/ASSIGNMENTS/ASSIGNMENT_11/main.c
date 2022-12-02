/*
 
 * NAME          : JAYABHARATHI J
 * DATE          : 01/12/2022
 * DESCRIPTION   : IMPLEMENT DYNAMIC CLOCK ON SSD USING INTERNAL TIMER
 
*/

#include <xc.h>
#include "timer2.h"
#include "main.h"
#include "ssd_display.h"
#include "digital_keypad.h"

unsigned char ssd[MAX_SSD_CNT];
unsigned char digit[] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

void init_config(void)
{
    //initialising ssd
	init_ssd_control();

	//initialising timer2
	init_timer2();

    //enabling the peripheral interupt 
    PEIE = 1;

    //enabling the global interupt
    GIE = 1;
}

char second, min, hour, flag;
int count;

void main(void)
{
    //initialisation
    init_config();

    unsigned char t_key, e_flag = 1, f_flag = 1;

    while (1)
    {
        t_key = read_digital_keypad(STATE_CHANGE);

        //if field flag set then flickering the fields
        if(f_flag)
        {
            //if edit flag set then flickering the min field
            if(e_flag)
            {
                ssd[0] = digit[hour / 10];
                ssd[1] = digit[hour % 10];

                //flickering every half second
                if(flag)
                {
                    ssd[2] = digit[min / 10];
                    ssd[3] = digit[min % 10];
                }
                else
                {
                    ssd[2] = 0x00;
                    ssd[3] = 0x00;
                }
            }
            //if edit flag 0 then flickering hour field
            else 
            {
                ssd[2] = digit[min / 10];
                ssd[3] = digit[min % 10];

                if(flag)
                {
                    ssd[0] = digit[hour / 10];
                    ssd[1] = digit[hour % 10];
                }
                else
                {
                    ssd[0] = 0x00;
                    ssd[1] = 0x00;
                }
            }

            //if sw3 pressed toggling the flag
            if(SWITCH3 == t_key)
                e_flag = !e_flag;
            //if switch1 pressed incrementing the min or hour based on the field
            else if(t_key == SWITCH1 && e_flag)
            {
                if(++min == 60)
                    min = 0;
            }
            else if(t_key == SWITCH1)
            {
                if(++hour == 24)
                    hour = 0;
            }
            //if flag2 pressed decrementing min or hour based on field
            else if(t_key == SWITCH2 && e_flag)
            {
                if(min-- == 0)
                    min = 59;
            }
            else if(t_key == SWITCH2)
            {
                if(hour-- == 0)
                    hour = 23;
            }
        }
        //if field flag 0 then showing the time based on updated values
        else
        {
            ssd[0] = digit[hour / 10];

            if(flag)
                ssd[1] = digit[hour % 10] | 1 << 4;
            else
                ssd[1] = digit[hour % 10];

            ssd[2] = digit[min / 10];
            ssd[3] = digit[min % 10];
        }

        //setting the time using SW4
        if(t_key == SWITCH4)
        {
            f_flag = !f_flag;
            //if field flag 0 then setting the time
            if(f_flag == 0)
            {
                count = 0;
                TMR0 = 6;
                second = 0;
            }
        }

        //display the values
        display(ssd);
    }
}
