#include <xc.h>
#include "main.h"

extern unsigned char duty_change;

void interrupt isr(void)
{
	static unsigned short prog_cycle;
     
	if (TMR0IF)
	{
	    TMR0 = TMR0 + 8;
	    //if program cycle reached PERIOD making it as 0
	    if(prog_cycle++ == 100)
        {
            prog_cycle = 0;
        }

	    TMR0IF = 0;
	}

    //turning on the led till progcycle reaches dutychange if it reaches then turning off the led
	if(prog_cycle < duty_change)
        RB1 = 1;
    else 
        RB1 = 0;
}
