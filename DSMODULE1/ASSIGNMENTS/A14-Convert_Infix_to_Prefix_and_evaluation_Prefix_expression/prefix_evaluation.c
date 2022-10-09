#include "main.h"
#include<ctype.h>

int Prefix_Eval(char *Prefix_exp, Stack_t *stk)
{
    int i = 0, operand1, operand2, result;
    while(Prefix_exp[i])
    {
        //Checking whether it is operand or not//
	if(isdigit(Prefix_exp[i]))       
	{
	    //If it is, it will be stored into stack//
	    push(stk, Prefix_exp[i] - 48);  
	}
	else
	{
	    operand1 = peek(stk);
	    pop(stk);
	    operand2 = peek(stk);
	    pop(stk);
	    //Arithmetic operation will be done and result will be stored back to stack//
	    switch(Prefix_exp[i]) 
	    {
		case '+':
		    push(stk, operand1+operand2);
		    break;
		case '-':
		    push(stk, operand1-operand2);
		    break;
		case '*':
		    push(stk, operand1*operand2);
		    break;
		case '/':
		    push(stk, operand1/operand2);
		    break;
	    }


	}
	i++;
    }
    result = peek(stk);
    pop(stk);
    return result;
}

