#include <xc.h>
#include "timer2.h"

void init_timer2(void)
{
	/*
	 * Setting instruction cycle clock (Fosc / 4) as the source of
	 * timer0
	 */

	T0CS = 0;

	TMR0 = 6;

	TMR0ON = 1;

	/* Clearing timer0 overflow interrupt flag bit */
	TMR0IF = 0;

	/* Enabling timer0 overflow interrupt */
	TMR0IE = 1;
}
