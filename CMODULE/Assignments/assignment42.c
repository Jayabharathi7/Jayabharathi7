/*
 * NAME       : JAYABHARATHI J
 * DATE       : 24.07.2022
 * DESCRIPTION: GENERATE CONSECUTIVE NRPS OF LENGTH N USING K DISTINCT CHARACTER
 * INPUT      : Test Case 1:
user@emertxe] ./nrps
Enter the number characters C : 3
Enter the Length of the string N : 6
Enter 3 distinct characters : a b c
Possible NRPS is abcbca

Test Case 2:
Enter the number characters C : 3
Enter the Length of the string N : 7
Enter 3 distinct characters : a b a
Error : Enter distinct characters
 * */

//Header Inclusion//
#include <stdio.h>
//Function prototype//
void nrps(char str[], int start, int C, int N);
void swap(char *x, char *y);
//Main Function//
int main()
{
		//Declaring the variables//
        int N, C, i, j, flag = 1;
        char str[10]; 
		//Reading the values from the user//
        printf("Enter the number characters C: ");
        scanf("%d", &C);
        printf("Enter the Length of the string N: ");
        scanf("%d", &N);
        printf("Enter %d distinct characters: ", C);
        scanf("%s", str);
		//Running the loop upto C//
        for(i = 0; i < C; i++)
        {
	            for(j = i + 1; j < C; j++)
	            {
						//Checking the character is distinct or not//
						if(str[i] == str[j])
								flag = 0;
	            }
        }
        if(flag)
        {
				printf("Possible NRPS is ");
				//Function call//
				nrps(str, 0, C-1, N);
			    printf("\n");	
        }
        else
				printf("Error: Enter distinct characters.\n");
        return 0;
}
//Function Definition//
void nrps(char str[], int start, int C, int N)        
{
		int i, j;
        static int count;
	    //Checking the condition to print the string//	
        if(start == C)
        {
				for(j = 0; j <= C; j++)
				{
						if(count == N)
								break;
						printf("%c", str[j]);
	                    count++;
	            }
        }	
        else
        {
				for(i = start; i <= C; i++)
	            {
						//Function call//
						swap((str + start), (str + i));  
	                    nrps(str, start + 1, C, N);
						if(count == N)
								break;
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


