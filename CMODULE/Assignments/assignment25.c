/*
 * NAME       : JAYABHARATHI J
 * DATE       : 30.06.2022
 * DESCRIPTION: WAP TO IMPLEMENT YOUR OWN ISPUNCT() FUNCTION
 * INPUT      : Enter the character: a
 * OUTPUT     : Entered character is not punctuation character
 * */


#include <stdio.h>
//Function prototype//
int my_ispunct(int);
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
        ret = my_ispunct(ch);
		//Prints the result//
	    ret ? printf("Entered character is punctuation character\n") : printf("Entered character is not punctuation character\n");
		return 0;
}
//Function definition//
int my_ispunct(int ch)
{
		//Checks the character is punctuation or not//
		if(ch >= 33 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127)
		{
				return 1;
		}
		//Else returns 0//
		else
		{
				return 0;
		}
}


