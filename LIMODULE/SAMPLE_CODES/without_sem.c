/*------------------------------------------------------------------------------ 
 *
 *   Author         : Emertxe (http://www.emertxe.com) 
 *   Date           : Thu 12 May 2016 15:59:19 IST
 *   File           : t033.c
 *   Title          : Semaphore usage - Multi-process condition  
 *   Description    : Race condition is common in multi-processing situation
 *                    as shared data condition will come there as well.Problem 
 *                    is solved by process semaphores, demonstrated here. 
 *
 *----------------------------------------------------------------------------*/
#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	int pid, i, j;
	pid = fork();
	if(pid == 0)
	{
		printf("child before semop\n");
                char *s = "ABCDE";
		printf("Child in critical section\n");
                for( i = 0; i <= 4 ; i++)
                {
                   putchar(s[i]);
                   fflush(stdout);
                   sleep(rand() % 2);
                   putchar(s[i]);
                   fflush(stdout);
                   sleep(rand() % 2);
                } 
		printf("\nChild coming out of critical section\n");
	}
	else
	{
		printf("parent before semop\n");
                char *s1 = "hijkl";
		printf("Parent in critical section\n");
                for( j = 0; j <= 4 ; j++)
                {
                   putchar(s1[i]);
                   fflush(stdout);
                   sleep(rand() % 2);
                   putchar(s1[i]);
                   fflush(stdout);
                   sleep(rand() % 2);
                } 
		//sleep(10);
		printf("\nParent coming out of critical section\n");
	}
	return 0;
}
