/*
 * NAME       : JAYABHARATHI J
 * DATE       : 19.06.2022
 * DESCRIPTION: WAP TO PRINT ALL PRIMES USING SIEVE OF ERATOSTHENES METHOD
 * INPUT      : Enter the value of 'n': 20
 * OUTPUT     : The primes less than or equal to 20 are: 2, 3, 5, 7, 11, 13, 17, 19
 * */


#include<stdio.h>
int main()
{
		//Declaring the variables//
		int n, arr[n], i, j;
		//Reading the n value//
		printf("Enter the value of 'n': ");
		scanf("%d", &n);
		//Checking the n value is greater than 1 or not//
		if(n > 1)
		{
				//Storing the array values upto n//
				for(i = 0; i < n; i++)
		        {
                        arr[i] = i;

		        }
				//Running the loop upto n//
		        for(i = 2; i < n; i++)
		        {
						//Multiplying the two numbers and make to zero//
						for(j = 2; j < n; j++)
				        {
								//If multiplication of two numbers is greater then n value, then breaking the condition//
								if(i * j >= n)
						        {
										break;
						        }
								//Assigning the resultant value to zero//
						        arr[i * j] = 0;
				        }
		        }
				printf("The primes less than or equal to %d are: ", n);
		        for( i = 2; i < n; i++)
		        {
						//Removing the values of zero to get the prime numbers//
                        if(arr[i] != 0)
				        {
                                printf("%d ", arr[i]);
				        }
	            }
				printf("\n");
		}
		//If n value is below the value of 1, then prints the expression//
		else
		{
				printf("Please enter a positive number which is > 1\n");
		}
        return 0;
}





