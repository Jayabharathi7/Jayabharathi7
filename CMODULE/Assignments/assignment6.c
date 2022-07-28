/*
 * NAME       : JAYABHARATHI J
 * DATE       : 11.06.2022
 * DESCRIPTION: WAP TO PRINT THE NUMBERS IN X FORMT AS SHOWN BELOW
 * INPUT      :  Test Case 1:
Enter the number: 4
1  4
 23
 23
1  4

Test Case 2:
Enter the number: 5
1   5
 2 4
  3
 2 4
1   5
 * */

#include<stdio.h>
int main()
{
		//Declaring the variables//
		int i, j ,n;
		//Reading the number//
		printf("Enter the number: ");
		scanf("%d", &n);
		//Runs the loop for N times//
		for(i = 1; i <= n; i++)
		{
				for(j = 1; j <= n; j++)
				{
						//If j and i values or j+i and n+1 values are equal, then it prints the j value//
						if(j == i|| j+i == n+1)
						{
								printf("%d", j);
						}
						//Else prints the spaces//
						else
						{
								printf(" ");
						}
				}
				printf("\n");
		}
		return 0;
}


