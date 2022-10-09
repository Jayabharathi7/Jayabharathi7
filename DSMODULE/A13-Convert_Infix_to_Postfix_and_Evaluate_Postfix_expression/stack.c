#include "main.h"
//Function definition for priority of arithmetic operators//
int priority(char opr)
{
    switch (opr)
    {
	    case '+':
	    case '-':
	        return 1;
	    case '*':
	    case '/':
	        return 2;
	    default:
	        return 0;
    }
}
//Function definition for push operation//
void push(Stack_t *stk, int data)    
{
	++(stk -> top);
	stk -> stack[stk -> top] = data;
}
//Function definition for pop operation//
void pop(Stack_t *stk)       
{
	if (stk -> top != -1)
		--(stk -> top);
}
//Function definition for peek operation//
int peek(Stack_t *stk) 
{
	if (stk -> top != -1)
	{
		return stk -> stack[stk -> top];
	}
	return -1;
}

