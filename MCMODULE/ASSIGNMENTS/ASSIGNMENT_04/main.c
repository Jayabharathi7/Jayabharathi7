/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT THE TIME SEPARATOR WITH TIMER 0, TIMER 1 AND TIMER 2
*/

#include <xc.h>
#include "timer2.h"
#include "main.h"
#include "timer0.h"

void init_config(void)
{
    TRISB1 = 0;
    TRISB2 = 0;
    TRISB3 = 0;

    LED1 = 0;
    LED2 = 0;
    LED3 = 0;


	init_timer2();
	init_timer0();
	init_timer1();

	PEIE = 1;
	GIE = 1;
}

void main(void)
{
	init_config();

	while (1);
}

