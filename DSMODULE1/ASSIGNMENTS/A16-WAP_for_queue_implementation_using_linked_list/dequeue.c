#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
    //Checking list is empty or not//
    if(*front == NULL)         
	    return FAILURE;
    //Checking list contains single node or not//	    
    if(*front == *rear)      
    {
            //If it is, node will be deleted then front and rear will be updated//
	    free(*front);  
	    *front = *rear = NULL;
	    return SUCCESS;
    }
    //For list contains multiple nodes, deletion at first will occur//
    Queue_t *temp = *front; 
    //Front will be updated//
    *front = temp -> link;  
    free(temp);
    return SUCCESS;
}

