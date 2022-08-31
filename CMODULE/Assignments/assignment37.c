/*
 * NAME       : JAYABHARATHI J
 * DATE       : 16.07.2022
 * DESCRIPTION: WAP TO IMPLEMENT ITOA FUNCTION
 * INPUT      :  Test Case 1:
user@emertxe] ./itoa
Enter the number : 1234
Integer to string is 1234

Test Case 2:
user@emertxe] ./itoa
Enter the number : -1234
Integer to string is -1234

Test Case 3:
user@emertxe] ./itoa
Enter the number : +1234
Integer to string is 1234

Test Case 4:
user@emertxe] ./itoa
Enter the number : a1234
Integer to string is 0
 * */

//Header Inclusion//
#include <stdio.h>
#include <string.h>
//Function Prototype//
int itoa(int num, char str[]);
//Main Function//
int main()
{
		//Declaring the variables//
        int num, read;
		//Reading the string from the user//
        static char str[10]; 
        printf("Enter the number: ");
        read = scanf("%d", &num);    
        if(read)
				//Function Call//
                itoa(num, str);   
        else   
        {
	            str[0] = 48;
	            str[1] = '\0';
        }
        printf("Integer to string is %s\n", str);
}
//Function Definition//
int itoa(int num, char str[])      
{
        int rem, i, len, flag = 1;
        char temp;
		//If number is negative making into positive//
        if(num < 0)       
        {
	            num = -num;
	            flag = 0;
        }
		//Running the loop to get in reverse order//
        for(i = 0; num != 0; i++) 
        {
	            rem = num % 10;
    	        str[i] = rem + 48;
    	        num = num / 10;     
        }
		//Then making the number into negative//
        if(flag == 0)      
        {
	            str[i] = '-';
	            str[i + 1] = '\0';
        }
        else
	            str[i] = '\0';
		//Calculating the length//
        len = strlen(str);
		//Running the loop to swap all the elements//
        for(i = 0; i < len/2; i++)
        {
	            temp = str[i];
	            str[i] = str[len - i - 1];
	            str[len - i - 1] = temp;
        }
}


