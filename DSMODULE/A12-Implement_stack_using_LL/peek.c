#include "stack.h"

int Peek(Stack_t **top)
{
    //Checking the stack is empty or not//
    if(*top == NULL) 
        return FAILURE;
    Stack_t *temp = *top;
    //It will return the element at top of stack//
    return temp -> data;
}
