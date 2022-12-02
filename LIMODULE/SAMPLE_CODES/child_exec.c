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
#include <sys/types.h>
#include <sys/wait.h>

#define SIZE 1024
int main()
{
	pid_t child_pid;
	int status;
	char cmd[SIZE];

BEGIN:
	printf("> ");
	fgets(cmd, sizeof(cmd), stdin);
	cmd[strlen(cmd) - 1] = '\0'; //Remove trailing \n

	child_pid = fork();
	if (child_pid > 0)
	{
	    //Make parent wait for child
	    wait(&status);
	    goto BEGIN;
	    //printf("Child exitted with status %d\n", WEXITSTATUS(status));
	}
	else if (child_pid == 0) 
	{
	    //Let child execute a new program
	    //printf("Child invoking %s ....\n", cmd);
	    execlp(cmd, cmd, NULL);
	    perror("exec");
	    return 1;
	}
	else
	{
		perror("fork");
	}

	return 0;
}
