/*
 * NAME         : JAYABHARATHI J
 * DATE         : 01/12/2022
 * DESCRIPTION  : IMPLEMENT A DYNAMIC SCROLLING NUMBER MARQUEE WITH ROTATION CONTROL
 */

#include <xc.h>
#include "main.h"
#include "matrix_keypad.h"
#include "clcd.h"
#include <string.h>

static void init_config(void)
{
	init_matrix_keypad();
	init_clcd();
}

void main(void)
{
    char e_flag = 1, str[17] = {'0'}, i = 1, s_flag = 0, t_key = MK_SW1, first, next, key, j, pre_key, index = 0;
    short wait = 0;
    memset(str, ' ', 17);
    str[0] = '0';
    str[16] = '\0';

    init_config();

    while (1)
    {
        key = read_switches(STATE_CHANGE);
        if(key == MK_SW1 || key == MK_SW2)
            pre_key = key;

        if(e_flag)
        {
            if(key == MK_SW5)
            {
                str[i] = '0';
                i++;
            }
            else if(key == MK_SW6)
            {
                i--;
                str[i] = 0;
                CLEAR_DISP_SCREEN;
            }
            else if(key == MK_SW1)
            {
                if(++str[i - 1] > '9')
                    str[i - 1] = '0';
            }
            else if(key == MK_SW2)
            {
                if(--str[i - 1] < '0')
                    str[i - 1] = '9';
            }
        }
        if(pre_key == MK_SW1 && !e_flag && s_flag)
        {
            if(wait++ == 1000)
            {
                first = str[0];
               str[0] = str[15];
                j = 0;
                while(str[j + 1])
                {
                    next = str[j + 1];
                    str[j + 1] = first;
                    first = next;
                    j++;
                }
                wait = 0;
            }
            t_key = MK_SW1;
        }
        else if(pre_key == MK_SW2 && !e_flag && s_flag)
        {
            if(wait++ == 1000)
            {
                first = str[0];
                j = 0;
                while(str[j + 1])
                {
                    str[j] = str[j + 1];
                    j++;
                }
                str[15] = first;
                wait = 0;
            }
            t_key = MK_SW2;
        }
        if(key == MK_SW4)
        {
            e_flag = !e_flag;
            pre_key = ALL_RELEASED;
        }
        else if(key == MK_SW3)
        {
            s_flag = !s_flag;

            if(s_flag)
                pre_key = t_key;
            else 
                pre_key = ALL_RELEASED;

        }
        clcd_print("Dynamic Scroll:", LINE1(0));
        clcd_print(str, LINE2(0));
    }
}
