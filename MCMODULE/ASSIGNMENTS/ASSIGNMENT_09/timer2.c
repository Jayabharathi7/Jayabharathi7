#include <xc.h>
#include "timer2.h"

void init_timer2(void)
{
	/*
	 * Setting instruction cycle clock (Fosc / 4) as the source of
	 * timer0
	 */
	TMR2ON = 1;

	/* Clearing timer0 overflow interrupt flag bit */
	TMR2IF = 0;

	/* Enabling timer0 overflow interrupt */
	TMR2IE = 1;

	PR2 = 249;
}
