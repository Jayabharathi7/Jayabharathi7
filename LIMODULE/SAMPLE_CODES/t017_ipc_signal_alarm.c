/*------------------------------------------------------------------------------ 
 *
 *   Author         : Emertxe (http://www.emertxe.com) 
 *   Date           : Tue 01 Mar 2016 16:18:10 IST
 *   File           : t017.c
 *   Title          : IPC mechanism - Usage of signals - Alarms usage 
 *   Description    : IPC mechanisms provide various ways and means to share 
 *                    information between multiple processes. Signals can be 
 *                    sent to the process itself, alarm() is one of them. This
 *                    example demonstrates alarm() usage and how it works. 
 *
 *----------------------------------------------------------------------------*/
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void alarm_handler(int signum)
{
    puts("Alarm expired");
}

int main()
{
    /* Register a handler */
    signal(SIGALRM, alarm_handler);

    /* Raise the ALARM, after 5 seconds */
    alarm(60);
    printf("ALARM set for 5 seconds\n");

#if 0
    /* Infinite loop */
    while(1);
#else
    pause(); //wait for any signal to occur
    puts("Quitting now...");
#endif

    return 0;
}
