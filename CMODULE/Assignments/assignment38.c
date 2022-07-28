/*
 * NAME       : JAYABHARATHI J
 * DATE       : 09.07.2022
 * DESCRIPTION: WAP TO REVERSE THE GIVEN STRING USING ITERATIVE METHOD
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
//Function Prototype//
void reverse_iterative(char str[]);
//Main Function//
int main()
{
		//Declaring the variables//
        char str[30];
		//Reading the string from the user//
        printf("Enter a string: ");
        scanf("%[^\n]", str);
        //Function call//
        reverse_iterative(str);
        printf("Reverse string is: %s\n", str);
		return 0;
}
//Function Definition//
void reverse_iterative(char str[])
{
		int i, length;
		char temp;
		char *ptr;
		ptr = str;
		//Condtion to run the loop upto NULL character//
		while(*ptr != '\0')
		{
				length++;
				ptr++;
		}
		//Running the loop upto the correct position//
		for(i = 0; i < length/2; i++)
		{
				//Swapping the values to get the reverse order//
				temp = str[i];
				str[i] = str[length - 1 - i];
				str[length - 1 - i] = temp;
		}
}

