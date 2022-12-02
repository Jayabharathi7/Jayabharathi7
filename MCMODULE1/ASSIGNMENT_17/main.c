/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A 10 DIGIT UP COUNTER
*/

#include <xc.h>
#include "clcd.h"

//initialisation needs to be done
static void init_config(void)
{
    init_clcd();
}

void main(void)
{
    //starting the value from 9999999999
    char str[] = "0000000000", i, j;
    int wait = 0;

    init_config();

    clcd_print("Up Counter -> ", LINE1(0));
    while (1)
    {
        if(wait++ == 1000)
        {
            str[9]++;
            if(str[9] > 57)
            {
                str[9] = '0';
                str[8] = str[8] + 1;
                i = 8;
                while(str[i] > 57 && i >= 0)
                {
                    str[i] = '0';
                    str[i - 1] = str[i - 1] + 1;
                    i--;
                }
            }
            wait = 0;
        }
        clcd_print(str, LINE2(0));
    }
}
