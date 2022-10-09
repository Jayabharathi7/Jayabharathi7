/*
NAME       : JAYABHARATHI J
DATE       : 14/9/2022
DESCRIPTION: A11 - Implement stack using array
SAMPLE I/P:
SAMPLE O/P:
Enter the size of the stack: 4
1. Push
2. Pop
3. Display Stack
4. Peek(Element at Top)
5. Exit
Enter your choice : 3
INFO : Stack is empty
1
Enter the element to be pushed in stack : 10
1
Enter the element to be pushed in stack : 20
1
Enter the element to be pushed in stack : 30
1
Enter the element to be pushed in stack : 40
3
Top -> 40 30 20 10 
*/
#include "stack.h"

int create_stack(Stack_t *stk, int size)
{
    //Dynamic memory allocation// 
    stk -> stack = malloc(sizeof(int)*size); 
    //Checking the memory is allocated or not//
    if(stk -> stack == NULL)         
	    return FAILURE;
    stk -> capacity = size;            
    stk -> top = -1;
    return SUCCESS;
}


int main()
{
	int choice, element, peek, size;
	//Declaring the variable stk of type Stack_t//
	Stack_t stk;                    

        printf("Enter the size of the stack: ");
        scanf("%d", &size);
    
        create_stack(&stk, size);
	printf("1. Push\n2. Pop\n3. Display Stack\n4. Peek(Element at Top)\n5. Exit\nEnter your choice : ");
    
	while (1)
	{
		scanf("%d", &choice);
		switch(choice)
		{
		        //Case to insert an element//
			case 1:                                            
				printf("Enter the element to be pushed in stack : ");
				scanf("%d", &element);
				if (Push(&stk, element) == FAILURE)
				{
					printf("INFO : Stack Full\n");
				} 
				break;
			//Case to delete an element//	
			case 2:                                              
				if (Pop(&stk) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
				    printf("INFO : Pop operation is successfull\n");
				}
				break;
			//Case to print all the elements in stack//	
			case 3:
				Peep(stk);                                    
				break;
			//Case to print the value with respect to top//	
			case 4:
				if ((peek = Peek(&stk)) == FAILURE)        
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
					printf("INFO : Peek element is %d\n", peek);
				}
				break;
			case 5:
				return SUCCESS;
			default:
				printf("Invalid Choice.\n");
				break;
		}
	}
	return 0;
}

