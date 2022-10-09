#include "queue.h"

//Function to deque the element//
int dequeue(Queue_t *q)
{
    //Checking queue is empty or not//
    if(IsQueueEmpty(q) == SUCCESS) 
	    return FAILURE;
    //For every dequeue process front will be incremented//	     
    q -> front = (q -> front + 1) % q -> capacity;
    //Count will be decremented//
    (q -> count)--;  
    return SUCCESS;
}
