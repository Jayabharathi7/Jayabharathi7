/* FILE: sigintv2.c
 * Description: Illustrates usage of signal function to reset to default behaviour
 */

#include <stdio.h>
#include <signal.h>

static int sigcnt;

void mysig_handler(int signum)
{
    sigcnt++;
   // signal(SIGINT, SIG_DFL); //Reset to default behaviour
    signal(SIGINT, SIG_IGN); //Ignore the signal
}

int main()
{
    /* Register the signal handler for SIGINT signal */
    signal(SIGINT, mysig_handler);

    while(1)
    {
	printf("Sigint count is %3d\n", sigcnt);
	sleep(1);
    }

    return 0;
}
