/*
 * NAME        : JAYABHARATHI J
 * DATE        : 01/12/2022
 * DESCRIPTION : IMPLEMENT A LED DIMMER APPLICATION USING PWM(TIMER ISR BASED)
*/

#include "main.h"
#include "adc.h"
#include <xc.h>
#include "timer0.h"

#define PERIOD 100

char cycle;
unsigned short duty_change;

static void init_config(void)
{
	LED1 = OFF;

	TRISB0 = 0;

    init_adc();
    init_timer0();

    GIE = 1;

    PEIE = 1;
}

void main(void)
{

    init_config();

    while (1)
    {
        duty_change = read_adc(CHANNEL4);
    }
}
