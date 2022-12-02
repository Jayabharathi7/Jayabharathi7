#include <xc.h>

void init_timer1(void)
{
    TMR1ON = 1;

    TMR1CS = 0;

    TMR1 = 3036;

    //to enable timer1 interupt
    TMR1IE = 1;

    TMR1IF = 0;
}
