#include "main.h"
#include <ctype.h>
int Infix_Postfix_conversion(char *Infix_exp, char *Postfix_exp, Stack_t *stk)
{
    int i = 0, j = 0;
    //Running the loop upto NULL character//
    while(Infix_exp[i])   
    {
            //Checking whether the character is digit or not//
	    if(isdigit(Infix_exp[i])) 
	    {
	        //If it is digit, it will be assigned to an array//
	        Postfix_exp[j] = Infix_exp[i];  
	        j++;
	    }
	    //Checking whether the character is open bracket or not//
	    else if(Infix_exp[i] == '(')
	    {
	        //If it is, it will be inserted into stack//
	        push(stk, Infix_exp[i]);    
	    }
	    //Checking whether the character is closed bracket or not//
	    else if(Infix_exp[i] == ')')    
	    {
	        //If it is, upto open bracket the elements will be stored to postfix array from stack//
	        while(stk -> stack[stk -> top] != '(')  
	        {
		        Postfix_exp[j] = peek(stk);
		        pop(stk);
		        j++;
	        }
	        pop(stk);
	    }
	    else
	    {
	        while(stk -> top != -1 && stk -> stack[stk -> top] != '(' && priority(Infix_exp[i]) <= priority(stk -> stack[stk -> top]))
	        {
	                //If the character is arithmetic operator, based on priority it will be stored to array//
		        Postfix_exp[j] = peek(stk);   
		        //With respect to elements in stack//
		        pop(stk);                  
		        j++;
	        }
	        push(stk, Infix_exp[i]);
	    }
	    i++;
    }
    //After reaching the NULL character in input array, all the elements in stack will be stored into postfix array//
    while(stk -> top != -1)    
    {
	    Postfix_exp[j] = peek(stk);
	    pop(stk);
	    j++;
    }
    Postfix_exp[j] = '\0';
}


