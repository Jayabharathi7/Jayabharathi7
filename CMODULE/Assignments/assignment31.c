/*
 * NAME       : JAYABHARATHI J
 * DATE       : 08.07.2022
 * DESCRIPTION: WAP TO GENERATE NEGATIVE FIBBONACCI NUMBERS USING RECURSION
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

Test Case 3:
Enter a number: 21
Invalid input
 * */


#include <stdio.h>
//Function Prototype//
void negative_fibonacci(int limit, int num1, int num2, int sum);
//Main Function//
int main()
{
		//Declaring the variables//
        int limit;
		//Reading the value from the user//
        printf("Enter a number: ");
        scanf("%d", &limit);
		//If entered value is positive, then terminates the program//
	    if(limit > 0)
	    {
			    printf("Invalid Input\n");
			    return 0;
	    }
		//Function call//
        negative_fibonacci(limit, 0, 1, 0);
	    printf("\n");
}
//Function Definition//
void negative_fibonacci(int limit, int num1, int num2, int sum)
{
		//Condition to print first two terms//
		if(sum == 0)
		{
				printf("%d, %d,", num1, num2);
		}
		sum = num1 - num2;
		num1 = num2;
		num2 = sum;
		//Condition to print the fibonacci terms upto n//
		if(sum >= limit && sum <= -limit)
		{
				printf(" %d,", sum);
				//Function call//
				negative_fibonacci(limit, num1, num2, sum);
		}
}


