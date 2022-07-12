/*
 * NAME       : JAYABHARATHI J
 * DATE       : 23.06.2022
 * DESCRIPTION: WAP TO PRINT 'n' BITS FROM LSB OF A NUMBER
 * INPUT      : Enter the number: 10
 *              Enter number of bits: 12
 * OUTPUT     : Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0
 * */


#include<stdio.h>
//Function prototype//
int n_bits(int num, int n);
//Main function//
int main()
{
		//Declaring the variables//
		int res = 0, num, n;
		//Reading the number from user//
		printf("Enter the number: ");
		scanf("%d", &num);
		//Reading the number of bits//
		printf("Enter number of bits: ");
		scanf("%d", &n);
		//Function call//
		res= n_bits(num, n);
		return 0;
}
//Function Definition//
int n_bits(int num, int  n)
{
		int res, i;
		//Condition to print 32 bits//
		if(n > sizeof(int) * 8)
		{
				n = sizeof(int) * 8;
		}
		//Running the loop upto n//
		printf("Binary form of %d: ", num);
		for(i = n-1; i >=0; i--)
		{
				//If condition is true, then prints 1//
				if((1 << i) & num)
				{
						printf("1 ");
				}
				//Else prints 0//
				else
				{
						printf("0 ");
				}
		}
		printf("\n");
}

