/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 */


#include<stdio.h>
int main()
{
		int row, column, i, j, max, min, temp, k;
		printf("Enter rows and columns: ");
		scanf("%d %d", &row, &column);
		int arr[row][column];
		k = row * column;
		printf("Enter %d array elements\n", k);
		for(i = 0; i < row; i++)
		{
				for(j = 0; j < column; j++)
				{
						scanf("%d", &arr[i][j]);
				}
		}
		max = arr[0][0];
		for(i = 0; i < row; i++)
		{
				for(j = 0; j < column; j++)
				{
						if(max < arr[i][j])
								max = arr[i][j];
				}
		}
		min = arr[0][0];
		for(i = 0; i < row; i++)
		{
				for(j = 0; j < column; j++)
				{
						if(min > arr[i][j])
								min = arr[i][j];
				}
		}
		printf("Max = %d, Min = %d\n", max, min);
		for(k = 0; k < row; k++)
		{
				for(i = 0; i < column - 1; i++)
				{
						for(j = 0; j < column - 1 - i; j++)
						{
								if(arr[k][j] > arr[k][j + 1])
								{
                                        temp = arr[k][j];
								        arr[k][j] = arr[k][j + 1];
								        arr[k][j + 1] = temp;
						        }
				        }
		        }
		}
		printf("After sorting\n");
		for(i = 0; i < row; i++)
		{
				for(j = 0; j < column; j++)
				{
						printf("%d ", arr[i][j]);
				}
				printf("\n");
		}
}


/*#include<stdio.h>
void print_menu(char **str);
int main()
{
		char *str[5] = {"File", "Edit", "View", "Insert", "Help"};
		print_menu(str);
		return 0;
}
void print_menu(char **str)
{
		int i, op;
		printf("Select the option\n");
		for(i = 0; i < 5; i++)
		{
				printf("%d. %s\n", i + 1, str[i]);
		}
		scanf("%d", &op);
		if(op > 0 && op < 6)
		{
				printf("You selected %s option\n", str[op - 1]);
		}
		else
		{
				printf("Invalid option\n");
		}
}*/



