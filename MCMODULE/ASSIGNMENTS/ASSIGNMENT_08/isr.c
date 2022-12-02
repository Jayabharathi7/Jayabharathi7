#include <xc.h>
#include "main.h"

char cycle;
unsigned short duty_change;

void interrupt isr(void)
{
	static unsigned short count;

	if(TMR0IF)
    {
        if(count++ == 20000)
        {
            count = 0;
            cycle++;
        }
    }
    if(cycle < duty_change)
    {
        RB0 = 1;
    }
    else
    {
        RB0 = 0;
    }
    if(cycle++ == 100)
        cycle = 0;

    TMR0IF = 0;
}
