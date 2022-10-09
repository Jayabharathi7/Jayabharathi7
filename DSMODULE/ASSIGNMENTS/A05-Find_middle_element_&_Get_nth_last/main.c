/*
NAME       : JAYABHARATHI J
DATE       : 14/9/2022
DESCRIPTION: A5 - Find middle element & Get nth last
SAMPLE I/P :
1. Insert at last
2. Find Mid
3. Find Nth last
4. Print list 
5. Exit
Enter the Option : 1
Enter the number that you want to insert at last: 1
1
Enter the number that you want to insert at last: 2
1
Enter the number that you want to insert at last: 3
2
Middle element is 2
3
Enter the Number to find the last : 1
1th last is 3
3
Enter the Number to find the last : 2
2th last is 2
3
Enter the Number to find the last : 3
3th last is 1
4
1 -> 2 -> 3 -> NULL
5
*/
#include "sll.h"

int main()
{
	char check_char;
	int option, data, pos, key;

        //Initializing the head to NULL//
	Slist *head = NULL; 


	printf("1. Insert at last\n2. Find Mid\n3. Find Nth last\n4. Print list \n5. Exit\nEnter the Option : ");
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
				if (insert_at_last(&head, data) == FAILURE) //pass by reference
				{
					printf("INFO : Insert last failed\n");
				}
				break;

			case 2:{
					   int mid;
					   if ((mid = find_mid(head, &mid)) == LIST_EMPTY)
					   {
						   printf("INFO : List is empty\n");
					   }
					   else 
					   {
						   printf("Middle element is %d\n", mid);
					   }
				   }
				   break;
			case 3:
				   printf("Enter the Number to find the last : ");
				   scanf("%d", &pos);
				   if ((key = find_nth_last(head, pos, &data)) == FAILURE)
				   {
					   printf("INFO : Position not found\n");
				   }
				   else if (key == LIST_EMPTY)
				   {
				        printf("INFO : List is empty");
				   }
				   else 
				   {
					   printf("%dth last is %d\n", pos, key);
				   }
				   break;
			case 4:
				   //Print list function call//
				   print_list(head);
				   break;
			case 5:
				   return SUCCESS;
			default:
				   printf("Invalid Option\n");
		}


	}

	return SUCCESS;
}
