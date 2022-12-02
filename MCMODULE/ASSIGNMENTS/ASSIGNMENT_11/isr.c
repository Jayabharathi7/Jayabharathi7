#include <xc.h>
#include "main.h"

extern char second, min, hour, flag = 1;
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
		    count = 0;
		    //if second is 60 then it means one minute so incremnt the min
		    if(++second == 60)
            {
                second = 0;
                //if min reaches 60 then it means one hour so increment the hour
                if(++min == 60)
                {
                    min = 0;
                    //if hour reaches 24 then resetting it to 0
                    if(++hour == 24)
                        hour = 0;
                }
            }
            flag = 0;
		}

        //setting the flag for each half second
        else if (count == 10000)
	        flag = 1;

        //resetting the interupt flag
		TMR0IF = 0;
	}
}
