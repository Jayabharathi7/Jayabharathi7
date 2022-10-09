/*
NAME       : JAYABHARATHI J
DATE       : 17/9/2022
DESCRIPTION: A07 - WAF to sort the given single linked list
SAMPLE I/P :
1. Insert at last
2. Sort list
3. Print list
4. Exit
Enter your choice : 1
Enter the number that you want to insert at last: 9
1
Enter the number that you want to insert at last: 6
1
Enter the number that you want to insert at last: 10
2
INFO : Sorting successfull
3
6 -> 9 -> 10 -> NULL
1
Enter the number that you want to insert at last: 10
1
Enter the number that you want to insert at last: 9
1
Enter the number that you want to insert at last: 8
2
INFO : Sorting successfull
3
6 -> 8 -> 9 -> 9 -> 10 -> 10 -> NULL
4
*/
#include "sll.h"

int main()
{

	int option, data, key;

        //Initializing the head to NULL//
	Slist *head = NULL; 

	printf("1. Insert at last\n2. Sort list\n3. Print list\n4. Exit\nEnter your choice : ");
	while (1)
	{

		//Ask user options//
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &data);

				//Insert_at_last function call//
				if (insert_at_last(&head, data) == FAILURE) 
				{
					printf("INFO : Insert last failed\n");
				}
				break;
			case 2:
				//Function to sort the link//
				if (sl_sort(&head) == LIST_EMPTY)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Sorting successfull\n");
				}
				break;

			case 3:
				//Print list function call//
				print_list(head);
				break;
			case 4:
				return SUCCESS;
			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}

