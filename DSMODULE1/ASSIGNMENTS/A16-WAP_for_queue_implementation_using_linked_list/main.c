/*
NAME       : JAYABHARATHI J
DATE       : 14/9/2022
DESCRIPTION: A16 - WAP for queue implementation using linked list
SAMPLE I/P :
1. Enqueue
2. Dequeue
3. Print Queue
4. Exit
Enter the option : 1
Enter the element you want to insert : 12
3
Front -> 12 <- Rear
1
Enter the element you want to insert : 23
1
Enter the element you want to insert : 34
1
Enter the element you want to insert : 45
3
Front -> 12 -> 23 -> 34 -> 45 <- Rear
2
INFO : Dequeue successfull
3
Front -> 23 -> 34 -> 45 <- Rear
4
*/

#include "queue.h"

int main()
{
	Queue_t *front = NULL, *rear = NULL;

	int choice, data;

	printf("1. Enqueue\n2. Dequeue\n3. Print Queue\n4. Exit\nEnter the option : ");

	while (1)
	{
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
			        //Function to enqueue the queue//
				printf("Enter the element you want to insert : ");
				scanf("%d", &data);
				if (enqueue(&front, &rear, data) == FAILURE)
				{
					printf("INFO : Queue full\n");
				}
				break;
			case 2:
				//Function to dequeue the queue//
				if (dequeue(&front, &rear) == FAILURE)
				{
					printf("INFO : Queue is empty\n");
				}
				else
				{
					printf("INFO : Dequeue successfull\n");
				}
				break;
			case 3:
				//Function to print the queue//
				print_queue(front, rear);
				break;
			case 4:
				return SUCCESS;
			default:
				printf("Invalid option !!!\n");
		}

	}
}


