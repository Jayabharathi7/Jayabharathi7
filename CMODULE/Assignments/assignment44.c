/*
 * NAME       : JAYABHARATHI J
 * DATE       : 24.07.2022
 * DESCRIPTION: WAP TO CHECK GIVEN STRING IS PANGRAM OR NOT
 * INPUT      : Test Case 1:

Enter the string: The quick brown fox jumps over the lazy dog

The Entered String is a Pangram String

Test Case 2:

Enter the string: The quick brown fox jumps over the dog

The Entered String is not a Pangram String
 * */

//Header Inclusion//
#include <stdio.h>
//Function prototype//
int pangram(char ptr[]);
//Main Function//
int main()
{
		//Declaring the variables//
		int i, flag;
        char str1[100];
		//Reading the string from the user//
        printf("Enter the string: ");
        scanf("%[^\n]", str1);          
		//Function call//
        flag = pangram(str1);
		if(flag)
				printf("The Entered String is a Pangram String\n");
        else
				printf("The Entered String is not a Pangram String\n");

}
//Function Definition//
int pangram(char ptr[])      
{
		int flag = 1, i;
        char str2[26] = {0};
        //Running the loop upto NULL character//		
        for(i = 0; ptr[i] != 0; i++)
        {
				//Checking the entered character is between the range//
				if((ptr[i] >= 'A' && ptr[i] <= 'Z') || (ptr[i] >= 'a' && ptr[i] <= 'z')) 
	            {
						//Condition to make all uppercase characters to one//
						if((ptr[i] - 65) < 26)
								str2[ptr[i] - 65] = 49;
						//Else making all lowercase characters to one//
						else
								str2[ptr[i] - 97] = 49;
	            }
        }
		//Running the loop to check all the characters//
        for(i = 0; i < 26; i++)
        {
				//If character is not equal to one, then breaking the condition//
				if(str2[i] != 49)   
	            {
						flag = 0;
						break;
	            }
        }
        return flag; 
}


