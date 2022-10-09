#include "queue.h"

int enqueue(Queue_t **front, Queue_t **rear, int data)
{
        //Dynamic memory allocation for new node//
	Queue_t *new = malloc(sizeof(Queue_t)); 
	//Checking node is created or not//
	if(new == NULL)              
	    return FAILURE;
	//New data will be updated//    
	new -> data = data;
	//Checking list is empty or not//
	if(*front == NULL)         
	{
	    //If it is, new node will be inserted then front and rear will be updated//
	    new -> link = NULL;  
	    *front = new;
	    *rear = new;
	    return SUCCESS;
	}
	Queue_t *temp = *rear;
        //For non-empty list, new node will be inserted at last//
	new -> link = temp -> link; 
	temp -> link = new;
	//Rear will be updated//   
	*rear = new;   
	return SUCCESS;
}
