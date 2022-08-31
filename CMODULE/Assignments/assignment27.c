/*
 * NAME       : JAYABHARATHI J
 * DATE       : 03.07.2022
 * DESCRIPTION: WAP TO FIND 3RD LARGEST ELEMENT IN AN ARRAY
 * INPUT      :  Test Case 1:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
Third largest element of the array is 4
Test Case 2:
Enter the size of the Array : 4
Enter the elements into the array: 66 22 11 3
Third largest element of the array is 11
 * */

#include <stdio.h>
//Function prototype//
int third_largest(int arr[], int size);
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
        ret = third_largest(arr, size);
		//Prints the result//
        printf("Third largest element of the array is %d\n", ret);
}
//Function definition//
int third_largest(int arr[], int size)
{
        int i, first, second, third;
	    printf("Enter the elements into the array: ");
	    //Storing the elements in array//	
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
		third = 0;
		for(i = 0; i < size; i++)
		{
				//Condition to store the third largest element//
				if(arr[i] < second && arr[i] > third)
				{
						third = arr[i];
				}
		}
		//Returning the value of third//
		return third;
}



