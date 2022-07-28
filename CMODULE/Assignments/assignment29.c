/*
 * NAME       : JAYABHARATHI J
 * DATE       : 06.07.2022
 * DESCRIPTION: WAP to find factorial of given number using recursion
 * INPUT      :  Test Case 1:
user@emertxe] ./factorial
Enter the value of N : 7
Factorial of the given number is 5040

Test Case 2:
Enter the value of N : 5
Factorial of the given number is 120

Test case 3:
Enter the value of N : -1
Invalid Input

Test case 4:
Enter the value of N : 0
Factorial of the given number is 1
 * */


#include <stdio.h>
//Main Function//
int main()
{
		//Declaring the variables//
        static int num, flag = 1;
        static unsigned long long int fact = 1;
		//Condition to get the value from the user//
	    if(flag == 1)
	    {
			    printf("Enter the value of N: ");
			    scanf("%d", &num);
				//Assigning the value for not to get the value again//
			    flag = 0;
	    }
		//Condition to check whether the value is negative or not//
	    if(num < 0)
	    {
			    printf("Invalid Input\n");
        }
		//Condition to print the factorial upto 1//
	    else if(num != 0)
	    {
				//Stores the value of factorial//
	            fact = fact * num;
				//Decrementing the value again and again//
	            --num;
				//Calling the main function//
	            main();
	    }
		//If entered value is zero, then prints the expression//
	    else
	    {
	            printf("Factorial of the given number is %lld\n", fact);
	    }
	    return 0;
}



