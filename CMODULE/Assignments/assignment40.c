/*
 * NAME       : JAYABHARATHI J
 * DATE       : 16.07.2022
 * DESCRIPTION: WAP TO IMPLEMENT STRTOK FUNCTION
 * INPUT      :  Test Case 1:
user@emertxe] ./my_strtok
Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
Enter string2 : ;./-:
Tokens :
Bangalore
Chennai
Kolkata
Delhi
Mumbai

Test Case 2:
user@emertxe] ./my_strtok
Enter string1 : -;Bangalore;;::---Chennai:;Kolkata:;Delhi:-
Enter string2 : ;./-:
Tokens :
Bangalore
Chennai
Kolkata
Delhi
 * OUTPUT     :
 * */

//Header Inclusion//
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
//Function Prototype//
char *my_strtok(char str[], const char delim[]);
//Main Function//
int main()
{
		//Declaring the variables//
        char str[50], delim[50];
	    //Reading the string1 from the user//	
        printf("Enter string1: ");
        scanf("%s", str);         
        __fpurge(stdout);
		//Reading the string2 from the user//
        printf("Enter string2: ");
        scanf("\n%s", delim);     
        __fpurge(stdout);
		//Function Call//
        char *token = my_strtok(str, delim);   
        printf("Tokens :\n");
        while (token)    
        {
                printf("%s\n", token);
                token = my_strtok(NULL, delim);
        }
}
//Function Definition//
char *my_strtok(char str[], const char delim[])    
{
        static char *temp;             
        int len, i, j;
        static int flag = 1;
		//Calculating the length of the delimeter//
        len = strlen(delim);
        if(str == NULL)           
        {
	            str = temp;
	            str++;
        }
        char *ptr;
        ptr = str;
		//Running the loop upto NULL character//
        for(i = 0; ptr[i] != '\0'; i++)    
        {
				//Running the loop upto length//
	            for(j = 0; j < len; j++)  
	            {
						//Condition to check both string and delimeter is equal or not//
	                    if(ptr[i] == delim[j])   
	                    {
                                ptr[i] = '\0';
		                        if(ptr[i - 1] != '\0')
		                        {
                                        temp = &ptr[i];    
		                                return str;
		                        }
		                        else
                                        str++;
	                    }
	            }
        }
		//Condition to return the string//
        if(flag)
        {
                flag = 0;
	            if(*str == '\0')
					  return NULL;
                return str;
        }
		//Else return the NULL//
        else
	            return NULL;
}



