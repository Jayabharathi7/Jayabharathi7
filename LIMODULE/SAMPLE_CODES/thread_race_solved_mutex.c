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
#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_mutex_t lock; //Mutex lock variable

static int counter;
void* thread_function(void *arg)
{
    while (1)
    {
	pthread_mutex_lock(&lock); //Acquire the lock before entering Critical section (C.S)
	counter = 0;
	counter += 5;
	counter += 10;
	printf("%d\n", counter);
	pthread_mutex_unlock(&lock); //Unlock so that other threads can access C.S now

    }
    return NULL;
}

int main(void)
{
    pthread_t thread_1, thread_2;

    //Initialize the lock. Lock state is unlocked by default
    pthread_mutex_init(&lock, NULL);

    pthread_create(&thread_1,NULL,thread_function,NULL);
    pthread_create(&thread_2,NULL,thread_function,NULL);

    pthread_join(thread_1,NULL);
    pthread_join(thread_2,NULL);

    return 0;
}
