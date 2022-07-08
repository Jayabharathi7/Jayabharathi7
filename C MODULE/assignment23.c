/*
 * NAME       : JAYABHARATHI J
 * DATE       : 30.06.2022
 * DESCRIPTION: WAP TO IMPLEMENT YOUR OWN ISBLANK() FUNCTION
 * INPUT      : Enter the character: a
 * OUTPUT     : The character 'a' is not a blank character
 * */


#include <stdio.h>
//Function prototype//
int my_isblank(int ch);
//Main Function//
int main()
{
        //Declaring the variables//
        char ch;
        int ret;
        //Reading and storing the value//
        printf("Enter the character: ");
        scanf("%c", &ch);
        //Function call//
        ret = my_isblank(ch);
		//Prints the result//
	    ret ? printf("Entered character is a blank character\n") : printf("Entered character is not blank character\n");
		return 0;
}
//Function definition//
int my_isblank(int ch)
{
		//Checking the character is blank or not//
		if(ch == 9 || ch == 32)
		{
				return 1;
		}
		//Else returns 0//
		else
		{
				return 0;
		}
}


