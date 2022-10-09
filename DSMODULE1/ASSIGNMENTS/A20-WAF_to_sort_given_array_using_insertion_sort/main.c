/*
NAME       : JAYABHARATHI J
DATE       : 18/9/2022
DESCRIPTION: A20 - WAF to sort given array using insertion sort
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
	data_t arr[limit];

		
	printf("Enter the array elements\n");
	for (i = 0; i < limit; i++)
	{
	        //Scanning the array elements//
		scanf("%d", &arr[i]);
	}
		
	//Calling the function to bubble sort//
	insertion(arr, limit);
	
	printf("Sorted array is : ");
	for (i = 0; i < limit; i++)
	{
	    printf("%d ", arr[i]);
	}
		
	return 0;
}
