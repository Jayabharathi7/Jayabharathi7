/*
 * NAME       : JAYABHARATHI J
 * DATE       : 31.08.2022
 * DESCRIPTION: WAP TO DEFINE A MACRO SWAP(T, X, Y) THAT SWAPS 2 ARGUMENTS OF TYPE T
 * INPUT      : Test Case 1:
user@emertxe] ./swap
1. Int
2. char
3. short
4. float
5. double
6. string
Enter you choice : 1

Enter the num1 : 10
Enter the num2 : 20
After Swapping :
num1 : 20
num2 : 10
 * */

#include<stdio.h>
#include<string.h>
#define swap(x, y, temp) \
{                        \
		temp = x;        \
        x = y;           \
		y = temp;        \
}
int main()
{
		int choice;
		printf("1.int\n2.char\n3.short\n4.float\n5.double\n6.string\nEnter your choice: ");
		scanf("%d", &choice);
		int in_num1, in_num2, in_temp, i, len1, len2;
		char ch_num1, ch_num2, ch_temp;
		short sh_num1, sh_num2, sh_temp;
		float fl_num1, fl_num2, fl_temp;
		double db_num1, db_num2, db_temp;
		char str1[20], str2[20], temp;
		switch(choice)
		{
				case 1:
						printf("Enter the num1: ");
						scanf("%d", &in_num1);
						printf("Enter the num2: ");
						scanf("%d", &in_num2);
						swap(in_num1, in_num2, in_temp);
						printf("After swapping\nnum1: %d\nnum2: %d\n", in_num1, in_num2);
						break;
				case 2:
						getchar();
                        printf("Enter the num1: ");
                        scanf("%c", &ch_num1);
						getchar();
                        printf("Enter the num2: ");
                        scanf("%c", &ch_num2);
                        swap(ch_num1, ch_num2, ch_temp);
                        printf("After swapping\nnum1: %c\nnum2: %c\n", ch_num1, ch_num2);
                        break;
				case 3:
                        printf("Enter the num1: ");
                        scanf("%hd", &sh_num1);
                        printf("Enter the num2: ");
                        scanf("%hd", &sh_num2);
                        swap(sh_num1, sh_num2, sh_temp);
                        printf("After swapping\nnum1: %hd\nnum2: %hd\n", sh_num1, sh_num2);
                        break;
				case 4:
                        printf("Enter the num1: ");
                        scanf("%f", &fl_num1);
                        printf("Enter the num2: ");
                        scanf("%f", &fl_num2);
                        swap(fl_num1, fl_num2, fl_temp);
                        printf("After swapping\nnum1: %f\nnum2: %f\n", fl_num1, fl_num2);
                        break;
				case 5:
                        printf("Enter the num1: ");
                        scanf("%lf", &db_num1);
                        printf("Enter the num2: ");
                        scanf("%lf", &db_num2);
                        swap(db_num1, db_num2, db_temp);
                        printf("After swapping\nnum1: %f\nnum2: %f\n", db_num1, db_num2);
                        break;
				case 6:
                        printf("Enter the string1: ");
                        scanf("%s", str1);
                        printf("Enter the string2: ");
                        scanf("%s", str2);
						len1 = strlen(str1);
						len2 = strlen(str2);
						if(len1 < len2)
								len1 = len2;
						for(i = 0; i < len1; i++)
						{
								swap(str1[i], str2[i], temp);
						}
                        printf("After swapping\nstring1: %s\nstring2: %s\n", str1, str2);
                        break;
				default:
						printf("Invalid choice");
		}
}





























