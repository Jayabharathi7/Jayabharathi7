/* FILE: sigint.c 
 * Description: 
 */

#include <stdio.h>
#include <signal.h>

void mysig_handler(int signum)
{
    printf("Got signal %d\n", signum);
}

int main()
{
    /* Register the signal handler for SIGINT signal */
    //signal(SIGINT, mysig_handler);
    //signal(SIGTERM, mysig_handler); // Register SIGTERM (15) also

    while(1)
    {
    }

    return 0;
}
