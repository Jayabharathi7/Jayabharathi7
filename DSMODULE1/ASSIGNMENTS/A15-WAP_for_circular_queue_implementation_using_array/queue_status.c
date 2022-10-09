#include "queue.h"
//Function definition to check queue is full or not//
int IsQueueFull(Queue_t *q) 
{
    if(q -> count == q -> capacity)
	return SUCCESS;
    else
	return FAILURE;
    
}
//Function definition to check queue is empty or not//
int IsQueueEmpty(Queue_t *q)  
{
    if(q -> count == 0)
	return SUCCESS;
    else
	return FAILURE;
   
}
