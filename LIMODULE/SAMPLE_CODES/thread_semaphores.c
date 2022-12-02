/*------------------------------------------------------------------------------ 
 *
 *   Author         : Emertxe (http://www.emertxe.com) 
 *   Date           : Thu 12 May 2016 15:59:19 IST
 *   File           : t029.c
 *   Title          : POSIX threads (pThread) - Race conditions 
 *   Description    : Threads are prone to race conditions due to shared data 
 *                    problem. Here is an example of global variable being the
 *                    reason for race condition. 
 *
 *----------------------------------------------------------------------------*/
#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>

sem_t count;
static int counter;
void* thread_function(void *arg)
{
    while (1)
    {
      sem_wait(&count); //before accessing the resourse 
	counter = 0;
	counter += 5;
	counter += 10;
	printf("%d\n", counter);
      sem_post(&count);  //After freeing resource


    }
    return NULL;
}

int main(void)
{
    pthread_t thread_1, thread_2;

    sem_init(&count, 0, 3);


    pthread_create(&thread_1,NULL,thread_function,NULL);
    pthread_create(&thread_2,NULL,thread_function,NULL);

    pthread_join(thread_1,NULL);
    pthread_join(thread_2,NULL);

    return 0;
}

