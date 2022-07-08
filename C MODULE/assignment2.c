/*
 * NAME       : JAYABHARATHI J
 * DATE       : 11.06.2022
 * DESCRIPTION: WAP TO GENERATE POSITIVE FIBONACCI NUMBERS
 * INPUT      : ENTER A NUMBER: 8 
 * OUTPUT     : 0, 1, 1, 2, 3, 5, 8 
 * */

#include<stdio.h>
int main()
{
   		//Initializing t1 and t2 to start the fibonacci upto N terms//
		int t1 = 0, t2 = 1, i, N, nextTerm = 1;
		//Reading and storing the N number//
		printf("Enter a number: ");
		scanf("%d", &N);
		//If N value is zero, then N is zero//
		if(N == 0)
		{
				printf("0\n");
				return 0;
		}
		//If N value is less than zero, then it is invalid input//
		else if(N < 0)
		{
				printf("Invalid input\n");
				return 0;
		}
		//If N value is greater than zero, it prints the series upto N terms
		else if(N > 0)
		{
				printf("%d ", t1);
                for(i = 1; nextTerm <= N; i++)
		        {
						printf("%d, ", nextTerm);
				        nextTerm = t1 + t2;
						t1 = t2;
			         	t2 = nextTerm;
		        }
				printf("\n");
		}	
		return 0;
}

