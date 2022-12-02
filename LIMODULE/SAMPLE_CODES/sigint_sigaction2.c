/* FILE: sigint_sigaction.c
 * Description: 
 */

#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
static int sigcnt;

void mysig_handler(int signum, siginfo_t *siginfo, void *data)
{
    printf("Signal number %d\n", signum);
    printf("Signal sent by %d\n", (int)siginfo->si_pid);
    sigcnt++;
}

int main()
{
    struct sigaction newact;

    memset(&newact, 0, sizeof(newact)); //Clear memory

    newact.sa_sigaction = mysig_handler; //Assign your signal handler
    newact.sa_flags = SA_SIGINFO;

    /* Register the signal handler for SIGINT signal */
    sigaction(SIGINT, &newact, NULL);

    printf("PID = %d\n", getpid());
    while(1)
    {
	printf("Sigint count is %3d\n", sigcnt);
	pause();
    }


    return 0;
}
