/*
 * NAME       : JAYABHARATHI J
 * DATE       : 23.06.2022
 * DESCRIPTION: WAP TO TOGGLE 'n' BITS FROM GIVEN POSITION OF A NUMBER
 * INPUT      :  Test Case 1:

Enter the number: 10

Enter number of bits: 3

Enter the pos: 5

Result = 50

Test Case 2:

Enter the number: 15

Enter number of bits: 2

Enter the pos: 2

Result =  9
 * */



#include <stdio.h>
//Function prototype//
int toggle_nbits_from_pos(int num, int n, int pos);
//Main Function
int main()
{
        //Declaring the variables//
        int num, n, pos, res = 0;
        //Reading the values from the user//
        printf("Enter the number: ");
        scanf("%d", &num);
		printf("Enter number of bits: ");
		scanf("%d", &n);
		printf("Enter the pos: ");
		scanf("%d", &pos);
        //Function call//
        res = toggle_nbits_from_pos(num, n, pos);
        printf("Result = %d\n", res);
}
//Function Definition//
int toggle_nbits_from_pos(int num, int n, int pos)
{
		int res = 0;
		//Storing the result//
		res = num ^ (((1 << n) - 1) << (pos - n + 1));
		//Returning the result//
		return res;
}


