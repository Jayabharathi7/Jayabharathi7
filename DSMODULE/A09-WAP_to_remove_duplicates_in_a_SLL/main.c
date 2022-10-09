/*
NAME       : JAYABHARATHI J
DATE       : 14/9/2022
DESCRIPTION: WAP to remove duplicates in a SLL
SAMPLE I/P :
1. To insert the last element
2. To print the list
3. To remove the duplicates
4. Exit
Enter your option : 1
Enter the number that you want to insert at last: 11
1
Enter the number that you want to insert at last: 11
1
Enter the number that you want to insert at last: 11
1
Enter the number that you want to insert at last: 11
1
Enter the number that you want to insert at last: 11
2
11 -> 11 -> 11 -> 11 -> 11 -> NULL
3
INFO : Duplicates are removed Successfully
2
11 -> NULL
4

*/
#include "sll.h"

int main()
{
	int option, data;

        //Initializing the head to NULL//
	Slist *head = NULL; 

	printf("\n1. To insert the last element\n2. To print the list\n3. To remove the duplicates\n4. Exit\nEnter your option : ");
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
				if (insert_at_last(&head, data) == FAILURE) //Pass by reference//
				{
					printf("INFO : insert last failure\n");
				}
				break;

			case 2:
				//Print list function call//
				print_list(head);
				break;
			case 3:
				if (remove_duplicates(&head) == FAILURE)
				{
					printf("INFO : List is empty\n");
				}
				else
				{
					printf("INFO : Duplicates are removed Successfully\n");
				}
				break;
			case 4:
				return SUCCESS;
			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}

