/*
 * NAME       : JAYABHARATHI J
 * DATE       : 23.06.2022
 * DESCRIPTION: WAP TO GET 'n' BITS OF A GIVEN NUMBER
 * INPUT      : Enter the number: 10
 *              Enter number of bits: 3
 * OUTPUT     : Result = 2
 * */

#include <stdio.h>
//Function prototype//
int get_nbits(int num, int n);
//Main function//
int main()
{
        //Declaring the variables//
        int num, n, res = 0;
		//Reading the number from user//
        printf("Enter the number: ");
        scanf("%d", &num);
		//Reading the number of bits//
	    printf("Enter number of bits: ");
	    scanf("%d", &n);
		//Function call//
        res = get_nbits(num, n);
        printf("Result = %d\n", res);
}
//Function Definition//
int get_nbits(int num , int n)
{
		int res = 0;
		//Storing the result//
		res = ((1 << n) - 1) & num;
		//Returning the result//
		return res;
}







