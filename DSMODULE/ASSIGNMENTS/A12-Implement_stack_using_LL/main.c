/*
NAME       : JAYABHARATHI J
DATE       : 14/9/2022
DESCRIPTION: A12 - Implement stack using LL
SAMPLE I/P :
1. Push
2. Pop
3. Display Stack
4. Peek(Element at Top)
5. Exit
Enter choice: 1
Enter the element you have to insert at the first : 10
1
Enter the element you have to insert at the first : 20
1
Enter the element you have to insert at the first : 30
4
INFO : Peek element is 30
3
30 -> 20 -> 10 -> NULL
2
INFO : Pop operation is successfull
3
20 -> 10 -> NULL
2
INFO : Pop operation is successfull
3
10 -> NULL
2
INFO : Pop operation is successfull
3
INFO : Stack is empty
5
*/
#include "stack.h"

int main()
{
	int option, data, peek;

	//Initializing the top as NULL//
	Stack_t *top = NULL;

	printf("1. Push\n2. Pop\n3. Display Stack\n4. Peek(Element at Top)\n5. Exit\nEnter choice: ");

	while (1)
	{

		//Ask user options//
		scanf("%d", &option);

		switch (option)
		{
			case 1:

				//To Push the element//
				printf("Enter the element you have to insert at the first : ");
				scanf("%d", &data);
				if ((Push(&top, data)) == FAILURE)
				{
					printf("INFO : Push operation Failure\n");
				}
				break;
			case 2:

				//To Pop the top of the value in the stack//
				if ((Pop(&top)) == FAILURE)
				{
					printf("INFO : Stack is empty\n");
				}
				else
				{
				    printf("INFO : Pop operation is successfull\n");
				}
				break;
			case 3:
				//Printing or displaying the elements//
				Peep(top);
				break;
			case 4:
				//To find the Peek element in the stack//
				if ((peek = Peek(&top)) == FAILURE)
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
				printf("Enter proper choice !!\n");
				break;
		}

	}

	return SUCCESS;
}

