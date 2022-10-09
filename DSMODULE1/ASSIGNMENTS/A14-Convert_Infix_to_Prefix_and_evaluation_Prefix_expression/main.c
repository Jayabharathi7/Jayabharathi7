/*
NAME       : JAYABHARATHI J
DATE       : 14/9/2022
DESCRIPTION: A14 - Convert Infix to Prefix and evaluation Prefix expression
SAMPLE I/P :
Enter the Infix expression : 2*3
PreFix expression : *23

Result : 6
*/
#include "main.h"
#include<string.h>

//Function definition of string reverse//
void strrev(char *string)           
{
    int i, n = strlen(string);
    char temp;
    for(i = 0; i < n/2; i++)
    {
	    temp = string[i];
	    string[i] = string[n - 1 - i];
	    string[n - 1 - i] = temp;
    }

    string[n] = '\0';
}
int main()
{
        //Array declaration//
	char Infix_exp[50], Prefix_exp[50], ch;  
	int choice, result;
	Stack_t stk;
	//Top is initialized as -1//
	stk.top = -1;                 

	printf("Enter the Infix expression : ");
	//Expression will be read from the user//
	scanf("%s", Infix_exp);          
        //Function call to reverse the string//
	strrev(Infix_exp);     
	//Function call for infix to prefix conversion//
	Infix_Prefix_conversion(Infix_exp, Prefix_exp, &stk); 
	strrev(Prefix_exp);
	printf("PreFix expression : %s\n", Prefix_exp);

	stk.top = -1;

	strrev(Prefix_exp);
//	printf("%s\n",Prefix_exp);
        //Function call for prefix evaluation//
	result = Prefix_Eval(Prefix_exp, &stk);  

	printf("\nResult : %d\n", result);
	return 0;
}


