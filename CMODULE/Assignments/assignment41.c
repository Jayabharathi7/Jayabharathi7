/*
 * NAME       : JAYABHARATHI J
 * DATE       : 15.07.2022
 * DESCRIPTION: SQUEEZE THE CHARACTER IN S1 THAT MATCHES ANY CHARACTER IN THE STRING S2
 * INPUT      :  Test Case 1:
user@emertxe] ./squeeze
Enter s1 : Dennis Ritchie
Enter s2 : Linux
After squeeze s1 : Des Rtche


Test Case 2:
user@emertxe] ./squeeze
Enter s1 : Welcome
Enter s2 : Emertxe
After squeeze s1 : Wlco
 * */

//Header Inclusion//
#include <stdio.h>
//Function Prototype//
void squeeze(char str1 [], char str2[]);
//Main Function//
int main()
{
		//Declaring the variables//
        char str1[30], str2[30];
		//Reading the string1 from the user//
        printf("Enter s1: ");
        scanf("%[^\n]", str1);
		getchar();
		//Reading the string2 from the user//
        printf("Enter s2: ");
        scanf("%[^\n]", str2);
		//Function Call//
        squeeze(str1, str2);
        printf("After squeeze s1: %s\n", str1);
        return 0;
}
//Function Definition//
void squeeze(char str1[], char str2[])
{
		int i, j, k;
		//Running the loop upto string2 NULL character//
		for(i = 0; str2[i] != '\0'; i++)
		{
				//Running the loop upto string1 NULL character//
				for(j = 0; str1[j] != '\0'; j++)
				{
						//Condition to check both strings are equal or not//
						if(str2[i] == str1[j])
						{
								//Loop to skip the same characters, then left shifting the string//
								for(k = j; str1[k] != '\0'; k++)
								{
										str1[k] = str1[k + 1];
								}
								j--;
						}
				}
		}
}


