/*
 * NAME       : JAYABHARATHI J
 * DATE       : 12.06.2022
 * DESCRIPTION: WAP TO PRINT PYRAMID PATTERN AS SHOWN BELOW
 * INPUT      : Enter the number: 5
 * OUTPUT     : 5
 *              4 5
 *              3 4 5
 *              2 3 4 5
 *              1 2 3 4 5
 *              2 3 4 5
 *              3 4 5
 *              4 5
 *              5
 * */

#include<stdio.h>
int main()
{
		//Declaring the variables//
		int i, j, n;
		//Reading the number//
		printf("Enter the number: ");
		scanf("%d", &n);
		//Initializing i value is equal to n to start the count from n//
		for(i = n; i >= 1; i--)
		{
				//Initializing j value is equal to i to start the count from i//
				for(j = i; j <= n; j++)
				{
						printf("%d ", j);
				}
				printf("\n");
		}
        //Initializing i value is equal to 2 to start the count from 2//
		for(i = 2; i <= n; i++)
		{
				//Initializing j value is equal to i to start the count from i//
				for(j = i; j <= n; j++)
				{
						printf("%d ", j);
				}
				printf("\n");
		}
		return 0;
}


