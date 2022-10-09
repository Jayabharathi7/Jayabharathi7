/*
NAME       : JAYABHARATHI J
DATE       : 14/9/2022
DESCRIPTION: A13 - Convert Infix to Postfix and Evaluate Postfix expression
SAMPLE I/P :
Enter the Infix expression : 2*3-3+8/4/(1+1)
PostFix expression : 23*3-84/11+/+

Result : 4
*/
#include "main.h"
#include <string.h>

int main()
{
        //Array declaration//
	char Infix_exp[50], Postfix_exp[50]; 
	int choice, result, i;
	Stack_t stk;
	//Top is initialized as 1//
	stk.top = -1;     

	printf("Enter the Infix expression : ");
	//Expression will be read from user//
	scanf("%s",Infix_exp);    
        //Function call of infix to prefix conversion//
	Infix_Postfix_conversion(Infix_exp, Postfix_exp, &stk); 
	printf("PostFix expression : %s\n", Postfix_exp);
	stk.top = -1;                              
	//Function call of postfix evaluation//
	result = Postfix_Eval(Postfix_exp, &stk);   
	printf("\nResult : %d\n", result);
	return 0;
}
