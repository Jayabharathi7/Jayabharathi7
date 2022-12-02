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
	int semid, pid, i, j;
	struct sembuf sop;
	semid = semget(0x20, 1, IPC_CREAT | 0666);
	semctl(semid, 0, SETVAL, 1);
	pid = fork();
	if(pid == 0)
	{
                sleep(1);
		printf("child before semop\n");
                char *s = "ABCDE";
		for( i = 0; i <= 4 ; i++)
		{
		  sop. sem_num = 0; 
		  sop.sem_op = -1;
		  sop.sem_flg = 0;
		  semop(semid, &sop, 1);
		//printf("Child in critical section\n");
                   putchar(s[i]);
                   fflush(stdout);
                   sleep(rand() % 2);
                   putchar(s[i]);
                   fflush(stdout);
		//printf("\nChild coming out of critical section\n");
		   sop.sem_num = 0; 
		   sop.sem_op = 1; 
		   sop.sem_flg = 0;
		   semop(semid, &sop, 1);
                   sleep(rand() % 2);
                } 
	}
	else
	{
		printf("parent before semop\n");
                char *s1 = "hijkl";
                for( j = 0; j <= 4 ; j++)
                {
		   sop. sem_num = 0; 
		   sop.sem_op = -1;
		   sop.sem_flg = 0;
		   semop(semid, &sop, 1);
		//printf("Parent in critical section\n");
                   putchar(s1[i]);
                   fflush(stdout);
                   sleep(rand() % 2);
                   putchar(s1[i]);
                   fflush(stdout);

		//sleep(10);
		//printf("\nParent coming out of critical section\n");
		   sop.sem_num = 0; 
		   sop.sem_op = 1; 
		   sop.sem_flg = 0;
		   semop(semid, &sop, 1);
                   sleep(rand() % 2);
                } 
	}
	return 0;
}
