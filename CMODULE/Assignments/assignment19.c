/*
 * NAME       : JAYABHARATHI J
 * DATE       : 27.06.2022
 * DESCRIPTION: WAP TO PUT THE (b - a + 1) LSB's OF NUM INTO VAL[b:a]
 * INPUT      :  Test Case 1:
user@emertxe] ./bit_ops
Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174
Result : 158
 * */


#include <stdio.h>
//Function prototype//
int replace_nbits_from_pos(int num, int a, int b, int val);
int main()
{
		//Declaring the variables//
        int num, a, b, val, res = 0;
        //Reading and storing the values//
        printf("Enter the value of 'num': ");
        scanf("%d", &num);
		printf("Enter the value of 'a': ");
		scanf("%d", &a);
		printf("Enter the value of 'b': ");
		scanf("%d", &b);
		printf("Enter the value of 'val': ");
		scanf("%d", &val);
        //Storing the result//
        res = replace_nbits_from_pos(num, a, b, val);
        //Printing the result//
        printf("Result : %d\n", res);
}
int replace_nbits_from_pos(int num, int a, int b, int val)
{
		//Condition to print 32 bits//
		if(b > 32)
		{
				b = 31;
		}
		int n, mask, result;
		//Storing the n value//
		n = b - a + 1;
		//Storing the num value//
		num = (num & (1 << n) - 1) << (b - n + 1);
		//Storing the mask value//
		mask = ~(((1 << n) - 1) << (b - n + 1));
		val = val & mask;
		result = val | num;
		//Returning the result//
		return result;
}

