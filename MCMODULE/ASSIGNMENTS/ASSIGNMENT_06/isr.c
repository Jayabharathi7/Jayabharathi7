#include <xc.h>
#include "main.h"

extern unsigned char duty_change;
unsigned long count;
bit flag;

void interrupt isr(void)
{
	if (TMR0IF)
	{
	    TMR0 = TMR0 + 8;
	    //if count reaches 100000 then making duty change as 0 so led will become glow with 10% brightness
	    if(count++ == 100000 && flag)
        {
            count = 0;
            duty_change = 10;
            flag = 0;
        }
	    TMR0IF = 0;
	}
}
