/*
 * NAME       : JAYABHARATHI J
 * DATE       : 28.06.2022
 * DESCRIPTION: WAP TO IMPLEMENT CIRCULAR LEFT SHIFT
 * INPUT      :  Test Case 1:
user@emertxe] ./bit_ops

Enter num: 12
Enter n : 3
Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0

Test Case 2: 
Enter num: -2
Enter n : 3
Result in Binary: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 1 1
 * */
#include <stdio.h>
//Function prototype//
int circular_left(int num, int n);
int print_bits(int ret);
int circular_left(int num, int n)
{
		int result;
		//Storing the result//
		result = (unsigned) num << n | (unsigned) num >> (32 - n);
		return result;
}
int print_bits(int ret)
{
		int mask, i;
		printf("Result in Binary: ");
		//Running the loop upto 32 times//
		for(i = 0; i < 32; i++)
		{
				//Storing the mask value//
				mask = 1 << (31 - i);
				if(mask & ret)
						printf("1 ");
				else
						printf("0 ");
		}
		printf("\n");
}
int main()
{
		//Declaring the variables//
        int num, n, ret;
        //Reading and storing the values//
        printf("Enter the num: ");
        scanf("%d", &num);
        printf("Enter n: ");
        scanf("%d", &n);
		//Function call//
        ret = circular_left(num, n);
        print_bits(ret);
}





