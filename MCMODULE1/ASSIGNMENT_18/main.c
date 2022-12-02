/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A 10 DIGIT DOWN COUNTER
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
    char str[] = "9999999999", i;
    int wait = 0;

    init_config();

    while (1)
    {
        //delay for each decrementation
        if(wait++ == 1000)
        {
            //loop will fetch all the indexes
            for(i = 0; i < 10; i++)
            {
                //if any index less than or equal to 0 then setting the index with 0 and decrementing the previous index by one
                if(str[i] <= '0')
                {
                    str[i] = '9';
                    str[i - 1]--;
                }
            }
            //decrementing the last index by one
            str[9]--;
            wait = 0;
        }
        //printing the value on clcd
        clcd_print(str, LINE1(0));
    }
}
