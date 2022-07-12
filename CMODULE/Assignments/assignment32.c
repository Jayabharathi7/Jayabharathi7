/*
 * NAME       : JAYABHARATHI J
 * DATE       : 08.07.2022
 * DESCRIPTION: PRINT THE VALUES IN SORTED ORDER WITHOUT MODIFYING OR COPYING ARRAY 
 * INPUT      : Enter the size: 5
 *              Enter 5 elements
 *              10 1 3 8 -1
 * OUTPUT     : After sorting: -1 1 3 8 10
 *              Original array values 10 1 3 8 -1
 * */

#include<stdio.h>
//Function prototype//
void print_sort(int arr[], int size);
//Main Function//
int main()
{
		//Declaring the variables//
		int size, iter;
		//Reading the size from the user//
		printf("Enter the size: ");
		scanf("%d", &size);
		int arr[size];
		printf("Enter %d elements\n", size);
		//Storing the array values//
		for(iter = 0; iter < size; iter++)
		{
				scanf("%d", &arr[iter]);
		}
		//Function call//
		print_sort(arr, size);
		printf("\n");
		printf("Original array values ");
		//Running the loop to get the original values//
		for(iter = 0; iter < size; iter++)
		{
				printf("%d ", arr[iter]);
		}
		printf("\n");
		return 0;
}
//Function Definition//
void print_sort(int arr[], int size)
{
		//Declaring the variables//
		int i, j, first = arr[0], second, large = arr[0];
		printf("After sorting: ");
		//Running the loop to get the largest value//
		for(j = 0; j < size; j++)
		{
				if(large < arr[j])
						large = arr[j];
		}
		second = large;
		//Running the loop to get the smallest value//
		for(j = 0; j < size; j++)
		{
				if(first > arr[j])
						first = arr[j];
		}
		printf("%d ", first);
		//Runnig the loop to get the elements in sorted order//
		for(i = 1; i < size; i++)
		{
				for(j = 0; j < size; j++)
				{
						//Condition to store the second value//
						if(second > arr[j] && arr[j] > first)
								second = arr[j];
				}
				printf("%d ", second);
				first = second;
				second = large;
		}
}

