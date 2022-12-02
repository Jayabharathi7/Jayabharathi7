/*
 * NAME        : JAYABHARATHI J
 * DATE        : 02/12/2022
 * DESCRIPTION : IMPLEMENT A KEY DETECTION FEEDBACK USING UART
*/

#include <xc.h>
#include "main.h"
#include "uart.h"
#include "digital_keypad.h"

void init_config(void)
{
    init_uart();
    init_digital_keypad();

    PEIE = 1;

    GIE = 1;
    puts("Hey !Welcome to Feedback\n\r");
}

void main()
{
    char key;
    int wait;

    init_config();

    while (1)
    {
        key = read_digital_keypad(STATE_CHANGE);
        for(wait = 2000; wait--;);

        if(key == SWITCH1)
            puts("Switch 1 Pressed\n\r");
        else if(key == SWITCH2)
            puts("Switch 2 Pressed\n\r");
        else if(key == SWITCH3)
            puts("Switch 3 Pressed\n\r");
        else if(key == SWITCH4)
            puts("Switch 4 Pressed\n\r");
    }
}
