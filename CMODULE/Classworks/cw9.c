/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */

//Swap any given data//
/*#include<stdio.h>
void swap(void *v1, void *v2);
int main()
{
		char c1 = 'a', c2 = 'b';
		printf("Before c1 = %c, c2 = %c\n", c1, c2);
		swap(&c1, &c2);
		printf("After c1 = %c, c2 = %c\n", c1, c2);
}
void swap(void *v1, void *v2)
{
		char temp;
		temp = *(char *)v1;
		*(char *)v1 = *(char *)v2;
		*(char *)v2 = temp;
}*/

//String duplicate//
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *my_strdup(char *str);
int main()
{
		char *ptr;
		ptr = my_strdup("Emertxe");
		puts(ptr);
		free(ptr);
		return 0;
}
char *my_strdup(char *str)
{
		char *ptr;
		ptr = malloc(strlen(str) + 1);
		strcpy(ptr, str);
		return ptr;
}*/


/*#include<stdio.h>
#include<stdlib.h>
void populate(int *ptr, int size);
void print_array(int *ptr, int size);
int main()
{
		int size;
		printf("Enter the number of elements: ");
		scanf("%d", &size);
		int *arr;
		arr = malloc(size * sizeof(int));
		if(arr == NULL)
		{
				printf("Memory Allocation Failure\n");
				return -1;
		}
		printf("Enter %d array elements\n", size);
		populate(arr, size);
		printf("Array elements are: ");
		print_array(arr, size);
		return 0;
}
void populate(int *ptr, int size)
{
		int i;
		for(i = 0; i < size; i++)
		{
				scanf("%d", &ptr[i]);
		}
}
void print_array(int *ptr, int size)
{
		int i;
		for(i = 0; i < size; i++)
		{
				printf("%d ", *ptr++);
		}
		putchar('\n');
}*/

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print_array(char *ptr, int size);
int main()
{
		char *ptr;
		ptr = malloc(20);
		memset(ptr, 'A', 20);
		//memset(ptr, 25, 10);//
		printf("Array elements are\n");
		print_array(ptr, 20);
		free(ptr);
		return 0;
}
void print_array(char *ptr, int size)
{
		int i;
		for(i = 0; i < size; i++)
		{
				printf("%d ", *ptr++);
		}
		putchar('\n');
}*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print_array(char *ptr, int size);
void my_memset(void *ptr, int x, size_t size);
int main()
{
		char *ptr;
		ptr = malloc(26);
		my_memset(ptr, 'A', 26);
		printf("Array elements are\n");
		print_array(ptr, 26);
		free(ptr);
		return 0;
}
void my_memset(void *ptr, int x, size_t size)
{
		int i;
		for(i = 0; i < size; i++)
		{
				*(char *)ptr = x + i;
				ptr++;
		}
}
void print_array(char *ptr, int size)
{
		int i;
		for(i = 0; i < size; i++)
		{
				printf("%d ", *ptr++);
		}
		putchar('\n');
}



