#include "stack.h"

int Pop(Stack_t **top)
{
    //Checking list is empty or not//
    if(*top == NULL)      
	return FAILURE;
    Stack_t *temp = *top;
    //Top will be updated with next node address of first node//          
    *top = temp -> link;     
    //First node will be freed//
    free(temp);        
    return SUCCESS;	
}
