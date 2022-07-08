/*
 * NAME        : JAYABHARATHI J
 * DATE        : 07.06.2022
 * DESCRIPTION : WAP TO CHECK IF NUMBER IS ODD OR EVEN
 * INPUT       : Enter the value of 'n':-2
 * OUTPUT      : -2 is negative even number
 */

//Header Inclusion//
#include<stdio.h>
//Main function//
int main()
{
	int N;
	//Readind and storing N value from the user//
	printf("Enter the number: ");
	scanf("%d", &N);
	//Initializing N value is equal to zero for N is neither odd nor even// 
	if(N == 0)
	{
		printf("%d is neither odd nor even\n", N);
	}
	//If N is divisible by two and remainder is equal to zero, then the value is even number//
	else if(N % 2 == 0)
	{
	//If N is greater than zero, then it is positive even number//
		if(N > 0)
		{
			printf("%d is positive even number\n", N);
		}
	//Else the N is negative even number//	
		else
		{
			printf("%d is negative even number\n", N);
		}
	}
	//If N is not zero when it is divisible by two, then the value is odd number//
	else 
	{
	//If N is greater than zero, then it is positive odd number//		
		if(N > 0)
		{
			printf("%d is positive odd number\n", N);
		}
	//Else the N is negative odd number//	
		else
		{
			printf("%d is negative odd number\n", N);
		}
	}
	// Return 0 for successive program termination//
	return 0;
}

