/*
 * NAME       : JAYABHARATHI J
 * DATE       : 09.07.2022
 * DESCRIPTION: WAP TO REVERSE THE GIVEN STRING USING RECURSIVE METHOD
 * INPUT      :  Test Case 1:
user@emertxe] ./str_rev
Enter a string : Hello World
Reverse string is : dlroW olleH

Test Case 2:
user@emertxe] ./str_rev
Enter a string : EMERTXE
Reverse string is : EXTREME
 * */


#include <stdio.h>
#include<string.h>
//Function Prototype//
void reverse_recursive(char str[], int ind, int len);
//Main Function//
int main()
{
		//Declaring the variables//
        static char str[30];
		int len;
		//Reading the string from the user//
        printf("Enter any string: ");
        scanf("%[^\n]", str);
		//Storing the length of the string//
		len = strlen(str);
		//Function call//
		reverse_recursive(str, 0, len - 1);
		printf("Reverse string is: %s\n", str);
		return 0;
}
//Function Definition//
void reverse_recursive(char str[], int ind, int len)
{
		char temp;
		//Swapping the elements to get in reverse order//
		temp = str[ind];
		str[ind] = str[len - ind];
		str[len - ind] = temp;
		//Condition to check whether index value is lesser than half of its string length or not//
		if(ind == len/2)
		{
				return;
		}
		//If it is, then index value will be incremented//
		ind++;
		//Function call//
		reverse_recursive(str, ind, len);
}

