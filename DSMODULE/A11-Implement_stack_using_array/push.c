#include "stack.h"

//Fuction for inserting the element//
int Push(Stack_t *s, int element)
{
    //Checking stack is full or not//
    if(s -> top == (s -> capacity)-1) 
	    return FAILURE;
    //While insertion top will be incremented by 1//	    
    (s -> top)++;                
    //The element is assigned to the index of where the top pointing//
    s -> stack[s -> top] = element; 
    return SUCCESS;
	
}
