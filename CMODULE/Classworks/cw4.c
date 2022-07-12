/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */

/*#include<stdio.h>
int main()
{
		int num = 0x12345678;
		char *cptr = &num;
		if(*cptr == 0x12)
		{
				printf("Little Endian\n");
		}
		else
		{
				printf("Big Endian\n");
		}
		printf("%hx\n", *cptr);
		return 0;
}*/

/*#include<stdio.h>
int square_cube(int num, int *square, int *cube);
int main()
{
		int num, square, cube;
		printf("Enter the num: ");
		scanf("%d", &num);
		square_cube(num, &square, &cube);
		printf("Square of a number is %d\n", square);
		printf("Cube of a number is %d\n", cube);
		return 0;
}
int square_cube(int num, int *square, int *cube)
{
		*square = num * num;
		*cube = num * num * num;
}*/

/*#include<stdio.h>
void swap(int *num1, int *num2);
void sum_product(int num1, int num2, int *sum, int *product);
int main()
{
		int num1, num2, sum, product;
		printf("Enter the num1: ");
		scanf("%d", &num1);
		printf("Enter the num2: ");
		scanf("%d", &num2);
		swap(&num1, &num2);
		sum_product(num1, num2, &sum, &product);
		printf("After swapping num1 is %d and num2 is %d\n", num1, num2);
		printf("Sum of two numbers is %d\n", sum);
		printf("Product of two numbers is %d\n", product);
		return 0;
}
void swap(int * iptr1, int * iptr2)
{
		int temp;
		temp = *iptr1;
		*iptr1 = *iptr2;
		*iptr2 = temp;
}
void sum_product(int num1, int num2, int * sum, int * product)
{
		*sum = num1 + num2;
		*product = num1 * num2;
}*/

#include<stdio.h>
void read_array(int *, int);
void print_array(int *, int);
void avg_array(int *, int);
void square_array(int*, int);
int main()
{
		int size;
		printf("Enter the size of array: ");
		scanf("%d", &size);
		int array[size];
		read_array(array, size);
		print_array(array, size);
		avg_array(array, size);
		square_array(array, size);
		print_array(array, size);
}
void read_array(int *array, int size)
{
		printf("Enter array elements: ");
		int i;
		for(i = 0; i < size; i++)
		{
				scanf("%d", &array[i]);
		}
}
void print_array(int* array, int size)
{
		int i;
		for(i = 0; i < size; i++)
		{
				printf("Array[%d] = %d\n", i, array[i]);
		}
}
void avg_array(int *array, int size)
{
		int i, result = 0;
		float avg;
		for(i = 0; i < size; i++)
		{
				result = result + array[i];
		}
		avg = (float)result/size;
		printf("Avg = %g\n", avg);
}
void square_array(int *array, int size)
{
		int i;
		for(i = 0; i < size; i++)
		{
				array[i] = array[i] * array[i];
		}
}



