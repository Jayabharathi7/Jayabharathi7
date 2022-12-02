/*
 * NAME        : JAYABHARATHI J
 * DATE        : 02/12/2022
 * DESCRIPTION : IMPLEMENT SYSTEM SLEEP AND WAKE UP WHILE INTERRUPT ON CHANGE
*/

#include <xc.h>
#include "main.h"
#include "external_interrupt.h"
#include "isr.h"
#include "ssd_display.h"
#include "timer0.h"

unsigned char ssd[4];

static void init_config(void)
{
	ADCON1 = 0x0F;

	init_external_interrupt();
	init_ssd_control();
	init_timer0();

	TRISB1 = 0;

	GIE = 1;
	PEIE = 1;
}

char t_flag;

void main(void)
{
    init_config();

    while (1)
    {
        if(t_flag)
        {
            ssd[0] = ssd[1] = ssd[2] = ssd[3] = 0x00;
            display(ssd);
            SLEEP();
        }
        else 
        {
            ssd[0] = ONE; 
            ssd[1] = TWO; 
            ssd[2] = THREE; 
            ssd[3] = FOUR; 

            display(ssd);
        }
    }
}
