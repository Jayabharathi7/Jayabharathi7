/*
 * NAME        : JAYABHARATHI J 
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A STOP WATCH WITH 5 LAPS 
*/

#include <xc.h>
#include "clcd.h"
#include "matrix_keypad.h"
#include "timer0.h"
#include <string.h>
#include <stdlib.h>

char stop_watch[] = "00:00:00:00", laps[5][12];

static void init_config(void)
{
    init_clcd();
    init_matrix_keypad();
    init_timer0();
    TMR0ON = 0;

    clcd_print("Stop Watch:", LINE1(0));

    GIE = 1;
    PEIE = 1;
}

void main(void)
{
    char key, i = 0, s_flag = 1, t_key;
    short wait = 0;

    init_config();

    while(1)
    {
        key = read_switches(STATE_CHANGE);

        if(key == MK_SW1)
        {
            s_flag = !s_flag;
            TMR0ON = !TMR0ON;
        }
        else if(key == MK_SW2 && !s_flag)
        {
            strcpy(laps[i % 5], stop_watch);
            clcd_print(laps[i % 5], LINE2(0));
            i++;
        }
        else if(key == MK_SW3 && s_flag)
        {
            clcd_print(laps[i % 5], LINE2(0));
            if(--i == -1)
                i = 5;
        }
        else if(key == MK_SW4 && s_flag)
        {
            //clcd_print(laps[i % 5], LINE2(0));
            if(++i == 6)
                i = 0;
        }
        key = read_switches(LEVEL_CHANGE);
        if(key == MK_SW2)
        {
            if(wait++ == 500)
            {
                TMR0ON = 0;
                wait = 0;
                strcpy(stop_watch, "00:00:00:00");
                for(i = 0; i < 5; i++)
                    strcpy(laps[i], "00:00:00:00");
            }
        }

        clcd_print(stop_watch, LINE1(0));
        clcd_print(laps[i % 5], LINE2(0));
    }
}
