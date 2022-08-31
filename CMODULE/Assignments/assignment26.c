/*
 * NAME       : JAYABHARATHI J
 * DATE       : 03.07.2022
 * DESCRIPTION: WAP TO FIND 2ND LARGEST ELEMENT IN AN ARRAY
 * INPUT      :  Test Case 1:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Second largest element of the array is 5
Test Case 2:
Enter the size of the Array : 4
Enter the elements into the array: 66 22 11 3
Second largest element of the array is 22
 * */

#include <stdio.h>
//Function prototype//
int sec_largest(int arr[], int size);
//Main Function//
int main()
{
		//Declaring the variables//
        int size, ret;
		//Reading the size of array//
        printf("Enter the size of the Array: ");
        scanf("%d", &size);
        int arr[size];
		//Function call//
        ret = sec_largest(arr, size);
		//Prints the result//
        printf("Second largest element of the array is %d\n", ret);
}
//Function definition//
int sec_largest(int arr[], int size)
{
		//Declaring the variables//
        int i, first, second;
	    printf("Enter the elements into the array: ");
	    //Storing the array elements//	
		for(i = 0; i < size; i++)
		{
				scanf(" %d", &arr[i]);
		}
		first = arr[0];
		for(i = 0; i < size; i++)
		{
				//Condition to store the first largest element//
				if(first < arr[i])
				{
						first = arr[i];
				}
		}
		second = 0;
		for(i = 0; i < size; i++)
		{
				//Condition to store the second largest element//
				if(arr[i] < first && arr[i] > second)
				{
						second = arr[i];
				}
		}
		//Returning the value of second//
		return second;
}


