/*
 * NAME       : JAYABHARATHI J
 * DATE       : 03.07.2022
 * DESCRIPTION: WAP TO REMOVE DUPLICATE ELEMENTS IN A GIVEN ARRAY
 * INPUT      :  Test Case 1:

Enter the size: 5

Enter elements into the array: 5 1 3 1 5

After removing duplicates: 5 1 3

Test Case 2:

Enter the size: 5

Enter elements into the array: 2 1 1 1 5

After removing duplicates: 2 1 5
 * */



#include <stdio.h>
//Function prototype//
void fun(int arr1[], int size, int arr2[], int *new_size);
//Main Function//
int main()
{
		//Declaring the variables//
		int size, new_size;
		//Reading and storing the size of array//
		printf("Enter the size: ");
		scanf("%d", &size);
		int arr1[size], arr2[size];
		//Function call//
		fun(arr1 , size, arr2, &new_size);
		return 0;
}
//Function definition//
void fun(int arr1[], int size, int arr2[], int *new_size)
{
		int i, j, flag, count = 0;
		printf("Enter elements into the array: ");
		//Storing the elements in array//
		for(i = 0; i < size; i++)
		{
				scanf(" %d", &arr1[i]);
		}
		//Running the loop upto size value//
		for(i = 0; i < size; i++)
		{
				flag = 1;
				//Runs the loop based upon i value//
				for(j = 0; j < (i - count); j++)
				{
						//Condition to check whether the two values are equal or not, if equal then skips the value//
                        if(arr1[i] == arr2[j])
				        {
								flag = 0;
						        count++;
						        break;
				        }
				}
				//If two values are not equal, then stores the value in array2//
				if(flag == 1)
				{
						arr2[j] = arr1[i];
				}
		}
		*new_size = size - count;
		printf("After removing duplicates: ");
		//Prints the value after duplicating//
		for(i = 0; i < *new_size; i++)
		{
				printf("%d ", arr2[i]);
		}
		printf("\n");
}


