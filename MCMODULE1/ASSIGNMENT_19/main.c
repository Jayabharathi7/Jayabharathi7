/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A 10 DIGIT DOWN COUNTER WITH PRESET
*/

#include <xc.h>
#include <string.h>
#include "clcd.h"
#include "matrix_keypad.h"

static void init_config(void)
{
    init_clcd();
    init_matrix_keypad();
    clcd_print("Counter : ", LINE1(0));
}

void main(void)
{
    char str[] = "0000000000", i, digit = 9, key, e_flag = 0;
    int wait = 0;

    init_config();

    while (1)
    {
        key = read_switches(STATE_CHANGE);
        if(!e_flag)
        {
            if(key == MK_SW2)
            {
                if(digit-- < 0)
                    digit = 9;
            }

            if(wait++ < 500)
                clcd_putch('_', LINE2(digit));

            if(wait == 1000)
                wait = 0;

            if(key == MK_SW1)
            {
                if(str[digit]++ == 57)
                    str[digit] = '0';
            }
        }
        else
        {
            if(wait++ == 1000)
            {
                for(i = digit; i < 10; i++)
                {
                    if(str[i] <= '0')
                    {
                        if (str[i - 1] > '0')
                        {
                            str[i] = '9';
                            str[i - 1]--;
                        }
                    }
                }
                str[9]--;
                wait = 0;
            }
        }

        if(key == MK_SW3)
        {
            wait = 100;
            e_flag = !e_flag;
        }

        if (!strcmp(str, "0000000000"))
            e_flag = 0;
        clcd_print(str, LINE2(0));
    }
}
