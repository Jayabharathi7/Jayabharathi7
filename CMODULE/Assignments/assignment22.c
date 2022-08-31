/*
 * NAME       : JAYABHARATHI J
 * DATE       : 30.06.2022
 * DESCRIPTION: WAP TO IMPLEMENT YOUR OWN ISALNUM() FUNCTION
 * INPUT      :  Test Case 1:
user@emertxe] ./c_type_lib
Enter the character: a
The character 'a' is an alnum character.
Test Case 2:
Enter the character: ?
The character '?' is not an alnum character.
 * */


#include <stdio.h>
//Function prototype//
int my_isalnum(int ch);
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
        ret = my_isalnum(ch);
		//Prints the result//
	    ret ? printf("Entered character is alphanumeric character.\n") : printf("Entered character is not alphanumeric character.\n");
		return 0;
}
//Function definition//
int my_isalnum(int ch)
{
		//Checking the character is alnum or not// 
		if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
		{
				return 1;
		}
		//Else returns 0//
		else
		{
				return 0;
		}
}


