#include "main.h"
#include<ctype.h>

int Infix_Prefix_conversion(char *Infix_exp, char *Prefix_exp, Stack_t *stk)
{
    int i = 0, j = 0;
    while(Infix_exp[i])
    {
            //Checking whether it is operand or not//
	    if(isdigit(Infix_exp[i])) 
	    {
	        //If it is it will be stored into prefix array//
	        Prefix_exp[j] = Infix_exp[i];    
	        j++;
	    }
	    //Checking whether it is closed bracket or not//
	    else if(Infix_exp[i] == ')')     
	    {
	        //If it is, it will be directly inserted into stack//
	        push(stk, Infix_exp[i]);        
	    }
	    //Checking whether it is closed breacket or not//
	    else if(Infix_exp[i] == '(')    
	    {
	        //If it is, pop out all the elements until closed bracket//
	        while(stk -> stack[stk -> top] != ')')   
	        {
	                //It will be stored into prefix array//
		        Prefix_exp[j] = peek(stk);      
		        pop(stk);
		        j++;
	        }
	        //Discard the closed and open bracket//
	        pop(stk); 
	    }
	    //Comparing priority and precedence of each operator with operator in stack, the elements will be stored into prefix array//
	    else  
	    {
	        while(stk -> top != -1 && stk -> stack[stk -> top] != ')' && priority(Infix_exp[i]) < priority(stk -> stack[stk -> top]))
	        {
		        Prefix_exp[j] = peek(stk);
		        pop(stk);
		        j++;
	        }
	        push(stk, Infix_exp[i]);
	    }
	    i++;

    }
    //After reaching NULL in infix array, all the elements is stack pop out and stored into prefix array//
    while(stk -> top != -1) 
    {
	    Prefix_exp[j] = peek(stk);
	    pop(stk);
	    j++;
    }
    Prefix_exp[j] = '\0';
}


