/*
NAME       : JAYABHARATHI J
DATE       : 20/09/2022
DESCRIPTION: WAF to sort given array using merge sort
SAMPLE I/P :
Input	5 4 3 2 1
Output	1 2 3 4 5
*/

#include "main.h"
//Main Function//
int main()
{
        //Declaring the variables//
	int i, limit;          

	//Scanning the size//
	printf("Enter the size of an array\n");
	scanf("%d", &limit);

	//Declaring the array with size//
	int arr[limit];

		
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
	        //Scanning the array elements//
		scanf("%d", &arr[i]);
	}
		
	//Calling the function to bubble sort//
	merge_sort(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
		
	return 0;
}
