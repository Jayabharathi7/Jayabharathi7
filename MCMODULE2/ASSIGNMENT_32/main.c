/*
 * NAME        : JAYABHARATHI J
 * DATE        : 02/12/2022
 * DESCRIPTION : IMPLEMENT A DYNAMIC SCROLLING MESSAGE MARQUEE WITH SCROLL CONTROL
*/

#include <xc.h>
#include "main.h"
#include "uart.h"
#include "clcd.h"
#include <string.h>
#include "matrix_keypad.h"

void init_config(void)
{
    init_uart();
    init_clcd();
    init_matrix_keypad();
    puts("Hey\n\r");
}

void main()
{
    char str[17], c, flag = 0, i = 0;
    memset(str, ' ', 17);
    str[16] = '\0';

    init_config();

    while (1)
    {
        c = getche();
        if(flag && c != '#')
        {
            str[i] = c;
            i++;
        }
        if(c == '#')
        {
            flag = !flag;
        }
        if(!flag)
        {
            i = 0;
            CLEAR_DISP_SCREEN;
            memset(str, 0, 11);
        }
    }
}
