#include "queue.h"

//Function to insert the element//
int enqueue(Queue_t *q, int data)
{
    //Checking queue is full or not//
    if(IsQueueFull(q) == SUCCESS)   
	    return FAILURE;
    if(q -> front == -1)                    
	    q -> front = 0;
    //For every enque process rear will be incremented//	    
    q -> rear = (q -> rear + 1) % q -> capacity;  
    (q -> count)++;
    //New data will be assigned//
    q -> Que[q -> rear] = data;  
    return SUCCESS;
}
