/*
 * NAME       : JAYABHARATHI J
 * DATE       : 04.08.2022
 * DESCRIPTION: WAP TO IMPLEMENT FRAGMENTS USING ARRAY OF POINTERS
 * INPUT      : Test case 1:
user@emertxe] ./fragmentsEnter
Enter no.of rows : 3
Enter no of columns in row[0] : 4
Enter no of columns in row[1] : 3
Enter no of columns in row[2] : 5
Enter 4 values for row[0] : 1 2 3 4
Enter 3 values for row[1] : 2 5 9
Enter 5 values for row[2] : 1 3 2 4 1

Before sorting output is:

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

After sorting output is:

1.000000 3.000000 2.000000 4.000000 1.000000 2.200000

1.000000 2.000000 3.000000 4.000000 2.500000

2.000000 5.000000 9.000000 5.333333
 * */




#include <stdio.h>
#include <stdlib.h>
int fragments(int, float *[], int*); 
int main()
{
        int rows, i, j;
        printf("Enter no.of rows : ");
        scanf("%d",&rows);
        int arrsize[rows];      
        for(i = 0; i < rows; i++)
        {
	            printf("Enter no of columns in row[%d] : ",i);
	            scanf("%d",&arrsize[i]);   
        }  
        float *ptr[rows];  
        for(i = 0; i < rows; i++)
        {
	            ptr[i] = malloc(arrsize[i]*sizeof(float)); 
        }
        for(i = 0; i < rows; i++)
        {
	            printf("Enter %d values for row[%d]: ",arrsize[i],i);
	            for(j = 0; j < arrsize[i]; j++)
	            {
	                    scanf("%f",&ptr[i][j]);
	            }
        }
        fragments(rows, ptr, arrsize); 
        for(i = 0; i < rows; i++)
	    free(ptr[i]);    
}
int fragments(int rows, float *ptr[rows], int *arrsize)      
{
        int i, j, sum = 0, row_temp;
        float avg, *temp;
        for(i = 0; i < rows; i++) 
        {
	            for(j = 0; j < arrsize[i]; j++)
	            sum = sum + ptr[i][j];
	            avg = (float)sum/arrsize[i];
	            ptr[i][j] = avg;
	            sum = 0;
        }
        printf("Before sorting output is:\n");
        for(i = 0; i < rows; i++)
        {
	            for(j = 0; j <= arrsize[i]; j++)
	                    printf("%f ",ptr[i][j]);
	            putchar('\n');
        }
        for(i = 0; i < rows-1; i++)  
        {
	            for(j = 0; j < rows-i-1; j++)
	            {
	                    if(ptr[j][arrsize[j]] > ptr[j+1][arrsize[j+1]])
	                    {
	                            temp = ptr[j];
	                            ptr[j] = ptr[j+1];
	                            ptr[j+1] = temp;
                                row_temp = arrsize[j];
	                            arrsize[j] = arrsize[j+1];
	                            arrsize[j+1] = row_temp;
	                    }
	            }
        }
        printf("after sorting output is:\n");   
        for(i = 0; i < rows; i++)
        {
	            for(j = 0; j <= arrsize[i]; j++)
	                    printf("%f ",ptr[i][j]);
	            putchar('\n');
        }
}

