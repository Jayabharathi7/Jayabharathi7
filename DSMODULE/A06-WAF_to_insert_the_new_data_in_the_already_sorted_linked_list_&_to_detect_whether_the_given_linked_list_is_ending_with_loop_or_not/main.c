/*
NAME       : JAYABHARATHI J
DATE       : 14/9/2022
DESCRIPTION: A06 - WAF to insert the new data in the already sorted linked list & to detect    whether the given linked list is ending with loop or not
SAMPLE I/P :
1. Insert sorted
2. Find loop
3. Create loop
4. Print list
5. Exit
Enter Your choice : 1
Enter the data to be inserted : 12
4
12 -> NULL
1
Enter the data to be inserted : 10
4
10 -> 12 -> NULL
1
Enter the data to be inserted : 13
4
10 -> 12 -> 13 -> NULL
1
Enter the data to be inserted : 9
4
9 -> 10 -> 12 -> 13 -> NULL
1
Enter the data to be inserted : 5
4
5 -> 9 -> 10 -> 12 -> 13 -> NULL
3
Enter a data to create the loop : 10
INFO : Loop created successfully
2
INFO : Loop found
5


*/
#include "sll.h"

int main()
{
	int option, data, ret;

        //Initializing the head to NULL//
	Slist *head = NULL; 

	printf("1. Insert sorted\n2. Find loop\n3. Create loop\n4. Print list\n5. Exit\nEnter Your choice : ");
	while (1)
	{

		//Ask user options//
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("Enter the data to be inserted : ");
				scanf("%d", &data);
				if (insert_sorted(&head, data) == -1)
				{
					printf("INFO : Insert sorted failure\n");
				}
			
				break;
			case 2:
				//Function to find the loop//
				if ((ret = find_loop(head)) == LOOP_NOT_FOUND)
				{
					printf("INFO : Loop is not found\n");
				}
				else if (ret == LIST_EMPTY)
				{
					printf("INFO : List is empty\n");
				}
				else
					printf("INFO : Loop found\n");
				break;
			case 3:
				printf("Enter a data to create the loop : ");
				scanf("%d", &data);

				//Insert_at_last function call//
				if ((ret = create_loop(&head, data)) == LIST_EMPTY) //pass by reference//
				{
					printf("INFO : List is empty\n");
				}
				else if (ret == DATA_NOT_FOUND)
				{
					printf("INFO : %d not found at the list\n", data);
				}
				else
				{
					printf("INFO : Loop created successfully\n");
				}
				break;

			case 4:
				//Print list function call//
				print_list(head);
				break;
			case 5: return SUCCESS;
			default: printf("Enter proper choice !!\n");
					 break;
		}

	}

	return SUCCESS;
}

