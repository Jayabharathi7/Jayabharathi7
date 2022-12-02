#include <stdio.h>
#include <string.h>
#include <pthread.h>

//Tokenize a string
void *thread1_func(void *dummy)
{
    char str[] = "Bengaluru:Chennai:Kolkata:Delhi";
    char *token;

    token = strtok(str, ":");
    printf("TID %lu: Token: %s\n", pthread_self(), token);

    while((token = strtok(NULL, ":")) != NULL)
    {
	printf("TID %lu: Token: %s\n", pthread_self(), token);
	sleep(1);
    }
}

//Tokenize a string
void *thread2_func(void *dummy)
{
    char str[] = "Apple,Banana,Mango,Orange";
    char *token;

    token = strtok(str, ",");
    printf("TID %lu: Token: %s\n", pthread_self(), token);

    while((token = strtok(NULL, ",")) != NULL)
    {
	printf("TID %lu: Token: %s\n", pthread_self(), token);
	sleep(1);
    }
}

int main()
{
    pthread_t tid1, tid2;

    //Create 2 threads
    pthread_create(&tid1, NULL, thread1_func, NULL);
    pthread_create(&tid2, NULL, thread2_func, NULL);

    //Wait for threads
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
}
