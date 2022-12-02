#include <xc.h>
#include "main.h"

extern char second, min, flag = 1, I_flag;
extern int count;

void interrupt isr(void)
{
    //if interupt flag set then incrementing the count
    if (TMR0IF)
    {
        //if count reaches 20000 then it is one sec so increment the second
        TMR0 = TMR0 + 8;
        if (++count == 20000)
        {
            flag = 0;
            count = 0;
            //if second is 60 then it means one minute so incremnt the min
            if(I_flag)
            {
                if(second-- == 0)
                {
                    second = 59;
                    //if min reaches 60 then it means one hour so increment the hour
                    if(min-- == 0)
                        min = 99;
                }
            }
        }
        //setting the flag for each half second
        else if (count == 10000)
            flag = 1;

        //resetting the interupt flag
        TMR0IF = 0;
    }
}
