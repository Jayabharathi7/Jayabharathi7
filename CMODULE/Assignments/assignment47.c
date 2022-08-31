/*
 * NAME       : JAYABHARATHI J
 * DATE       : 05.08.2022
 * DESCRIPTION: WAP TO CONVERT LITTLE ENDIAN DATA TO BIG ENDIAN
 * INPUT      : Test Case 1:
user@emertxe] ./endianness
Enter the size: 2
Enter any number in Hexadecimal: ABCD
After conversion CDAB
Test Case 2:
Enter the size: 4
Enter any number in Hexadecimal: 12345678
After conversion 78563412
 * */


//Header Inclusion//
#include<stdio.h>
//Main Function//
int main()
{
		//Declaring the variables//
		int num, size, i;
		//Reading the size from the user//
		printf("Enter the size: ");
		scanf("%d", &size);
		//Reading the number in hexadecimal format//
		printf("Enter any number in Hexadecimal: ");
		scanf("%x", &num);
		char *ptr1, *ptr2, temp;
		ptr1 = (char *) & num;
		ptr2 = (char *) & num + (size - 1);
		//Running the loop to swap the values//
		for(i = 0; i < size/2; i++)
		{
				temp = *ptr1;
				*ptr1 = *ptr2;
				*ptr2 = temp;
				ptr1++;
				ptr2--;
		}
		printf("After conversion %X\n", num);
}


