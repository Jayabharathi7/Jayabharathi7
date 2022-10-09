#include "stack.h"

//Function for poping the element//
int Pop(Stack_t *s)
{
    //Checking stack is empty or not//
    if(s -> top == -1)   
	    return FAILURE;
    //While deletion top will be decremented//	    
    (s -> top)--;     
    return SUCCESS;    
	
}
