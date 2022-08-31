/*
 * NAME       : JAYABHARATHI J
 * DATE       : 29.07.2022
 * DESCRIPTION: WAP TO GENERATE A N*N MAGIC SQUARE
 * INPUT      :  Test Case 1:
user@emertxe] ./magic_square
Enter a number: 3
8      1      6
3      5      7
4      9      2

Test Case 2:
Enter a number: 6
Error : Please enter only positive values
 * */


//Header Inclusion//
#include<stdio.h>
#include<stdlib.h>
//Function Prototype//
void magic_square(int **, int size);
//Main Function//
int main()
{
		//Declaring the variables//
		int size, i;
		//Readin the size//
		printf("Enter a number: ");
		scanf("%d", &size);
		//Checking the number is positive odd number or not//
		if(size % 2 != 0)
		{
				int *ptr[size];
				//Running the loop to allocate the memory//
				for(i = 0; i < size; i++)
						ptr[i] = (int*)calloc(size, sizeof(int));
				//Function Call//
				magic_square(ptr, size);
				for(i = 0; i < size; i++)
						free(ptr[i]);
		}
		//If number is even, then error will be printed//
		else
				printf("Error : Please enter only positive odd numbers\n");
}
//Function Definition//
void magic_square(int **ptr, int size)
{
		int i, j, k, l, m;
		j = 0;
		k = size / 2;
		//Running the loop to set values of the square matrix//
		for(i = 1; i <= size * size; i++)
		{
				ptr[j][k] = i;
				l = j--;
				m = k++;
				if(j < 0)
						j = size - 1;
				if(k > size - 1)
						k = 0;
				if(ptr[j][k] != 0)
				{
						k = m;
						j = l + 1;
				}
		}
		//Running the loop to print the values//
		for(i = 0; i < size; i++)
		{
				for(j = 0; j < size; j++)
				{
						printf("%d\t", ptr[i][j]);
				}
				printf("\n");
		}
}


