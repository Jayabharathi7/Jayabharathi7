/*
 * NAME       : JAYABHARATHI J
 * DATE       : 31.08.2022
 * DESCRIPTION: PROVIDE A MENU TO MANIPULATE OR DISPLAY THE VALUE OF VARIABLE OF TYPE T
 * INPUT      :  Test Case 1:
user@emertxe] ./mem_manager
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 10
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> k (char)
1 -> 10 (int)
------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 2
0 -> k
1 -> 10
Enter the index value to be deleted : 0
index 0 successfully deleted.
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4
 * */

#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
int main()
{
		int choice;
		void *ptr = malloc(8);
		int char_flag1 = 1, char_flag2 = 1, int_flag = 1, float_flag = 1, double_flag = 1, short_flag = 1;
		int choice1;
		int index;
		do
		{
				printf("Menu: \n");
				printf("1.Add element\n");
				printf("2.Remove element\n");
				printf("3.Display element\n");
				printf("4.Exit from the program\n");
				__fpurge(stdin);
				scanf("%d", &choice);
				switch(choice)
				{
						case 1:
								printf("Choice ---> 1\n");
								printf("Enter the type you have to insert:\n");
								printf("1.int\n2.char\n3.float\n4.short\n5.double\n");
								scanf("%d", &choice1);
								switch(choice1)
								{
										case 1:
												if(int_flag == 1 && float_flag == 1 && double_flag == 1)
												{
														printf("Enter the int: ");
														scanf("%d", (int *)(ptr + 4));
														int_flag = 0;
												}
												else
														printf("Insufficient space\n");
												break;
										case 2:
												if(char_flag1 == 1 && double_flag == 1)
												{
														printf("Enter the char: ");
														__fpurge(stdin);
														scanf("%c", (char *)ptr);
														char_flag1 = 0;
												}
												else if(char_flag2 == 1 && double_flag == 1)
												{
														__fpurge(stdin);
														scanf("%c", (char *)(ptr + 1));
														char_flag2 = 0;
												}
												else
														printf("Insufficient space\n");
												break;
										case 3:
												if(float_flag == 1 && int_flag == 1 && double_flag == 1)
												{
														printf("Enter the float: ");
														scanf("%f", (float *)(ptr + 4));
														float_flag = 0;
												}
												else
														printf("Insufficient space\n");
												break;
										case 4:
												if(double_flag == 1 && short_flag == 1)
												{
														printf("Enter the short: ");
														scanf("%hd", (short *)(ptr + 2));
														short_flag = 0;
												}
												else
														printf("Insufficient space\n");
												break;
										case 5:
												if(char_flag1 == 1 && char_flag2 == 1 && short_flag == 1 && int_flag == 1 && float_flag == 1 && double_flag == 1)
												{
														printf("Enter the double: ");
														scanf("%lf", (double *)ptr);
														double_flag = 0;
												}
												else
														printf("Insufficient space\n");
												break;
										default:
												printf("Invalid choice\n");
								}
								continue;
								break;
						case 3:
								if(char_flag1 == 0)
										printf("0 -> %c\n", *(char *)ptr);
								if(char_flag2 == 0)
										printf("1 -> %c\n", *(char *)(ptr + 1));
								if(int_flag == 0)
										printf("4 -> %d\n", *(int *)(ptr + 4));
								if(float_flag == 0)
										printf("4 -> %f\n", *(float *)(ptr + 4));
								if(double_flag == 0)
										printf("0 -> %lf\n", *(double *)ptr);
								if(short_flag == 0)
										printf("2 -> %hd\n", *(short *)(ptr + 2));
								continue;
								break;
						case 2:
								if(char_flag1 == 0)
										printf("0 -> %c\n", *(char *)ptr);
								if(char_flag2 == 0)
										printf("1 -> %c\n", *(char *)(ptr + 1));
								if(int_flag == 0)
										printf("4 -> %d\n", *(int *)(ptr + 4));
								if(float_flag == 0)
										printf("4 -> %f\n", *(float *)(ptr + 4));
								if(double_flag == 0)
										printf("0 -> %lf\n", *(double *)ptr);
								if(short_flag == 0)
										printf("2 -> %hd\n", *(short *)(ptr + 2));
								printf("Enter the index value to be deleted: ");
								scanf("%d", &index);
								if(index == 0 || index == 1 || index == 2 || index == 4)
										printf("Index successfully deleted.\n");
								if(index == 0 && char_flag1 == 0)
										char_flag1 = 1;
								else if(index == 1)
										char_flag2 = 1;
								else if(index == 4 && int_flag == 0)
										int_flag = 1;
								else if(index == 4 && float_flag == 0)
										float_flag = 1;
								else if(index == 2)
										short_flag = 1;
								else if(index == 0 && double_flag == 0)
										double_flag = 1;
								continue;
								break;
				}
		}while(choice != 4);
		free(ptr);
		return 0;
}

