/*
 * NAME       : JAYABHARATHI J
 * DATE       : 06.07.2022
 * DESCRIPTION: WAP TO GENERATE FIBBONACCI NUMBERS USING RECURSION
 * INPUT      :  Test Case 1 :
user@emertxe] ./fibbonacci_series
Enter a number: 8
0, 1, 1, 2, 3, 5, 8

Test Case 2:
Enter a number: 10
0, 1, 1, 2, 3, 5, 8

Test Case 3:
Enter a number: 21
0, 1, 1, 2, 3, 5, 8, 13, 21

Test Case 4:
Enter a number: -12
Invalid input
 * */


#include <stdio.h>
//Function prototype//
void positive_fibonacci(int limit, int num1, int num2, int sum);
//Main Function//
int main()
{
		//Declaring the variables//
        int limit;
		//Reading the value from the user//
        printf("Enter the limit: ");
        scanf("%d", &limit);
		//Function call//
        positive_fibonacci(limit, 0, 1, 0);
	    printf("\n");
}
//Function definition//
void positive_fibonacci(int limit, int num1, int num2, int sum)
{
		//Condition to check whether the value is negative or not//
		if(limit < 0)
		{
				printf("Invalid Input");
		}
		else
		{       //If the value is non-zero, then enters into the condition//
				if(limit != 0)
				{
						//Condition to print the first two fibonacci series//
                        if(sum == 0)
		                {
				                printf("%d, %d ,", num1, num2);
		                }
	                    sum = num1 + num2;
		                num1 = num2;
		                num2 = sum;
						//Condition to check the limit of values to print//
		                if(sum <= limit)
		                {
				                printf("%d ,", sum);
								//Function call//
		                        positive_fibonacci(limit, num1, num2, sum);
		                }
		        }
				//If the value is zero, then prints the expression//
				else
						printf("%d", num1);
		}
}

		

