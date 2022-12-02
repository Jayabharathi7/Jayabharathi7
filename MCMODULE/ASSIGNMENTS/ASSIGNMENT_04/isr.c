#include <xc.h>
#include "main.h"

extern unsigned char second, min, hour, flag;

void interrupt isr(void)
{
	static unsigned short count, count1;
     
	if (TMR0IF)
	{
	    TMR0 = TMR0 + 8;
	    if(++count == 20000)
        {
	        LED1 = !LED1;
        }

	    TMR0IF = 0;
	}

	if(TMR2IF)
    {
        if(count == 20000)
            LED2 = !LED2;

	    TMR2IF = 0;
    }

    if(TMR1IF)
    {
        TMR1 = TMR1 + 3038;
        if(++count1 == 80)
        {
            LED3 = !LED3;
            count1 = 0;
        }
        TMR1IF = 0;
    }

    if(count == 20000)
        count = 0;
}
