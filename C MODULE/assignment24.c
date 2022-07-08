/*
 * NAME       : JAYABHARATHI J
 * DATE       : 30.06.2022
 * DESCRIPTION: WAP TO IMPLEMENT YOUR OWN ISLOWER() FUNCTION
 * INPUT      : Enter the character: a
 * OUTPUT     : Entered character is lower case alphabet
 * */


#include <stdio.h>
//Function prototype//
int my_islower(int ch);
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
        ret = my_islower(ch);
		//Prints the result//
	    ret ? printf("Entered character is lower case alphabet\n") : printf("Entered character is not lower case alphabet\n");
		return 0;
}
//Function definition//
int my_islower(int ch)
{
		//Checking the character is lower or not//
		if(ch >= 'a' && ch <= 'z')
		{
				return 1;
		}
		//Else returns 0//
		else
		{
				return 0;
		}
}



