/*
 * NAME       : JAYABHARATHI J
 * DATE       : 17.07.2022
 * DESCRIPTION: WAP TO PRINT ALL POSSIBLE COMBINATIONS OF GIVEN STRING
 * INPUT      :  Test Case 1:
user@emertxe] ./combinations
Enter a string: abc

All possible combinations of given string :abc
acb
bca
bac
cab
cba


Test Case 2:
Enter a string: abb
Error: please enter distinct characters.
 * */

//Header Inclusion//
#include<stdio.h>
#include<string.h>
//Function Prototype//
void combination(char str[], int start, int len);       
void swap(char *x, char *y);
//Main Function//
int main()
{
		//Declaring the variables//
        char str[100];             
        //Reading the string from the user//		
        printf("Enter a string: ");
        scanf("%s", str);                
        int i, j, flag = 1, len = strlen(str);
		//Running the loop upto length//
        for(i = 0; i < len; i++)
        {
	            for(j = i + 1; j < len; j++)
	            {
                        //Condition to check whether the string is distinct or not//
	                    if(str[i] == str[j])		
		                 flag = 0;
	            }
        }
        if(flag)
        {
	            printf("All possible combinations of given string :%s\n",str);
				//If string is distinct, then calling the function//
   	            combination(str, 0, len - 1);          
        }
        else
	            printf("Error: please enter distinct characters.\n");
        return 0;
}
//Function Definition//
void combination(char str[], int start, int len) 
{
        int i;
        if(start == len)
				printf("%s\n", str);
		else
        {
				//Running the loop upto length//
				for(i = start; i <= len; i++)
				{
						swap((str + start), (str + i));
						combination(str, start + 1, len);
						swap((str + start), (str + i));
				}
		}
}
//Function Definition//
void swap(char *x, char *y)  
{
        char temp;
        temp = *x;
        *x = *y;
        *y = temp;
}



