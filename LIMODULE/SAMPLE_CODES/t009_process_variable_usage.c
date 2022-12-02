/*------------------------------------------------------------------------------ 
 *
 *   Author         : Emertxe (http://www.emertxe.com) 
 *   Date           : Tue 01 Mar 2016 16:18:10 IST
 *   File           : t009.c
 *   Title          : Accessing variables between multiple processes - fork()
 *   Description    : Upon creating new process,parent/child will have their
 *                    own copy of code & data.Following program demonstrates
 *                    the same by building the core concept of multi-tasking.It
 *                    also introduced wait() system call.  
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
    char *message;
    int count;
    int exit_code;
    int *ptr = NULL;

    printf("fork program starting\n");
    pid = fork();
    switch(pid) 
    {
	case -1:
	    perror("fork");
	    exit(1);
	case 0:
	    *ptr = 5;
	    count = 1 / 0;
	    message = "This is the child";
	    count = 5;
	    exit_code = 37;
	    break;
	default:
	    message = "This is the parent";
	    count = 3;
	    exit_code = 0;
	    break;
    }

    /* Which process will execute this part ? parent, child or both.*/
#if 0
    for(; count > 0; count--) 
    {
	puts(message);
	sleep(1);
    }
#endif
//} // End of main()

#if 1
    /*  This section of the program waits for the child process to finish.  */
    if(pid) 
    {
	int stat_val;
	pid_t child_pid;

	child_pid = wait(&stat_val);

	printf("Child has finished: PID = %d\n", child_pid);
	if(WIFEXITED(stat_val))
	{
	    /* Normal termination */
	    printf("Child exited with code %d\n", WEXITSTATUS(stat_val));
	}
	else
	{
	    /* Abnormal termination */
	    printf("Child terminated abnormally with signal %d\n", WTERMSIG(stat_val));
	}
    }
    exit(exit_code);
}
#endif
