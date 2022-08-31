/*
 * NAME       : JAYABHARATHI J
 * DATE       : 28.06.2022
 * DESCRIPTION: WAP TO IMPLEMENT CIRCULAR RIGHT SHIFT
 * INPUT      :  Test Case 1:
user@emertxe] ./bit_ops

Enter num: 12
Enter n : 3
Result : 10000000 00000000 00000000 00000001

Test Case 2: 
Enter num: -12
Enter n : 3
Result : 10011111 11111111 11111111 11111110
 * */



#include <stdio.h>
//Function prototype//
int circular_right(int num, int n);
int print_bits(int ret);
int circular_right(int num, int n)
{
		int result;
		//Storing the result//
		result = (unsigned) num >> n | (unsigned) num << (32 - n);
		return result;
}
int print_bits(int ret)
{
		int mask, i;
		printf("Result in Binary: ");
		//Running the loop upto 32 times//
		for(i = 0; i < 32; i++)
		{
				//Storing the mask//
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
        ret = circular_right(num, n);
        print_bits(ret);
}



