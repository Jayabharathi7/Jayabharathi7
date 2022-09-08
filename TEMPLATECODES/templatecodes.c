/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */


/*#include <stdio.h>

int main()
{
	char option = 'A';
	int age = 12;
	float height = 5.5;

	printf("The character is %c\n", option);
	printf("The integer is %d\n", age);
	printf("The float is %f\n", height);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	char option;
	int age;
	float height;

	scanf("%c", &option);
	printf("The character is %c\n", option);
	scanf("%d", &age);
	printf("The integer is %d\n", age);
	scanf("%f", &height);
	printf("The float is %f\n", height);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	char option = 'A';
	int age = 12;;
	float height = 12.5;

	printf("The size of char is %lu\n", sizeof(char));
	printf("The size of int is %zu\n", sizeof(int));
	printf("The float is %zu\n\n", sizeof(float));

	printf("The size of char is %zu\n", sizeof(option));
	printf("The size of int is %zu\n", sizeof(age));
	printf("The float is %zu\n\n", sizeof(height));
	
	printf("The size of char is %zu\n", sizeof('A'));
	printf("The size of int is %zu\n", sizeof(12));
	printf("The float is %zu\n\n", sizeof(12.5));
	
	return 0;
}*/


/*#include <stdio.h>

int main()
{
	short int count1;
	int long count2;
	short count3;

	printf("short is %zu bytes\n", sizeof(short int));
	printf("long int is %zu bytes\n", sizeof(int long));
	printf("short is %zu bytes\n", sizeof(short));

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	unsigned int count1;
	signed int count2;
	unsigned char count3;
	signed char count4;

	printf("count1 is %zu bytes\n", sizeof(unsigned int));
	printf("count2 is %zu bytes\n", sizeof(signed int));
	printf("count3 is %zu bytes\n", sizeof(unsigned char));
	printf("count3 is %zu bytes\n", sizeof(signed char));	

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	unsigned short count1;
	signed long count2;
	short signed count3;

	printf("count1 is %zu bytes\n", sizeof(count1));
	printf("count2 is %zu bytes\n", sizeof(count2));
	printf("count3 is %zu bytes\n", sizeof(count3));

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	unsigned int count1 = 10;
	signed int count2 = -1;

	if (count1 > count2)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num = 2;

	if (num < 5)
	{
		printf("num < 5\n");
	}
	printf("num is %d\n", num);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num = 10;

	if (num < 5)
	{
		printf("num is smaller than 5\n");
	}
	else
	{
		printf("num is greater than 5\n");
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num = 5;

	if (num < 5)
	{
		printf("num is smaller than 5\n");
	}
	else if (num > 5)
	{
		printf("num is greater than 5\n");
	}
	else
	{
		printf("num is equal to 5\n");
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int option;
	printf("Enter the value\n");
	scanf("%d", &option);

	switch (option)
	{
			case 10 :
					printf("You entered 10\n");
					break;
			case 20 :
					printf("You entered 20\n");
					break;
			default:
					printf("Try again\n");
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
		int iter;

		iter = 0;
		while (iter < 5)
		{
				printf("Looped %d times\n", iter);
				iter++;
		}

		return 0;
}*/


/*#include <stdio.h>

int main()
{
	int iter;

	iter = 0;
	do
	{
		printf("Looped %d times\n", iter);
		iter++;
	} while (iter < 10);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
		int iter = 0;

		for (iter = 0 ; iter < 10; iter++ )
		{
				printf("Looped %d times\n", iter);
		}
		return 0;
}*/


/*#include <stdio.h>

int main()
{
	int iter;

	for (iter = 0; iter < 10; iter++)
	{
		if (iter == 5)
		{
			break;
		}
		printf("%d\n", iter);
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int iter;

	for (iter = 0; iter < 10; iter++)
	{
		if (iter == 5)
		{
			continue;
		}
		printf("%d\n", iter);
	}

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
	//int num = 5;
	float num = 10.23;

	printf("%u:%u:%u\n", sizeof(float), sizeof num, sizeof (10.25));

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num1 = 5;
	int num2 = sizeof(++num1);
	printf("num1 is %d and num2 is %d\n", num1, num2);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num1 = 5, num2 = 3;

	float num3 = (float) num1 / num2;

	printf("num3 is %f\n", num3);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
		int num1 = 1, num2 = 0;

		if (++num1 || num2++)
		{
				printf("num1 is %d num2 is %d\n", num1, num2);
		}

		num1 = 1, num2 = 0;

		if (num1++ && ++num2)
		{
				printf("num1 is %d num2 is %d\n", num1, num2);
		}
		else
		{
				printf("num1 is %d num2 is %d\n", num1, num2);
		}
		return 0;
}*/


/*#include <stdio.h>

int main()
{
		
		
	float num1 = 0.7;

	if (num1 == 0.7)
	{
		printf("Yes, it is equal\n");
	}
	else
	{
		printf("No, it is not equal\n");
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num1 = 1, num2 = 1;
	float num3 = 1.7, num4 = 1.5;

	num1 += num2 += num3 += num4;

	printf("num1 is %d\n", num1);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
		float num1 = 1;

		if ( num1 = 1)
		{
				printf("Yes, it is equal!!\n");
		}
		else
		{
				printf("No, it is not equal\n");
		}

		return 0;
}*/


/*#include <stdio.h>

int main()
{
	int count;
	char iter = 0xAA;

	for (count = 0; iter != 0; iter >>= 1)
	{
		if (iter & 01)
		{
			count++;
		}
	}

	printf("count is %d\n", count);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int x = 7, y = 7;

	x = 7 << 32;
	printf("x is %x\n", x);

	x = y << 32;
	printf("x is %x\n", x);

	return 0;
}*/


/*#include <stdio.h>

#if 0
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3;

	if (num1 > num2)
	{
		num3 = num1;
	}
	else
	{
		num3 = num2;
	}
	printf("%d\n", num3);

	return 0;
}
#else
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3;

	num3 = num1 > num2 ? num1 : num2;
	printf("Greater num is %d\n", num3);

	return 0;
}
#endif*/


/*#include <stdio.h>

#if 0
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;
	int num5 = 50;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);
	printf("%d\n", num5);

	return 0;
}
#else
int main()
{
	int num_array[5] = {10, 20, 30, 40, 50};
	int index;

	for (index = 0; index < 5; index++)
	{
		printf("%d\n", num_array[index]);
	}

	return 0;
}
#endif*/


/*#include <stdio.h>

int main()
{
	int num_array[5] = {1, 2, 3, 4, 5};
	int index;

	index = 0;
	do
	{
		printf("Index %d has Element %d\n", index, num_array[index]);
		index++;
	} while (index < 5);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num_array[5];
	int index;

	for (index = 0; index < 5; index++)
	{
		scanf("%d", &num_array);
	}

	index = 0;
	do
	{
		printf("Index %d has Element %d\n", index, num_array[index]);
		index++;
	} while (index < 5);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int array1[5] = {1, 2, 3, 4, 5};
	int array2[5] = {1, 2};
	int array3[] = {1, 2};
//	int array4[]; // Invalid //

	printf("%zu\n", sizeof(array1));
	printf("%zu\n", sizeof(array2));
	printf("%zu\n", sizeof(array3));

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int array_org[5] = {1, 2, 3, 4, 5};
	int array_bak[5];
	int index;

	array_bak = array_org;

	if (array_bak == array_org)
	{
		printf("Copied\n");
	}

	return 0;
}*/


/*#include <stdio.h>
int foo(int x);

int main()
{
	int x, y;

	x = 2;

	y = foo(x);
	printf("y is %d\n", y);

	return 0;
}
int foo(int x)
{
	int ret = 0;

	ret = x + 1;

	return ret;
}*/


/*#include <stdio.h>

int add_numbers(int num1, int num2);
int main()
{
	int num1 = 10, num2 = 20;
	int sum = 0;

	sum = add_numbers(num1, num2);
	printf("Sum is %d\n", sum);

	return 0;
}

int add_numbers(int num1, int num2)
{
	int sum = 0;

	sum = num1 + num2;

	return sum;
}*/


/*#include <stdio.h>
int add_numbers(int num1, int num2);
int main()
{
	int num1 = 10, num2 = 20;
	int sum = 0;

	add_numbers(num1, num2);
	printf("Sum is %d\n", sum);

	return 0;
}

int add_numbers(int num1, int num2)
{
	int sum = 0;

	sum = num1 + num2;

	return sum;
}*/


/*#include <stdio.h>

void modify(int num1)
{
	num1 = num1 + 1;
}

int main()
{
	int num1 = 10;

	printf("Before Modification\n");
	printf("num1 is %d\n", num1);

	modify(num1);

	printf("After Modification\n");
	printf("num1 is %d\n", num1);

	return 0;
}*/


/*#include <stdio.h>

void modify(int *num1)
{
	*num1 = *num1 + 1;
}

int main()
{
	int num1 = 10;

	printf("Before Modification\n");
	printf("num1 is %d\n", num1);

	modify(&num1);

	printf("After Modification\n");
	printf("num1 is %d\n", num1);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	dummy(20);		

	return 0;
}

// minimum valid function //
dummy()
{

}*/


/*#include <stdio.h>

void print_array(int array[]);

int main()
{
	int array[5] = {10, 20, 30, 40, 50};

	print_array(array);

	return 0;
}

void print_array(int array[])
{
	int	iter;

	for (iter = 0; iter < 5; iter++)
	{
		printf("Index %d has Element %d\n", iter, array[iter]);
	}
}*/


/*#include <stdio.h>

void print_array(int *array);

int main()
{
	int array[5] = {10, 20, 30, 40, 50};

	print_array(array);

	return 0;
}

void print_array(int array*)
{
	int	iter;

	for (iter = 0; iter < 5; iter++)
	{
		printf("Index %d has Element %d\n", iter, *array);
		array++;
	}
}*/


/*#include <stdio.h>

void print_array(int *array, int size);

int main()
{
	int array[5] = {10, 20, 30, 40, 50};

	print_array(array);

	return 0;
}

void print_array(int array*, int size)
{
	int	iter;

	for (iter = 0; iter < size; iter++)
	{
		printf("Index %d has Element %d\n", iter, *array++);
	}
}*/


/*#include <stdio.h>

int *modify_array(int *array, int size);
void print_array(int array[], int size);

int main()
{
	int array[5] = {10, 20, 30, 40, 50};
	int *new_array_val;

	new_array_val = modify_array(array, 5);
	print_array(new_array_val, 5);

	return 0;
}

int *modify_array(int *array, int size)
{
	int	iter;

	for (iter = 0; iter < size; iter++)
	{
		*(array + iter) += 10;
	}

	return array;
}

void print_array(int array[], int size)
{
	int	iter;

	for (iter = 0; iter < size; iter++)
	{
		printf("Index %d has Element %d\n", iter, array[iter]);
	}
}*/


/*#include <stdio.h>

int *return_array(void);
void print_array(int *array, int size);

int main()
{
	int *array_val;

	array_val = return_array();
	print_array(array_val, 5);

	return 0;
}

int *return_array(void)
{
    int array[5] = {10, 20, 30, 40, 50};

	return array;
}

void print_array(int *array, int size)
{
	int	iter;

	for (iter = 0; iter < size; iter++)
	{
		printf("Index %d has Element %d\n", iter, array[iter]);
	}
}*/


/*#include <stdio.h>

int *func(void)
{
		int a = 10;

	return &a;
}

int main()
{
	int *ptr;

	ptr = func();

	printf("Hello World\n");

	printf("*ptr = %d\n", *ptr);

	return 0;
}*/


/*#include <stdio.h>

void func(void)
{
	printf("Welcome!\n");

	return; // Use of return is optional
}

int main()
{
	func();

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	printf("%s\n", func()); // Error, invalid use of a function returning void

	return 0;
}


void func(void)
{
	char buff[] = "Hello World";

	return buff; // some compilers might report error in this case
}*/


/*#include <stdio.h>

// Factorial of 3 numbers //

int factorial(int number)
{
	if (number <= 1) // Base Case //
	{
		return 1;
	}
	else // Recursive Case //
	{
		return number * factorial(number - 1);
	}
}

int main()
{
	int ret;

	ret = factorial(5);
	printf("Factorial of 3 is %d\n", ret);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int x;
	int *ptr;

	x = 5;
	ptr = 5;

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int x;
	int *ptr;

	x = 5;
	ptr = &x;

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int number = 10;
	int *ptr;

	ptr = &number;

	printf("Address of number is %p\n", &number);
	printf("ptr contains %p\n", ptr);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int number = 10;
	int *ptr;

	ptr = &number;

	printf("number contains %d\n", number);
	printf("*ptr contains %d\n", *ptr);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int number = 10;
	int *ptr;

	ptr = &number;
	*ptr = 100;
	printf("number contains %d\n", number);
	printf("*ptr contains %d\n", *ptr);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	if (sizeof(char *) == sizeof(long long *))
	{
		printf("Yes its Equal\n");
	}
#if 1

	printf("size of char * = %zu\n", sizeof (char *));
	printf("size of int * = %zu\n", sizeof (int *));
	printf("size of float * = %zu\n", sizeof (float *));
	printf("size of double * = %zu\n", sizeof (double *));
	printf("size of long int * = %zu\n", sizeof (long int *));
	printf("size of long long int * = %zu\n", sizeof (long long int *));
#endif
	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	int *ptr = array;

	printf("%d\n", *ptr);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	double x = 7.2;
	void *vptr = &x;

	printf("%hhx\n", *(char *)vptr);
	printf("%hhx\n", *(char *)(vptr + 7));
	printf("%hx\n", *(short *)(vptr + 3));
	printf("%x\n", *(int *)(vptr + 0));

	return 0;
}*/


/*#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch;

	for ( ; (ch = getchar()) != EOF; )
	{
			putchar(toupper(ch));
	}

	puts("EOF Received");

	return 0;
}*/


/*#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
int main()
{
	int ch;

#if 0
	for ( ; (ch = getc(stdin)) != EOF; )
	{
		putc(toupper(ch), stdout);
	}
#else
	while (1)
	{
		putc('A', stderr);
		sleep(1);
	}
#endif

	puts("EOF Received");

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	char str[10];

	puts("Enter the string");
	gets(str);
	puts(str);

	return 0;
}*/


/*#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[10];

	puts("Enter the string");
	fgets(str, 10, stdin);
	fputs(str, stdout);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	char a[8] = "Emertxe";
//	printf(a);
	
//	printf("%d\n", printf("Emertxe"));
	int x = 1234;

//	printf("%d\n", printf(" %d ", x));
//
//	printf("80%%\n");
	printf("80%c\n", '%');

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	printf("%c\n", 'A');
	printf("%d %i\n", 10, 10);
	printf("%o\n", 8);
	printf("%x %X %x\n", 0xA, 0xA, 10);
	printf("%u\n", 255);
	printf("%f %F\n", 2.0, 2.0);
	printf("%e %E\n", 1.2, 1.2);
	printf("%a %A\n", 123.4, 123.4);
	printf("%g %G\n", 1.21, 1.0);
	printf("%s\n", "Hello");

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	printf("%hX\n", 0xFFFFFFFF);
	printf("%lX\n", 0xFFFFFFFFl);
	printf("%llX\n", 0xFFFFFFFFFFFFFFFF);
	printf("%Lf\n", 1.23456789L);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	printf("%3d %3d\n", 1, 1);
	printf("%3d %3d\n", 10, 10);
	printf("%3d %3d\n", 100, 100);

	printf("%10s\n", "Hello");
	printf("%20s\n", "Hello");

	printf("%*d\n", 1, 1);
	printf("%*d\n", 2, 1);
	printf("%*d\n", 3, 1);

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	printf("%3.1d\n", 1);
	printf("%3.2d\n", 1);
	printf("%3.3d\n", 1);

	printf("%0.3f\n", 1.0);
	printf("%0.10f\n", 1.0);
	printf("%f\n", 1.0);
	printf("%g\n", 1.0);

	printf("%12.8s\n", "Hello World");

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	printf("%#x %#X %#x\n", 0xA, 0xA, 10);
	printf("%#o\n", 8);

	printf("%-3d %-3d\n", 1, 1);
	printf("%-3d %-3d\n", 10, 10);
	printf("%-3d %-3d\n", 100, 100);

	printf("% 3d\n", 100);
	printf("% 3d\n", -100);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	printf("Hello World\n");

	printf("Hello\rWorld\n");

	printf("Hello\tWorld\n");

	printf("Hello\bWorld\n");

	printf("Hello\vWorld\n");

	printf("Hello World\f");

	printf("Hello\eWorld\n");

	printf("A\\B\\C\n");

	printf("\"Hello World\"\n");

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num1 = 123;
	char ch = 'A';
	float num2 = 12.345;
	char string[] = "Hello World";

	printf("%d %c %f %s\n",num1 , ch, num2, string);
	printf("%+05d\n", num1);
	printf("%.2f %.5s\n", num2, string);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int ret;
	char string[] = "Hello World";

	ret = printf("%s\n", string);

	printf("The previous printf() printed %d chars\n", ret);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num1 = 123;
	char ch = 'A';
	float num2 = 12.345;
	char string1[] = "sprintf() Test";
	char string2[100];


	sprintf(string2, "%d %c %f %s\n",num1 , ch, num2, string1);
	
	printf("%s", string2);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num1;
	char ch;
	float num2;
	char string[10];

	scanf("%d %c %f %s", &num1 , &ch, &num2, string);
	printf("%d %c %f %s\n", num1 , ch, num2, string);

	return 0;
}*/


/*#include <stdio.h>

#if 0
int main()
{
	int hours;
	int mins;
	int secs;

	printf("Please enter Time as HH:MM:SS\n");

	scanf("%d%*c%d%*c%d", &hours, &mins, &secs);
	printf("%d:%d:%d\n", hours, mins, secs);

	return 0;
}
#endif
#if 1
int main()
{
    int sum = 0;
    int num1, num2, num3;

    printf("Enter the numbers to be added [Eg. 1 + 2 + 3]: ");
    scanf("%d%*c%d%*c%d", &num1, &num2, &num3); // Skips a char //

    sum = num1 + num2 + num3;
    printf("Sum = %d\n", sum);

    return 0;
}
#endif*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[10];
	char id[10];

//	scanf("%[a-z A-Z]", name);

//	printf("Name = %s\n", name);

	// Need to address an Issue here!!! //

	scanf("%[0-9]", id);
	printf("ID = %s\n", id);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num = 100, ret;

	printf("The enter a number [is 100 now]: ");
	ret = scanf("%d", &num);

	if (ret != 1)
	{
		printf("Invalid input. The number is still %d\n", num);
		return 1;
	}
	else
	{
		printf("Number is modified with %d\n", num);
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int age;
	char array_1[10];
	char array_2[10];
	char array_3[] = "I am 30 years";

	//sscanf(, "%s %s %d", array_1, array_2, &age);
	sscanf(array_3, "%s %s %d", array_1, array_2, &age);
	//sscanf("I am 30 years old", "%*s %*s %d", &age);
	printf("OK you are %d years old\n", age);
	printf("%s\n%s\n", array_1, array_2);
	return 0;
}*/


/*#include <stdio.h>

int main()
{
	printf("Hello");

	return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int main()
{
	while (1)
	{
		printf("Hello");
		fflush(stdout);

		sleep(1);
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num;

	while (1)
	{
		printf("Enter a number: ");
		scanf("%d", &num);
	}

	return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int main()
{
	while (1)
	{
		printf("Hello");
		fflush(stdout);
		sleep(1);
	}

	return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int main()
{
	char str[BUFSIZ] = "1";
	setbuf(stdout, NULL);
	while (1)
	{
		printf("%s", str);
		sleep(1);
	}

	return 0;
}*/


/*#include <stdio.h>
 #include <stdio_ext.h>

int main()
{
	char ch = 'y';

	printf("Enter a string: ");

	while (1)
	{
		scanf("%c", &ch);
		while (getchar() != '\n');
//		__fpurge(stdin);// NOT PORTABLE
		printf("%c", ch);
	}

	return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int main()
{
	while (1)
	{
		fprintf(stdout, "Hello");
		fprintf(stderr, "World");

		sleep(1);
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	char char_array[5] = {'H', 'E', 'L', 'L', 'O'};
	printf("%s\n", char_array);

	char str1[6] = {'H', 'E', 'L', 'L', 'O', '\0'};
	printf("%s\n", str1);

	char str2[] = {'H', 'E', 'L', 'L', 'O', '\0'};
	printf("%s\n", str2);

#if 1
	char str3[6] = {"H", "E", "L", "L", "O", "\0"};
	printf("%s\n", str3);
#endif

	char str4[6] = {"H" "E" "L" "L" "O" "\0"};
	printf("%s\n", str4);

	char str5[6] = {"Hello"};
	printf("%s\n", str5);

	char str6[6] = "Hello";
	printf("%s\n", str6);

	char str7[] = "Hello";
	printf("%s\n", str7);

	char *str8 = "Hello";
	printf("%s\n", str8);


	return 0;
}*/


/*#include <stdio.h>

int main()
{
	char char_array_1[5] = {'H', 'E', 'L', 'L', 'O'};
	char char_array_2[] = "Hello";

	printf("%zu\n", sizeof(char_array_1));
	printf("%zu\n", sizeof(char_array_2));

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	char *str = "Hello";

	printf("%zu\n", sizeof(str));

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	if (sizeof("Hello" "World") == sizeof("Hello") + sizeof("World"))
	{
		printf("WoW\n");
	}
	else
	{
		printf("HuH\n");
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
		char str1[6] = "Hello";
		char str2[6];

//		str2 = "World";

		char *str3 = "Hello";
		char *str4;

		str4 = "World";

		str1[0] = 'h';

//		str3[0] = 'w';

		printf("%s\n", str1);
		printf("%s\n", str4);	

		return 0;
}*/


/*#include <stdio.h>

int main()
{
	char *str1 = "Hello";
	char *str2 = "Hello";
	
	if (str1 == str2)
	{
		printf("Hoo. They share same space\n");
	}
	else
	{
		printf("No. They are in different space\n");
	}

	return 0;
}*/


/*#include <stdio.h>
#include <string.h>

int main()
{
	char *str = "";
	int ret;

	ret = strlen(str);
	printf("%d\n", ret);

	return 0;
}*/


/*#include <stdio.h>

void print(const char *str)
{
	while (*str)
	{
		putchar(*str++);
		
	}
}

int main()
{
	char *str = "Hello World";

	print(str);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	char str[6];

	// Not recommended //
	gets(str);
	printf("The string is: %s\n", str);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	char str[6];

//	fgets(str, 6, stdin);
//	printf("The string is: %s\n", str);
//	getchar();
	scanf("%5[^\n]", str);
	printf("The string is: %s\n", str);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	auto int i = 0;

	printf("i %d\n", i);

	return 0;
}*/


/*#include <stdio.h>

int foo()
{
		int i = 0;

		printf("i %d\n", i);

		return i;
}

int main()
{
		foo();

		return 0;
}*/


/*#include <stdio.h>

int *foo()
{
	int i = 10;
	int *j = &i;

	return j;
}

int main()
{
	int *i;

	i = foo();

	printf("hi\n");
	
	printf("*i %d\n", *i);

	return 0;
}*/


/*#include <stdio.h>

char *foo()
{
	char ca[12] = "Hello World";

	return ca;
}

int main()
{
	char *ca;

	ca = foo();
	printf("ca is %s\n", ca);

	return 0;
}*/


/*#include <stdio.h>

int book_ticket()
{
	int ticket_sold = 0;

	ticket_sold++;

	return ticket_sold;
}

int main()
{
	int count;

	count = book_ticket();
	count = book_ticket();

	printf("Sold %d\n", count);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int i = 0;

	{
		int j = 0;

		printf("i %d\n", i);
	}

	printf("j %d\n", j);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int j = 10;

	{
		int j = 0;

		printf("j %d\n", j);
	}

	printf("j %d\n", j);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
		int i = 10;
		int i = 20;

		{
				printf("i %d\n", i);
		}

		printf("i %d\n", i);

		return 0;
}*/


/*#include <stdio.h>

int main()
{
	register int i = 0;

	scanf("%d", &i);
	printf("i %d\n", i);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	register int i = 10;
	register int *j = &i;

	printf("*j %d\n", *j);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int i = 10;
	register int *j = &i;

	printf("*j %d\n", *j);

	return 0;
}*/


/*#include <stdio.h>

int *foo()
{
	static int i = 10;
	int *j = &i;

	return j;
}

int main()
{
	int *i;

	i = foo();
	printf("*i %d\n", *i);

	return 0;
}*/


/*#include <stdio.h>

char *foo()
{
	static char ca[12] = "Hello World";

	return ca;
}

int main()
{
	char *ca;

	ca = foo();
	printf("ca is %s\n", ca);

	return 0;
}*/


/*#include <stdio.h>

int book_ticket()
{
		static	int ticket_sold = 0;

		ticket_sold++;

		return ticket_sold;
}

int main()
{
		int count;

		count = book_ticket();
		count = book_ticket();

		printf("Sold %d\n", count);

		return 0;
}*/


/*#include <stdio.h>

int main()
{
		static int i = 5;

		if (--i)
		{
				main();
		}

		printf("i %d\n", i);

		return 0;
}*/


/*#include <stdio.h>

int main()
{
	static int i = 5;

	if (--i)
	{
		return main();
	}

	printf("i %d\n", i);

	return 0;
}*/


/*#include <stdio.h>

int foo()
{
	static int i;

	return i;
}

int main()
{
	static int x = foo();
	printf("x %d\n", x);

	return 0;
}*/


/*#include <stdio.h>

int *foo()
{
	static int i = 10;
	int *j = &i;

	return j;
}

int main()
{
	int *i;

	i = foo();
	printf("*i %d\n", *i);

	return 0;
}*/


/*#include <stdio.h>

int *foo()
{
	int i = 10;
	static int *j = &i ;
	return j;
}

int main()
{
	int *i;

	i = foo();
	printf("*i %d\n", *i);

	return 0;
}*/


/*#include <stdio.h>

int x;

int foo()
{
	printf("x %d\n", x);

	return ++x;
}

int main()
{
	foo();

	printf("x %d\n", x);

	return 0;
}*/


/*#include <stdio.h>

auto int x;

int foo()
{
	printf("x %d\n", x);

	return ++x;
}

int main()
{
	foo();

	printf("x %d\n", x);

	return 0;
}*/


/*#include <stdio.h>

register int x;

int foo()
{
	printf("x %d\n", x);

	return ++x;
}

int main()
{
	foo();

	printf("x %d\n", x);

	return 0;
}*/


/*#include <stdio.h>

int x = 10;

int foo()
{
	printf("x %d\n", x);

	return 0;
}

int main()
{
	foo();

	return 0;
}*/


/*#include <stdio.h>

int x = 10;
int x;

int foo()
{
	printf("x %d\n", x);

	return 0;
}

int main()
{
	foo();

	return 0;
}*/


/*#include <stdio.h>

int x = 10;
int x = 20;


int foo()
{
	printf("x %d\n", x);

	return 0;
}

int main()
{
		foo();

	return 0;
}*/


/*#include <stdio.h>

static int x = 10;

int foo()
{
	printf("x %d\n", x);

	return 0;
}

int main()
{
	foo();

	return 0;
}*/


/*#include <stdio.h>

static int x = 10;
int x ;

int foo()
{
	printf("x %d\n", x);

	return 0;
}

int main()
{
	foo();

	return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int num;

int main()
{
	while (1)
	{
		num++;
		func_1();
		sleep(1);
		func_2();
		sleep(1);
	}

	return 0;
}*/


/*#include <stdio.h>

extern int num;
int func_1()
{
	printf("num is %d from file2\n", num);

	return 0;
}*/


/*#include <stdio.h>

extern int num;

int func_2()
{
	printf("num is %d from file3\n", num);

	return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int num;

int main()
{
	while (1)
	{
		num++;
		func_1();
		sleep(1);
	}

	return 0;
}*/


/*#include <stdio.h>

extern int num;
extern int num;

int func_1()
{
	printf("num is %d from file2\n", num);

	return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int num;

int main()
{
	while (1)
	{
		num++;
//		printf("num is %d from main\n", num);
		func_1();
		sleep(1);
	}

	return 0;
}*/


/*#include <stdio.h>

static int num;
extern int num;

int func_1()
{
	printf("num is %d from file2\n", num);

	return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int num;

int main()
{
	while (1)
	{
		num++;
		func_1();
//		sleep(1);
		printf(" main %d\n", num);
	}

	return 0;
}*/


/*#include <stdio.h>

extern char num;

int func_1()
{
	printf("num is %d from file2\n", num);

	return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int num;

int main()
{
	while (1)
	{
		num++;
		func_1();
		sleep(1);
	}

	return 0;
}*/


/*#include <stdio.h>

extern int num;
extern char num;

int func_1()
{
	printf("num is %d from file2\n", num);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int x;

	{
		int x = 10;
		{
			extern int x;
			printf("x %d\n", x);
		}
		printf("x %d\n", x);
	}
	printf("x %d\n", x);

	return 0;
}

int x = 20;*/


/*#include <stdio.h>

int x = 0x31;
int main()
{
	extern char x;

	printf("x %c\n", x);

	return 0;
}

//int x = 0x31;*/


/*#include <stdio.h>

int main()
{
		int x;

		{
				int x = 10;
				{
						extern int x = 20;
						printf("x %d\n", x);
				}
				printf("x %d\n", x);
		}
		printf("x %d\n", x);

		return 0;
}

int x;*/


/*#include <stdio.h>

int num;

int main()
{
	while (1)
	{
		num++;
		func_1();
		sleep(1);
	}

	return 0;
}*/


/*#include <stdio.h>

extern int num = 10;

static int func_2()
{
	printf("num is %d from file2\n", num);

	return 0;
}

int func_1()
{
	func_2();
}*/


/*#include <stdio.h>

int num;

int main()
{
	while (1)
	{
		num++;
		func_2();
	}

	return 0;
}*/


/*#include <stdio.h>

extern int num;

static int func_2()
{
	printf("num is %d from file2\n", num);

	return 0;
}

int func_1()
{
	func_2();
}*/


/*#include <stdio.h>

int main()
{
	int num = 10;
	int *ptr1 = &num;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;

	printf("%d", ptr3);
	printf("%d", *ptr3);
	printf("%d", **ptr3);
	printf("%d", ***ptr3);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int a[5] = {1, 2, 3, 4, 5};

	printf("%u\n", a);
	printf("%u\n", &a[0]);
	printf("%u\n", &a);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int a[5] = {1, 2, 3, 4, 5};

	printf("before increment %u\n", a );
	
	printf("%u\n", a + 1);
	printf("%u\n", &a[0] + 1);
	printf("%u\n", &a + 1);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int *ptr[3];

	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int a[2] = {10, 20};
	int b[2] = {30, 40};
	int c[2] = {50, 60};

	int *ptr[3];

	ptr[0] = a;
	ptr[1] = b;
	ptr[2] = c;

	return 0;
}*/


/*#include <stdio.h>

#if 0
void print_array(int **p)
{
	int i;

	for (i = 0; i < 3; i++)
	{   
		printf("%d ", *p[i]);
		printf("at %p\n", p[i]);
	}   
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int *ptr[3] = {&a, &b, &c};

	print_array(ptr);			

	return 0;
}
#else
void print_array(int **p)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{   
	    for (j = 0; j < 2; j++)
	    {
		printf("%d ", p[i][j]);
		printf("at %p\n", &p[i][j]);
	    }   
	}
}

int main()
{
    int a[2] = {10, 11};
    int b[2] = {20, 21};
    int c[2] = {30, 31};
    int *ptr[3] = {a, b, c};

    print_array(ptr);			

    return 0;
}
#endif*/


/*#include <stdio.h>

int main()
{
	char s[3][8] = {
		"Array",
		"of",
		"Strings"
	}

	printf(â€œ%s %s %s\nâ€, s[0], s[1], s[2]);

	for (i = 0; i < 3; i++)
	{
	    for (j = 0; s[i][j] != '\0'; j++)
	    {
		printf("%c", s[i][j]);
	    }
	    printf(" ");
	}
	printf("\n");

	return 0;
}*/


/*#include <stdio.h>

void prirt_menu(char **menu)
{
    int i;

    for (i = 0; menu[i] != NULL; i++)
    {
	printf("%d. %s", i + 1, menu[i]);
    }

    int option;

    printf("Select your option: ");
    scanf("%d", &option);
    // Need to error handling //
    printf("You have selected %s Menu\n", menu[option - 1]);
}

int main()
{
	char *s[] = {"File", "Edit", "View", "Insert", "Help", NULL};

	prirt_array(s);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int array[3] = {1, 2, 3};
	int *ptr;

	ptr = array;

	printf("%d\n", *ptr); 

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int array[3] = {1, 2, 3};
	int (*ptr)[3];

	ptr = array;

	printf("%d\n", **ptr); 

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int array[3] = {1, 2, 3};
	int (*ptr)[3];

	ptr = &array;

	printf("%d\n", **ptr); 

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int array[3] = {1, 2, 3};
	int *p1;
	int (*p2)[3];

	p1 = array;
	p2 = &array;

	printf("%p %p\n", p1 + 0, p2 + 0);
	printf("%p %p\n", p1 + 1, p2 + 1);
	printf("%p %p\n", p1 + 2, p2 + 2);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
    int (*p)[3];

    p = malloc(sizeof(*p) * 3);

    int i, j;

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    p[i][j] = (3 * i) + j + 10;
	}
    }

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    printf("%d ", p[i][j]);
	}
    }
    puts("");

    (*(p + 0))[0] = 1;
    (*(p + 1))[1] = 2;
    (*(p + 2))[2] = 3;

    printf("%u\n", &(*(p + 0))[0]);
    printf("%u\n", ((p + 0))[0]);
    printf("%u\n", &(*(p + 1))[1]);
    printf("%u\n", ((p + 1))[1]);
    printf("%u\n", &(*(p + 2))[2]);
    printf("%u\n", ((p + 2))[2]);

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 3; j++)
	{
	    printf("%2d ", p[i][j]);
	}
    }
    puts("");

    p = 1000;

    printf("%u\n", &(*(p + 0))[0]);
    printf("%u\n", ((p + 0)));
    printf("%u\n", &(*(p + 1))[1]);
    printf("%u\n", ((p + 1))[1]);
    printf("%u\n", &(*(p + 2))[1]);
    printf("%u\n", ((p + 2))[2]);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
	int (*p)[3];
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	p = a;

	return 0;
}*/


/*#include <stdio.h>

void print_array(int p[2][3])
{
	int i, j;

	for (i = 0; i < 2; i++)
	{   
		for (j = 0; j < 3; j++)
		{
			printf("%d\n", p[i][j]);
		}
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(a);

	return 0;
}*/


/*#include <stdio.h>

void print_array(int (*p)[3])
{
	int i, j;

	for (i = 0; i < 2; i++)
	{   
		for (j = 0; j < 3; j++)
		{
			printf("%d\n", p[i][j]);
		}
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(a);

	return 0;
}*/


/*#include <stdio.h>

void print_array( int row, int col, int (*p)[col])
{
	int i, j;

	for (i = 0; i < row; i++)
	{   
		for (j = 0; j < col; j++)
		{
			printf("%d\n", p[i][j]);
		}
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(2, 3, a);
	//print_array(a, 2, 3);

	return 0;
}*/


/*#include <stdio.h>

void print_array(int row, int col, int *p)
{
	int i, j;

	for (i = 0; i < row; i++)
	{   
		for (j = 0; j < col; j++)
		{
			printf("%d\n", *((p + i * col) + j));
		}
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(2, 3, (int *) a);

	return 0;
}*/


/*#include <stdio.h>

void print_array(int row, int col, int *p)
{
	int i, j;

	for (i = 0; i < row * col; i++)
	{   
			printf("%d\n", *p++);
	}   
}

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print_array(2, 3, (int *) a);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a[2];

	for ( i = 0; i < 2; i++)
	{
		a[i] = malloc(3 * sizeof(int));
	}

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	int (*a)[3];

	a = malloc(2 * sizeof(int [3]));

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **a;
	int i;

	a = malloc(2 * sizeof(int *));

	for (i = 0; i < 2; i++)
	{
		a[i] = malloc(3 * sizeof(int));
	}

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
		int i;

		printf("No of argument(s): %d\n", argc);

		printf("List of argument(s):\n");
		for (i = 0; i < argc; i++)
		{   
				printf("\t%d - \"%s\"\n", i + 1, argv[i]);
		}   

		return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
		int i = 0;

		printf("No of argument(s): %d\n", argc);

		printf("List of argument(s):\n");
#if 0
		for (i = 0; argv[i]; i++)
		{   
				printf("\t%d - \"%s\"\n", i + 1, argv[i]);
		}   
#else
		while (argv[i])
		{
				printf("\t%d - \"%s\"\n", i + 1, argv[i]);
				i++;
		}
#endif
		return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char *envp[])
{
		int i = 0;


		printf("List of Environment variables(s):\n");
		
		while (envp[i])
		{
				printf("\t%d - \"%s\"\n", i + 1, envp[i]);
				i++;
		}
		
		return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char *envp[])
{
		char *p;
#if 0
		p = getenv("a");

		printf("%s\n", p);
#else
		//printf("%s\n", getenv("a"));
		puts(getenv("arr"));
#endif
		return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char *envp[])
{
		char *p;
		
		setenv("Arr", "24 20 9 27 5 6", 0);
		printf("%s\n", getenv("Arr"));
		return 0;
}*/


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


/*#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int *fptr;

	fptr = add;

	printf("%p\n", add);
	printf("%p\n", fptr);
	printf("%p\n", &fptr);

	return 0;
}*/


/*#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int (*fptr)(int, int);

	fptr = add;

	printf("%p\n", add);
	printf("%p\n", fptr);
	printf("%p\n", &fptr);

	return 0;
}*/


/*#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int (*fptr)(int, int);

	fptr = add;

	printf("%d\n", fptr(11, 10));
	printf("%d\n", (*fptr)(7, 6));

	return 0;
}*/


/*#include <stdio.h>
int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int oper(int (*f)(int, int), int a, int b)
{
	return f(a, b);
}
int main()
{
	int (*fptr)(int, int);

	fptr = add;
	printf("%d\n", oper(fptr, 2, 4));

	fptr = sub;
	printf("%d\n", oper(fptr, 2, 4));

	return 0;
}*/


/*#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int main()
{
	int (*f[])(int, int) = {add, sub};

	printf("%d\n", f[0](2, 4));
	printf("%d\n", f[1](2, 4));

	return 0;
}*/


/*#include <stdio.h>

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int oper(int (*f)(int, int), int a, int b)
{
	return f(a, b);
}

int main()
{
	int (*f[])(int, int) = {add, sub};

	printf("%d\n", oper(f[0], 2, 4));
	printf("%d\n", oper(f[1], 2, 4));

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

static int *ptr;
void my_exit(void)
{
	printf("Exiting program\n");

	if (ptr)
	{
		// Deallocation in my_exit //
		free(ptr);
	}
}

void test(void)
{
	puts("In test");

//	exit(0);
}
int main()
{
	//	
	 //Registering a callback 
	 // Function
	 //
	atexit(my_exit);

	// Allocation in main //
	ptr = malloc(100);

	test();

	printf("Hello\n");

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
int sa(const void *a, const void *b) 
{
	return *(int *) a > *(int *) b;
}

int sd(const void *a, const void *b) 
{
	return *(int *) a < *(int *) b;
}

void print(int *a, unsigned int size)
{
	int i = 0;

	for (i = 0; i < size; i++)
	{   
		printf("%d ", a[i]);
	}   
	printf("\n");
}
int main()
{
	int a[5] = {9, 2, 6, 1, 7};

	qsort(a, 5, sizeof(int), sa);
	printf("Ascending: ");
	print(a, 5);

	qsort(a, 5, sizeof(int), sd);
	printf("Descending: ");
	print(a, 5);

	return 0;
}*/


/*#include <stdio.h>
#include <stdarg.h>

int add(int count, ...);
int main()
{
	int ret;

	ret = add(3, 2, 4, 4);
	printf("Sum is %d\n", ret);

	ret = add(5, 3, 3, 4, 5, 10);
	printf("Sum is %d\n", ret);

	return 0;
}

int add(int count, ...)
{
	va_list ap;
	int iter, sum;

	// Initilize the arg list //
	va_start(ap, count);

	sum = 0;
	for (iter = 0; iter < count; iter++)
	{
		// Extract args //
		sum += va_arg(ap, int);
	}

	// Cleanup //
	va_end(ap);

	return sum;
}*/


/*int num;

#include <003_file2.h>

int main()
{
	puts(test());

	return 0;
}*/


/*char *test(void)
{
	static char *str = "Hello";

	return str;
}*/


/*char *test(void);*/


/*#include <stdio.h>
int sum(int, int);
int main()

{
		//PRINT Message
    printf("Hello\n");
    int x;
    x = sum(1,2);

	return 0;

}
int sum(int a, int y)
{
		return a + y;
}*/


/*# 1 "test.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "test.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 38 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/libio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 22 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4




typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 36 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 149 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;




typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 337 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 389 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 433 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 462 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 42 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 57 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 71 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef _G_fpos_t fpos_t;
# 131 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 132 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) ;
# 173 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 190 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 213 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 232 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 265 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 278 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 365 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 420 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 443 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 495 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 506 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 517 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 868 "/usr/include/stdio.h" 3 4

# 2 "test.c" 2

# 2 "test.c"
int sum(int, int);
int main()

{

    printf("Hello\n");
    int x;
    x = sum(1,2);

 return 0;

}
int sum(int a, int y)
{
  return a + y;
}*/


/*	.file	"test.c"
	.text
	.section	.rodata
.LC0:
	.string	"Hello"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$2, %esi
	movl	$1, %edi
	call	sum
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	sum
	.type	sum, @function
sum:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	sum, .-sum
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits*/


/*#define SIZE	1024
#define MSG		"Enter a string"

int main()
{
	char array[SIZE];

	printf("%s\n", MSG);
	fgets(array, SIZE, stdin);

	printf("%s\n", array);

	return 0;
}*/


/*# 1 "004_example.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "004_example.c"



int main()
{
 char array[1024];

 printf("%s\n", "Enter a string");
 fgets(array, 1024, stdin);

 printf("%s\n", array);

 return 0;
}*/


/*#include <stdio.h>

int main()
{
	printf("Program: \"%s\" ", __FILE__);
	printf("was compiled on %s at %s. ", __DATE__, __TIME__);
	printf("This print is from Function: \"%s\"", __func__);

	printf("at line %d\n",  __LINE__);
	return 0;
}*/


/*#include <stdio.h>

#define SET_BIT(num, pos)		num | (1 << pos)

int main()
{
	printf("%d\n", 2 * SET_BIT(0, 2));

	return 0;
}*/


/*#include <stdio.h>

#define SET_BIT(num, pos)		(num | (1 << pos))

int main()
{
	printf("%d\n", 2 * SET_BIT(0, 2));

	return 0;
}*/


/*#include <stdio.h>

#define SWAP(a, b)				\
	int temp = a;				\
	a = b;						\
	b = temp;					\

int main()
{
	int n1 = 10, n2= 20;

	SWAP(n1, n2);
	printf("%d %d\n", n1, n2);

	SWAP(n1, n2);
	printf("%d %d\n", n1, n2);

	return 0;
}*/


/*#include <stdio.h>

#define SWAP(a, b)				\
{								\
	int temp = a;				\
	a = b;						\
	b = temp;					\
}

int main()
{
	int n1 = 10, n2= 20;

	SWAP(n1, n2);
	printf("%d %d\n", n1, n2);

	SWAP(n1, n2);
	printf("%d %d\n", n1, n2);

	return 0;
}*/


/*#include <stdio.h>

#define WARN_IF(EXP)								\
do													\
{													\
	x--;											\
	if (EXP)										\
	{												\
		fprintf(stderr, "Warning: " #EXP "\n");		\
	}												\
} while (x);

int main()
{
	int x = 5;

	WARN_IF(x == 0);

	return 0;
}*/


/*# 1 "010_example.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "010_example.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 38 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/libio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 22 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4




typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 36 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 149 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;




typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 337 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 389 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 433 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 462 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 42 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 57 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 71 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef _G_fpos_t fpos_t;
# 131 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 132 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) ;
# 173 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 190 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 213 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 232 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 265 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 278 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 365 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 420 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 443 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 495 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 506 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 517 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 868 "/usr/include/stdio.h" 3 4

# 2 "010_example.c" 2
# 13 "010_example.c"

# 13 "010_example.c"
int main()
{
 int x = 5;

 do { x--; if (x == 0) { fprintf(
# 17 "010_example.c" 3 4
stderr
# 17 "010_example.c"
, "Warning: " "x == 0" "\n"); } } while (x);;

 return 0;
}*/


/*#include <stdio.h>
#define PRINT(x)   x##_val
int main()
{
		int int1_val = 100;
		float float1_val = 20.5;

		printf("num = %d\n", PRINT(int1));
		printf("num2 = %f\n", PRINT(float1));
		return 0;
}*/


/*#include <stdio.h>

#define WARN_IF(EXP)								\
		printf("%s\n", #EXP)

int main()
{
	int x = 5;

	WARN_IF(x);

	return 0;
}*/


/*#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
int main()
{
		return 0;
}*/


/*#ifndef STRUCT
#define STRUCT
struct student
{
		int x;
		char y;
		float z;
};
#endif*/


/*#include "012_example.h"
#include "012_example.h"

int main()
{
    struct UserInfo p = {420, "Tingu"};

    return 0;
}*/


/*struct UserInfo
{
        int id; 
	    char name[30];
};*/


/*#include "014_example.h"
#include "014_example.h"

int main()
{
    struct UserInfo p = {420, "Tingu"};

    return 0;
}*/


/*#ifndef EXAMPLE_013_H
#define EXAMPLE_013_H

struct UserInfo
{
        int id; 
	    char name[30];
};

#endif*/


/*#include "016_example.h"
#include "016_example.h"

int main()
{
    struct UserInfo p = {420, "Tingu"};

    return 0;
}*/


/*#pragma once

struct UserInfo
{
        int id; 
	    char name[30];
};*/


/*#include <stdio.h>
#define HELLO1
int main()

{
#ifdef HELLO
		printf("HELLO\n");
#endif
		printf("WORLD\n");
		return 0;
}*/


/*#include <stdio.h>

#define METHOD2

int main()
{
#ifdef METHOD1
	puts("Hello World");
#else
	printf("Hello World");
#endif

	return 0;
}*/


/*#include <stdio.h>

#define METHOD1

int main()
{
#ifndef METHOD1
	puts("Hello World");
#else
	printf("Hello World");
#endif

	return 0;
}*/


/*#include <stdio.h>

#define METHOD2
#define METHOD1

int main()
{
#if defined (METHOD1)
	puts("Hello World");
#endif
#if defined (METHOD2)
	printf("Hello World");
#endif
#if defined (METHOD1) && defined (METHOD2)
	puts("Hello World");
	printf("Hello World");
#endif

	return 0;
}*/


/*#include <stdio.h>

#define METHOD	3

int main()
{
#if METHOD == 1
	puts("Hello World");
#endif
#if METHOD == 2
	printf("Hello World");
#endif

	return 0;
}*/


/*#include <stdio.h>

#define METHOD 1

int main()
{
#if METHOD == 1
	puts("Hello World");
#else
	printf("Hello World");
#endif

	return 0;
}*/


/*#include <stdio.h>

#define METHOD	3

int main()
{
	char msg[] = "Hello World";

#if METHOD == 1
	puts(msg);
#elif METHOD == 2
	printf("%s\n", msg);
#else
	int i;
	for (i = 0; i < 12; i++)
	{
		putchar(msg[i]);
	}
#endif

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int x = 10, y = 20;

#ifdef SPACE_OPTIMIZED
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("Selected Space Optimization\n");
#else
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("Selected Time Optimization\n");
#endif

	return 0;
}*/


/*#if 0

// Deleted code while compiling //
// Can be used for nested code comments //
// Avoid for general comments //
// Don't write lines like these!! with // 

#endif*/


/*#include <stdio.h>

#define METHOD1 10

int main()
{
		if (METHOD1 == 10)
				puts("Hello World");
		else
				printf("Hello World");

		return 0;
}*/


/*#include <stdio.h>
#define DEBUG_PRINT
#if defined DEBUG_PRINT

#error "Debug print enabled"

#endif

int main()
{
	int sum, num1, num2;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);

#ifdef DEBUG_PRINT
	printf("The entered values are %d %d\n", num1, num2);
#endif

	sum = num1 + num2;
	printf("The sum is %d\n", sum);

	return 0;
}*/


/*#include <stdio.h>

#if defined (STATIC) || defined (DYNAMIC)
#define SIZE	100
#else
#error "Memory not allocated!! Use -D STATIC or DYNAMIC while compiling"
#endif

int main()
{
#if defined STATIC
		char buffer[SIZE];
#elif defined DYNAMIC
		char *buffer = malloc(SIZE * sizeof(char));
#endif

#if defined (STATIC) || defined (DYNAMIC)
		fgets(buffer, SIZE, stdin);
		printf("%s\n", buffer);
#endif

		return 0;
}*/


/*#include <stdio.h>

int main()
{
#line 25 "my_example.c"	
		printf("This is from file %s at line %d \n", __FILE__, __LINE__);

	return 0;
}*/


/*struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1;

	return 0;
}*/


/*#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1;

	printf("%zu\n", sizeof(struct Student));
	printf("%zu\n", sizeof(s1));

	return 0;
}*/


/*#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1;

	s1.id = 10;
	strcpy(s1.name, "vikas");
	strcpy(s1.address, "bnglore");
	printf("%d  %s  %s\n", s1.id, s1.name, s1. address);
	//printf("%d\n", s1);
	return 0;
}*/


/*#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1 = {10, "Tingu", "Bangalore"};

	return 0;
}*/


/*#include <stdio.h>
struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1 = {10, "Tingu", "Bangalore"};
	struct Student s2;

	s2 = s1;
	
	printf("%d\n", s2.id);
	printf("%s\n", s2.name);
	printf("%s\n", s2.address);
	
	return 0;
}*/


/*#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

int main()
{
	struct Student s1 = {10, "Tingu", "Bangalore"};

	printf("Struture starts at %u\n", &s1);
	printf("Member id is at %u\n", &s1.id);
	printf("Member name is at %u\n", s1.name);
	printf("Member address is at %u\n", s1.address);

	return 0;
}*/


/*#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

static struct Student s1;

int main()
{
	struct Student *sptr = &s1;

	return 0;
}*/


/*#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

static struct Student s1;

int main()
{
	struct Student *sptr = &s1;

	(*sptr).id = 10;

	return 0;
}*/


/*#include <stdio.h>

struct Student
{
	int id;
	char name[20];
	char address[60];
};

static struct Student s1;

int main()
{
	struct Student *sptr = &s1;

	sptr->id = 10;

	return 0;
}*/


/*#include <stdio.h>

struct Student
{
	int id;
	char name[30];
	char address[150];
};

void data(struct Student s)
{
	s.id = 10;
}

int main()
{
	struct Student s1;

	data(s1);
	printf("%d\n", s1.id);
	return 0;
}*/


/*#include <stdio.h>

struct Student
{
	int id;
	char name[30];
	char address[150];
};

void data(struct Student *s)
{
	s->id = 10;
}

int main()
{
	struct Student s1;

	data(&s1);

	printf("%d\n", s1.id);
	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

struct Student
{	
	int id;
	char *name;
	char *address;
};

struct Student data(void)
{
	struct Student s;
	s.name = (char *) malloc(30 * sizeof(char));
	s.address = (char *) malloc(150 * sizeof(char));

	return s;
}

int main()
{
	struct Student s1;

	
	s1 = data();

	strcpy(s1.name, "VIKAS");
	
	printf("%s\n", s1.name);
	
	free(s1.name);	
	free(s1.address);	
	
	return 0;
}*/


/*#include <stdio.h>

struct Student
{	
	int id;
	char name[30];
	char address[50];
};

int main()
{
	struct Student s[5];
	int i;
	printf("%d\n", sizeof(s));
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &s[i].id);
	}

	for (i = 0; i < 5; i++)
	{
		printf("s[%d].id is %d\n", i, s[i].id);
	}

	return 0;
}*/


/*#include <stdio.h>

struct College
{	
	struct Student
	{	
		int id;
		char name[20];
		char address[60];
	} student;

	struct
	{	
		int id;
		char name[20];
		char address[60];
	} faculty;
};

int main()
{
	struct College member;
	struct faculty member1;

	member.student.id = 10;
	member.faculty.id = 20;

	printf("%d\n", member.student.id);
	printf("%d\n", member.faculty.id);

	return 0;
}*/


/*static struct Student 
{
	int id;
 	char name[20];
	char address[60];
};

int main()
{
	struct Student s1;

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

struct Student
{	
	int id;
	char name;
	float f;
};

struct Student data(void)
{
		
	struct Student s = {10, 'A', 5.5};

	return s;
}

int main()
{
	struct Student s1;

	
	s1 = data();

	printf("%d %c %f\n", s1.id, s1.name, s1.f);

	
	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

struct Student
{	
	int id;
	char name[30];
	char address[150];
};

struct Student data(void)
{
	struct Student s = {10, "vikas", "Banglore"};;

	return s;
}

int main()
{
	struct Student s1;

	s1 = data();
	printf("%d\n", s1.id);
	printf("%s\n", s1.name);
	printf("%s\n", s1.address);

	return 0;
}*/


/*#include <stdio.h>
struct test
{
		int x;
		int y;
};

int main()
{
		struct test s1;

		printf("%zu \n", sizeof(s1));
		printf("%zu \n", sizeof(struct test));

		return 0;
}*/


/*#include <stdio.h>

struct Student
{
	char ch1;
	char ch2;
	double num;
};

int main()
{
	struct Student s1;

	printf("%zu\n", sizeof(struct Student));

	return 0;
}*/


/*#include <stdio.h>

#pragma pack(8)

struct Student
{
	char ch1;
	int num;
	char ch2;
};

int main()
{
	struct Student s1;

	printf("%zu\n", sizeof(struct Student));

	return 0;
}*/


/*#include <stdio.h>

struct Student
{
	char ch1;
	char ch2;
	double d;
	int i;
};

int main()
{
	struct Student s1;

	printf("%zu\n", sizeof(struct Student));

	return 0;
}*/


/*#include <stdio.h>

union Nibble
{
	unsigned char lower	: 4;
	unsigned char upper	: 4;
};

int main()
{
	union Nibble nibble;

	nibble.upper = 0x0A;
	nibble.lower = 0x02;

	return 0;
}*/


/*#include <stdio.h>

struct Nibble
{
	unsigned char lower	: 4;
	unsigned char upper	: 4;
};

int main()
{
	struct Nibble nibble;

	printf("%zu\n", sizeof(nibble));

	return 0;
}*/


/*#include <stdio.h>

struct Nibble
{
	unsigned lower	: 4;

	unsigned upper	: 4;
};

int main()
{
	struct Nibble nibble;

	printf("%zu\n", sizeof(nibble));

	return 0;
}*/


/*#include <stdio.h>

struct Nibble
{
	char lower	: 4;
	char upper	: 4;
};

int main()
{
	struct Nibble nibble;

	nibble.upper = 0x0A;
	nibble.lower = 0x02;

	printf("%d\n", nibble.upper);
	printf("%d\n", nibble.lower);

	return 0;
}*/


/*#include <stdio.h>

struct Nibble
{
	char lower	: 4;
	char upper	: 4;
};

int main()
{
	struct Nibble nibble = {0x02, 0x0A};

	printf("%#o\n", nibble.upper);
	printf("%#x\n", nibble.lower);

	return 0;
}*/


/*#include <stdio.h>

union Test
{
	char option;
	int id; 
	double height;
};

int main()
{
	union Test temp_var;

	temp_var.height = 7.2;
	printf("%lf\n", temp_var.height);

	temp_var.id = 0x1234;
	printf("%lf\n", temp_var.height);
	printf("%x\n", temp_var.id);
	
	temp_var.option = '1';
	printf("%lf\n", temp_var.height);
	printf("%x\n", temp_var.id);

	return 0;
}*/


/*#include <stdio.h>

union FloatBits
{
    float degree;
    struct
    {
	unsigned m : 23;
	unsigned e : 8;
	unsigned s : 1;
    } elements;
};

int main()
{
    union FloatBits fb = {3.2};

    printf("Sign: %X\n", fb.elements.s);
    printf("Exponent: %X\n", fb.elements.e);
    printf("Mantissa: %X\n", fb.elements.m);

    printf("%f\n", fb.degree);

    return 0;
}*/


/*#include <stdio.h>

union Endian
{
		unsigned int value;
		unsigned char byte[4];
};
int main()
{
		union Endian e = {0x12345678};
		e.byte[0] == 0x78 ? printf("Little\n") : printf("Big\n");
}*/


/*#include <stdio.h>

union Endian
{
		unsigned int value;
		unsigned char byte[40];
};
int main()
{
		union Endian e;
		printf("size of union = %zu\n", sizeof(e));
		return 0;
}*/


/*#include <stdio.h>

typedef unsigned int uint;

int main()
{
	uint number;

	return 0;
}*/


/*#include <stdio.h>

typedef int * int_ptr;
typedef float * float_ptr;

int main()
{
	int_ptr ptr1, ptr2, ptr3;
	float_ptr fptr;

	return 0;
}*/


/*#include <stdio.h>

typedef int array_of_100[100];

int main()
{
	array_of_100 array;

	printf("%zu\n", sizeof(array));

	array[0] = 12;

	printf("%d\n", array[0]);

	return 0;
}*/


/*#include <stdio.h>

typedef struct _Student
{
	int id;
	char name[30];
	char address[150]
} Student;

void data(Student s)
{
	s.id = 10;
}

int main()
{
	Student s1;

	data(s1);

	return 0;
}*/


/*#include <stdio.h>

typedef int (*fptr)(int, int);

int add(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	fptr function;

	function = add;
	printf("%d\n", function(2, 4));

	return 0;
}*/


/*#include <stdio.h>

typedef signed int		sint, si;
typedef unsigned int	uint, ui;
typedef signed char		s8;
typedef signed short	s16;
typedef signed int		s32;
typedef unsigned char	u8;
typedef unsigned short	u16;
typedef unsigned int	u32;

int main()
{
	u8 count = 200;
	s16 axis = -70; 

	printf("%u\n", count);
	printf("%d\n", axis);

	return 0;
}*/


/*#include <stdio.h>

typedef struct Sensor {
	int id; 
	char name[12];
	int version;
	// 
	 * The members of an anonymous union
	 * are considered to be members of the 
	 * containing structure.
	 //
	union { // Anonymous union
		float temperature;
		float humidity;
		char motion[4];
	};  
} Sensor;

int main()
{
		printf("%zu\n", sizeof(Sensor));
	return 0;
}*/


/*#include <stdio.h>

typedef int * int_ptr;
#define iptr int *
int main()
{
	int_ptr ptr1, ptr2, ptr3;
	iptr i1, i2, i3;

	printf("%zu\n",sizeof(ptr1));
	printf("%zu\n",sizeof(ptr2));
	printf("%zu\n\n",sizeof(ptr3));
	printf("%zu\n",sizeof(i1));
	printf("%zu\n",sizeof(i2));
	printf("%zu\n",sizeof(i3));
	
	return 0;
}*/


/*#include <stdio.h>

enum bool
{
	e_false,
	e_true
};

int main()
{
	printf("%d\n", e_false);
	printf("%d\n", e_true);

	return 0;
}*/


/*#include <stdio.h>

typedef enum
{
	e_red = 1,
	e_blue = 4,
	e_green
} Color;

int main()
{
	Color e_white = 0, e_black;


	printf("%d\n", e_white);
	printf("%d\n", e_black);
	printf("%d\n", e_green);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
		typedef enum
		{
				red,
				blue
		} Color;


		int blue;

		printf("%d\n", blue);

		return 0;
}*/


/*#include <stdio.h>

typedef enum
{
		red,
		blue,
		green
} Color;

int main()
{
		Color c;
		printf("%zu\n", sizeof(Color));
		printf("%zu\n", sizeof(c));

		return 0;
}*/


/*#include <stdio.h>

int main()
{
	FILE *fp;

	fp = fopen("test.txt", "w");
	fclose(fp);

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *input_fp;

	input_fp = fopen("text5.txt", "r");

	if (input_fp == NULL)
	{
			printf("FILE doesnot exists\n");
		return 1;
	}
			printf("FILE exists\n");

	fclose(input_fp);

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	char ch; 

//	fptr = fopen("/etc/shells", "r");
	fptr = fopen("text3.txt", "r");

	if (fptr == NULL)
	{
			printf("FILE doesnot exists\n");
			return -1;
	}
	// Need to do error checking on fopen() //

	while (ch = fgetc(fptr))
	{
		if (feof(fptr))
			break;

		fputc(ch, stdout);
	}

	fclose(fptr);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	FILE *fptr;
	char ch; 

	fptr = fopen("file.txt", "w"); 

	ch = fgetc(fptr);// This should fail since reading a file in write mode//
	if (ferror(fptr))
		fprintf(stderr, "Error in reading from file : file.txt\n");

	clearerr(fptr);

	// This loop should be false since we cleared the error indicator //
	if (ferror(fptr))
		fprintf(stderr, "Error in reading from file : file.txt\n");

	fclose(fptr);

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
		FILE *fptr;
		char ch; 

		fptr = fopen("text.txt", "r");

		// Need to do error checking on fopen() //

		printf("File offset is at -> %ld\n\n", ftell(fptr));
		printf("--> The content of file is <--\n");

		while ((ch = fgetc(fptr)) != EOF)
		{
				fputc(ch, stdout);
//				printf("\nFile offset is at -> %ld\n", ftell(fptr));

		}

		printf("\nFile offset is at -> %ld\n", ftell(fptr));

		fclose(fptr);

		return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num1, num2;
	float num3;
	char str[10], oper, ch;
	FILE *fptr;

	if ((fptr = fopen("text.txt", "w+")) == NULL)
	{   
		fprintf(stderr, "Can't open input file text.txt!\n");
		return 1;
	}

	fprintf(fptr, "%d %c %d %s %f\n", 2, '+', 1, "is", 1.1);
	rewind(fptr);	
	fscanf(fptr, "%d %c %d %s %f", &num1, &oper, &num2, str, &num3);

	printf("%d %c %d %s %f\n", num1, oper, num2, str, num3);

	fclose(fptr);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num1, num2;
	float num3;
	char str[10], oper, ch;
	FILE *fptr;

	if ((fptr = fopen("text.txt", "w+")) == NULL)
	{   
		fprintf(stderr, "Can't open input file text.txt!\n");
		return 1;
	}   

	fprintf(fptr, "%d %c %d %s %f\n", 2, '+', 1, "is", 1.1);
	fseek(fptr, 0L, SEEK_SET);
	fscanf(fptr, "%d %c %d %s %f", &num1, &oper, &num2, str, &num3);

	printf("%d %c %d %s %f\n", num1, oper, num2, str, num3);

	fclose(fptr);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
		int num1 = 10, num2 = 20;
		int num3, num4;
		FILE *fptr, *fptr1;

		if ((fptr = fopen("text2.txt", "w+")) == NULL)
		{   
				fprintf(stderr, "Can't open input file text2.txt!\n"); return 1;
		}
		scanf("%x%x", &num1, &num2);
		
		fwrite(&num1, sizeof(num1), 1, fptr);
		fwrite(&num2, sizeof(num2), 1, fptr);
		rewind(fptr);
		fread(&num3, sizeof(num3), 1, fptr);
		fread(&num4, sizeof(num4), 1, fptr);

		printf("%x %x\n", num3, num4);
		

		fclose(fptr);

		return 0;
}*/


/*#include <stdio.h>

struct Data
{
	int num1;
	char oper;
	int num2;
	char str[10];
	float num3;
};

int main()
{
	struct Data d1 = {2, '+', 1, "is", 1.1};
	struct Data d2;
	FILE *fptr;

	if ((fptr = fopen("struct.txt", "w+")) == NULL)
	{   
		fprintf(stderr, "Can't open input file text.txt!\n");
		return 1;
	}

	fwrite(&d1, sizeof(d1), 1, fptr);
	rewind(fptr);
	fread(&d2, sizeof(d2), 1, fptr);

	printf("%d %c %d %s %f\n", d2.num1, d2.oper, d2.num2, d2.str, d2.num3);

	fclose(fptr);

	return 0;
}*/        


/*#include <stdio.h>

int main()
{
	long int wait; // Try without and with volatile qualifier //
	unsigned char bit = 0;

	while (1) 
	{   
		bit = !bit;
		printf("The bit is now: %d\r", bit);
		fflush(stdout);
		for (wait = 0xFFFFFFF; wait--; );
	}   

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	unsigned int i; // Try without and with volatile qualifier //
	int num;

	for (i = 0; i < 0xFFFFFFFF; i++)
	{
		num = 5;
	}

	printf("%d\n", num); 

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int get_out;
	volatile int num = 0; // Try without and with volatile qualifier //

	scanf("%d", &get_out);

	while (get_out)
	{
		num++;
	}

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int num1;
	volatile int num2 = 1; // Try without and with volatile qualifier //

	num1 = ++num2 + num2++ + num2++ + num2++;
	printf("%d\n", num1);

	return 0;
}*/
















