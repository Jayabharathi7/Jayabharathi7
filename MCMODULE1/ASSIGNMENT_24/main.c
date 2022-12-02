/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A 8 FIELD PASSWORD ACCESS TO SCREEN
*/

#include <xc.h>
#include "main.h"
#include "matrix_keypad.h"
#include "clcd.h"
#include <string.h>

void init_config(void)
{
    init_matrix_keypad();
    init_clcd();

    TRISB = TRISB & 0xFE;
    LED1 = 0;

    CLEAR_DISP_SCREEN;
    clcd_print("Enter Password : ", LINE1(0));

}

void main(void)
{
    char password[] = "00000000", pass[9] = {0}, key, i = 0, flag = 1, attempt = 1, j;
    unsigned long wait, delay = 0;

    init_config();

    while(1)
    {
        if(wait++ == 5000/attempt)
        {
            wait = 0;
            LED1 = !LED1;
        }
        if(attempt <= 5)
        {
            key = read_switches(STATE_CHANGE);
            for(j = 2000; j--;);

            if(delay++ < 1500 && flag != 0)
                clcd_putch('_', LINE2(i));

            else if(delay < 3000 && flag != 0)
                clcd_putch(' ', LINE2(i));

            if(delay == 3000)
                delay = 0;

            if(key == MK_SW1 && i < 8)
            {
                pass[i] = '0';
                clcd_putch('*', LINE2(i));
                i++;
            }
            else if(key == MK_SW2 && i < 8)
            {
                pass[i] = '1';
                clcd_putch('*', LINE2(i));
                i++;
            }
            if(i > 7)
            {
                if(flag)
                {
                    CLEAR_DISP_SCREEN;
                    flag = 0;
                }
                if(strcmp(password, pass) == 0)
                {
                    clcd_print("Hello World", LINE2(0));
                    flag = 0;
                }
                else
                {
                    clcd_print("PIN Mismatched !", LINE1(0));
                    clcd_print("Try Again !", LINE2(0));

                    for(wait = 50000; wait--;)
                        for(j = 10; j--;);

                    CLEAR_DISP_SCREEN;
                    clcd_putch(5 - attempt + 48, LINE1(0));
                    clcd_print("Attempts Remain", LINE1(2));

                    for(wait = 50000; wait--;)
                        for(j = 10; j--;);

                    CLEAR_DISP_SCREEN;
                    clcd_print("Enter Password : ", LINE1(0));


                    i = 0; attempt++; flag = 1;
                }
            }
        }
        else
        {
            LED1 = 1;
            clcd_print("Limit Exceeded !", LINE1(0));
            clcd_print("Reset and try", LINE2(0));
        }
    }
}
