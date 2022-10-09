/*
NAME       : JAYABHARATHI J
DATE       : 29/09/2022
DESCRIPTION: A28 - WAF to sort given array using heap sort.
SAMPLE I/P and O/P:
Enter the size of an array
5
Enter the array elements
4 1 2 6 7
Sorted array is : 1 2 4 6 7
*/
#include "main.h"

//Main Function//
int main()
{
	int i, limit;

	//Scanning the size//
	printf("Enter the size of an array\n");
	scanf("%d", &limit);

	//Declaring the array with size//
	int heap[limit];

		
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
	        //Scanning the array elements//
		scanf("%d", &heap[i]);
	}
		

        build_maxheap(heap, limit);
    
	//Calling the function to bubble sort//
	heap_sort(heap, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", heap[i]);
	}
		
	return 0;
}



