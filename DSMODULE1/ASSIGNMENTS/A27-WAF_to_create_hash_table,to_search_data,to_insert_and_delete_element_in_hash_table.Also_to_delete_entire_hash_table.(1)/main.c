/*
NAME       : JAYABHARATHI J
DATE       : 29/09/2022
DESCRIPTION: A27 - WAF to create hash table, to search data, to insert and delete element in hash table. Also to delete entire hash table.
SAMPLE I/P and O/P:
Enter the size of arr: 4
1. Insert data in HT
2. Search data in HT
3. Delete data from HT
4. Destroy HT
5. Display HT
6. Exit
Enter you choice : 5
[0] - -1
[1] - -1
[2] - -1
[3] - -1
3
Enter the data: 21
INFO : Data is not found
1 
Enter the data: 10
1
Enter the data: 23
1
Enter the data: 22
1
Enter the data: 22
1
Enter the data: 24
1
Enter the data: 45
5
[0] - 24
[1] - 45
[2] - 10 -> 22 -> 22
[3] - 23
4
INFO: Hashtable deleted successfully
5
[0] - -1
[1] - -1
[2] - -1
[3] - -1  
6
*/
#include"hash.h" 

int main()
{
	int size, data, choice, index;
	char opt;
	printf("Enter the size of arr: ");
	scanf("%d", &size);
	hash_t arr[size];
	create_HT(arr, size);
	
	printf("1. Insert data in HT\n2. Search data in HT\n3. Delete data from HT\n4. Destroy HT\n5. Display HT\n6. Exit\nEnter you choice : ");
	while(1)
	{
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter the data: ");
				scanf("%d", &data);
				if(insert_HT(arr, data, size) == FAILURE)
				{
					printf("INFO : Insert data is Failure\n");
				}
				
				break;

			case 2:
				printf("Enter the data: ");
				scanf("%d", &data);
				if((search_HT(arr, data, size)) == DATA_NOT_FOUND)
				{
					printf("INFO : Data not found\n");
				}
				else
				{
					printf("INFO : %d is found at the index %d\n", data, data % size);
				}
				break;

			case 3:
				printf("Enter the data: ");
				scanf("%d", &data);
				if(delete_element(arr, data, size) == DATA_NOT_FOUND)
				{
					printf("INFO : Data is not found\n");
				}
				else
				{
					printf("INFO : %d is deleted successfully\n",data);
				}
				break;

			case 4:
				if(destroy_HT(arr,size) == SUCCESS)
				{
					printf("INFO: Hashtable deleted successfully\n");
				}
				else
				{
					printf("INFO: Delete hashtable is Failure\n");
				}
				break;

			case 5:
				display_HT(arr, size);
				break;
			case 6:
				return SUCCESS;

			default:
				printf("Invalid input\n");
		}
	}
}




