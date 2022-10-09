#include "main.h"
#include <ctype.h>

int Postfix_Eval(char *Postfix_exp, Stack_t *stk)
{
    int i = 0, operand1, operand2, result;
    while(Postfix_exp[i])
    {
            //Checking whether postfix element is digit or not//
	    if(isdigit(Postfix_exp[i]))   
	    {
	        //If it is, it will be pushed into stack//
	        push(stk, Postfix_exp[i] - 48);   
	    }
	    else
	    {
	        //If it is operator, two element from stack taken out to perform arithmetic operation//
	        operand2 = peek(stk);  
	        pop(stk);
	        operand1 = peek(stk);
	        pop(stk);
	        //Arithmetic operation will be done and result will be stored back to stack//
	        switch(Postfix_exp[i])  
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
    //Finally only one element stored in the stack, it will be result//
    result = peek(stk);  
    pop(stk);
    return result;
}
