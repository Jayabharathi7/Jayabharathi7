/*
 * NAME        : JAYABHARATHI J
 * DATE        : 02/12/2022
 * DESCRIPTION : IMPLEMENT A MESSAGE DISPLAY USING UART AND CLCD
*/

#include <xc.h>
#include "main.h"
#include "uart.h"
#include "clcd.h"
#include <string.h>

void init_config(void)
{
    init_uart();
    init_clcd();

    puts("Hey!Welcome to Feedback\n\r");
}

void main()
{
    char line1[17] = {0}, line2[17] = {0}, i = 0, c;

    init_config();

    while (1)
    {
        if(i < 16)
        {
            line1[i] = getche();
        }
        else if(i < 32)
        {
            line2[i % 16] = getche();
        }
        if(i++ == 32)
        {
            i = 16;
            strcpy(line1, line2);
            memset(line2, 0, 17);
            CLEAR_DISP_SCREEN;
        }
        clcd_print(line1, LINE1(0));
        clcd_print(line2, LINE2(0));
    }
}
