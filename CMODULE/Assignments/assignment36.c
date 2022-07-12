/*
 * NAME       : JAYABHARATHI J
 * DATE       : 09.07.2022
 * DESCRIPTION: WAP TO IMPLEMENT ATOI FUNCTION
 * INPUT      : Enter a numeric string: 12345
 * OUTPUT     : String to integer is 12345
 * */


#include <stdio.h>
//Function Prototype//
int my_atoi(const char []);
//Main Function//
int main()
{
		//Declaring the variables//
        char str[20];
		//Reading the string from the user//
        printf("Enter a numeric string: ");
        scanf("%s", str);
        printf("String to integer is %d\n", my_atoi(str));
		return 0;
}
//Function Definition//
int my_atoi(const char str[])
{
		int num = 0, flag = 1;
		//Condtion to check the symbol//
		if(str[0] == '+' || str[0] == '-')
		{
				if(str[0] == '-')
						flag = 0;
				str++;
		}
		//Condition to run the loop upto NULL character//
		while(str != NULL)
		{
				//Conditio to check the numeric value//
				if((*str - 48) < 0 || (*str - 48) > 9)
				{
						if(flag)
								return num;
						else
								return -num;
				}
				num = num * 10 + (*str - 48);
				str++;
		}
		if(flag)
				return num;
		else
				return -num;
}

