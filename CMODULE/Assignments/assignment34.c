/*
 * NAME       : JAYABHARATHI J
 * DATE       : 14.07.2022
 * DESCRIPTION: WAP TO REPLACE EACH STRING OF ONE OR MORE BLANKS BY A SINGLE BLANK
 * INPUT      :  Test Case 1:
user@emertxe] ./remove_multi_space
Enter the string with more spaces in between two words
Pointers     are               sharp     knives.
Pointers are sharp knives.

Test Case 2:
user@emertxe] ./remove_multi_space
Enter the string with more spaces in between two words
Welcome                to Emertxe
Welcome to Emertxe

Test Case 1:
user@emertxe] ./remove_multi_space
Enter the string with more spaces in between two words
Welcome to Emertxe
Welcome to Emertxe
 * */

//Header Inclusion//
#include <stdio.h>
#include<string.h>
//Function Prototype//
void replace_blank(char str[]);
//Main Function//
int main()
{
		//Declaring the variables//
        static char str[50];
		//Reading the string from the user//
        scanf("%[^\n]", str);
		//Function call//
        replace_blank(str);
        printf("%s\n", str);
}
//Function Definition//
void replace_blank(char str[])
{
		int i, j, k, len, count = 0;
		//Storing the length of the string//
		len = strlen(str);
		//Running the loop to convert tabs to spaces//
		for(i = 0; i < len; i++)
		{
				if(str[i] == 9)
						str[i] = 32;
		}
		//Loop to convert more blanks to a single space//
		for(i = 0; i < len; i++)
		{
				//Checking the first index is starting with spaces or not//
				if(str[0] == 32)
						count = 1;
				//Checking if character is space or not//
				if(str[i] == 32)
				{
						//Loop to count the number of spaces//
						for(j = i; str[j] == 32; j++)
						{
								if(str[j] == 32)
										count++;
						}
						//Loop to convert into single space, then left shifting the characters//
						for(j = 0; j < count - 1; j++)
						{
								for(k = i; k < len; k++)
								{
										str[k] = str[k + 1];
								}
						}
						//Again making the count value to zero to count again the multiple spaces to single space//
						count = 0;
				}
		}
}


