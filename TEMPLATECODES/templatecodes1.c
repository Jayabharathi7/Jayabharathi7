/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */


/*#include <stdio.h>
int main() { int a[5]; int i; for (i = 0; i < 5; i++) { a[i] = i + 1; } for (i = 0; i < 5; i++) { printf("%d\n", a[i]); } }*/


/* array_address.c
  Program to illustrate similarities between arrays and pointers
 //

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("arr = %lu\n", arr);
    printf("arr + 1 = %lu\n", arr + 1);
    printf("&arr + 1 = %lu\n", &arr + 1);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int i;
    int a[5] = {10, 20, 30, 40, 50}; // Initialize array //

    //int b[]; //Error Size is not specified

    int b[] = {100, 200, 300}; // Size is equal to total no. of elements //

    puts("Array a:");
    //print array
    for (i = 0; i < 5; i++)
    {
	printf("%d\n", a[i]);
    }

    puts("Array b:");
    //print array
    for (i = 0; i < 3; i++)
    {
	printf("%d\n", b[i]);
    }
}*/


/*#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5]; //Pointer to array of 5 integers
    int i = 0;

    ptr = &a; // Store the address of whole array

    printf("sizeof(ptr) = %u\n", sizeof(ptr));
    printf("sizeof(*ptr) = %u\n", sizeof(*ptr)); // *ptr gets the entire array

    printf("1st element = %d\n", (*ptr)[0]); // (*ptr) - Gets the entire 1D array
                               // (*ptr)[0] - Gets 1st element from array

    for (i = 0; i < 5; i++)
    {
	printf("%d\n", (*ptr)[i]); // ith element from array
    } 

    //Pointer arithmetic on ptr
    printf("ptr = %p\n", ptr);
    printf("ptr + 1 = %p\n", ptr + 1);

}*/


/*#include <stdio.h>

int main()
{
    int matrix[3][4];
    int max_rows = 3, max_cols = 4;
    int row, col, count = 1;

    printf("Enter the values\n");
    for (row = 0; row < max_rows; row++)
    {
	for (col = 0; col < max_cols; col++)
	{
	    scanf("%d", &matrix[row][col]);
	    //matrix[row][col] = count;
	    //count++;
	}
    }

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", matrix[row][col]);
	    //printf("%4d", *(*(matrix + row) + col) ); //Using pointer arithmetic
	}
	printf("\n"); // To format the output. For next row.
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int matrix[3][4] = {
			{1, 2, 3, 4},
		       	{5, 6, 7, 8},
			{9, 10, 11, 12}
    			};

    int max_rows = 3, max_cols = 4;
    int row = 0, col;

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", matrix[row][col]);
	    //printf("%4d", *(*(matrix + row) + col) );
	}
	printf("\n"); // To format the output. For next row.
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int matrix[3][4];
    int max_rows = 3, max_cols = 4;
    int row, col, count = 1;

    printf("Enter the values\n");
    for (row = 0; row < max_rows; row++)
    {
	for (col = 0; col < max_cols; col++)
	{
	    scanf("%d", &matrix[row][col]);
	}
    }

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", matrix[row][col]);
	    //printf("%4d", *(*(matrix + row) + col) ); //Using pointer arithmetic
	}
	printf("\n"); // To format the output. For next row.
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a[3][4];
#if 1
    printf("sizeof(a) = %u\n", sizeof(a));
    printf("sizeof(a[0]) = %u\n", sizeof(a[0]));
    printf("sizeof(*a) = %u\n", sizeof(*a));
    printf("sizeof(a[0][0]) = %u\n", sizeof(a[0][0]));
#endif

    printf("a = %lu\n", a);
    printf("a + 1 = %lu\n", a + 1);
    printf("&a + 1 = %lu\n", &a + 1);
    printf("&a[0] + 1 = %lu\n", &a[0] + 1);
    printf("a[0] + 1 = %lu\n", a[0] + 1);
    printf("&a[0][0] + 1 = %lu\n", &a[0][0] + 1);
    return 0;
}*/


/*#include <stdio.h>

//#define print(expr) printf(#expr " = %lu\n", expr)

int main()
{
    int a[3][4];

    // All addresses are same, but types are different //
    printf("a = %lu\n", a); //Base addr of 2D array
    printf("&a = %lu\n", &a); //Address of whole 2D array
    printf("&a[0] = %lu\n", &a[0]); //Address of 1st row
    printf("&a[0][0] = %lu\n", &a[0][0]); //Address of 1st integer element

    puts("--------------------------------");

    printf("a[1] = %lu\n", a[1]); //a[1] indicates 2nd row.
    printf("*(a + 1) = %lu\n", *(a + 1)); //Same as above

    puts("--------------------------------");

    printf("a = %lu\n", a);
    printf("a + 1 = %lu\n", a + 1); // 2nd row address
    printf("&a + 1 = %lu\n", &a + 1); //2nd 2D array (&a + 1 *sizeof (a))
    printf("&a[0] + 1 = %lu\n", &a[0] + 1); //2nd row addr
    printf("&a[0][0] + 1 = %lu\n", &a[0][0] + 1); //2nd element addr
    //print(&a[0][0] + 1);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int arr[3][4] = {
    			{1, 2, 3, 4},
    			{5, 6, 7, 8},
    			{9, 10, 11, 12}
    };

#if 0
    // Print the array size //
    printf("sizeof(arr) = %u\n", sizeof(arr));

    // Should print the row size //
    printf("sizeof(arr[0]) = %u\n", sizeof(arr[0]));
    printf("sizeof(*arr) = %u\n", sizeof(*arr));

    // Should print the col size //
    printf("sizeof(arr[0][0]) = %u\n", sizeof(arr[0][0]));
    printf("sizeof(**arr) = %u\n", sizeof(**arr));

    printf("arr[0][0] = %d\n", arr[0][0]);
    printf("**arr = %d\n", **arr);

#endif
    printf("arr[2][1] = %d\n", arr[2][1]);
    printf("*(*(arr + 2) + 1) = %d\n", *(*(arr + 2) + 1));

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8},
			{9, 10, 11, 12}};
    int max_rows = 3, max_cols = 4, row, col, count = 1;
    int *ptr[3]; //ptr is and array of int *

    ptr[0] = matrix[0], ptr[1] = matrix[1], ptr[2] = matrix[2];

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", ptr[row][col]);
	}
	printf("\n"); // To format the output. For next row.
    }

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ra[5]; //Number of rows is fixed (5)
    int i, j, n_rows = 5, n_cols = 3, k = 1;

    // Allocate each row dynamically. ie., Array of integers //
    for (i = 0; i < n_rows; i++)
    {
    	ra[i] = (int *) malloc(n_cols * sizeof(int));
    }
    // Access the 2D array //
    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    ra[i][j] = k++;
	}
    }
    //Print array
    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    printf("%4d", ra[i][j]);
	}
	printf("\n");
    }
    // Free cols
    for (i = 0; i < n_rows; i++)
    {
    	if (ra[i] != NULL)
	{
	    free(ra[i]);
	    ra[i] = NULL;
	}
	
    }

}*/


/*#include <stdio.h>
#include <stdlib.h>


void print_2D_array(int **ptr, int max_cols, int max_rows);

void print_2D_array(int **ptr, int max_cols, int max_rows)
{
    int row, col;
    //int max_cols = 4;

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", ptr[row][col]);
	}
	printf("\n"); // To format the output. For next row.
    }
}

int main()
{
    int **ra;
    int i, j, n_rows = 3, n_cols = 4;
    int count = 0;

    // Allocate rows (array of pointers) dynamically //
    ra = (int **) malloc(n_rows * sizeof(int *));

    if (!ra)
    {
    	puts("malloc failed");
    	return 1;
    }

    // Allocate cols (1D int array) dynamically, for each row //
    for (i = 0; i < n_rows; i++)
    {
    	ra[i] = (int *) malloc(n_cols * sizeof(int));
    }

    // Store values in 2D array //
    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    ra[i][j] = ++count;
	}
    }

    //Print array
    print_2D_array(ra, n_cols, n_rows);

    // Free cols
    for (i = 0; i < n_rows; i++)
    {
    	if (ra[i] != NULL)
	{
	    free(ra[i]);
	    ra[i] = NULL;
	}
	
    }

    // Free rows
    if (ra != NULL)
    {
    	free(ra);
    	ra = NULL;
    }

}*/


/*#include <stdio.h>
#include <stdlib.h>

void print_2D_array(int **arr, int max_rows, int max_cols);
int main()
{
    int **ra;
    int i, j, n_rows = 5, n_cols = 3, k = 1;

    // Allocate rows (array of pointers) dynamically //
    ra = (int **) malloc(n_rows * sizeof(int *));

    // Allocate cols (1D int array) dynamically, for each row //
    for (i = 0; i < n_rows; i++)
    {
    	ra[i] = (int *) malloc(n_cols * sizeof(int));
    }
    // Access the 2D array //
    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    ra[i][j] = k++;
	}
    }


    //Print array
    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    printf("%4d", ra[i][j]);
	}
	printf("\n");
    }
    // Free cols
    for (i = 0; i < n_rows; i++)
    {
    	if (ra[i] != NULL)
	{
	    free(ra[i]);
	    ra[i] = NULL;
	}
	
    }

    // Free rows
    if (ra != NULL)
    {
    	free(ra);
    	ra = NULL;
    }

}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int (*ra)[3]; // Pointer to an array of 3 ints (Colums fixed)
    int i, j, n_rows = 5, n_cols = 3, k = 1;

    // Allocate whole array dynamically //
    ra = (int (*)[3]) malloc(n_rows * sizeof(int [3]));
    //ra = (int (*)[3]) malloc(n_cols * n_rows * sizeof(int));

    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    ra[i][j] = k++;
	}
    }
    //Print array
    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    printf("%4d", ra[i][j]);
	}
	printf("\n");
    }
    // Free entire 2d array
    if (ra != NULL)
    {
	free(ra);
	ra = NULL;
    }
	

}*/


/*#include <stdio.h>


void print_2D_array(int **ptr, int max_cols, int max_rows);

void print_2D_array(int **ptr, int max_cols, int max_rows)
{
    int row, col;
    //int max_cols = 4;

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", ptr[row][col]);
	}
	printf("\n"); // To format the output. For next row.
    }
}
int main()
{
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int max_rows = 3, max_cols = 4;

    print_2D_array(matrix, max_cols, max_rows);

    return 0;
}*/


/*  FILE: min_of_max_2D_array.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int matrix[4][4] = {{5, 10, 1, 25},
			{-7, -9, -99, -1},
			{8, 99, 1000, 50},
			{6, 1, 30, 5}
			};

    int max, min, row, col, max_rows, max_cols;
    max_rows = 4, max_cols = 4;
    int max_vals[max_rows]; //1D array to store max values

    // Find max of each row
    for (row = 0; row < max_rows; row++)
    {
	// Assume 1st element is maximum
	max_vals[row] = matrix[row][0];

	for (col = 1; col < max_cols; col++)
	{
	    // Compare max with next element
	    if (matrix[row][col] > max_vals[row])
	    {
		max_vals[row] = matrix[row][col];
	    }
	}

	printf("max = %d\n", max_vals[row]);
    }

    //Find min in 1D array
    min = max_vals[0];
    for (row = 1; row < max_rows; row++)
    {
	if (max_vals[row] < min)
	{
	    min = max_vals[row];
	}
    }

    printf("min = %d\n", min);

    return 0;
}*/


/* FILE: min_of_max_2D_array.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int matrix[4][4] = {{5, 10, 1, 25},
			{-7, -9, -99, -1},
			{8, 99, 1000, 50},
			{6, 1, 30, 5}
			};

    int max, min, row, col, max_rows, max_cols;
    max_rows = 4, max_cols = 4;
    int max_vals;

    // Find max of each row
    for (row = 0; row < max_rows; row++)
    {
	// Assume 1st element is maximum
	max_vals = matrix[row][0];

	for (col = 1; col < max_cols; col++)
	{
	    // Compare max with next element
	    if (matrix[row][col] > max_vals)
	    {
		max_vals = matrix[row][col];
	    }
	}

	if (row == 0) // Special case for 1st iteration.
	{
	    min = max_vals;
	}
	else
	{
	    if (max_vals < min)
	    {
		min = max_vals;
	    }
	}

    }

    printf("min = %d\n", min);

    return 0;
}*/


/* FILE: min_of_max_2D_array.c
 // Description: 
 //

#include <stdio.h>
#include <limits.h>

int main()
{
    int matrix[4][4] = {{5, 10, 1, 25},
			{-7, -9, -99, -1},
			{8, 99, 1000, 50},
			{6, 1, 30, 5}
			};

    int max, min, row, col, max_rows, max_cols;
    max_rows = 4, max_cols = 4;
    int max_vals;
    min = INT_MAX;

    // Find max of each row
    for (row = 0; row < max_rows; row++)
    {
	// Assume 1st element is maximum
	max_vals = matrix[row][0];

	for (col = 1; col < max_cols; col++)
	{
	    // Compare max with next element
	    if (matrix[row][col] > max_vals)
	    {
		max_vals = matrix[row][col];
	    }
	}

	if (max_vals < min)
	{
	    min = max_vals;
	}

    }

    printf("min = %d\n", min);

    return 0;
}*/


/*100
101
102
103
104
105
106
107
108
109
110
111*/



/* FILE: 2D_array_passing.c  
#include <stdio.h>

#define MAX_ROWS 2
#define MAX_COLS 3

void print_2D_array(int *ptr, int rows, int cols);

void print_2D_array(int *ptr, int rows, int cols)
{
    int i, j;
    // Print matrix
    for (i = 0; i < rows; i++)
    {
	for (j = 0; j < cols; j++)
	{
	    printf("%5d", *(ptr + (i * cols) + j));
	}
	puts("");
    }
}

int main()
{
    // Initialize 2D array row-wise
    int arr[MAX_ROWS][MAX_COLS] = {{1, 2, 3}, {4, 5, 6}};

    print_2D_array((int *)arr, MAX_ROWS, MAX_COLS);

}*/


/*#include <stdio.h>

//void print_2D_array(int max_rows, int max_cols, int ptr[][max_cols]); // Prototype
//void print_2D_array(int max_rows, int max_cols, int (*ptr)[max_cols])

//void print_2D_array(int (*ptr)[4], int max_rows);

//void print_2D_array(int (*ptr)[4], int max_rows)
void print_2D_array(int ptr[][4], int max_rows)
{
    int row, col;
    int max_cols = 4;

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", ptr[row][col]);
	}
	printf("\n"); // To format the output. For next row.
    }
}
int main()
{
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int max_rows = 3, max_cols = 4;

    print_2D_array(matrix, max_rows);
    //print_2D_array(max_rows, max_cols, matrix);

    return 0;
}*/


/*#include <stdio.h>

void print_2D_array(int max_rows, int max_cols, int arr[][max_cols])
{
    int row, col;

    printf("Sizeoff arr = %u\n", sizeof(arr));
    printf("Sizeoff arr = %u\n", sizeof(*arr));

    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", arr[row][col]);
	    //printf("%4d", *(*(arr + row) + col) );
	}
	printf("\n"); // To format the output. For next row.
    }
}

int main()
{
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int max_rows = 3, max_cols = 4;

    printf("Printing the 2D Array\n");
    print_2D_array(max_rows, max_cols, matrix);

    return 0;
}*/


/*#include <stdio.h>

//void print_2D_array(int max_rows, int max_cols, int arr[][max_cols])

void 
print_2D_array(int max_rows, int max_cols, int arr[max_rows][max_cols])
{
    int row, col;

    printf("Sizeoff arr = %u\n", sizeof(arr));

    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", arr[row][col]);
	    //printf("%4d", *(*(arr + row) + col) );
	}
	printf("\n"); // To format the output. For next row.
    }
}

int main()
{
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int max_rows = 3, max_cols = 4;

    printf("Printing the 2D Array\n");
    print_2D_array(max_rows, max_cols, matrix);

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>


void print_2D_array(int **ptr, int max_cols, int max_rows);

void print_2D_array(int **ptr, int max_cols, int max_rows)
{
    int row, col;
    //int max_cols = 4;

    printf("Printing the 2D Array\n");
    for (row = 0; row < max_rows; row++)
    {
	// Prints a single row at a time
	for (col = 0; col < max_cols; col++)
	{
	    printf("%4d", ptr[row][col]);
	}
	printf("\n"); // To format the output. For next row.
    }
}

int main()
{
    int **ra;
    int i, j, n_rows = 3, n_cols = 4;
    int count = 0;

    // Allocate rows (array of pointers) dynamically //
    ra = (int **) malloc(n_rows * sizeof(int *));

    if (!ra)
    {
    	puts("malloc failed");
    	return 1;
    }

    // Allocate cols (1D int array) dynamically, for each row //
    for (i = 0; i < n_rows; i++)
    {
    	ra[i] = (int *) malloc(n_cols * sizeof(int));
    }

    // Store values in 2D array //
    for (i = 0; i < n_rows; i++)
    {
	for (j = 0; j < n_cols; j++)
	{
	    ra[i][j] = ++count;
	}
    }

    //Print array
    print_2D_array(ra, n_cols, n_rows);

    // Free cols
    for (i = 0; i < n_rows; i++)
    {
    	if (ra[i] != NULL)
	{
	    free(ra[i]);
	    ra[i] = NULL;
	}
	
    }

    // Free rows
    if (ra != NULL)
    {
    	free(ra);
    	ra = NULL;
    }

}*/


/* Both row and colum size fixed //
void print_2D_array(int ptr[3][4]);

//Fixed column size //
void print_2D_array(int (*ptr)[4], int max_rows);
void print_2D_array(int ptr[][4], int max_rows);

// Variable row and col size //
void print_2D_array(int max_rows, int max_cols, int (*ptr)[max_cols]); // Prototype
void print_2D_array(int max_rows, int max_cols, int ptr[max_rows][max_cols]); // Prototype
void print_2D_array(int max_rows, int max_cols, int ptr[][max_cols]); // Prototype*/


/*#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5];
    int *ptr2 = a;
    int i = 0;

    ptr = &a; // Store the address of whole array
    printf("ptr = %p\n", ptr);
    printf("a   = %p\n", a);
    printf("*ptr = %p\n", *ptr);


    printf("sizeof(ptr) = %u\n", sizeof(ptr));
    printf("sizeof(*ptr) = %u\n", sizeof(*ptr)); // *ptr gets the entire array
    printf("sizeof(*ptr2) = %u\n", sizeof(*ptr2)); // *ptr2 gets the 1st element

    //Pointer arithmetic on ptr
    printf("ptr = %p\n", ptr);
    printf("ptr + 1 = %p\n", ptr + 1);

    printf("(*ptr)[0]%d\n", (*ptr)[0]); // (*ptr) - Gets the entire 1D array
                               // (*ptr)[0] - Gets 1st element from array

    for (i = 0; i < 5; i++)
    {
	printf("%d\n", (*ptr)[i]); // ith element from array
    } 
}*/


/*#include <stdio.h>

int main()
{
    int a[3][4] = {{1, 2, 3, 4},
    		   {5, 6, 7, 8},
    		   {9, 10, 11, 12}
		  };

    int (*ptr)[4];
    int i = 0, j = 0;;

    ptr = a; // Store the base address of array a (Analogy a => &a[0])

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 4; j++)
	{
	    printf("%3d", ptr[i][j]); 
	    //printf("%3d", (*(ptr + i))[j]); 
	}
	puts("");
    }

}*/


/* array_address.c
 // Program to illustrate similarities between arrays and pointers
 //

#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    int i;

    ptr = arr;

    printf("arr = %p\n", arr);
    printf("ptr = %p\n", ptr);
    printf("arr = %p\n", arr + 1);
    printf("ptr = %p\n", ptr + 1);

    // Print array using pointer notation //
    for (i = 0; i < 5; i++)
    {
	printf("%d ", *(ptr + i));
    }

    printf("\n");

#if 1
    // Print array using array notation //
    for (i = 0; i < 5; i++)
    {
	printf("%d ", ptr[i]);
    }

    printf("\n");
#endif

    return 0;
}*/


/* array_2D.c
 // Program to illustrate difference between a and &a,
 // where a is an array
 //

#include <stdio.h>

int main()
{
    //int a[3][5];
    int a[5];

    printf("a = %p\n", a); //Print base address
    printf("a + 1 = %p\n", (a + 1)); //Print next elements address
    printf("&a + 1 = %p\n", (&a + 1)); //Print next array's address
    printf("&a[0] + 1 = %p\n", (&a[0] + 1)); //Print next elements address

    printf("%u\n", (&a + 1 ) - (&a));
    printf("%u\n", (a + 1 ) - (a));
    printf("%u\n", (&a[0] + 1 ) - (&a[0]));

    // Typecast and substract. This will give difference in bytes, not elements
    printf("(a + 1)  - (a)  = %lu\n",
	    (unsigned long)(a + 1 ) - (unsigned long)(a));
    printf("(&a + 1) - (&a) = %lu\n",
	    (unsigned long)(&a + 1 ) - (unsigned long)(&a));

    // Result is not zero for below code ! //
    printf("(&a + 1) - (a + 1) = %lu\n",
	    (long unsigned)(&a + 1) - (long unsigned)(a + 1));

    return 0;
}*/


/* array_out_of_bounds.c
 // Program to illustrate array out of bounds
 //

#include <stdio.h>

int main()
{
    int x[2] = {1, 2};
    int y[2];
    int z[2] = {3, 4};
    int i;

    printf("Enter the elements for y[]\n");
    for (i = 0; i < 3; i++)
    {
	scanf("%d", &y[i]);
    }

    y[-1] = 10;

    printf("Values of x[] are:\n");
    for (i = 0; i < 2; i++)
    {
	printf("%d ", x[i]);
    }
    printf("\n");


    printf("Values of z[] are:\n");
    for (i = 0; i < 2; i++)
    {
	printf("%d ", z[i]);
    }
    printf("\n");
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a[5];
    int i;

    printf("Enter 5 elements\n");
    // store values in array from user
    for (i = 0; i < 5; i++)
    {
	scanf("%d", &a[i]);
    }

    puts("Values in array");
    //print array
    for (i = 0; i < 5; i++)
    {
	printf("%d\n", a[i]);
    }
}*/


/*#include <stdio.h>

int main()
{
    float a[5];
    int i;

    puts("Enter 5 nos:");
    // store values in array
    for (i = 0; i < 5; i++)
    {
	scanf("%f", &a[i]);
    }

    //print array
    puts("Array elements are:");
    for (i = 0; i < 5; i++)
    {
	printf("%f\n", a[i]);
    }
}*/


/*#include <stdio.h>

int main()
{
    int i, size;

    printf("Enter size: ");
    scanf("%d", &size);

    if (size > 1000 || size < 0)
    {
	printf("Error: Max limit is 1000\n");
	return 1;
    }

    int a[size];

    //scanf array
    printf("Enter the elements now: ");
    for (i = 0; i < size; i++)
    {
	scanf("%d", &a[i]);
    }

    //print array
    printf("Array elements are: ");
    for (i = 0; i < size; i++)
    {
	printf("%d\n", a[i]);
    }
}*/


/*#include <stdio.h>

int main()
{
    int a[1000];
    int i, limit, sum;
    float average;

    printf("Enter the no. of elements: ");
    scanf("%d", &limit);

    printf("Enter %d elements\n", limit);
    // store values in array from user
    for (i = 0; i < limit; i++)
    {
	scanf("%d", &a[i]);
    }

    // Find sum of elements
    sum = 0;
    for (i = 0; i < limit; i++)
    {
	sum = sum + a[i];
    }

    printf("Sum = %d\n", sum);

    // Find average of elements
    average = (float)sum / limit;
    printf("Average = %f\n", average);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a[100];
    int i, limit, largest;

    printf("Enter the no. of elements: ");
    scanf("%d", &limit);

    printf("Enter %d elements\n", limit);

    // store values in array from user
    for (i = 0; i < limit; i++)
    {
	scanf("%d", &a[i]);
    }

    largest = a[0]; //Assume 1st element is largest
    // Find largest
    for (i = 1; i < limit; i++)
    {
	if (a[i] > largest)
	{
	    largest = a[i];
	}
    }

    printf("Largest = %d\n", largest);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a[100];
    int i, j, limit, temp;

    printf("Enter the no. of elements: ");
    scanf("%d", &limit);

    printf("Enter %d elements\n", limit);

    // store values in array from user
    for (i = 0; i < limit; i++)
    {
	scanf("%d", &a[i]);
    }

    // Reverse the array elements
    for (i = 0, j = limit -1; i < j; i++, j--)
    {
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
    }

    // Print the array after reversing
    puts("reversed array is:");
    for (i = 0; i < limit; i++)
    {
	printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a[100];
    int i, limit, temp;

    printf("Enter the no. of elements: ");
    scanf("%d", &limit);

    printf("Enter %d elements\n", limit);

    // store values in array from user
    for (i = 0; i < limit; i++)
    {
	scanf("%d", &a[i]);
    }

    // Reverse the array elements
    for (i = 0; i < limit / 2; i++)
    {
	temp = a[i];
	a[i] = a[limit - (i + 1)] ;
	a[limit - (i + 1)] = temp;
    }

    // Print the array after reversing
    puts("reversed array is:");
    for (i = 0; i < limit; i++)
    {
	printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int i;

    //Copy a to b?
    b = a;

    //print array b
    for (i = 0; i < 5; i++)
    {
	printf("%d\n", b[i]);
    }
}*/


/*#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int i;

    //Copy a to b, element by element
    for (i = 0; i < 5; i++)
    {
	b[i] = a[i];
    }

    //print array b
    for (i = 0; i < 5; i++)
    {
	printf("%d\n", b[i]);
    }
}*/


/*#include <stdio.h>

int main()
{
    int x;

    printf("Enter int: ");
    scanf("%d", &x);

    printf("x = %d\n", x);
}*/


/* seg_fault.c
 // Program to illustrate array out of bounds.
 // This also illustrates segfault
 //

#include <stdio.h>

int main()
{
    int a[5], i;
    for(i = 0; i <= 5050; i++)
    {
	printf("%d\n", a[i]);
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char ch;

    printf("Enter character 'A': ");
    scanf("%c", &ch);

    if (ch == 'A')
    {
	printf("Good\n");
    }
    else
    {
	printf("Read the message before entering!\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
	printf("%c is in Upper case\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
	printf("%c is in Lower case\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
	printf("%c is a digit\n", ch);
    }
    else
    {
	printf("Unknown character\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
	printf("%c is in Upper case\n", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
	printf("%c is in Lower case\n", ch);
    }
    else if (ch >= 48 && ch <= 57)
    {
	printf("%c is a digit\n", ch);
    }
    else
    {
	printf("Unknown character\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
	printf("You entered zero\n")
    }
    else if (num > 0)
    {
	if (num % 2 == 0)
	{
	    printf("Number is +ve even\n");
	}
	else
	{
	    printf("Number is +ve odd\n");
	}
    }
    else
    {
	if (num % 2 == 0)
	{
	    printf("Number is -ve even\n");
	}
	else
	{
	    printf("Number is -ve odd\n");
	}
    }
}*/


/*#include <stdio.h>

int main()
{
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
	printf("you entered zero\n");
    }
    else
    {
	if (num > 0)
	{
	    printf("Number is +ve ");
	}
	else
	{
	    printf("Number is -ve ");
	}

	if (num % 2 == 0)
	{
	    printf("even\n");
	}
	else
	{
	    printf("odd\n");
	}
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
	puts("Please enter a valid score (0 - 100)");
    }
    else
    {
	if (score >=90 )
	{
	    puts("A+");
	}
	else if(score >= 70 && score < 90)
	{
	    puts("A");
	}
	else if(score >= 60 && score < 70)
	{
	    puts("B");
	}
	else if(score >= 40 && score < 60)
	{
	    puts("C");
	}
	else
	{
	    puts("FAIL");
	}
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    if (score >=90 )
    {
	puts("A+");
    }
    else if(score >= 70 && score < 90)
    {
	puts("A");
    }
    else if(score >= 60 && score < 70)
    {
	puts("B");
    }
    else if(score >= 40 && score < 60)
    {
	puts("C");
    }
    else
    {
	puts("FAIL");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
	puts("Please enter a valid score (0 - 100)");
	return 1; //Return from main() function. Program will terminate
    }

    if (score >=90 )
    {
	puts("A+");
    }
    else if(score >= 70 && score < 90)
    {
	puts("A");
    }
    else if(score >= 60 && score < 70)
    {
	puts("B");
    }
    else if(score >= 40 && score < 60)
    {
	puts("C");
    }
    else
    {
	puts("FAIL");
    }

    return 0;
}*/


/* power_of_2_series.c: Program to print power of 2 series

#include <stdio.h>

int main()
{
    int result = 1, limit, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    i = 0;

    while (i <= limit)
    {
        printf("%d ", result); //Print result 1st (This will print 1 initially)
        result = result * 2; //Power of 2 (Accumulative)
        i = i + 1;
    }

    printf("\n");

    return 0;
}*/


/* power_of_2_series.c: Program to print power of 2 series

#include <stdio.h>

int main()
{
    int result = 1, limit, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    for (i = 0; i <= limit; i++)
    {
        printf("%d ", result); //Print result 1st (This will print 1 initially)
        result = result * 2; //Power of 2 (Accumulative)
    }

    printf("\n");

    return 0;
}*/



/* power_of_n_series.c: Program to print power of n series

#include <stdio.h>

int main()
{
    int result = 1, limit, i, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the limit: ");
    scanf("%d", &limit);

    i = 0;

    while (i <= limit)
    {
	printf("%d ", result); //Print result 1st (This will print 1 initially)
	result = result * num; //Power of num (Accumulative)
	i = i + 1;
    }

    printf("\n");

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int line_no, max_lines, j;

    max_lines = 4;

    for (line_no = 1; line_no <= max_lines; line_no++)
    {
	//For each line, print line_no stars
	for (j = 0; j < line_no; j++)
	{
	    putchar('*');
	}

	putchar('\n');
    }
    return 0;
}*/



/* sum_natural.c: Program to find the sum of natural nos upto limit 

#include <stdio.h>

int main()
{
    int sum = 0, limit, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    i = 1;

    while (i <= limit)
    {
	sum = sum + i; //Accumlative sum
	i = i + 1;
    }

    printf("Sum of natural numbers upto %d is %d\n", limit, sum);

    return 0;
}*/


/* sum_natural.c: Program to find the sum of natural nos upto limit 

#include <stdio.h>

int main()
{
    int sum = 0, limit, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {
	sum = sum + i; //Accumlative sum
    }

    printf("Sum of natural numbers upto %d is %d\n", limit, sum);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
	printf("%d is largest\n", num1);
    }
    else
    {
	printf("%d is largest\n", num2);
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num1, num2;
    int largest;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
	largest = num1;
    }
    else
    {
	largest = num2;
    }

    printf("%d is largest\n", largest);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a, b, c;
    int largest;

    printf("Enter 3 numbers: ");
    scanf("%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
	largest = a;
    }
    else if (b > a && b > c)
    {
	largest = b;
    }
    else
    {
	largest = c;
    }

    printf("%d is largest\n", largest);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a, b, c;
    int largest;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
	if (a > c)
	{
	    largest = a;
	}
	else
	{
	    largest = c;
	}
    }
    else // b > a
    {
	if (b > c)
	{
	    largest = b;
	}
	else
	{
	    largest = c;
	}

    }

    printf("%d is largest\n", largest);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a, b, c;
    int middle;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if ((a >= b && a <= c) || (a >= c && a <= b))
    {
	middle = a;
    }
    else if ((b >= a && b <= c) || (b >= c && b <= a))
    {
	middle = b;
    }
    else
    {
	middle = c;
    }

    printf("Middle number is %d\n", middle);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char ch;
    int diff;

    printf("Enter a character: ");
    ch = getchar();

    //Check for Upper case
    if (ch >= 'A' && ch <= 'Z')
    {
	diff = 'a' - 'A'; //This is 97 - 65 (+32)
	ch = ch + diff; //Convert to lower
	//ch = ch + 'a' - 'A';
    }
    else if (ch >= 'a' && ch <= 'z') //Check for lower case
    {
	diff = 'A' - 'a'; //This is 65 - 97 (-32)
	ch = ch + diff; //Convert to upper
    }
    else
    {
	puts("Invalid character. Enter an alphabet");
	return 1;
    }

    //Print the converted value
    printf("The toggled char is %c\n", ch);

    return 0;
}*/


/* Program illustrates usage of break //
#include <stdio.h>

int main()
{
    int i, number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 0; i < 10; i++)
    {
    	if (i == number)
	    break;
    }

    if (i == 10)
	printf("Number not matched\n");
    else
	printf("Number matched\n");

    return 0;
}*/


/* Program illustrates usage of break //
#include <stdio.h>

int main()
{
    int i, number;
    int flag = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 0; i < 10; i++)
    {
    	if (i == number)
	{
	    printf("Number matched\n");
	    flag = 1;
	    break;
	}
    }

    if (flag == 0)
	printf("Number not matched\n");

    return 0;
}*/


/* Program illustrates usage of break //
#include <stdio.h>

int main()
{
    int i, number;
    int flag = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 0; i < 10; i++)
    {
    	if (i == number)
	{
	    flag = 1;
	    break;
	}
    }

    if (flag == 1)
	printf("Number matched\n");
    else
	printf("Number not matched\n");

    return 0;
}*/


/* Program shows incorrect usage of break.
 // This program will not compile
 //
#include <stdio.h>

int main()
{
    int x;

    printf("Enter a num: ");
    scanf("%d", &x);

    if (x == -1)
    {
	break;
    }
    else
    {
	printf("%d\n", x);
    }

    printf("Done\n");

    return 0;
}*/


/* Program illustrates usage of break //
#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
    	if (i == 5)
	{
	    break;
	}

	printf("%d ", i);
    }

    printf("\nDONE\n");
    printf("%d\n", i);
    
    return 0;
}*/


/* Program illustrates the usage of break in
 // nested loop.
 //
#include <stdio.h>

int main()
{
    int i, j;

    for (j = 0; j < 10; j++)
    {
	for (i = 0; i < 10; i++)
	{
	    if (i == 5)
	    {
		break;
	    }

	    printf("%d ", i);
	}

	printf("\n");

	if (j == 7)
	{
	    break;
	}
    }

    return 0;
}*/


/* Program illustrates usage of break //
#include <stdio.h>

int main()
{
    int i, number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 0; i < 10; i++)
    {
    	if (i == number)
	{
	    break;
	}
    }

    if (i == 10)
	printf("Number not matched\n");
    else
	printf("Number matched\n");

    return 0;
}*/


/* Program illustrates usage of break //
#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 10)
    {
    	if (i == 5)
	    break; //break from loop

	printf("%d ", i);
	i++;
    }

    printf("\nDONE\n");
    printf("%d\n", i);
    
    return 0;
}*/


/* Usage of continue //
#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
    	if (i == 5)
	{
	    continue;
	}

	printf("%d ", i);
    }

    printf("\nDONE\n");
    //printf("%d ", i); 

    return 0;
}*/


/* Usage of continue //
#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10;)
    {
    	if (i == 5)
	{
	    continue;
	}

	printf("%d\n", i);
	i++;
    }

    printf("DONE\n");

    return 0;
}*/


/* Usage of continue //
#include <stdio.h>

int main()
{
    int i = 0;

    do
    {
    	if (i == 5)
	{
	    i++; //Increment, otherwise it will become infinite
	    continue;
	}

	printf("%d\n", i);
	i++;
    } while (i < 10);

    printf("DONE\n");
    printf("%d ", i); 

    printf("\n");
    return 0;
}*/


/* Usage of continue //
#include <stdio.h>

int main()
{
    int i = 0;

    for (i = 0; i < 10; i++)
    {
    	if (i == 5)
	    continue;

	printf("%d\n", i);
    }

    return 0;
}*/


/* FILE: prime_check_problem.c
 // Description: 
 //

#include <stdio.h>
#include <math.h>
int main()
{
    int number, div, flag = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    div = 2;

    while(div <= sqrt(number))
    {
	if (number % div == 0) //Is number divisible?
	{
	    printf("%d is not prime\n", number);
	    flag = 1; //Indicate number is not prime
	    break;
	}
	div++; //Go for next number
    }

    if (flag == 0) //I number prime
	printf("%d is prime\n", number);

    return 0;
}*/


/* FILE: prime_check_problem.c
 // Description: 
 //

#include <stdio.h>
#include <math.h>

int main()
{
    int number, div, flag = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    for (div = 2; div <= sqrt(number); div++)
    {
	if (number % div == 0) //Is number divisible?
	{
	    printf("%d is not prime\n", number);
	    flag = 1; //Indicate number is not prime
	    break;
	}
    }

    if (flag == 0) //number is prime
	printf("%d is prime\n", number);

    return 0;
}*/


/* FILE: prime_check_problem.c
 // Description: 
 //

#include <stdio.h>
#include <math.h>
int main()
{
    int number, div;

    printf("Enter the number: ");
    scanf("%d", &number);

    div = 2;

    while(div <= sqrt(number))
    {
	if (number % div == 0) //Is number divisible?
	{
	    printf("%d is not prime\n", number);
	    break;
	}
	div++; //Go for next number
    }

    //if (div > sqrt(number))
    if (number % div != 0)
	printf("%d is prime\n", number);

    return 0;
}*/


/* Usage of continue //
#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 10)
    {
    	if (i == 5)
	{
	    i++;
	    continue;
	}

	printf("%d\n", i);
	i++;
    }

    printf("DONE\n");

    return 0;
}*/


/* Usage of continue //
#include <stdio.h>

int main()
{
    int i = 0;

    while (i < 10)
    {
	i++;
    	if (i == 5)
	{
	    continue;
	}

	printf("%d\n", i);
    }

    printf("DONE\n");

    return 0;
}*/


/* FILE: 1_power_of_2_series.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int i = 0, limit, result = 1;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    do
    {
	printf("%d ", result);
	result = 2 * result;
	i++;
    } while(i <= limit);

    printf("\n");

    return 0;
}*/


/* FILE: 1_power_of_2_series.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int i = 0, limit, result = 1;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    for(i = 0; i < limit; i++)
    {
	printf("%d ", result);
	result = 2 * result;
    }

    printf("\n");

    return 0;
}*/


/* FILE: 1_power_of_2_series.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int i = 0, limit, result = 1;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    while(i <= limit)
    {
	printf("%d ", result);
	result = 2 * result;
	i++;
    }

    printf("\n");

    return 0;
}*/


/* FILE: 1_power_of_2_series.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int i = 0, limit, result = 1;
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the limit: ");
    scanf("%d", &limit);

    do
    {
	printf("%d ", result);
	result = x * result;
	i++;
    } while(i <= limit);

    printf("\n");

    return 0;
}*/


/* FILE: 1_power_of_2_series.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int i = 0, result = 0;
    int x, y;

    printf("Enter the value of x and y ");
    scanf("%d%d", &x, &y);

    do
    {
	result = x + result;
	i++;
    } while(i < y);

    printf("%d\n", result);

    return 0;
}*/


/* FILE: 3_product_using_loop_while.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int i = 0, product;
    int a, b;

    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    product = 0;
    while(i < b) //Add a, b times
    {
	product = product + a;
	i++;
    }

    printf("product is: %d\n", product);

    return 0;
}*/


/* FILE: 4_print_start_pattern.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int max_lines;
    int lineno, count;

    printf("Enter max lines: ");
    scanf("%d", &max_lines);

    for (lineno = 1; lineno <= max_lines; lineno++)
    {
	//Print *'s lineno times
	for (count = 0; count < lineno; count++)
	{
	    printf("*");
	}
	printf("\n");
    }

    return 0;
}*/


/* FILE: 4_print_start_pattern.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int max_lines;
    int lineno, count;

    lineno = 1;

    // BEGIN: Code to print a line //
    for (count = 0; count < lineno; count++)
    {
	printf("*");
    }
    printf("\n");
    // END: Code to print a line //

    return 0;
}*/


/* FILE: 4_print_start_pattern.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int max_lines;
    int lineno, count;

    printf("Enter max lines: ");
    scanf("%d", &max_lines);

    for (lineno = 1; lineno <= max_lines; lineno++)
    {
	//Print number series 
	for (count = 1; count <= lineno; count++)
	{
	    printf("%d ", count);
	}
	printf("\n");
    }

    return 0;
}*/


/* FILE: 4_print_start_pattern.c 
 * Description: 
 */

/*#include <stdio.h>

int main()
{
    int max_lines;
    int lineno, count;

    printf("Enter max lines: ");
    scanf("%d", &max_lines);

    for (lineno = 1; lineno <= max_lines; lineno++)
    {
	for (count = 1; count <= lineno; count++)
	{
	    printf("%d ", count);
	}
	printf("\n");
    }

    return 0;
}*/


/* FILE: 6_advanced_line_pattern.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int m, n, count;

    printf("Enter total no. of chars: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
	printf("ERROR: Please enter an odd number\n");
	return 1; // terminate the main function. Exit the program
    }

    printf("Enter no. of chars in middle: ");
    scanf("%d", &m);

    if (m % 2 == 0)
    {
	printf("ERROR: Please enter an odd number\n");
	return 1; // terminate the main function. Exit the program
    }

    // Check if n < m
    if (n <= m)
    {
	printf("ERROR: Total chars must be greater than middle\n");
	return 1;
    }

    // Start printing

    // print $'s
    for (count = 0; count < (n - m) / 2; count++)
	printf("$");

    // print *'s
    for (count = 0; count < m; count++)
	printf("*");

    // print $'s
    for (count = 0; count < (n - m) / 2; count++)
	printf("$");

    printf("\n");

    return 0;
}*/


/* do_while_ex1.c
 // Description: Simple do while loop example 1
 //

#include <stdio.h>

int main()
{
    do
    {
	printf("Hello\n");
    } while(0);

}*/


/* do_while_ex1.c
 // Description: Simple do while loop example 1
 //

#include <stdio.h>

int main()
{
    int i = 0;

    do
    {
	printf("%d \n", i);
	i = i + 1;
    } while(i < 10);

    printf("Done %d \n", i);
}*/


/* do_while_ex2.c
 // Description: Simple do while loop example 2
 //

#include <stdio.h>

int main()
{
    int i, x;

    i = 0;

    do
    {
	x = i++;
	printf("%d \n", x);
    } while(i < 10);

    //printf("%d \n", i);
}*/


/* for1.c
 // Description: Simple for loop example 1
 //

#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
	printf("%d \n", i);
    }

    printf("After loop %d \n", i);
}*/


/* for1.c
 // Description: Simple for loop example 1
 //

#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
	printf("%d \n", i);
    }

    printf("After loop %d \n", i);
}*/


/*#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
	for (j = 0; j < 5; j++)
	{
	    printf("Inner Loop: i = %d, j = %d\n", i, j);
	}
    }
}*/


/*#include <stdio.h>

int main()
{
    int i = 0, j = 0;

    while (i < 10)
    {
	printf("Outer Loop: i = %d, j = %d\n", i, j);
	while(j < 5)
	{
	    printf("Inner Loop: i = %d, j = %d\n", i, j);
	    j++;
	}

	i++;
    }
}*/


/*#include <stdio.h>

int main()
{
    int i = 0, j;

    while (i < 10)
    {
	j = 0;
	while(j < 5)
	{
	    printf("Inner Loop: i = %d, j = %d\n", i, j);
	    j++;
	}

	i++;
    }
}*/


/*#include <stdio.h>

int main()
{
    int n, flag;
    int i, j;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
	flag = 1;
	for (j = 2; (j * j) <= i; j++) //same as j < sqrt(i)
	{
	    if (i % j == 0)
	    {
		flag = 0;
		break;
	    }
	}
	if (flag)
	{
	    printf("%d ", i);
	}
    }
    printf("\n");
    return 0;
}*/


/* while_ex1.c
 // Description: Simple while loop example 1
 //

#include <stdio.h>

int main()
{
    int count = 0;

    while(count < 5)
    {
	printf("%d\n", count);
	count = count + 1;
    }

    printf("%d\n", count);

}*/


/* for1.c
 // Description: Simple for loop example 1
 //

#include <stdio.h>

int main()
{
    int i;

    i = 0;
    while(i < 10)
    {
	printf("%d \n", i);

	i++;
    }

    printf("After loop %d \n", i);
}*/


/* while loop: Non boolean condition
 // Description: Simple while loop example 3
 //

#include <stdio.h>

int main()
{
    int i = 25;

    while( i = i / 2)
    {
	printf("%d \n", i);
    }


    return 0;
}*/


/* switch_calc.c
 * - Example of switch case in C
 * Note: Make sure that you give input as depicted below
 *        5+10 or 20/4 and not as 5 + 10 or 20 / 4 (No spaces).
 */


/* FILE: range_check.c
 * Description: 
 */


/*#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    //Check for upper case
    if (ch >= 'A' && ch <= 'Z')
    {
	printf("Upper case\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
	printf("Lower case\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
	printf("Digit\n");
    }
    else
    {
	printf("Unknown character\n");
    }

    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
	printf("num is zero\n");
    }
    else if (num > 0)
    {
	printf("num is +ve\n");
    }
    else
    {
	printf("num is -ve\n");
    }

    printf("Done\n");

    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int num = 2;

    if (num < 5)
    {
	printf("num is less than 5\n");
    }
    else
    {
	printf("num is greater than 5\n");
    }

    printf("Done\n");

    return 0;
}*/


/*	.file	"if_else_ex1.c"
	.section	.rodata
.LC0:
	.string	"num1 is less than 5"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	movl	$2, 28(%esp)
	cmpl	$4, 28(%esp)
	jg	.L2
	movl	$.LC0, (%esp)
	call	puts
	jmp	.L3
.L2:
	movl	$.LC0, (%esp)
	call	puts
.L3:
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits*/


/*#include <stdio.h>
int main()
{
    int num1 = 2;

    if (num1 > 5)
    {
	printf("num1 is less than 5\n");
    }
    else
    {
	printf("num1 is NOT less than 5\n");
    }
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int num = 2;

    //Snippet 1: Empty block
    if (num > 5)
    {

    }
    else
    {
	printf("num is less than 5\n");
    }

    //Snippet 2: Empty statement
    if (num > 5); // <=== check the semicolon !!!
    {
	printf("num is greater than 5\n");
    }


    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int num = 5;

    if (num > 0)
    {
	printf("Number is positive\n");
    }

    printf("Done\n");

    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int num = 5;

    if (num)
    {
	printf("Yes\n");
    }
    else
    {
	printf("No\n");
    }

    return 0;
}*/


/* FILE: range_check.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    //Check for upper case
    if (ch >= 'A' && ch <= 'Z')
    {
	printf("Upper case\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
	printf("Lower case\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
	printf("Digit\n");
    }
    else
    {
	printf("Unknown character\n");
    }

    return 0;
}*/


/* FILE: range_check.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    //Check for upper case
    if (ch >= 'A' && ch <= 'Z')
    {
	printf("Upper case\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
	printf("Lower case\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
	printf("Digit\n");
    }
    else
    {
	printf("Unknown character\n");
    }

    return 0;
}*/


/* FILE: range_check.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number between 100 to 200\n");
    scanf("%d", &num);

    if (num > 100 && num < 200)
    {
	printf("You entered a valid number\n");
    }
    else
    {
	printf("Please enter a valid number\n");
    }

    return 0;
}*/


/* switch_calc.c
 // - Example of switch case in C
 // Note: Make sure that you give input as depicted below
 //        5+10 or 20/4 and not as 5 + 10 or 20 / 4 (No spaces).
 //
#include <stdio.h>

int main()
{
    int op1, op2, res;
    char operator;

    printf("Enter the expression to evaluate\n");
    scanf("%d %c %d", &op1, &operator, &op2);

    switch(operator)
    {
    	case '+':
    		res = op1 + op2;
    		break;
    	case '-':
    		res = op1 - op2;
    		break;
    	case '*':
    		res = op1 * op2;
    		break;
    	case '/':
    		res = op1 / op2;
    		break;
    	default:
    		printf("ERROR: Please enter a valid operator (+,-,*,/)\n");
    		break;
    }

    //printf("result = %d\n", res);
    printf("%d %c %d = %d\n", op1, operator, op2, res);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a char: ");
    scanf("%c", &ch);

    switch(ch)
    {
	case 'A' ... 'Z':
	    puts("Upper case");
	    break;
	case 'a' ... 'z':
	    puts("Lower case");
	    break;
	case '0' ... '9':
	    puts("Digit");
	    break;
    	default:
	    puts("Unknown");
	    break;
    }

    return 0;
}*/


/* FILE: switch1.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int option;

    printf("Enter an option: ");
    scanf("%d", &option);

    switch(option)
    {
	case 1:
	    printf("You entered 1\n");
	    break;
	case 2:
	    printf("You entered 2\n");
	    break;
	default:
	    printf("Try again\n");
	    break;
    }

    printf("Done\n");

    return 0;
}*/


/* FILE: switch2_float.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    float option;

    printf("Enter an option: ");
    scanf("%f", &option);

    switch(option)
    {
	case 10.0:
	    printf("You entered 10\n");
	    break;
	case 20.0:
	    printf("You entered 20\n");
	    break;
	default:
	    printf("Try again\n");
	    break;
    }

    printf("Done\n");
    return 0;
}*/


/* FILE: switch3_not_constant.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int option;
    int x = 10;

    printf("Enter an option: ");
    scanf("%d", &option);

    switch(option)
    {
	case x:
	    printf("You entered 10\n");
	    break;
	case 20:
	    printf("You entered 20\n");
	    break;
	default:
	    printf("Try again\n");
	    break;
    }

    printf("Done\n");
    return 0;
}*/


/* FILE: switch1.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int option;

    printf("Enter an option: ");
    scanf("%d", &option);

    switch(option)
    {
	default:
	    printf("Try again\n");
	    break;
	case 10:
	    printf("You entered 10\n");
	    break;
	case 20:
	    printf("You entered 20\n");
	    break;
    }

    printf("Done\n");
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char ch = 'A';
    char digit = '5';

    putchar(ch);
    putchar(':');
    putchar('X');
    putchar('\n');

    printf("digit is %c\n", digit);

    printf("%c\n:\nX\n", ch);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch); //Read a character (%c)
    getchar(); //Read a character and discard it (Discard \n)

    printf("You entered char %c\n", ch);

    printf("Enter another char: ");
    scanf("%c", &ch); //Read a character (%c)
    printf("You entered char %c\n", ch);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    short int num = 5;

    printf("size of short int = %lu\n", sizeof(short int));
    printf("size of int = %lu\n", sizeof(int));
    printf("size of long int = %lu\n", sizeof(long int));
    printf("size of long long int = %lu\n", sizeof(long long int));
    // printf("size of long long long int = %lu\n", sizeof(long long long int)); //

    return 0;
}*/


/* Program demonstrates that char literals are stored as
 // ascii values. Also demonstrates that value can be directly
 // assigned to chars
 //
#include <stdio.h>

int main()
{
    char c1 = 'A';
    char c2 = 65;
    char digit = '0';

    printf("%c %d\n", c1, c1); //%c will print the char, %d will print the ascii value
    printf("%c %d\n", c2, c2);

    printf("%c %d\n", digit, digit);

    c1 = c1 + 2; //Character is an 8 bit integer (67 gets stored)
    printf("%c %d\n", c1, c1);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &num); //Read an integer

    getchar(); //Read and discard a character (Discard \n)

    printf("You entered number %d\n", num);

    printf("Enter a char: ");
    scanf("%c", &ch); //Read a character (%c)
    printf("You entered char %c %d\n", ch, ch);

    return 0;
}*/


/* Program demonstrates that char literals are stored as
 // ascii values. Also demonstrates that value can be directly
 // assigned to chars
 //
#include <stdio.h>

int main()
{
    char c1 = 'A';
    char c2 = 65;
    char digit = '0';

    printf("%c %d\n", c1, c1); //%c will print the char, %d will print the ascii value
    printf("%c %d\n", c2, c2);
    printf("%c %d\n", digit, digit);

    c1 = c1 + 2; //Character is an 8 bit integer (67 gets stored)
    printf("%c %d\n", c1, c1); //%c will print the char, %d will print the ascii value


    return 0;
}*/


/* Program demonstrates that char literals are stored as
 // ascii values. Also demonstrates that value can be directly
 // assigned to chars
 //
#include <stdio.h>

int main()
{
    char c1 = '0';

    printf("%c %d\n", c1, c1);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char a = '\7'; // Octal 7
    char b = '\xA'; // Hexadecimal A (decimal 10)
    char c = 50;

    printf("a = %d, b = %d\n", a, b);
    printf("c = %d\n", c);
    return 0;
}*/


/* FILE: print_vals.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int num1, num2, sum;
    float pi;
    char ch;

    num1 = 10;
    num2 = 10;
    sum = num1 + num2;

    printf("%d\n", sum);

    pi = 3.14;
    ch = 'A';

    printf("%f\n", pi);
    printf("%c\n", ch);
    printf("%d\n", ch);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    signed char sval;
    unsigned char uval;

    sval = -128;
    uval = 0;
    printf("sval = %d\n", sval);
    printf("uval = %u\n", uval);

    sval = 127;
    uval = 255;
    printf("sval = %d\n", sval);
    printf("uval = %u\n", uval);

    //Overflow values
    sval = 130; //Range is -128 to +127
    uval = -5;
    printf("sval = %d\n", sval);
    printf("uval = %u\n", uval);

    //Overflow values
    sval = -132; //Range is -128 to +127
    uval = -10;
    printf("sval = %d\n", sval);
    printf("uval = %u\n", uval);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char x;
    unsigned char y;

    x = -1;
    y = -1;

    printf("x = %d\n", x);
    printf("y = %u\n", y);

    printf("x = %X\n", x & 0xFF);
    printf("y = %X\n", y & 0xFF);

}*/


/* Progrom to find sum of two numbers //
#include <stdio.h>

int main()
{
    int num1, num2;
    int result;

    num1 = 10;
    num2 = 20;

    result = num1 + num2;

    printf("Sum of %d and %d is %d\n", num1, num2, result);
    //printf("%d\n", result);

    return 0;
}*/


/* Progrom to find sum of two numbers //
#include <stdio.h>

int main()
{
    float num1, num2;
    float result;

    num1 = 3.35;
    num2 = 5.66;

    result = num1 + num2;

    printf("%f\n", result); //Use %f to print float values

    return 0;
}*/


/* Progrom to find sum of two numbers //
#include <stdio.h>

int main()
{
    float num1, num2;
    float result;

    printf("Enter two numbers: ");
    //Get the float numbers from user (keyboard)
    scanf("%f", &num1); //Read one float value
    scanf("%f", &num2); //Read another float

    result = num1 + num2;

    printf("Sum is %f\n", result); //Use %f to print float values

    return 0;
}*/


/* Progrom to find sum of two numbers
 // Get the numbers from user using scanf function
 //

#include <stdio.h>

int main()
{
    int num1, num2;
    int result;

    printf("Enter two numbers: ");
    //Get the numbers from user (keyboard)
    scanf("%d", &num1); //Read one integer
    scanf("%d", &num2); //Read another integer

    result = num1 + num2;

    printf("%d\n", result);

    return 0;
}*/


/* FILE: goto_loop.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int x = 1;

LOOP:
    printf("%d\n", x);
    x++;
    if (x <= 10)
    {
	goto LOOP;
    }

    printf("Done\n");

    return 0;
}*/


//10 20//


/*#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    printf("Sum = %d\n", sum);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
}*/


/*#include <stdio.h>

int main()
{
    float celcius, farenheit;

    puts("Enter the farenheit value: ");
    scanf("%f", &farenheit);

    celcius = (5.0 / 9.0) * (farenheit - 32);

    printf("celcius val = %f\n", celcius);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    float celcius, farenheit;

    printf("Enter the farenheit value: ");
    scanf("%f", &farenheit);

    celcius = (5 / 9) * (farenheit - 32);

    printf("celcius val = %f\n", celcius);

    return 0;
}*/


/* sum.c
 // Description - Simple program to show, reading input and printing output
 //

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int sum, count = 3;
    float average;

    printf("Enter 3 nos: ");
    scanf("%d%d%d", &num1, &num2, &num3); // Read 3 nos. from keyboard

    sum = num1 + num2 + num3;
    printf("sum = %d\n", sum); // Print sum as integer

    average = (float)sum / (float)count;
    //average = sum / count;
    printf("Average = %f\n", average); // Print average as float

    return 0;
}*/


/*	.file	"input_output_example.c"
	.section	.rodata
.LC0:
	.string	"Enter 3 nos: "
.LC1:
	.string	"%d%d%d"
.LC2:
	.string	"sum = %d\n"
.LC3:
	.string	"Average = %f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	movl	$3, 36(%esp)
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	leal	32(%esp), %edx
	movl	%edx, 12(%esp)
	leal	28(%esp), %edx
	movl	%edx, 8(%esp)
	leal	24(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	24(%esp), %edx
	movl	28(%esp), %eax
	addl	%eax, %edx
	movl	32(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 40(%esp)
	movl	$.LC2, %eax
	movl	40(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	fildl	40(%esp)
	fildl	36(%esp)
	fdivrp	%st, %st(1)
	fstps	44(%esp)
	flds	44(%esp)
	movl	$.LC3, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits*/


/*	.file	"input_output_example.c"
	.section	.rodata
.LC0:
	.string	"Enter 3 nos: "
.LC1:
	.string	"%d%d%d"
.LC2:
	.string	"sum = %d\n"
.LC3:
	.string	"Average = %f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$64, %esp
	movl	$3, 52(%esp)
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	leal	48(%esp), %edx
	movl	%edx, 12(%esp)
	leal	44(%esp), %edx
	movl	%edx, 8(%esp)
	leal	40(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	40(%esp), %edx
	movl	44(%esp), %eax
	addl	%eax, %edx
	movl	48(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 56(%esp)
	movl	$.LC2, %eax
	movl	56(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	56(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	52(%esp)
	movl	%eax, 28(%esp)
	fildl	28(%esp)
	fstps	60(%esp)
	flds	60(%esp)
	movl	$.LC3, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits*/


/*#include <stdio.h>

int main()
{
    int x, y;

    // Snippet A
    x = 0;
    y = ++x;
    printf("x = %d, y = %d\n", x, y);


    // Snippet B
    x = 0;
    y = x++;
    printf("x = %d, y = %d\n", x, y);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 0;

    if (x++)
    {
	puts("Yes");
	printf("x = %d\n", x);
    }
    else
    {
	puts("Huh");
	printf("x = %d\n", x);
    }


    return 0;
}*/


/*#include <stdio.h>

int main()
{
    signed char i = 5;

    while(i--)
    {
	printf("i = %d\n", i);
    }

    puts("Done\n");
    printf("i = %d\n", i);


    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned char i;

    for (i = 0; ++i; )
    {
	printf("*");
    }


    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned char i = 5;

    while(--i)
    {
	printf("i = %d\n", i)
    }

    puts("Done\n");
    printf("i = %d\n", i);


    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num;
    num = 7 - 4 * 3 / 2 + 5;
    printf("Result is %d\n", num);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
	int a = 1, c = 1;
	float b = 1.7, d = 1.5;

	a += b += c += d;

	printf("a is %d\n", a);
	printf("b is %f\n", b);
	printf("c is %d\n", c);
	printf("d is %f\n", d);

	return 0;
}*/


/* FILE: arith_assign.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int res = 5, num = 20;

    res += num;
    //res = res + num;

    printf("res = %d\n", res);

    return 0;
}*/


/* FILE: get_bit.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int x = 0xAB, mask;
    int bit_val;

    mask = 0x80;
    bit_val = x & mask ? 1: 0;

    printf("%d\n", bit_val);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned char num = 0xA5;
    unsigned bit_val, mask;

    //Get LSB bit
    bit_val = num & 1;
    printf("LSB bit = %X\n", bit_val);

    //Get last 2 LSB bit
    bit_val = num & 3;
    printf("Last 3 bit = %X\n", bit_val);

    // Get 3rd to 6th bit
    mask = ((1 << 4) - 1) << 2;
    bit_val = num & mask;
    printf("3 - 6 bits = %X\n", bit_val);
    
    // Shift and print
    bit_val = bit_val >> 2;
    printf("3 - 6 bits = %X\n", bit_val);

    //Set LSB bit
    num = num | 1;
    printf("After LSB bit is set, num = %X\n", num);

    //Set last 2 LSB bit
    num = 0xA5;
    num = num | 3;
    printf("After 2 LSB bit is set, num = %X\n", num);

    // Set 3rd to 6th bit
    num = 0xA5;
    num = num | mask;
    printf("After 3rd to 6th LSB bit is set, num = %X\n", num);

    puts("---------- Clear bits ---------");
    //Clear LSB bit
    num = 0xA5;
    num = num & ~1;
    printf("After LSB bit is cleared, num = %X\n", num);

    //Clear last 2 LSB bit
    num = 0xA5;
    num = num & ~3;
    printf("After 2 LSB bit is cleared, num = %X\n", num);

    // Clear 3rd to 6th bit
    num = 0xA5;
    num = num & ~mask;
    printf("After 3rd to 6th LSB bit is cleared, num = %X\n", num);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    signed char num = 0xAB;

    printf("Val = %X\n", num << 4);
    printf("Masked Val = %X\n", (num << 4) & 0xFF);

    return 0;
}*/


/* FILE: print_bits.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    unsigned int x = 0xAB, mask;
    int bit_val, i;
    int no_of_bits = sizeof(int) * 8;

    mask = 1 << (no_of_bits - 1); //Start from MSB

    for (i = 0; i < no_of_bits; i++)
    {
	bit_val = x & mask ? 1: 0;
	printf("%d", bit_val);

	mask = mask >> 1; //Mask for next bit from MSB
    }

    printf("\n");

    return 0;
}*/


/* FILE: print_bits_correct.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int num, pos, no_of_bits, bit;

    printf("Enter a number in hex: ");
    scanf("%x", &num);

    no_of_bits = (sizeof(num) * 8);

    for (pos = no_of_bits - 1; pos >= 0; pos--)
    {
	bit = num & (1 << pos);

	if (bit)
	    printf("1");
	else
	    printf("0");

    }

    printf("\n");

    return 0;
}*/


/* FILE: print_bits_correct.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int num, pos, no_of_bits, bit;

    printf("Enter a number in hex: ");
    scanf("%x", &num);

    no_of_bits = (sizeof(num) * 8);

    for (pos = no_of_bits - 1; pos >= 0; pos--)
    {
	bit = (num >> pos) & 1; // Get bit from MSB onwards

	if (bit == 1)
	    printf("1");
	else
	    printf("0");

    }

    printf("\n");

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num, res;

    res = -128 >> 2;
    printf("Val = %d\n", res);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned char num, res;

    num = 5;
    res = num << 2;
    printf("Val = 0x%X\n", res);

    res = num >> 2;
    printf("Val = %X\n", res);

    num = 0xAB;
    res = num << 3;
    printf("Val = %X\n", res);

    res = num >> 3;
    printf("Val = %X\n", res);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num, res;

    num = 5;
    res = num << 2;
    printf("Val = 0x%X\n", res);

    res = num >> 2;
    printf("Val = %X\n", res);

    num = 0xAB;
    res = num << 3;
    printf("Val = %X\n", res);

    res = num >> 3;
    printf("Val = %X\n", res);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned char num;

    num = 5;
    printf("Val = %X\n", num << 6);

    num = 0xAB;
    printf("Val = %X\n", num << 3);

    return 0;
}*/


/* FILE: signed_right_shift.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    signed int x = -1;
    int mask = ~(0xF << 28);


    x = x >> 4;
    printf("x = %X\n", x);

    x = x & mask;
    printf("x = %X\n", x);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    signed char num = 0xAB;

    // Swap higher nibble with lower nibble
    num = ((num >> 4) & 0x0F) | ((num << 4) & 0xF0);

    printf("num = %X\n", num & 0xFF); //Mask 8 bits

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned char num = 0xAB;
    int res;

    // Swap higher nibble with lower nibble
    res = (num >> 4) | (num << 4) ;
    printf("Without masking res = %X\n", res); 

    // Swap higher nibble with lower nibble
    res = (num >> 4) | ((num << 4) & 0xFF);
    printf("With masking res = %X\n", res); 

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    signed char num = 0xAB;
    int res;

    // Swap higher nibble with lower nibble
    num = (num >> 4) | (num << 4) ;
    printf("res = %X\n", num); 

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 0; i < (sizeof(num) * 8); i++)
    {
	if ((num & (1 << i)) != 0)
	{
	    count++;
	}
    }

    printf("Number of set bits in %d is %d\n", num, count);

}*/


/*#include <stdio.h>

int main()
{
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 0; i < (sizeof(num) * 8); i++)
    {
	if ((num >> i) & 1)
	{
	    count++;
	}
    }

    printf("Number of set bits in %d is %d\n", num, count);

}*/


/*#include <stdio.h>

int main()
{
    int num, i, count = 0;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for (i = 0; i < (sizeof(num) * 8); i++)
    {
	if (num == 0)
	    break;

	if (num & 1) //Same as if (num & 1 != 0)
	{
	    count++;
	}

	num = num >> 1;
    }

    printf("Number of set bits in %d is %d\n", temp, count);

}*/


/* FILE: comma_template.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int i = 0, j = 0;

    j = i++ ? i++ : ++i;
    printf("i = %d, j = %d\n", i, j);

    j = i++ ? i++, ++j : ++j, i++;
    printf("i = %d, j = %d\n", i, j);

    return 0;
}*/


/* FILE: comma1.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int x;
    int y, z;

    x = (5, 10, 15);

    printf("%d\n", x);

    x = (y = 100, z = y + 10);

    printf("x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}*/


/* FILE: abs_ternary.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int x = -10;
    unsigned int absX;

    absX = (x > 0) ? x : -x;

    printf("absolute val = %u\n", absX);

    return 0;
}*/


/* FILE: max_ternary.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    int max;

    max = (a > b) ? a : b;

    printf("max = %d\n", max);

    a = 1, b = 200;

    printf("Largest = %d\n", (a > b) ? a : b);

    return 0;
}*/


/* FILE: ternary_assignment.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int a = 5, b = 10, max = 0;

    a > b ? (max = a) : (max = b);

    printf("max = %d\n", max);

    return 0;
}*/


/* FILE: logical_and_or.c
 //Description: 
 //

#include <stdio.h>
int main()
{
    int x = 3;

    if (x == 0 || (x % 2 == 1))
    {
	printf("Yes\n");
    }
    else
    {
	printf("No\n");
    }
    return 0;
}*/


/* FILE: not_operator.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int x = 5;

    if(!x) //Check whether x is TRUE/FALSE
    {
	printf("Hello\n"); //This will print if x is 0 (FALSE)
    }
    else
    {
	printf("World\n"); //This will print if x is TRUE (not 0)
    }
    return 0;
}*/


/* FILE: not_operator.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int x = 10;

    if(x = 0) //Check whether x is TRUE/FALSE
    {
	printf("Hello\n"); //This will print if x is 0 (FALSE)
    }
    else
    {
	printf("World\n"); //This will print if x is TRUE (not 0)
    }
    return 0;
}*/


/* FILE: int_max_range.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int num = 4294967295;

    printf("%d\n", num);

    printf("%u\n", num);

    return 0;
}*/


/* FILE: overflow.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    unsigned char u_byte = 250;
    signed char s_byte = 127;

    u_byte = u_byte + 10;
    printf("%u\n", u_byte);

    s_byte = s_byte + 10;
    printf("%d\n", s_byte);

    return 0;
}*/


/* FILE: prec1.c
 //Description: 
 //

#include <stdio.h>
int main()
{
    int a = 5, b = 1, c = 10;
    int res;

    res = ++a || ++b && ++c;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("res = %d\n", res);

    return 0;
}*/


/* FILE: prec2.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int p = 10, q = 20, r;

    if (p = r = 0 || q > 10)
    {
	printf("r = %d\n", r);
    }
    else
    {
	puts("No o/p");
    }

    return 0;
}*/


/* FILE: not_operator.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int x = 5;

    if(x != 0) //Check whether x is TRUE/FALSE
    {
	printf("Hello\n"); //This will print if x is 0 (FALSE)
    }
    else
    {
	printf("World\n"); //This will print if x is TRUE (not 0)
    }
    return 0;
}*/


/* FILE: float_comapre.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    float val = 0.7;

    if (val == 0.7)
    {
	puts("Equal");
    }
    else
    {
	puts("Not Equal");
    }

    return 0;
}*/


/* FILE: relational1.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    //int *ptr1 = 1000, *ptr2 = 2000;

    if (a > b)
    {
	puts("Yes");
    }
    else
    {
	puts("No");
    }

    return 0;
}*/


/* FILE: sizeof_array.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int arr[5];

    printf("%lu\n", sizeof(arr));

    printf("%lu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}*/


/* sizeof_compile_time.c
 // Description: Illustrates that sizeof is a compile time operator
 //
#include <stdio.h>

int main()
{
    int i = 0;
    int j = sizeof(++i); 

    printf("i = %d, j = %d\n", i, j);

    return 0;
}*/


/* FILE: sizeof_example1.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int num;

    printf("%lu:%lu\n", sizeof(int), sizeof(num));
    printf("%lu:%lu:%lu\n", sizeof(5), sizeof(2.5), sizeof('A'));

    printf("%lu:%lu:%lu\n", sizeof 5, sizeof 2.5, sizeof num);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int i = 0;
    int j = sizeof(++i);

    printf("i = %d, j = %d\n", i, j);

    return 0;
}*/


/* FILE: unsigned_vs_signed.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int x = -1;
    unsigned int y = 5;

    if (x < y)
    {
	puts("OK");
    }
    else
    {
	puts("Weird!");
    }

    return 0;
}*/


/* FILE: unsigned_vs_signed.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    if (-1 < 5u)
    {
	puts("OK");
    }
    else
    {
	puts("Weird!");
    }

    return 0;
}*/


/* Program demonstrates sign extension of signed values when promoted
 // to bigger size //
#include <stdio.h>

int main()
{
    signed char ch1 = -1;
    unsigned char ch2 = 255;

    printf("ch1(signed) = %d\n", ch1); // Sign extension happens here
    printf("ch2 = %d\n", ch2); // For unsigned numbers 0's are added

    printf("ch1(signed) = %X\n", ch1); // Sign extension happens here
    printf("ch2 = %X\n", ch2); // For unsigned numbers 0's are added

    return 0;
}*/


/* signed_unsigned.c
 // Description - Illustrate what happens when signed and unsigned
 // types are mixed up in an operation.
 //
#include <stdio.h>

int main()
{
    int i = -1;
    unsigned int u_count = 4;

    if (i < u_count) // Do not compare signed with unsigned
    {
    	printf("OK\n"); // This wont print
    }
    else
    {
    	printf("Weird\n");
    }

    return 0;
}*/


/* Program illustrates the pitfalls in comparing
 // signed and unsigned values //
#include <stdio.h>

int main()
{
    int i;
    int array[5] = {1, 2, 3, 4, 5};

    for(i = -1; i < (int)sizeof(array) / sizeof(int) - 1; i++)
    {
	printf("%d\n", array[i + 1]);
    }
}*/


/* Program illustrates the pitfalls in comparing
 // signed and unsigned values //
#include <stdio.h>

int main()
{
    int i;
    int array[5] = {1, 2, 3, 4, 5};

    // sizeof returns unsigned value. Comparing a signed and
     * unsigned value yields to type promotion. Signed type
     * gets converted to unsigned. Here -1 becomes a big positive
     * value. Hence comparison fails.
     * In short (-1 < 4u) is false.
     //
    for(i = -1; i < (int)(sizeof(array) / sizeof(int) - 1); i++)
    {
	printf("%d\n", array[i + 1]);
    }
}*/


/*#include <stdio.h>

int main()
{
    int i = -1;
    unsigned int u_count = 4;

    if (i < u_count) 
    {
    	printf("OK\n");
    }
    else
    {
    	printf("Weird\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int i = -1;
    unsigned int u_count = 4;

    if (i < u_count)
    {
    	printf("OK\n");
    }
    else
    {
    	printf("Weird\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    //unsigned int x = -1;
    //unsigned int x = 100;
    unsigned int x = 1 << 31;

    printf("%u\n", x);
    printf("%d\n", x);

    //Print hex
    printf("%X\n", x);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned int x = 2147483648;

    printf("%u\n", x);
    printf("%d\n", x);

    //Print hex
    printf("%X\n", x);
    return 0;
}*/


/* FILE - char_overflow.c
 // Description: Demonstrates Integer truncation, and Overflow
 //

#include <stdio.h>

int main()
{
    unsigned char u_ch = 250;
    signed char s_ch = 125;

    u_ch = u_ch + 10; // 250 + 10
    printf("u_ch = %u\n", u_ch);

    s_ch = s_ch + 10; // 125 + 10
    printf("s_ch = %d\n", s_ch);

    s_ch = -128 - 2;
    printf("s_ch = %d\n", s_ch);


    return 0;
}*/


/*#include <stdio.h>
#include <limits.h> // Contains the defines for INT_MAX, UINT_MAX etc.

int main()
{
    int imax = INT_MAX;
    int umax = UINT_MAX;

    printf("INT_MAX = %d\n", imax);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("UINT_MAX = %u\n", umax);
    printf("UINT_MAX = %u\n", UINT_MAX); // Should not do this (Use %u)

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    const int max;


    max = 500;


    printf("max = %d\n", max);

    return 0;
}*/


/* FILE: register1.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int i = 5;

    for (i = 0; i < 10; i++)
    {
	puts("hello");
    }
    return 0;
}*/


/* FILE: register1.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    register int i = 5;

    for (i = 0; i < 10; i++)
    {
	puts("hello");
    }
    return 0;
}*/


/*int main()
{
    volatile const int *ptr = (int *)1000;
    int data;

    data = *ptr;
    data = *ptr;

    printf("%d\n", data);

    return 0;
}*/


/* FILE: loop_opt.c
 // Description: 
 //

#include <stdio.h>
#include <limits.h>
int main()
{
    volatile int i;

    for (i = 0; i < INT_MAX; i++)
	;

    printf("i = %d\n", i);

    return 0;
}*/


/*int main()
{
    5;
    3 + 5;
    ;
}*/


/*#include <stdio.h>

int main()
{
    int x = 5;

    x + 5;
    printf("%d\n", x + 5);
    printf("%d\n", x);

    return 0;
}*/


/* FILE - 1.2_fgets_cat.c
 // Description - Reads chars from file using fgets and prints it to stdout
 //

#include <stdio.h>

#define BUF_SIZE 1024

int main()
{
    char *filename = "/etc/hosts";
    char buf[BUF_SIZE]; // Store data from file here
    FILE *fptr; //File ptr (Also called as file handle)

    // Open the file
    fptr = fopen(filename, "r");
    if (fptr == NULL) // Check for error
    {
	perror("fopen failed: "); //Print error w.r.t to last func executed
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Read and print the file contents
    while (fgets(buf, sizeof(buf), fptr) != NULL)
    {
    	// Print the buf to stdout
	printf("%s", buf);
    }

    //Check for error
    if (feof(fptr))
    {
	printf("EOF occured\n");
    }

    //Check for error
    if (ferror(fptr))
    {
	fprintf(stderr, "Failed to read from file %s\n", filename);
	return 1;
    }

    // Close the file
    fclose(fptr);

    return 0;
}*/


/* FILE - 1_read_and_print.c
 // Description - Reads chars from file and prints it to stdout
 //

#include <stdio.h>

int main()
{
    char *filename = "/etc/hosts";
    int ch;
    FILE *fptr; //File ptr (Also called as file handle)

    // Open the file
    fptr = fopen(filename, "r");

    if (fptr == NULL) // Check for error
    {
	perror("fopen failed: "); //Print error w.r.t to last func executed
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Read and print the file contents
    ch = fgetc(fptr); //fgetc reads 1 byte from file. It returns EOF if no more data is available
    while (ch != EOF)
    {
    	// Print the char to stdout
    	putchar(ch);
    	//Read the next char
	ch = fgetc(fptr);
    }

    // Close the file
    fclose(fptr);

    return 0;
}*/


/* FILE - 1_read_and_print.c
 // Description - Reads chars from file and prints it to stdout
 //

#include <stdio.h>

int main()
{
    char *filename = "/etc/hosts";
    int ch; // Store data from file here

    FILE *fptr; //File ptr (Also called as file handle)

    long pos;

    // Open the file
    fptr = fopen(filename, "r");

    // Check for error
    if (fptr == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Get file position (offset)
    pos = ftell(fptr);
    printf("pos = %ld\n", pos);

    // Read and print the file contents

    // Read a char from file
    ch = fgetc(fptr);
    while (ch != EOF)
    {
    	// Print the char to stdout
    	putchar(ch);
    	//Read the next char
	ch = fgetc(fptr);
    }

    pos = ftell(fptr);
    printf("pos = %ld\n", pos);

    // Close the file
    fclose(fptr);

    return 0;
}*/


/* FILE - 2_copy_file.c
 // Description - File copy
 //

#include <stdio.h>

int main()
{
    char *filename = "/tmp/huge_file";
    char *dest_file = "/run/newfile";
    int ch; // Store data from file here

    FILE *fsrc, *fdest; //File ptr (Also called as file handle and file stream)

    long pos;
    int write_err = 0;

    // Open the Source file
    fsrc = fopen(filename, "r");
    // Check for error
    if (fsrc == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Open the dest file
    fdest = fopen(dest_file, "w");
    // Check for error
    if (fdest == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", dest_file);
    	return 1;
    }

    // Read a char from file
    ch = fgetc(fsrc);
    while (ch != EOF)
    {
    	// Write the char to dest file
    	write_err = fputc(ch, fdest);
	if (write_err == EOF) //Check whether error occured
	{
	    perror("write");
	    fprintf(stderr, "ERROR: Unable to write to file %s\n", dest_file);
	    goto ERR;
	}
    	//Read the next char
	ch = fgetc(fsrc);
    }

    if (ferror(fsrc)) //Check whether error occured
    {
    	fprintf(stderr, "ERROR: Unable to read file %s\n", filename);
    }

ERR:
    // Close the file
    fclose(fsrc);
    fclose(fdest);

    return 0;
}*/


/* FILE - 2_copy_file.c
 // Description - File copy
 //

#include <stdio.h>

int main()
{
    char *filename = "/etc/hosts";
    char *dest_file = "/tmp/myhosts.txt";
    int ch; // Store data from file here

    FILE *fsrc, *fdest; //File ptr (Also called as file handle and file stream)

    long pos;
    int write_err = 0;

    // Open the Source file
    fsrc = fopen(filename, "r");

    // Check for error
    if (fsrc == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Open the dest file
    fdest = fopen(dest_file, "w");

    // Check for error
    if (fdest == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", dest_file);
    	return 1;
    }
    // Read and print the file contents

    // Read a char from file
    ch = fgetc(fsrc);
    while (ch != EOF)
    {
    	// Write the char to dest file and check for error (EOF)
    	if (fputc(ch, fdest) == EOF)
	{
	    fprintf(stderr, "ERROR: Unable to write to file %s\n", dest_file);
	    write_err = 1;
	    break;
	}
    	//Read the next char
	ch = fgetc(fsrc);
    }

    if (!write_err && ferror(fsrc)) //Check whether error occured for read
    //if (ferror(fsrc)) //Check whether error occured for read
    {
    	fprintf(stderr, "ERROR: Unable to read file %s\n", filename);
    }

END:
    // Close the file
    fclose(fsrc);
    fclose(fdest);

    return 0;
}*/


/* FILE - 2_copy_file.c
 // Description - File copy
 //

#include <stdio.h>

int main()
{
    char *filename = "/etc/hosts";
    char *dest_file = "myhosts.txt";
    int ch; // Store data from file here

    FILE *fsrc, *fdest; //File ptr (Also called as file handle and file stream)

    // Open the Source file
    fsrc = fopen(filename, "r");
    // Check for error
    if (fsrc == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Open the dest file
    fdest = fopen(dest_file, "w");
    // Check for error
    if (fdest == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", dest_file);
    	return 1;
    }

    // Read a char from file
    while ((ch = fgetc(fsrc)) != EOF)
    {
    	// Write the char to dest file
    	fputc(ch, fdest);
    }

    // Close the files
    fclose(fsrc);
    fclose(fdest);

    return 0;
}*/


/* FILE - 3_text_vs_binary_save.c
 // Description - Save data in text and binary formats to files
 //

#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[30];
    int age;
    float avg_marks;
} StudInfo;

int save_stud_info_as_text(StudInfo *stud_ptr, FILE *fptr);
int save_stud_info_as_binary(StudInfo *stud_ptr, FILE *fptr);

// Save stud info to a file in binary format
int save_stud_info_as_binary(StudInfo *sptr, FILE *fptr)
{
    //Write whole structure to file
    //Write individual fields
    fwrite(&(sptr->id), sizeof(sptr->id), 1, fptr);
    fwrite((sptr->name), sizeof(char), strlen(sptr->name) + 1, fptr); //Store the string
    // Above line can be done using fputs (preferred)
    fwrite(&(sptr->age), sizeof(sptr->age), 1, fptr);
    fwrite(&(sptr->avg_marks), sizeof(sptr->avg_marks), 1, fptr);
    fflush(fptr);

}
// Save stud info to a file in text format
int save_stud_info_as_text(StudInfo *sptr, FILE *fptr)
{
    //printf("%d\n%s\n%d\n%f\n", sptr->id, sptr->name, sptr->age, sptr->avg_marks);
    fprintf(fptr, "%d\n%s\n%d\n%f\n", sptr->id, sptr->name, sptr->age, sptr->avg_marks);
    //Write fields to file
    //fflush(fptr);

}

int main()
{
    StudInfo stud = {100000, "Mubeen", 337654, 70123.54566f};

    char *dest_text_file = "biodata.txt";
    char *dest_bin_file = "biodata.dat";
    FILE *fdest1, *fdest2; //File ptr (Also called as file handle)

    // Open the dest file
    fdest1 = fopen(dest_text_file, "w");

    // Check for error
    if (fdest1 == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", dest_text_file);
    	return 1;
    }

    // Open the dest file
    fdest2 = fopen(dest_bin_file, "w");

    // Check for error
    if (fdest2 == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", dest_bin_file);
    	return 1;
    }
    // Write stud info to file
    save_stud_info_as_text(&stud, fdest1);

    save_stud_info_as_binary(&stud, fdest2);



END:
    // Close the file
    fclose(fdest1);
    fclose(fdest2);

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

int main()
{
    FILE *fptr = NULL;
    char *filename = "/etc/services";
    char buf[SIZE];
    long pos;

    // Open the file
    fptr = fopen(filename, "r");

    // Check for error
    if (fptr == NULL) {
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    // Get file position (offset)
    pos = ftell(fptr);
    printf("pos = %lu\n", pos); // Should be 0

    fgets(buf, sizeof(buf), fptr);
    puts(buf);

    // Get file position (offset)
    pos = ftell(fptr);
    printf("pos = %lu\n", pos); // Should be equal to the len of line 1

    fseek(fptr, 0L, SEEK_END); // Goto EOF
    // Get file position (offset)
    pos = ftell(fptr);
    printf("pos = %lu\n", pos); // Should be equal to size of file

    fseek(fptr, 0L, SEEK_SET); // Goto beginning of rule
    // Get file position (offset)
    pos = ftell(fptr);
    printf("pos (offset = 0L, whence = SEEK_SET) = %lu\n", pos); // Should be 0

    fclose(fptr);
    return 0;

}*/


/*#include <stdio.h>

int main()
{
    int num;
    double pi;
    char *filename = "text_file";

    FILE *fptr; //File ptr (Also called as file handle)

    // Open the file
    fptr = fopen(filename, "r");
    if (fptr == NULL) // Check for error
    {
	perror("fopen failed: "); //Print error w.r.t to last func executed
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    //Read from file
    fscanf(fptr, "%d\n", &num);
    fscanf(fptr, "%lf\n", &pi);

    printf("num = %d\n", num);
    printf("pi = %lf\n", pi);

    fclose(fptr);
}*/


/*#include <stdio.h>

int main()
{
    int num = 125;
    double pi = 3.142;
    char *filename = "text_file";

    FILE *fptr; //File ptr (Also called as file handle)

    // Open the file
    fptr = fopen(filename, "w");
    if (fptr == NULL) // Check for error
    {
	perror("fopen failed: "); //Print error w.r.t to last func executed
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    //Write to file
    fprintf(fptr, "%d\n", num);
    fprintf(fptr, "%f\n", pi);

    fclose(fptr);
}*/


/*#include <stdio.h>

int main()
{
    int num;
    double pi;
    int arr[5];
    char *filename = "binary_file";

    FILE *fptr; //File ptr (Also called as file handle)

    // Open the file
    fptr = fopen(filename, "r");
    if (fptr == NULL) // Check for error
    {
	perror("fopen failed: "); //Print error w.r.t to last func executed
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    //Read from file
    //fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
    fread(&num, sizeof(num), 1, fptr);
    fread(&pi, sizeof(pi), 1, fptr);
    //fread(arr, sizeof(int), 5, fptr);

    printf("num = %d\n", num);
    printf("pi = %f\n", pi);

    fclose(fptr);
}*/


/*#include <stdio.h>

int main()
{
    int num = 125;
    double pi = 3.142;
    int arr[5] = {1, 2, 3, 4, 5};
    char *filename = "binary_file";

    FILE *fptr; //File ptr (Also called as file handle)

    // Open the file
    fptr = fopen(filename, "w");
    if (fptr == NULL) // Check for error
    {
	perror("fopen failed: "); //Print error w.r.t to last func executed
    	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
    	return 1;
    }

    //Write to file
    //fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
    fwrite(&num, sizeof(num), 1, fptr);
    fwrite(&pi, sizeof(pi), 1, fptr);
    //fwrite(arr, sizeof(int), 5, fptr);

    fclose(fptr);
}*/


/* FILE: non_ascii.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    char ch1 = 65;
    char ch2 = 129;

    putchar(ch1);
    putchar('\n');
    putchar(ch2);
    putchar('\n');

    return 0;
}*/


/*static int sum(int *arr, int size);

static int sum(int *arr, int size)
{
    int total = 0, i = 0;

    for (i = 0; i < size; i++)
    {
	//total += arr[i];
	total += *(arr + i);
    }

    return total;
}

double average(int *arr, int size)
{
    int i = 0;
    double avg;

    avg = (double)sum(arr, size) / size;

    return avg;
}*/


/*#ifndef AVERAGE_H
#define AVERAGE_H
double average(int *, int);
#endif*/


/*#include <stdio.h>
#include "average.h"

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {1, 1, 2, 2, 3};
    double res;

    res = average(a, ARRAY_SIZE(a));
    printf("average(a) = %lf\n", res);

    res = average(b, ARRAY_SIZE(b));
    printf("average(b) = %lf\n", res);

   return 0 ;
}*/


/*prog.exe: average.o main.o
	gcc average.o main.o -o prog.exe
average.o: average.c
	gcc -c average.c
main.o: main.c average.h
	gcc -c main.c

clean:
	rm -f *.o prog.exe*/


/*#include <stdio.h>

int sum(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
	sum += a[i];

    return sum;
}

double average(int a[], int n)
{
    double avg;

    avg = (double)sum(a, n) / n;
    return avg;
}

int main()
{
    //int a[] = {1, 2, 2};
    int n = 3;
    int *a = malloc(n * sizeof(int));

    a[0] = 1, a[1] = 2, a[2] = 3;
    double res;

    res = average(a, n);
    printf("avg = %lf\n", res);

    free(a);

    return 0;
}*/


/*#include <stdio.h>

// Function to find average of three numbers //
float average(int num1, int num2, int num3)
{
    int total;
    float avg;

    total = num1 + num2 + num3;
    avg = total / 3.0;

    return avg; // Return value
}

int main() // Calling function here is main()
{
    float res;
    int a = 100, b = 200, c = 300;

    res = average(1, 1, 2); // Function call/invokation
    printf("res = %f\n", res);

    res = average(a, b, c); // Function call/invokation
    printf("res = %f\n", res);

    return 0;
}*/


/* Write a function to convert farenheit to celcius
 // Call the function from main()
 // Print the celcius value in main()
 //

#include <stdio.h>

float farenheit_to_celcius(int far); //Function prototype

float farenheit_to_celcius(int far)
{
    float cel;

    cel = (5.0 / 9.0) * (far - 32);

    return cel;
}

int main()
{
    int farenheit;
    float celc;

    printf("Enter farenheit value: ");
    scanf("%d", &farenheit);

    celc = farenheit_to_celcius(farenheit);
    printf("Celcius = %f\n", celc);


    return 0;
}*/


/*#include <stdio.h>

//double square(double num);
double square(double );

int main()
{
    double d = 5.0, res;

    res = square(d);
    printf("%f\n", res);

    return 0;
}

double square(double num)
{
    return num * num;
}*/


/*#include <stdio.h>

void func()
{
    static int x = 10; //static local variable
    int y = 10;

    x++, y++;
    printf("x = %d, y = %d\n", x, y);

}

int main()
{
    func();
    func();
    func();

    return 0;
}*/


/*#include <stdio.h>

int x;

void func()
{
    x++;
    printf("%d\n", x);

}

int main()
{
    func();
    func();
    func();
}*/


/*#include <stdio.h>

void func()
{
    int x = 10;

    x++;
    printf("%d\n", x);

}

int main()
{
    func();
    func();
    func();
}*/


/*#include <stdio.h>

void func()
{
    // Static variable is created in data segment.
       They are initialized when you run the program, not when the function is called //
    static int x = 10;

    int y = 10; // local variable part of stack

    x++;
    printf("static x = %d\n", x);

    y++;
    printf("non static y = %d\n", y);
}

int main()
{
    func();
    func();
    func();

}*/


/*#include <stdio.h>

int change(int num)
{
    num = num + num;
    return num;
}

int main()
{
    int x = 5;

    x = change(x);
    printf("%d\n", x);

    return 0;
}*/


/*#include <stdio.h>

void func1()
{
    x = 10;
}
void func2()
{
    x = 20;
    printf("%d\n", x);
}
int main()
{
    int x = 5;

    func1();
    printf("%d\n", x);
    func2();
}*/


/*#include <stdio.h>

int x = 5; //Global variable, can be used in all functions

void func1()
{
    x = 10;
}

void func2()
{
    x = 20;
    printf("%d\n", x);
}

int main()
{
    printf("%d\n", x);
    func1();
    printf("%d\n", x);
    func2();
}*/


/*#include <stdio.h>

int func()
{
    int num = 10;

    return num;
}

int main()
{
    int x;

    x = func();
    printf("%d\n", x);

    return 0;
}*/


/*#include <stdio.h>

void func()
{
    int num = 10;

    return;
}

int main()
{
    func();
    return 0;
}*/


/*#include <stdio.h>

int x = 10;

void func()
{
    int x = 0;

    x++; //Local variable will get accessed here. (not global x)
    printf("%d\n", x);
}

int main()
{
    printf("%d\n", x);
    func();
    printf("%d\n", x);
}*/


/*#include <stdio.h>

int is_even(int num)
{
    if (num % 2 == 0) //True for even numbers
    {
	return 1; // 1 - indicates num is even
    }
    else
    {
	return 0; // 0 - indicates num is odd
    }
}

int main()
{
    int status;
    status = is_even(5);

    if (status == 1)
	puts("number is even");
    else
	puts("number is odd");

    if(is_even(10))
    {
	puts("number is even");
    }
    else
    {
	puts("number is odd");
    }

    return 0;
}*/


/*#include <stdio.h>

int is_even(int num)
{
    return (num % 2 == 0);
}

int main()
{
    int status;
    status = is_even(5);

    if (status == 1)
	puts("number is even");
    else
	puts("number is odd");

    if(is_even(10))
    {
	puts("number is even");
    }
    else
    {
	puts("number is odd");
    }

    return 0;
}*/


/* FILE: is_prime.c
 * Description: Function to check whether number is prime or not
 * If number is prime, is_prime returns 1. Otherwise it returns 0
 */

/*#include <stdio.h>
#include <math.h>

 // Function to check whether number is prime or not
  // If number is prime, is_prime returns 1.
  // Otherwise it returns 0
  //
int is_prime(int n)
{
    int div = 2;

    while (div <= sqrt(n))
    {
	if (n % div == 0)
	{
	    return 0; // Number is not prime
	}
	div++;
    }

    return 1; // Number is prime
}

int main()
{
    int num, res;

    printf("Enter a number: ");
    scanf("%d", &num);

    res = is_prime(num);

    if (res == 1)
    {
	printf("%d is prime\n", num);
    }
    else
    {
	printf("%d is not prime\n", num);
    }

    return 0;
}*/


/* FILE: is_prime.c
 * Description: Function to check whether number is prime or not
 * If number is prime, is_prime returns 1. Otherwise it returns 0
 */

/*#include <stdio.h>
#include <math.h>

 // Function to check whether number is prime or not
  // If number is prime, is_prime returns 1.
  // Otherwise it returns 0
  //
int is_prime(int number)
{
    int div = 2;

    for (div = 2; div <= sqrt(number); div++)
    {   
	if (number % div == 0) //Is number divisible?
	{
	    return 0;
	}
    }
    //Loop terminated. Indicates number is not divisible by anything (Its prime)
    return 1;
}

int main()
{
    int num;
    int res;

    printf("Enter a number: ");
    scanf("%d", &num);

    res = is_prime(num);

    if (res == 1)
    {
	printf("%d is prime\n", num);
    }
    else
    {
	printf("%d is not prime\n", num);
    }

    return 0;
}*/


/*#include <stdio.h>
void func1()
{
    int x;
    x = 10;
    printf("x = %d\n", x);
}
void func2()
{
    int x;
    x = 20;
    printf("x = %d\n", x);
}
int main()
{
    func1();
    func2();

    return 0;
}*/


/*#include <stdio.h>

void change(int x)
{
    x = 10;
}

int main()
{
    int num = 5;

    change(num);
    printf("%d\n", num);

    return 0;
}*/


/*#include <stdio.h>

void change(int num)
{
    num = 10;
}

int main()
{
    int num = 5;

    change(num);
    printf("%d\n", num);

    return 0;
}*/


/*#include <stdio.h>

int change(int x)
{
    x = 10;
    return x;
}

int main()
{
    int num = 5;

    num = change(num);
    printf("%d\n", num);

    return 0;
}*/


/* FILE: print_greeting_void.c 
 // Description: 
 //

#include <stdio.h>

void print_greeting(void)
{
    puts("hello");
}

int main()
{
    print_greeting();

    return 0;
}*/


/*#include <stdio.h>

// Function returning void(nothing) //
void print_line(char ch, int limit)
{
    int i;

    for (i = 0; i < limit; i++)
    {
	putchar(ch);
    }

    printf("\n");
}

int main()
{
    char c = 'X';

    print_line('*', 70);
    print_line(c, 50);
}*/


/* FILE: print_x_hello_world.c 
 // Description: 
 //

#include <stdio.h>

void print_spaces(int max_count)
{
    int i;

    for(i = 0; i < max_count; i++)
	putchar(' ');
}

void print_line_inverted_v(int line_no, int max_lines)
{
    // Print spaces
    print_spaces((max_lines - line_no));
    // Print HelloWorld
    printf("HelloWorld");
    // Print spaces
    print_spaces((line_no) * 2);
    // Print HelloWorld
    printf("HelloWorld");
    // Print newline
    printf("\n");
}
void print_line_v(int line_no, int max_lines)
{
    // Print spaces
    print_spaces(line_no);
    // Print HelloWorld
    printf("HelloWorld");
    // Print spaces
    print_spaces((max_lines - line_no) * 2);
    // Print HelloWorld
    printf("HelloWorld");
    // Print newline
    printf("\n");
}

// Print HelloWorld in V format
void print_v(int no_lines)
{
    int i;
    for(i = 0; i < no_lines; i++)
    {
	// Print line
	print_line_v(i, no_lines);
    }

}

void print_inverted_v(int no_lines)
{
    int i;
    for(i = 0; i < no_lines; i++)
    {
	// Print line
	print_line_inverted_v(i, no_lines);
    }

}
void print_x(int max_lines)
{
    // Print V
    print_v(max_lines / 2);

    // Print Inverted V
    print_inverted_v(max_lines / 2);
}

int main()
{
    int max_lines;

    // Prompt for no. of lines
    printf("Enter no. of lines: ");
    scanf("%d", &max_lines);

    // Validate input

    // Print "HelloWorld" in X format
    print_x(max_lines);

    return 0;
}*/


/*int main()
{
    printf("hello\n");

    return 0;
}*/


//gcc -Wall -Werror func4_void.c//


/*#include <stdio.h>

void func1(int x)
{
    x = 500;
}

int main()
{
    int x = 10;

    func1(x);
    printf("x = %d\n", x);

    return 0;
}*/


/*#include <stdio.h>
#include <math.h>

int main()
{
    int num = 25, res;

    res = sqrt(num);
    //res = (int) sqrt((double)num);

    printf("%d\n", res);

    return 0;
}*/


/*#include <stdio.h>

void func()
{
    // Static variable is created in data segment.
       They are initialized when you run the program, not when the function is called //
    static int x = 10;

    x++;
    printf("x = %d\n", x);
}

int main()
{
    func();
    func();
    func();

}*/


/*#include <stdio.h>

int x = 10;
int y; 

void func1()
{
    static int st_local_un;
    static int st_local_in = 500;
    int local_variable = 125;
    x = 10;
}

void func2()
{
    static int st_local_un;
    static int st_local_in = 500;
    x = 20;
    printf("%d\n", x);
}

int main()
{
    printf("%d\n", x);
    func1();
    printf("%d\n", x);
    func2();
}*/


/*#include <stdio.h>

int x = 10;

void func()
{
    int x = 0;

    x++; //Local variable will get accessed here. (not global x)
    printf("%d\n", x);
}

int main()
{
    printf("%d\n", x);
    func();
    printf("%d\n", x);
}*/


/*#include <stdio.h>
void func1()
{
    x = 10;
    printf("x = %d\n", x);
}
void func2()
{
    x = 20;
    printf("x = %d\n", x);
}
int main()
{
    int x;
    func1();
    func2();

    return 0;
}*/


/* FILE: a.c 
 // Description: 
 //

#include <stdio.h>
// extern declaration
// Informs the compiler that x  is defined in some other file
extern int x;
void func1()
{
    x = 10;
}*/


/* FILE: b.c 
 //Description: 
 //

#include <stdio.h>
extern int x;
void func2()
{
    x = 20;
}*/


/* FILE: main.c 
 // Description: 
 //

#include <stdio.h>

// func1 and func2 are defined in other files
extern void func1(); // function prototype
extern void func2();

// x can be accessed only in this file (As it is static global)
int x = 1;

int main()
{
    printf("x = %d\n", x);
    func1();
    printf("x = %d\n", x);
    func2();
    printf("x = %d\n", x);
    return 0;
}*/


/* FILE: a.c 
 // Description: 
 //

#include <stdio.h> //a.c
static int x = 50;
void func1()
{
    x = 10;
}*/


/* FILE: b.c 
 // Description: 
 //

#include <stdio.h> //b.c
extern int x;
void func2()
{
    x = 20;
}*/


/* FILE: main.c 
 // Description: 
 //

#include <stdio.h>

// func1 and func2 are defined in other files
extern void func1(); // function prototype
extern void func2();

int x = 1;
int main()
{
    printf("x = %d\n", x);
    func1();
    printf("x = %d\n", x);
    func2();
    printf("x = %d\n", x);
    return 0;
}*/



/*#include <stdio.h>

// Function definition //
int sum(int num1, int num2)
{
    int total;

    total = num1 + num2;
    return total; // Return value
}

int main() // Calling function here is main()
{
    int res;
    int a = 100, b = 200;

    res = sum(5, 10); // Function call/invocation
    printf("res = %d\n", res);

    res = sum(a, b); // Function call/invocation
    printf("res = %d\n", res);

    printf("res = %d\n", sum(10, 20) ); //Result of sum() function is printed

    return 0;
}*/


/*#include <stdio.h>

void is_even(int num)
{
    if (num < 1)
    {
    	puts("Enter a +ve value");
    	return;
    }
    else
    {
    	if (num % 2)
	    printf("Number is odd\n");
	else
	    printf("Number is even\n");
    }

    printf("Done\n");
}

int main()
{
    is_even(-10);
    is_even(5);
}*/


/*#include <stdio.h>

int sum(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
	sum += a[i];

    return sum;
}

double average(int a[], int n)
{
    double avg;

    avg = (double)sum(a, n) / n;
    return avg;
}

int main()
{
    int a[] = {1, 2, 2};
    double res;

    res = average(a, 3);
    printf("avg = %lf\n", res);

    return 0;
}*/


/*#include <stdio.h>

int sum(int *ptr, int n);
double average(int *ptr, int n);

int sum(int *ptr, int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
	sum += *(ptr + i);

    return sum;
}

double average(int *ptr, int n)
{
    double avg;

    avg = (double)sum(ptr, n) / n;
    return avg;
}

int main()
{
    int a[] = {1, 2, 2};
    double res;

    res = average(a, 3);
    printf("avg = %lf\n", res);

    return 0;
}*/


/*#include <stdio.h>

int sum(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
	sum += a[i];

    return sum;
}

double average(int a[], int n)
{
    double avg;
    int *ptr = NULL;

    avg = (double)sum(a, n) / n;

    *ptr = 50;
    return avg;
}

int main()
{
    int a[] = {1, 2, 2};
    double res;

    res = average(a, 3);
    printf("avg = %lf\n", res);

    return 0;
}*/


/*#include <stdio.h>

void display(void)
{
    int count = 0;

    printf("count = %d\n", ++count);
}


int main()
{
    display();
    display(100, 2, 3);
    display("hello");

    return 0;
}*/


/* FILE: div_by_zero.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    int num1 = 5, num2 = 0;

    printf("%d\n", num1 / num2);

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

void check_even_odd(int num)
{
    if (num < 0)
    {
	puts("You entered -ve value");
	exit(1); // exit the program
    }
    else
    {
	if (num % 2 == 0)
	    puts("num is even");
	else
	    puts("num is odd");
    }
}

int main()
{
    int num;

    printf("Enter a num: ");
    scanf("%d", &num);

    check_even_odd(num);

    puts("done");

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num;

    printf("Enter a +ve number: ");
    scanf("%d", &num);

    if (num < 0)
    {
    	printf("You entered a -ve number\n");
    	return 1;
    }
    else
    {
    	printf("OK\n");
    	return 0;
    }
}*/


/*int main()
{
    printf("hello\n");
}*/


/*#include <stdio.h>
#include <math.h>

int main()
{
    double res;
    double val = 10;

    res = sqrt(val);

    printf("%f\n", res);

    return 0;
}*/


/*#include <stdio.h>

int * foo(void)
{
    int a = 10;
    return &a; 
}

int main()
{
    int *ptr;

    ptr = foo();
    printf("*ptr = %d\n", *ptr);

    return 0;
}*/


/*#include <stdio.h>

// Example function to illustrate passing an array in C
 // Argument 1: Pass base address
 // Argument 2: Pass no. of elements to access in array
 //
void print_array(int *, int );
//void print_array(int *ptr, int n);

void print_array(int *ptr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
    	//printf("%d ", ptr[i]);
    	printf("%d ", *(ptr + i));
    }
    printf("\n");
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 2, 3};

    //print array a
    print_array(a, 5);

    //print array b
    print_array(b, 3);

    return 0;
}*/


/*#include <stdio.h>

void print_array(int ptr[], int n);
//void print_array(int [], int );

void read_array(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
    	scanf("%d", &arr[i]);
    }
}

void print_array(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
    	printf("%d ", arr[i]);
    }
    puts("");
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 2, 3};

    puts("Enter 5 values");
    read_array(a, 5);

    puts("Printing array a:");
    //print array a
    print_array(a, 5);

    //print array b
    print_array(b, 3);

    return 0;
}*/


/*#include <stdio.h>

void print_array(int ptr[5]);

void print_array(int ptr[5])
{
    int i;

    printf("sizeof ptr = %lu\n", sizeof(ptr));
    for (i = 0; i < 5; i++)
    {
    	printf("%d ", ptr[i]);
    }
    puts("");
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    //print array a
    print_array(a);

    return 0;
}*/


/* FILE: array_interpretations.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int a[5];
    int *ptr;

    // 1st interpretation applies here (array 'a' indicates whole array)
    printf("sizeof a = %u\n", sizeof(a));

    // Examples of 2nd interpretation
     // Array name indicates base address of array
     //
    printf("a = %p\n", a); // Print base address

    ptr = a; //Assign array address to ptr

    // Address
    printf("%p %p %p\n", a, &a[0], &a); // Print same

    return 0;
}*/


/*#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

void print_array(int *ptr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
    	printf("%d ", *(ptr + i));
    }
    puts("");
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    print_array(a, ARRAY_SIZE(a));
    print_array(b, ARRAY_SIZE(b));
    //
    print_array(a, 5);
    print_array(b, 10);
    //

    return 0;
}*/


/*#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

void print_array(int *ptr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
    	printf("%d ", *(ptr + i));
    }
    puts("");
}

int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    print_array(a, ARRAY_SIZE(a));
    print_array(b, ARRAY_SIZE(b));
    //
    print_array(a, 5);
    print_array(b, 10);
    //

    return 0;
}*/


/* average_array.c
 // Implements a function average() to find the average of an array.
 // average() function invokes a sum() function which calculates the sum
 //

#include <stdio.h>

int sum(int *arr, int n);
double average(int *ptr, int n);

int main()
{
    int a[3] = {1, 1, 2};
    double avg;

    avg = average(a, 3);
    printf("avg = %f\n", avg);
}

int sum(int *arr, int n)
{
    int i, total = 0;

    for (i = 0; i < n; i++)
    {
    	total += arr[i];
    }
    return total;
}

double average(int *ptr, int n)
{
    double avg;
    int total = sum(ptr, n); //Find sum by invoking sum function

    avg = (double)total / n;
    return avg;
}*/


/*#include <stdio.h>

int sum_array(int arr[], int n)
{
    int i, total = 0;

    for (i = 0; i < n; i++)
    {
    	total += arr[i];
    }

    return total;
}

float average_array(int arr[], int n)
{
    int sum;
    float avg;

    sum = sum_array(arr, n);
    avg = (float)sum / n;
    return avg;
}

int main()
{
    int a[3] = {1, 1, 2};
    float avg;

    avg = average_array(a, 3);
    printf("avg = %f\n", avg);

    return 0;
}*/


/* FILE: copying_arrays_not_allowed.c
 // Description: Copying array is not allowed using = operator
 // Array cannot be LHS of assignment
 //
#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];

    // Try to copy array a to b //
    b = a;

 
    return 0;
}*/


/*#include <stdio.h>
int find_largest_index(int *ptr, int n)
{
    int i, largest_idx;

    largest_idx = 0; //Assume 1st element as largest
    for (i = 1; i < n; i++)
    {
	if (ptr[i] > ptr[largest_idx]) //Compare next element with largest
	{
	    largest_idx = i; //Update the index of largest number
	}
    }

    return largest_idx; //Return index of largest number
}

int find_largest_value(int *ptr, int n)
{
    int i, largest;

    largest = ptr[0]; //Assume 1st element as largest
    for (i = 1; i < n; i++)
    {
	if (ptr[i] > largest) //Compare next element with largest
	{
	    largest = ptr[i];
	}
    }

    return largest;
}

int main()
{
    int a[5] = {100, 2, 300, 400, 5};
    int greatest, greatest_idx;

    greatest = find_largest_value(a, 5); // Returns 400
    printf("Largest is %d\n", greatest);

    greatest_idx = find_largest_index(a, 5); //Returns index of 400
    printf("Largest is %d\n", a[greatest_idx]);

    return 0;
}*/


/* FILE: array_access_using_ptr.c
 // Description: Illustrates pointer arithmetic and array interpretation
 // In general
 // 	[ ptr + i => ptr + i * sizeof(*ptr) ]
 //
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr = a;
    int i;

    for (i = 0; i < 5; i++)
    {
	printf("%d\n", *(ptr + i)); // Prints a[i]
    }

    printf("ptr = %p\n", ptr);

    return 0;
}*/


/* FILE: array_access_using_ptr.c
 // Description: Illustrates pointer arithmetic and array interpretation
 // In general
 // 	[ ptr + i => ptr + i * sizeof(*ptr) ]
 //
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr = a;
    int i;

    for (i = 0; i < 5; i++)
    {
	printf("%d\n", *ptr); 
	ptr++;
    }

    printf("ptr = %p\n", ptr);

    return 0;
}*/


/* FILE: array_access_using_ptr.c
 // Description: Illustrates pointer arithmetic and array interpretation
 // In general
 // 	[ ptr + i => ptr + i * sizeof(*ptr) ]
 //
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr = a;
    int i;

    for (i = 0; i < 5; i++)
    {
	printf("%d\n", ptr[i]); // ptr[i] => *(ptr + i) => a[i]
    }

    return 0;
}*/


/* FILE: ptr_arithmetic1.c
 // Description: Illustrates pointer arithmetic and array interpretation
 // In general
 // 	[ ptr + i => ptr + i * sizeof(*ptr) ]
 //
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr = a;

    printf("a = %p, ptr = %p\n", a, ptr);

    // Illustrates pointer arithmetic //
    printf("ptr + 1 = %p\n", ptr + 1);
    printf("ptr + 2 = %p\n", ptr + 2);

    printf("a + 1 = %p\n", a + 1); 
    printf("a + 2 = %p\n", a + 2);

    // a[i] => *(a + i)
    printf("*(a + 1) = %d\n", *(a + 1));

    return 0;
}*/


/* FILE: array_access_using_ptr.c
 // Description: Illustrates pointer arithmetic and array interpretation
 // In general
 // 	[ ptr + i => ptr + i * sizeof(*ptr) ]
 //
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr = a;
    int i;

    for (i = 0; i < 5; i++)
    {
	ptr = ptr + i;
	printf("%d\n", *(ptr));
    }


    return 0;
}*/


/*#include <stdio.h>

void print_array(int *arr, int n);
void square_array(int a[], int n);

void print_array(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
    	printf("%d ", arr[i]);
    }
    puts("");
}

// Here parameter a is acting like a pointer
void square_array(int a[], int n)
{
    int i;

    printf("size of a = %u\n", sizeof(a));

    for (i = 0; i < n; i++)
    {
    	a[i] = a[i] * a[i];
	//(*(a + i) = (*(a + i)) + (*(a + i)));
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 2, 3};

    square_array(a, 5);
    print_array(a, 5);

    square_array(b, 3);
    print_array(b, 3);

    return 0;
}*/


/*#include <stdio.h>

void print_array(int arr[], int n);
void square_array(int a[], int n);

void print_array(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
    	printf("%d ", arr[i]);
    }
    puts("");
}

void square_array(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
    	arr[i] = arr[i] * arr[i];
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 2, 3};

    square_array(a, 5);
    print_array(a, 5);

    square_array(b, 3);
    print_array(b, 3);

    return 0;
}*/


/*#include <stdio.h>

void print_array(int arr[], int n);

void print_array(int arr[], int n)
{
    int i;

    printf("Size of arr = %lu\n", sizeof(arr));

    for (i = 0; i < n; i++)
    {
    	printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {10, 20, 30};

    printf("Size of a = %lu\n", sizeof(a));

    print_array(a, 5);
    print_array(b, 3);

    return 0;
}*/



/* Example function to illustrate passing an array in C
 // Argument 1: Pass base address
 // Argument 2: Pass no. of elements to access in array
 //
void print_array(int *ptr, int n);


void print_array(int *ptr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
    	//printf("%d ", ptr[i]);
    	printf("%d ", *(ptr + i));
    }
    printf("\n");
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 2, 3};

    //print array a
    print_array(a, 5);

    //print array b
    print_array(b, 3);

    return 0;
}*/


/*#include <stdio.h>

//void print_array(int [], int );
void print_array(int ptr[], int n);

void print_array(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
    	printf("%d ", arr[i]); // arr[i] <=> a[i]
    }
    puts("");
}

void read_array(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
    	scanf("%d", &arr[i]);
    }
}

int main()
{
    int a[5];

    puts("Enter 5 values");
    read_array(a, 5);

    puts("Printing array a:");
    //print array a
    print_array(a, 5);

    return 0;
}*/


/*Q1. WAF to square the array elements
int main() {
	int a[5] = {1, 2, 3, 4, 5};
	print_array(a, 5); // Print 1, 2, 3, 4, 5
	square_array(....);
	print_array(a, 5); // Print 1, 4, 9, 16, 25
}

Q2. WAF to find sum of array
int main() {
	int a[5] = {1, 2, 3, 4, 5};
	int res;
	res = sum_array(...);
	printf("res = %d\n", res); // Print sum of array elements
}*/


/*#include <stdio.h>

//void print_array(int [], int );
void print_array(int ptr[], int n);

void print_array(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
    	printf("%d ", arr[i]);
    }
    puts(""); //Print \n
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 2, 3};

    //print array a
    print_array(a, 5);

    //print array b
    print_array(b, 3);

    return 0;
}*/


/*#include <stdio.h>

#define ARR_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

void print_array(int arr[], int size);
void square_array(int arr[], int size);

void print_array(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
	printf("%d ", arr[i]);
    }
    printf("\n");
}
void square_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
    {
	arr[i] = arr[i] * arr[i];
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    print_array (a, 5);
    square_array(a, 5);
    puts("Array after calling square_array");
    print_array (a, 5);

    return 0;
}*/


/* sum_array.c
 // Function to find the sum of array elements
 //

#include <stdio.h>

int sum_array(int arr[], int n);

int sum_array(int arr[], int n)
{
    int i, total = 0;

    for (i = 0; i < n; i++)
    {
    	total += arr[i];
    }

    return total;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int sum;

    sum = sum_array(a, 5);

    printf("sum = %d\n", sum);
}*/


/*#include <stdio.h>

#define ARR_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

void print_array(int *arr, int size);
void square_array(int *arr, int size);

void print_array(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
	printf("%d ", *(arr + i));
    }
    printf("\n");
}
void square_array(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
	//arr[i] = arr[i] * arr[i];
	*(arr + i) = *(arr + i) * *(arr + i);
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[6] = { 1, 2, 3, 4, 5, 6};

    print_array (a, 5);
    square_array(a, 5);
    print_array (a, 5);

    
    //square_array(b, ARR_SIZE(b));
    //print_array (b, ARR_SIZE(b));
     
    return 0;
}*/


/* sum_array.c
 // Function to find the sum of array elements
 //

#include <stdio.h>

int sum_array(int *arr, int n);

int sum_array(int *arr, int n)
{
    int i, total = 0;

    for (i = 0; i < n; i++)
    {
    	total += *(arr + i);
    }

    return total;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int sum;

    sum = sum_array(a, 5);

    printf("sum = %d\n", sum);
}*/


/* sum_array.c
 // Function to find the sum of array elements
 //

#include <stdio.h>

int sum_array(int arr[], int n)
{
    int i, total = 0;

    for (i = 0; i < n; i++)
    {
    	total += arr[i];
    }

    return total;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int sum;

    sum = sum_array(a, 5);

    printf("sum = %d\n", sum);
}*/


/*#include <stdio.h>

void print_array(int *ptr) {
    int i;

    for (i = 0; i < sizeof(*ptr); i++)
    {
    	printf("%d\n", *(ptr + i));
    }
    puts("");
}
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 2, 3};
    print_array(a);

    //print array b
    print_array(b);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x, y;
    int *ptr;

    x = 5;
    ptr = 5;
    y = ptr;

    //Print values
    printf("x = %d, y = %d, ptr = %d\n", x, y, ptr);

    //Print address
    printf("&x = %lu, &y = %lu, &ptr = %lu\n", &x, &y, &ptr);

    //store address of x in ptr
    ptr = &x;
    printf("ptr = %lu\n", ptr);
}*/


/*#include <stdio.h>

int main()
{
    int x = 5, y;
    int *ptr;

    //store address of x in ptr
    ptr = &x;
    printf("%d\n", *ptr);

    y = *ptr;
    printf("y = %d\n", y);

    *ptr = 500; //Change x
    printf("x = %d\n", x);

}*/


/* FILE - pass_by_ref1.c
 // Description: Program illustrate the usage of pass by reference
 //

#include <stdio.h>

void modify(int *ptr)
{
    *ptr = 10; 
}

int main()
{
    int x = 5;

    modify(&x);

    printf("x = %d\n", x);

    return 0;
}*/


/*#include <stdio.h>

void square_cube(int x, int *sq_ptr, int *cube)
{
    *sq_ptr = (x) * (x);
    *cube = (*sq_ptr) * (x);
}

int main()
{
    int num = 5, sq, cube;

    printf("%d %d %d\n", num, sq, cube);

    square_cube(num, &sq, &cube);
    
    printf("%d %d %d\n", num, sq, cube);

    return 0;
}*/


/*#include <stdio.h>

// FILE: square_cube_incorrect.c
 // Description: Illustrates when to use pass by value and reference.
 // General rule is use PBR if the parameter needs to be modified in
 // the function, or if the paramter is big.
 // In this example num (1st param) need not be passed by reference,
 // as it is not modified in the function square_cube
 //

void square_cube(int *ptr, int *square, int *cube)
{
    *square = (*ptr) * (*ptr);
    *cube = (*square) * (*ptr);
}

int main()
{
    int num = 5, sq, cube;

    printf("%d %d %d\n", num, sq, cube);

    // !! Is it necessary to pass address of num? Are we modifying it? //
    square_cube(&num, &sq, &cube);
    
    printf("%d %d %d\n", num, sq, cube);

    return 0;
}*/


/*#include <stdio.h>

// Implement the below function //
void square_cube(int val, int *sq_ptr, int *cube_ptr)
{
    *sq_ptr = val * val;
    *cube_ptr = val * val * val;
}

int main()
{
    int num = 5, sq, cube;

    square_cube(num, &sq, &cube); //Complete this
    
    printf("%d %d %d\n", num, sq, cube); // Prints 5, 25, 125

    return 0;
}*/


/*#include <stdio.h>

void square(int *ptr)
{
    *ptr = (*ptr) * (*ptr); // Same as doing a = a * a
}

int main()
{
    int a = 5;

    printf("a = %d\n", a);
    square(&a);
    printf("a = %d\n", a);

    return 0;
}*/


/* FILE: sum_prod.c
 //
 // Description: Program illustrates the method of returning
 // more than one value using pass by reference. C language
 // does not support returning muliple values using the
 // return keyword.
 //
 // The solution is to pass the address of result variables
 // by reference from the calling function. In this example,
 // sum and prod are passed by reference from main() function.
 //

#include <stdio.h>

// Function: sum_prod
 // Finds the sum of a & b and stores the result in *sum_ptr
 // The pointer sum_ptr is pointing to sum in main(). Hence
 // modifying *sum_ptr is same as modifying sum in main().
 // This applies to prod_ptr also
 //
void sum_prod(int num1, int num2, int *sum_ptr, int *prod_ptr)
{
    *sum_ptr = num1 +num2; // Modifies sum in main()
    *prod_ptr = num1 * num2; // Modifies prod in main()
}

int main()
{
    int a = 5, b = 10, sum, prod;

    sum_prod(a, b, &sum, &prod);

    printf("sum = %d, prod = %d\n", sum, prod);

    return 0;
}*/


/*#include <stdio.h>

void sum_prod(int num1, int num2, int *sum_ptr, int *prod_ptr)
{
    *sum_ptr = num1 + num2;
    *prod_ptr = num1 * num2;
}

int main()
{
    int a = 5, b = 10, sum, prod;

    sum_prod(a, b, &sum, &prod);

    // This should print 15 and 50
    printf("sum = %d, prod = %d\n", sum, prod);

    return 0;
}*/


/*#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int a = 5, b = 10;

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}*/


/*#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
    //int *temp = *ptr1;
    int *temp;
    *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *temp;
}

int main()
{
    int a = 5, b = 10;

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}*/


/*#include <stdio.h>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 5, b = 10;

    swap(a, b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}*/


/* W.A.F to swap two integers

int main()
{
    int a = 5, b = 10;

    swap(.......);

    printf("a = %d, b = %d\n", a, b); // Should print 10 and 5

}*/


/*#include <stdio.h>

//Function prototype - Informs the compiler about the type of
// function. ie., What are the parameter type and return type

double average(int, int);
//double average(int x, int y);

int main()
{
    int num1 = 5, num2 = 10;
    double res;

    res = average(num1);

    printf("average = %f\n", res);
    return 0;
}


//Function definition
double average(int x, int y)
{
    double avg;

    avg = (x + y) / 2.0;

    return avg;
}*/


/* FILE: fact_loop.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int n = 100, i, res = 1;

    for (i = 1; i <= n; i++)
    {
	res = res * i;
    }

    printf("%d! = %d\n", n, res);

    return 0;
}*/


/*#include <stdio.h>

int fact(int n)
{
    if (n == 0) //Base condition
    {
    	return 1;
    }
    else
    {
	return n * fact(n - 1); //Recursive condition
    }
}

int main()
{
    int res;

    res = fact(3);
    printf("res = %d\n", res);

    return 0;
}*/


/* FILE: main_recurse.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    puts("hello");
    main();

    return 0;
}*/


/*#include <stdio.h>
 
int fun(int n)
{
    if (n == 4)
       return n;
    else
       return 2*fun(n+1);
}
 
 
int main()
{
   printf("%d\n", fun(2));
   return 0;
}*/


/*#include <stdio.h>

int fun(int x, int y) 
{
  if (x == 0)
    return y;

  return fun(x - 1,  x + y);
} 

int main()
{
    printf("%d\n", fun(4, 3));
}*/


/*#include <stdio.h>

void fun(int n)
{
    if (n == 0)
	return;

    printf("%d ", n % 2);

    fun(n / 2);
}  

int main()
{
    fun(25);
}*/


/*#include <stdio.h>

void fun(int n)
{
      if (n == 0)
	      return;
       
        printf("%d", n%2);
	  fun(n/2);
}  

int main()
{
    fun(25);

}*/


/*#include <stdio.h>

void print()
{
    printf("hello\n");
    print();
}

int main()
{
    print();

    printf("Done\n");

    return 0;
}*/


/*#include <stdio.h>

void print()
{
    while (1)
    {
	printf("hello\n");
    }
}

int main()
{
    print();
    printf("Done\n");

    return 0;
}*/


//http://geeksquiz.com/algorithms/recursion///


/*#include <stdio.h>

int test(int n)
{
    return n + test(n-1);
}

int main()
{
    int res;
    res = test(3);

    printf("res = %d\n", res);

    return 0;
}*/


/*#include <stdio.h>

int sum_natural(int n)
{
    if (n == 1) // Base condition
    {
    	return 1;
    }
    else
    {
	return n + sum_natural(n - 1); //Recursive condition
    }
}

int main()
{
    int res;
    
    res = sum_natural(10);
    printf("res = %d\n", res);

    return 0;
}*/


/* FILE: block_var.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int x = 10;

    if(x > 5)
    {
	int y = 1000; // y is a block variable

	printf("y = %d\n", y);
    }

    printf("y = %d\n", y);
    return 0;
}*/


/* FILE: block_var.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int x = 10;

    if(x > 5)
    {
	int x = 1000;

	printf("x = %d\n", x);
    }

    printf("x = %d\n", x);

    return 0;
}*/


/* FILE: local.c 
 // Description: 
 //

#include <stdio.h>

void fun()
{
    int count = 10;
    printf("%d\n", count);
    count++;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}*/


/*#include <stdio.h>

// static variables are stored in Data Segment.
// They are not part of stack. Value is retained accross
// function calls.
void func(int count) {
    static int flag = 0; // Try without static also.

    if (flag == 0) {
	printf("Greetings from Emertxe\n");
	flag = 1;
    }

    printf("You entered %d\n", count);
}
int main()
{
    func(25);
    func(50);
    func(100);

    return 0;
}*/


/* FILE: static_assign.c
 // Description: 
 //

#include <stdio.h>

void foo(int num)
{
    // Static variable should be assigned
    // contant values. memory is allocated
    // even before calling this function
    // num cannot be assigned to x 
    static int x = num;

    printf("%d\n", x);

}

int main()
{
    foo(5);

    return 0;
}*/


/* FILE: local.c 
 // Description: 
 //

#include <stdio.h>

void fun()
{
    static int count = 10;
    printf("%d\n", count);
    count++;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}*/


/* usage of ctype functions 
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch1 = 'a';
    char ch2;

    ch2 = toupper(ch1);

    putchar(ch2);
    putchar('\n');

    printf("Lower case of E is %c\n", tolower('E'));

   return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};



    int *ptr;

    //2nd interpretation (array name indicates base address of array)
    ptr = a;

    //1st interpretation (array name include whole array)
    printf("sizeof a = %u\n", sizeof(a));

    // This is invalid. Can initialize only during declaration using this method
    // Use indices to store values in array elements 
    a[] = {6, 7, 8, 9, 10};
    printf("*ptr = %d\n", *ptr);
}*/


/* FILE: main.c
 // Description: main() invokes external func
 //

#include <stdio.h>
#include "math.h"

int main()
{
    double res = average(5, 10);

    printf("res = %f\n", res);

    test();

    return 0;
}*/


/* FILE: math.c
 // Description: Defines average function
 //

double average(int x, int y)
{
    double sum;

    sum = (double)(x + y) / 2;

    return sum;
}*/


//extern double average(int x, int y);
//extern void test();


/*#include <stdio.h>
#include "math.h"


void test()
{
    double res = average(50, 10);

    printf("test res = %f\n", res);

}*/


/* FILE: main.c
 // Description: 
 //

#include <stdio.h>
#include "math.h"
//#include "test.h"

extern int count;

int main()
{
    float res = average(5, 10);
    printf("res = %f\n", res);

    printf("count = %d\n", count);

    //test();

    return 0;
}*/


/* FILE: math.c
 // Description: 
 //

#include <stdio.h>
#include "math.h"

int count;

float average(int x, int y)
{
    float sum;

    sum = (float)(x + y) / 2;

    count++;

    return sum;
}*/


/*#ifndef MATH_H
#define MATH_H
extern float average(int x, int y);
#endif*/


/* FILE: main.c
 // Description: main() invokes external func
 //

#include <stdio.h>

extern double average(int x, int y);
extern void test();

int main()
{
    double res = average(5, 10);

    printf("res = %f\n", res);

    test();

    return 0;
}*/


/* FILE: math.c
 // Description: Defines average function
 //

double average(int x, int y)
{
    double sum;

    sum = (double)(x + y) / 2;

    return sum;
}*/


/*#include <stdio.h>

extern double average(int x, int y);

void test()
{
    double res = average(50, 10);

    printf("test res = %f\n", res);

}*/


/*#include <stdio.h>
#include "math.h"
void test(void)
{
    printf("%f\n", average(1, 2));
}*/


/*#ifndef TEST_H
#define TEST_H
void test(void);
#endif*/


/*#include <stdio.h>

int add3(int a, int b, int c)
{
    return a + b + c;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int res;

    int (*fptr)(int, int); //Function pointer declaration. fptr is a function pointer

    fptr = &add; //Assign add functions address

    res = (*fptr)(5, 10); //Invoke add function
    printf("res = %d\n", res);

    fptr = sub; //Assign sub function address
    res = fptr(5, 10); //Call sub func. Notice that u need not derefence fptr

    printf("res = %d\n", res);

    //fptr = add3; //Prototype mismatch

    return 0;

}*/


/*#include <stdio.h>

int square(int x)
{
    return x * x;
}

int cube(int x)
{
    return x * x * x;
}

int main()
{
    // Define a function pointer //
    int (*f)(int);

    // Assign the function address //
    f = square;
    // Call the function that f points to //
    printf ("%d\n", f(5));
    printf ("%d\n", (*f)(5));

    // Call the function that f points to //
    f = cube;
    // Call the function that f points to //
    printf ("%d\n", f(5));


    return 0;
}*/


/* Program to illustrate use of function pointers 
#include <stdio.h>
int square(int x)
{ 
    return x * x;
}

int div2(int x)
{
    return x / 2;
}

void map(int *arr, int size, int (*fptr)(int))
{
    int i;

    for(i = 0; i < size; i++)
    {
	arr[i] = fptr(arr[i]);
    }
}

int main()
{
    int a[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int i;

    puts("After squaring");
    map(a, 8, square);
    for(i = 0; i < 8; i++)
    {
	printf("a[%d] = %d\n", i, a[i]);
    }
    
    puts("After div / 2");
    map(a, 8, div2);
    for(i = 0; i < 8; i++)
    {
	printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}*/


/*
 * atexit.c - Program to illustrate use of atexit callback function
 * 
 * Copyright (C) 2012 Emertxe Information Technologies (P) Ltd
 *
 * Description: atexit is used to register a function to be called at
 * normal process termination. my_exit will get called before the
 * program terminates.
 *
 * Created on: 29-Sep-2012
 *

#include <stdio.h>
#include <stdlib.h>

void my_exit(void)
{
    printf("Exitting program\n");
}


int main()
{
    printf("Hello\n");
    // Registering my_exit function. my_exit will get called just before program termination
    atexit(my_exit);

    puts("Before Exit");
    
    return 0;
}*/


/*
 * atexit.c - Program to illustrate use of atexit callback function
 * 
 * Copyright (C) 2012 Emertxe Information Technologies (P) Ltd
 *
 * Description: atexit is used to register a function to be called at
 * normal process termination. my_exit will get called before the
 * program terminates.
 *
 * Created on: 29-Sep-2012
 *

#include <stdio.h>
#include <stdlib.h>

int *ptr;
void my_exit(void)
{
    printf("Exiting program\n");
    if(ptr)
    {
	free(ptr);
    }
}

void test()
{
    puts("In test");
    exit(0);
}

int main()
{
    atexit(my_exit);
    ptr = malloc(100);
    test();
    printf("Hello\n");

    return 0;
}*/


/*#include <stdio.h>

static void swap(void *a, void *b, int size);
// Generic swap //
static void swap(void *a, void *b, int size)
{
    int i = 0;
    char *p1, *p2;
    char temp;

    p1 = (char *)a;
    p2 = (char *)b;

    for (i = 0; i < size; i++)
    {
    	temp = *p1;
    	*p1 = *p2;
    	*p2 = temp;
    	p1++, p2++;
    }
}

void bubble_sort(void *arr, int n, int size, int (*compare)(void *, void *))
{
    int i, j;

    // Apply bubble sort
    for(i = 0; i < n ; i++)
    {
    	for (j = i + 1; j < n; j++)
	{
	    if (compare(((char *)arr + i * size), ((char *)arr + j * size)))
	    {
		swap(((char *)arr + i * size), ((char *)arr + j * size), size);
	    }
	}
    }
}*/


//void bubble_sort(void *arr, int n, int size, int (*compare)(void *, void *));//


/*#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

void print_int_array(int *arr, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
    	printf("%4d", arr[i]);
    }

    puts("");
}

void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void swap(void *a, void *b, int size)
{
    int i = 0;
    char *p1, *p2;
    char temp;

    p1 = (char *)a;
    p2 = (char *)b;

    for (i = 0; i < size; i++)
    {
    	temp = *p1;
    	*p1 = *p2;
    	*p2 = temp;
    	p1++, p2++;
    }
}

int compare_int_ascending(int x, int y)
{
    if(x > y)
    	return 1;
    else
	return 0;

}

int compare_int_descending(int x, int y)
{
    if(x < y)
    	return 1;
    else
	return 0;

}
void bubble_sort(int *arr, int nmemb, int val_size, int (*compare)(int,int))
{
    int i, j;

    for(i = 0; i < nmemb ; i++)
    {
    	for (j = i + 1; j < nmemb; j++)
	{
	    //if (arr[i] > arr[j])
	    if (compare(arr[i], arr[j]))
	    {
	    	swap(&arr[i], &arr[j], val_size);
	    }
	}
    }
}

int main()
{
    int a[] = {50, 20, 10, 100, 1, -2};
    int size;

    size = ARRAY_SIZE(a);

    // Sort ascending //
    bubble_sort(a, size, sizeof(int), compare_int_ascending);
    print_int_array(a, size);

    // Sort descending //
    bubble_sort(a, size, sizeof(int), compare_int_descending);
    print_int_array(a, size);
    return 0;
}*/


/*#include <stdio.h>

static void swap(void *a, void *b, int size);
// Generic swap //
static void swap(void *a, void *b, int size)
{
    int i = 0;
    char *p1, *p2;
    char temp;

    p1 = (char *)a;
    p2 = (char *)b;

    for (i = 0; i < size; i++)
    {
    	temp = *p1;
    	*p1 = *p2;
    	*p2 = temp;
    	p1++, p2++;
    }
}

void bubble_sort(void *arr, int n, int size, int (*compare)(void *, void *))
{
    int i, j;

    // Apply bubble sort
    for(i = 0; i < n ; i++)
    {
    	for (j = i + 1; j < n; j++)
	{
	    //if (compare(&arr[i], &arr[j]))
	    if (compare(((char *)arr + i * size), ((char *)arr + j * size)))
	    {
	    	//swap(&arr[i], &arr[j], sizeof(*arr)); //Swap two ints
		swap(((char *)arr + i * size), ((char *)arr + j * size), size);
	    }
	}
    }
}*/


//void bubble_sort(void *arr, int n, int size, int (*compare)(void *, void *));//


/*#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

void print_int_array(int *arr, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
    	printf("%4d", arr[i]);
    }

    puts("");
}

void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void swap(void *a, void *b, int size)
{
    int i = 0;
    char *p1, *p2;
    char temp;

    p1 = (char *)a;
    p2 = (char *)b;

    for (i = 0; i < size; i++)
    {
    	temp = *p1;
    	*p1 = *p2;
    	*p2 = temp;
    	p1++, p2++;
    }
}

int compare_int_ascending(int x, int y)
{
    if(x > y)
    	return 1;
    else
	return 0;

}

int compare_int_descending(int x, int y)
{
    if(x < y)
    	return 1;
    else
	return 0;

}
void bubble_sort(int *arr, int nmemb, int val_size, int (*compare)(int,int))
{
    int i, j;

    for(i = 0; i < nmemb ; i++)
    {
    	for (j = i + 1; j < nmemb; j++)
	{
	    //if (arr[i] > arr[j])
	    if (compare(arr[i], arr[j]))
	    {
	    	swap(&arr[i], &arr[j], val_size);
	    }
	}
    }
}

int main()
{
    int a[] = {50, 20, 10, 100, 1, -2};
    int size;

    size = ARRAY_SIZE(a);

    // Sort ascending //
    bubble_sort(a, size, sizeof(int), compare_int_ascending);
    print_int_array(a, size);

    // Sort descending //
    bubble_sort(a, size, sizeof(int), compare_int_descending);
    print_int_array(a, size);
    return 0;
}*/


/*#include <stdio.h>

void swap_generic(void *ptr1, void *ptr2, int size);

void swap_generic(void *ptr1, void *ptr2, int size)
{
    int i;
    char temp;

    for (i = 0; i < size; i++)
    {
    	// Swap one byte
    	temp = *(char *)ptr1;
    	*(char *)ptr1 = *(char *)ptr2;
    	*(char *)ptr2 = temp;

    	// Increment pointer by 1
    	ptr1 = (char *)ptr1 + 1;
    	ptr2 = (char *)ptr2 + 1;
    }

}

void bubble_sort(void *arr, int n, int size, int (*compare)(void *, void *))
{
    int i, j;

    for (i = 0; i < n; i++)
    {
    	for (j = i + 1; j < n; j++)
	{
	    if (compare(((char *)arr + i * size), ((char *)arr + j * size))) //Compare fn (defines the sorting criteria)
	    {
		swap_generic(((char *)arr + i * size), ((char *)arr + j * size), size);
	    	//swap_generic(&arr[i], &arr[j], sizeof(*arr)); //Swap two ints
	    }
	}
    }
}*/


//void bubble_sort(void *arr, int n, int size, int (*compare)(void *, void *));//


/* Function: bubble_sort
 * Parameters:
 * arr     - Base address of array to be sorted. Can be any type.
 * n       - Number of elements in arr
 * size    - Size of an array element
 * compare - Function pointer containing address of comparison function
 *           to compare two arrary elements
 *
void bubble_sort(void *arr, int n, int size, int (*compare)(void *, void *));*/


/*#include "bubble_sort.h"

void swap_generic(void *ptr1, void *ptr2, int size);

void bubble_sort(void *arr, int n, int size, int (*compare)(void *, void *))
{
    int i, j;

    for (i = 0; i < n; i++)
    {
    	for (j = i + 1; j < n; j++)
	{
	    if ((compare((char *)arr + i * size, (char *)arr + j * size)) > 0)
	    {
		swap_generic((char *)arr + i * size, (char *)arr + j * size, size);
	    }
	}
    }
}

void swap_generic(void *ptr1, void *ptr2, int size)
{
    int i;
    char temp;

    for (i = 0; i < size; i++)
    {
    	// Swap one byte
    	temp = *(char *)ptr1;
    	*(char *)ptr1 = *(char *)ptr2;
    	*(char *)ptr2 = temp;

    	// Increment pointer by 1
    	ptr1 = (char *)ptr1 + 1;
    	ptr2 = (char *)ptr2 + 1;
    }

}

#if 0 //Unused
	    //if (arr[i] > arr[j]) 
	    //if (compare_asc_int(&arr[i], &arr[j]) > 0)
	    //if (compare_desc_int(&arr[i], &arr[j]) > 0)
#endif*/


/*#include <stdio.h>
#include "bubble_sort.h"

// Macro to find number of elements in an array //
#define ARRAY_SIZE(arr) (sizeof(arr)/ sizeof(arr[0]))

int compare_asc_int(void *a, void *b)  //int compare ascending
{
    if (*(int *)a > *(int *)b)
	return 1;
    else
	return -1;
}

int compare_asc_char(void *a, void *b) //Char compare ascending
{
    if (*(char *)a > *(char *)b)
	return 1;
    else
	return -1;
}

int compare_desc_int(void *a, void *b) //int compare descending
{
    if (*(int *)a < *(int *)b)
	return 1;
    else
	return -1;
}

void print_int_array(int *arr, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
    	printf("%d ", arr[i]);
    }

    puts("");
}

void print_char_array(char *arr, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
    	printf("%c ", arr[i]);
    }

    puts("");
}

int main()
{
    int a[] = {10, 5, 1000, 1};
    char letters[] = {'Z', 'A', 'D', 'I', 'P'};

    bubble_sort(a, 4, sizeof(a[0]), compare_asc_int);
    print_int_array(a, 4);

    bubble_sort(letters, ARRAY_SIZE(letters), sizeof(letters[0]), compare_asc_char);
    print_char_array(letters, ARRAY_SIZE(letters));

    return 0;
}*/


/*#include <stdio.h>
#include "bubble_sort.h"

#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

void print_int_array(int *arr, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
    	printf("%4d", arr[i]);
    }

    puts("");
}

void print_double_array(double *arr, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
    	printf("%f ", arr[i]);
    }

    puts("");
}

int compare_asc_double(void *a, void *b)
{
    if (*(double *)a > *(double *)b)
    {
    	return 1;
    }
    else
    {
    	return 0;
    }
}

int compare_asc_int(void *a, void *b)
{
    if (*(int *)a > *(int *)b)
    {
    	return 1;
    }
    else
    {
    	return 0;
    }
}

int compare_dsc_int(void *a, void *b)
{
    if (*(int *)a < *(int *)b)
    {
    	return 1;
    }
    else
    {
    	return 0;
    }
}

int main()
{
    int a[] = {50, 20, 10, 100, 1, -2};
    double d[] = {10.6, 20.8, 1.3, 100.7, 9000.99, -2.5};
    int size;

    size = ARRAY_SIZE(a); // Get number of elements in array

    // Sort ascending //
    bubble_sort(a, size, sizeof(a[0]), compare_asc_int);
    print_int_array(a, size);

    // Sort descending //
    bubble_sort(a, size, sizeof(a[0]), compare_dsc_int);
    print_int_array(a, size);

    // Sort double array //
    size = ARRAY_SIZE(d); // Get number of elements in array d

    // Sort ascending //
    bubble_sort(d, size, sizeof(d[0]), compare_asc_double);
    print_double_array(d, size);

    return 0;
}*/


/*#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))
void bubble_sort( *arr, int n, int size, int (*compare)(void *, void *))
{
    int i, j;

    // Apply bubble sort
    for(i = 0; i < n ; i++)
    {
    	for (j = i + 1; j < n; j++)
	{
	    //if (compare(&arr[i], &arr[j]))
	    if (compare(((char *)arr + i * size), ((char *)arr + j * size)))
	    {
	    	//swap(&arr[i], &arr[j], sizeof(*arr)); //Swap two ints
		swap(((char *)arr + i * size), ((char *)arr + j * size), size);
	    }
	}
    }
}

int main()
{
    int a[] = {50, 20, 10, 100, 1, -2};
    int size;

    size = ARRAY_SIZE(a); // Get number of elements in array

    // Sort ascending //
    bubble_sort(a, size, sizeof(a[0]), compare_asc_int);
    print_int_array(a, size);

    // Sort descending //
    bubble_sort(a, size, sizeof(a[0]), compare_dsc_int);
    print_int_array(a, size);
    return 0;
}


void print_int_array(int *arr, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
    	printf("%4d", arr[i]);
    }

    puts("");
}

int compare_asc_int(void *a, void *b)
{
    if (*(int *)a > *(int *)b)
    {
    	return 1;
    }
    else
    {
    	return 0;
    }
}

int compare_dsc_int(void *a, void *b)
{
    if (*(int *)a < *(int *)b)
    {
    	return 1;
    }
    else
    {
    	return 0;
    }
}*/


/*#include <stdio.h>
#include "bubble_sort.h"

#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

void print_int_array(int *arr, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
    	printf("%4d", arr[i]);
    }

    puts("");
}

int compare_asc_int(void *a, void *b)
{
    if (*(int *)a > *(int *)b)
    {
    	return 1;
    }
    else
    {
    	return 0;
    }
}

int compare_dsc_int(void *a, void *b)
{
    if (*(int *)a < *(int *)b)
    {
    	return 1;
    }
    else
    {
    	return 0;
    }
}

int main()
{
    int a[] = {50, 20, 10, 100, 1, -2};
    int size;

    size = ARRAY_SIZE(a); // Get number of elements in array

    // Sort ascending //
    bubble_sort(a, size, sizeof(a[0]), compare_asc_int);
    print_int_array(a, size);

    // Sort descending //
    bubble_sort(a, size, sizeof(a[0]), compare_dsc_int);
    print_int_array(a, size);
    return 0;
}*/


//gcc -o qsort.exe -Wl,-Map,qsort.map qsort.c//


/*#include <stdio.h>
int add(int num1, int num2)
{
    return num1 + num2;
}
int main()
{
    printf("%p\n", add);
    printf("%p\n", &add);
    return 0;
}*/





















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































