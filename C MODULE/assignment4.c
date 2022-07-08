/*
 * NAME       : JAYABHARATHI J
 * DATE       : 11.06.2022
 * DESCRIPTION: WAP TO CHECK IF NUMBER IS PERFECT OR NOT
 * INPUT      : Enter a number: 6
 * OUTPUT     : Yes, entered number is perfect number
 * */
 
#include<stdio.h>
int main()
{
		//Initializing sum is equal to zero to get the sum of all numbers which is divisible by N and storing it in sum//
		int N, i, sum = 0, r;
		//Reading N from the user//
		printf("Enter a number: ");
		scanf("%d", &N);
		//If N  is greater than zero, then enters into condition//
		if(N > 0)
		{
                for(i = 1; i <= N/2; i++)
		        {
						//Checking if remainder is zero or not//
                        r = N % i;
						//If it is zero, then enters into condition//
				        if(r == 0)
				        {
								//Adding the sum of all numbers which is divisible by N//
								sum = sum + i;
				        }
				}
				//If sum is equal to N, then it is perfect number//
                if(sum == N)
		        {
                        printf("Yes, entered number is perfect number\n");
                }
				//Else the number is not perfect number//
		        else
		        {
				        printf("No, entered number is not a perfect number\n");
		        }
		}
		//If N is less than zero, then it is negative number//
		else
		{
				printf("Error: Invalid input, Enter only positive number\n");
		}
	    return 0;
}
