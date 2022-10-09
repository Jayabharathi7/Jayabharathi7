/*
NAME       : JAYABHARATHI J
DATE       : 14/9/2022
DESCRIPTION: A15 - WAP for circular queue implementation using array
SAMPLE I/P :
Enter the size of the queue : 4
1. Enqueue
2. Dequeue
3. Print Queue
4. Exit
Enter the option : 1
Enter the element you want to insert : 10
1
Enter the element you want to insert : 20
1
Enter the element you want to insert : 30
1
Enter the element you want to insert : 40
1
Enter the element you want to insert : 50
INFO : Queue full
4
*/
#include "queue.h"
//Function definition to create queue//
int create_queue(Queue_t *q, int size)      
{
    //Dynamic memory allocation for integer array//
    q -> Que = malloc(sizeof(int)*size);   
    if(q -> Que == NULL)                      
	    return FAILURE;
    q -> rear = -1;
    q -> front = -1;
    q -> count = 0;
    q -> capacity = size;
    return SUCCESS;
  
}

int main()
{
	Queue_t q;
	int size;
	printf("Enter the size of the queue : ");
	scanf("%d", &size);
	if (create_queue(&q, size) == FAILURE)
	{
	    printf("INFO : Queue not created\n");
	    return FAILURE;
	}

	char ch;
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
				if (enqueue(&q, data) == FAILURE)
				{
					printf("INFO : Queue full\n");
				}
				break;
			case 2:
				//Function to dequeue the queue//
				if (dequeue(&q) == FAILURE)
				{
					printf("INFO : Queue is empty\n");
				}
				else
				{
				        //printf("%d\n",dequeue(&q));//
					printf("INFO : Dequeue successfull\n");
				}
				break;
			case 3:
				//Function to print the queue//
				print_queue(q);
				break;
			case 4:
				return SUCCESS;
			default:
				printf("Invalid option !!!\n");
		}

	}
}

