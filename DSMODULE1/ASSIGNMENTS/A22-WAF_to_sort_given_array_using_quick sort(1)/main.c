/*
NAME       : JAYABHARATHI J
DATE       : 17/9/2022
DESCRIPTION: A22 - WAF to sort given array using quick sort
SAMPLE I/P :
Enter the size of an array
5
Enter the array elements
10 9 6 21 25
Sorted array is : 6 9 10 21 25 
*/

#include "main.h"

//Main Function//
int main()
{
	int i, limit, option;

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
	quick_sort(arr, 0, limit - 1);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
		
	return 0;
}
