/* FILE: sigint.c 
 * Description: 
 */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void mysig_handler(int signum)
{
    printf("Got signal %d\n", signum);
}

int main()
{
    /* Register the signal handler for SIGINT signal */
    signal(SIGINT, mysig_handler);

    //sleep(60);
    pause();
    printf("I am running\n");

    return 0;
}
