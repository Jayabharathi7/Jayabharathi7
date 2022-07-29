/*
 * NAME       : JAYABHARATHI J
 * DATE       : 26.07.2022
 * DESCRIPTION: WAP TO COUNT NO.OF CHARACTERS, WORDS AND LINES, ENTERED THROUGH STDIN
 * INPUT      :  Test Case 1:
user@emertxe] ./my_wc
Hello world
Dennis Ritchie
Linux
Character count : 33
Line count : 3
Word count : 5

Test Case 2:
Hello         world
Dennis    Ritchie
Linux
Character count : 39
Line count : 3
Word count : 5
 * */

//Header Inclusion//
#include<stdio.h>
//Main Function//
int main()
{
		//Declaring the variables//
		int ch_count = 0, w_count = 0, l_count = 0, flag = 1, flag1 = 1;
		char ch;
		//Running the loop upto EOF//
		while((ch = getchar()) != EOF)
		{
				//Incrementing the character count//
				ch_count++;
				//Checking the character is other than alphanumeric//
				if((ch == 32) || (ch == 9) || (ch == '\n'))
				{
						if(flag)
						{
								//Incrementing the word count//
								w_count++;
								flag = 0;
						}
				}
				else
						flag = 1;
				if(ch == '\n')
						//Incrementing the line count//
						l_count++;
		}
        printf("\n");
		printf("Character count: %d\n", ch_count + 1);
		printf("Line count: %d\n", l_count + 1);
		printf("Word count: %d\n", w_count + 1);
}

