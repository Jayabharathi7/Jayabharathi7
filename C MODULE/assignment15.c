/*
 * NAME       : JAYABHARATHI J
 * DATE       : 23.06.2022
 * DESCRIPTION: WAP TO REPLACE 'n' BITS OF A GIVEN NUMBER
 * INPUT      : Enter the number: 10
 *              Enter number of bits: 3
 *              Enter the value: 12
 * OUTPUT     : Result = 12
 * */


#include <stdio.h>
//Function prototype//
int replace_nbits(int num, int n, int val);
//Main Function//
int main()
{
		//Declaring the variables//
        int num, n, val, res = 0;
        //Reading the values from the user//
        printf("Enter the number: ");
		scanf("%d", &num);
		printf("Enter number of bits: ");
        scanf("%d", &n);
		printf("Enter the value: ");
		scanf("%d", &val);
        //Function call//
        res = replace_nbits(num, n, val);
        printf("Result = %d\n", res);
}
//Function Definition//
int replace_nbits(int num, int n, int val)
{
		int res = 0;
		//Storing the result value//
		res = (~((1 << n) - 1) & num) | (((1 << n) - 1) & val);
		//Returning the result//
		return res;
}

				
