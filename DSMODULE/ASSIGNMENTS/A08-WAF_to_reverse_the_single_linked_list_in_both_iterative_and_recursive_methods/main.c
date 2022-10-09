/*
NAME       : JAYABHARATHI J
DATE       : 14/09/2022
DESCRIPTION: A08 - WAF to reverse the single linked list in both iterative and recursive methods
SAMPLE I/P :
1. Insert the element
2. Print list
3. Reverse Iterative
4. Reverse Recusive
5. Exit
Enter your choice : 1
Enter the number that you want to insert at last: 10
1
Enter the number that you want to insert at last: 20
1
Enter the number that you want to insert at last: 30
2
10 -> 20 -> 30 -> NULL
4
INFO : Reverse recursive successfull
2
30 -> 20 -> 10 -> NULL
4
INFO : Reverse recursive successfull
5
*/
#include "sll.h"

//Initializing the head to NULL//
Slist *head = NULL;


int main()
{
	int option, data;

	printf("1. Insert the element\n2. Print list\n3. Reverse Iterative\n4. Reverse Recusive\n5. Exit\nEnter your choice : ");
	while(1)
	{

		//Ask user options//
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &data);

				//Insert_at_last function call//
				if (insert_at_last(&head, data) == FAILURE) //pass by reference//
				{
					printf("INFO : Insert at last failure\n");
				}
				break;

			case 2:
				//Print list function call//
				print_list(head);
				break;
			case 3:
				if (reverse_iter(&head) == LIST_EMPTY)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Reverse iterative successfull\n");
				}
				break;
			case 4:
				if (reverse_recursion(head) == LIST_EMPTY)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Reverse recursive successfull\n");
				}
				break;
			case 5:
				return SUCCESS;
			default: printf("Enter proper choice !!\n");
		}

	}

	return SUCCESS;
}


