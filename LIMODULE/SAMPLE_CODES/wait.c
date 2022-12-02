/*------------------------------------------------------------------------------ 
 *
 *   Author         : Emertxe (http://www.emertxe.com) 
 *   Date           : Tue 01 Mar 2016 16:05:06 IST
 *   File           : t008.c
 *   Title          : Accessing PID and PPID information of process 
 *   Description    : When new process is created in Linux, a corresponding 
 *                    data base entry is made by the Kernel.Commonly known as 
 *                    Task Control Block (TCB)/Process Control Block (PCB),it  
 *                    maintains all critical information about the process. To
 *                    differentiate between a parent and child PID is used. The 
 *                    folowing program demonstrates the same.  
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/wait.h>

int main()
{
	pid_t child_pid;
	int status;

	child_pid = fork();
        /* If its > 0 its parent process */ 	
	if (child_pid > 0)
	{
	    wait(&status); // wait for child process to terminate. Plus it will cleanup the child
	    printf("Child exited with code %d\n", WEXITSTATUS(status));
	    //sleep(60);
	}
	/* If its zero then its child process */
	else if (child_pid == 0) 
	{
	    //Let child terminate (zombie)
	    puts("Child exitting....");
	    return 1;
	}
	else
	{
		perror("fork");
	}

	return 0;
}
