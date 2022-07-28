/*
 * NAME       : JAYABHARATHI J
 * DATE       : 15.06.2022
 * DESCRIPTION: WAP TO COUNT NUMBER OF SET BITS IN A GIVEN NUMBER AND PRINT PARITY
 * INPUT      :  Test Case 1:

Enter the number : 7

Number of set bits = 3

Bit parity is Odd



Test Case 2:

Enter the number : 15

Number of set bits = 4

Bit parity is Even

Test Case 3:

Enter the number : 6

Number of set bits = 2

Bit parity is Even
 * */

#include<stdio.h>
int main()
{
		//Declaring the variables and assuming count is zero//
		int num, count = 0;
		//Reading and storing the number from the user//
		printf("Enter the number: ");
		scanf("%d", &num);
		//Checking the number is not equal to zero//
		while(num != 0)
		{
				//Checking if number is AND gate with 1 to get true or false//
				if(num & 1)
				{
						//If condition true, it will increase the count//
						count++;
				}
				//Again right shifting the number//
				num >>= 1;
		}
		//Printing the number of set bits//
		printf("Number of set bits = %d\n", count);
		//If bit divisible by two and equal to zero, then it is Even//
		if(count % 2 == 0)
		{
				printf("Bit parity is Even\n");
		}
		else
		//Else the bit is Odd//		
		{
				printf("Bit parity is Odd\n");
		}
		return 0;
}


