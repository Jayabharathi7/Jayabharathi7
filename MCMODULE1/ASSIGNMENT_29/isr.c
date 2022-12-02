#include <xc.h>
#include "isr.h"

long unsigned count = 0;
extern char t_flag;

void interrupt isr(void)
{
    if(TMR0IF)
    {
        TMR0 = TMR0 + 8;
        if(++count == 100000)
        {
            t_flag = 1;
            count = 0;
        }
        if(!(count % 20000))
            RB1 = !RB1;

        TMR0IF = 0;
    }
    if(INT0F)
    {
        t_flag = 0;
        count = 0;
        INT0F = 0;
    }
}
