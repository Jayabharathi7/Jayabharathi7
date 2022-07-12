/*
 * NAME       : JAYABHARATHI J
 * DATE       : 09.07.2022
 * DESCRIPTION: WAP TO IMPLEMENT GETWORD FUNCTION
 * INPUT      : Enter the string: Welcome to Emertxe
 * OUTPUT     : You entered Welcome and the length is 7
 * */


#include <stdio.h>
//Function Prototype//
int getword(char str[]);
//Main Function//
int main()
{
		//Declaring the variables//
        int len = 0;
	    char str[100];
		//Reading the string from the user//
        printf("Enter the string: ");
		scanf(" %[^\n]", str);
		//Function call//
        len = getword(str);
        printf("You entered %s and the length is %d\n", str, len);
		return 0;
}
//Function Definition//
int getword(char str[])
{
		int count = 0;
		char *ptr;
		ptr = str;
		//Condition to run the loop upto NULL character//
		while(*ptr != '\0')
		{
				//If the character is space, then break the condition//
				if(*ptr == 32)
				{
						*ptr = '\0';
						break;
				}
				//Incrementing the value upto space character//
				count++;
				ptr++;
		}
		return count;
}

