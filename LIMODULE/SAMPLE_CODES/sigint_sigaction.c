/* FILE: sigint_sigaction.c
 * Description: 
 */

#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>

static int sigcnt;

void mysig_handler(int signum)
{
    sigcnt++;
}

int main()
{
    struct sigaction newact;

    memset(&newact, 0, sizeof(newact)); //Clear memory

    newact.sa_handler = mysig_handler; //Assign your signal handler

    /* Register the signal handler for SIGINT signal */
    sigaction(SIGINT, &newact, NULL);

    while(1)
    {
	printf("Sigint count is %3d\n", sigcnt);
        sleep(1);
    }

    return 0;
}

