#include <xc.h>

char stop_watch[12];

void interrupt isr(void)
{
    static unsigned int count;

    if(TMR0IF)
    {
        TMR0 = TMR0 + 8;
        if(count % 200 == 0)
        {
            if(stop_watch[10]++ == '9')
            {
                stop_watch[10] = '0';
                if(stop_watch[9]++ == '9')
                    stop_watch[9] = '0';
            }
        }
        if(++count == 20000)
        {
            count = 0;
            if(stop_watch[7]++ == '9')
            {
                stop_watch[7] = '0';
                if(stop_watch[6]++ == '6')
                {
                    stop_watch[6] = '0';
                    if(stop_watch[4]++ == '9')
                    {
                        stop_watch[4] = '0';
                        if(stop_watch[3]++ == '6')
                        {
                            stop_watch[3] = '0';
                            if(stop_watch[1]++ == '9')
                            {
                                stop_watch[1] = '0';
                                if(stop_watch[0]++ == '9')
                                {
                                    stop_watch[0] = '0';
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    TMR0IF = 0;
}
