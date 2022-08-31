/*
 * NAME       : JAYABHARATHI J
 * DATE       : 05.08.2022
 * DESCRIPTION: WAP TO FIND THE PRODUCT OF GIVEN MATRIX
 * INPUT      :  Test case1:
user@emertxe] ./transpose_product
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :

1      1     1
2      2     2
3      3     3
Product of two matrix :
14      14      14
14      14      14
14      14      14

Test case 2:
user@emertxe] ./transpose_product
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 2
Enter number of columns : 3
Matrix multiplication is not possible
 * */

//Header Inclusion//
#include<stdio.h>
#include<stdlib.h>
//Function prototype//
int matrix_mul(int **, int, int, int**, int, int, int **, int, int);
//Main Function//
int main()
{
		//Declaring the variables//
		int **mat_a, **mat_b, **result, row_a, col_a, row_b, col_b, row_res, col_res, i, j;
		//Reading rows and columns value from the user//
		printf("Enter number of rows: ");
		scanf("%d", &row_a);
		printf("Enter number of columns: ");
		scanf("%d", &col_a);
		//Allocating the memory for matrix A//
		mat_a = malloc(row_a * sizeof(int*));
		for(i = 0; i < row_a; i++)
				mat_a[i] = (int*)malloc(col_a * sizeof(int));
		//Reading the elements for matrix A//
		for(i = 0; i < row_a; i++)
		{
				for(j = 0; j < col_a; j++)
						scanf("%d", &mat_a[i][j]);
		}
		printf("Enter number of rows: ");
		scanf("%d", &row_b);
		printf("Enter number of columns: ");
		scanf("%d", &col_b);
		//Condition to check column of matrix A and rows of matrix B is equal or not//
		if(col_a == row_b)
		{
				//If it is equal, memory will be dynamically allocated for matrix B//
				mat_b = malloc(row_b * sizeof(int*));
				for(i = 0; i < row_b; i++)
						mat_b[i] = (int*)malloc(col_b * sizeof(int));
				//Reading the elements for matrix B//
				for(i = 0; i < row_b; i++)
				{
						for(j = 0; j < col_b; j++)
								scanf("%d", &mat_b[i][j]);
				}
				row_res = row_a;
				col_res = col_b;
				//Allocating the memory for result//
				result = malloc(row_res * sizeof(int*));
				for(i = 0; i < row_res; i++)
						result[i] = (int*)malloc(col_res * sizeof(int));
				//Function call//
				matrix_mul(mat_a, row_a, col_a, mat_b, row_b, col_b, result, row_res, col_res);
				//After returning, all dynamically allocated memory will be freed//
				for(i = 0; i < row_a; i++)
						free(mat_a[i]);
				for(i = 0; i < row_b; i++)
						free(mat_b[i]);
				for(i = 0; i < row_res; i++)
						free(result[i]);
				free(mat_a);
				free(mat_b);
				free(result);
		}
		//If column A and row B is not equal, then error will be printed//
		else
				printf("Matrix multiplication is not possible\n");
}
//Function Definition//
int matrix_mul(int **mat_a, int row_a, int col_a, int **mat_b, int row_b, int col_b, int **result, int row_res, int col_res)
{
		int i, j, k, sum = 0;
		for(i = 0; i < row_res; i++)
		{
				for(j = 0; j < col_res; j++)
				{
						//Running the loop to add all the elements//
						for(k = 0; k < col_a; k++)
						{
								sum += (mat_a[i][k] * mat_b[k][j]);
						}
						//The final value of sum will be stored in the index with respect to i and j for result matrix//
						result[i][j] = sum;
						sum = 0;
				}
		}
		printf("Product of two matrix: \n");
		for(i = 0; i < row_res; i++)
		{
				//Printing the result matrix//
				for(j = 0; j < col_res; j++)
				{
						printf("%d ", result[i][j]);
				}
				putchar('\n');
		}
}

