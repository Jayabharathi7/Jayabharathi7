/*
 * NAME       : JAYABHARATHI J
 * DATE       : 21.06.2022
 * DESCRIPTION: WAP TO FIND THE MEDIAN OF TWO UNSORTED ARRAYS
 * INPUT      :  Test Case 1: 

Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5

Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5                         
Test Case 2:
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 4
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 13 7 5
Median of array1 : 4
Median of array2 : 9.5                                      
Median of both arrays : 6.75  
 * */

#include<stdio.h>
int main()
{
		//Declaring the variables//
		int size1, size2, i, j, temp;
		//Declaring float variables to get real numbers//
		float med1, med2, med;
		//Reading the value of Array A//
		printf("Enter the 'n' value for Array A: ");
		scanf("%d", &size1);
		//Reading the value of Array B//
		printf("Entet the 'n' value for Array B: ");
		scanf("%d", &size2);
		printf("Enter the elements one by one for Array A: ");
		//Declaring two arrays//
		int arr1[size1], arr2[size2];
		//Storing the elements of Array A//
		for(i = 0; i < size1; i++)
		{
				scanf("%d", &arr1[i]);
		}
		printf("Enter the elements one by one for Array B: ");
		//Storing the elements of Array B//
		for(i = 0; i < size2; i++)
		{
				scanf("%d", &arr2[i]);
		}
		//Sorting the elements in ascending order of Array A//
		for(i = 0; i < size1 - 1; i++)
		{
				for(j = 0; j < size1 - 1 - i; j++)
				{
						if(arr1[j] > arr1[j + 1])
						{
								temp = arr1[j];
								arr1[j] = arr1[j + 1];
								arr1[j + 1] = temp;
						}
				}
		}
		//Sorting the elements in ascending order of Array B//
		for(i = 0; i < size2; i++)
		{
				for(j = 0; j < size2 - 1 - i; j++)
				{
						if(arr2[j] > arr2[j + 1])
						{
								temp = arr2[j];
								arr2[j] = arr2[j + 1];
								arr2[j + 1] = temp;
						}
				}
		}
		//If size of Array A is even, then enters into condition and performs operation of middle 2 elements//
        if(size1 % 2 == 0)
		{
				med1 =(float)(arr1[size1/2] + arr1[(size1/2) - 1])/2;
				printf("Median of array1: %g\n", med1);
		}
		//If size of Array A is odd, then directly takes the middle element//
		else
		{
				med1 = arr1[size1/2];
				printf("Median of array1: %g\n", med1);
		}
		//If size of Array B is even, then enters into condition and performs operation of middle 2 elements//
		if(size2 % 2 == 0)
		{
				med2 =(float)(arr2[size2/2] + arr2[(size2/2) - 1])/2;
				printf("Median of array2: %g\n", med2);
		}
		else
	    //If size of Array B is odd, then directly takes the middle element//
		{
				med2 = arr2[size2/2];
				printf("Median of array2: %g\n", med2);
		}
		//Assigning the sum of middle element of both Array A and B//
		med = ((med1 + med2)/2);
		printf("Median of both arrays: %g\n", med);
		return 0;
}

