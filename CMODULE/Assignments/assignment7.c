/*
 * NAME       : JAYABHARATHI J
 * DATE       : 11.06.2022
 * DESCRIPTION: WAP TO PRINT TRIANGLE PATTERN AS SHOWN BELOW
 * INPUT      :  Test Case 1:
Enter the number: 4
1 2 3 4
5     6
7 8
9

Test Case 2:
Enter the number: 5
1 2 3 4 5
6       7
8    9
10 11
12
 * */ 

#include<stdio.h>
int main()
{
		//Initializing count value is one to start the count//
		int i, j, n, count = 1;
		//Reading number from the user//
		printf("Enter the number: ");
		scanf("%d", &n);
		//Runs the loop for n times//
		for(i = 1; i <= n; i++)
		{
				for(j = i; j <= n ; j++)
				{
						//If any of this condition is true, then it prints the count value//
						if(i == 1 || j == i|| j == n)
						{
								printf("%d ", count);
								count++;
						}
						//Else prints the space//
						else
						{
								printf(" ");
						}

				}
				printf("\n");
		}
		return 0;
}

