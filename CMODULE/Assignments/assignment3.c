/*
 * NAME       : JAYABHARATHI J
 * DATE       : 11.06.2022
 * DESCRIPTION: WAP TO GENERATE NEGATIVE FIBONACCI NUMBERS
 * INPUT      :  Test Case 1 :

user@emertxe] ./fibbonacci_series

Enter a number: -8

0, 1, -1, 2, -3, 5, -8

Test Case 2:

Enter a number: -10

0, 1, -1, 2, -3, 5, -8

Test Case 3:

Enter a number: -21

0, 1, -1, 2, -3, 5, -8, 13, -21

Test Case 4: 

Enter a number: -13

0, 1, -1, 2, -3, 5, -8, 13

Test Case 4: 

Enter a number: 13

Invalid input
 * */

#include<stdio.h>
int main()
{
		 //Initializing t1 and t2 to start the fibonacci series upto n terms//
         int t1 = 0, t2 = -1, i, N, nextTerm = 1;
		 //Reading and storing N value//
		 printf("Enter a number: ");
         scanf("%d", &N);
		 //If N is equal to zero, then the value is zero//
		 if(N == 0)
		 {
				 printf("0\n");
				 return 0;
		 }
		 //If N value is less than zero, it prints the series upto N terms//
		 else if(N < 0)
		 {
				 printf("%d, ", t1);
				 for(i = 1; nextTerm >= N; i++)
		         {
                         printf("%d, ", nextTerm);
                         nextTerm = t1 - t2;
                         t1 = t2;
                         t2 = nextTerm;
						 if(nextTerm > N)
						 {
								 nextTerm = -nextTerm;
						 }
		         }
                 printf("\n");
		 }
		 //If N value is greater than zero, then it is invalid input//
		 else if(N > 0)
		 {
				 printf("Invalid input\n");
		 }
         return 0;
}


