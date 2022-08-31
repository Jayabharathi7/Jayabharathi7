/*
 * NAME       : JAYABHARATHI J
 * DATE       : 16.08.2022
 * DESCRIPTION: READ N & N PERSON NAMES OF MAXLEN 20. SORT AND PRINT THE NAMES
 * INPUT      : Test Case 1:
user@emertxe] ./sort

Enter the size: 5

Enter the 5 names of length max 20 characters in each
[0] -> Delhi
[1] -> Agra
[2] -> Kolkata
[3] -> Bengaluru
[4] -> Chennai

The sorted names are:
Agra
Bengaluru
Chennai
Delhi
Kolkata
 * */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort_names(char (*)[20], int);
int main()
{
        int N;
        printf("Enter the size: ");
        scanf("%d",&N);
        char (*name)[20];
        name = malloc(N*sizeof(char*));
        printf("Enter the %d names of length max 20 characters in each\n",N);
        for(int i = 0; i < N; i++)
        {
	            printf("[%d]->",i);
	            scanf("%s",name[i]);
        }
        sort_names(name, N);
        free(name);
}
void sort_names(char (*name)[20], int size)
{
        char* temp;
        int i, j, k;
        for (i = 0; i < size - 1 ; i++)
	    {
                for (j = i + 1; j < size; j++)
                {
                        if (strcmp(name[i], name[j]) > 0)
                        {
                                strcpy(temp, name[i]);
                                strcpy(name[i], name[j]);
                                strcpy(name[j], temp);
                        }
                }
        }
        printf("The sorted names are:\n");
        for(k = 0; k < size; k++)
        {
	            printf("%s\n",name[k]);
        }
}


