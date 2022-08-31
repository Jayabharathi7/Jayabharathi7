/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */

#include<stdio.h>
int main()
{
		int temp, a = 5, b =10;
		printf("Before swap %d  %d\n", a, b);
		a = b;
		b= a;
		printf("After swap  %d  %d\n", a, b);
	    return 0;
}

/*#include<stdio.h>
int main()
{
		int a = 5, b = 10;
		printf("Before swap %d  %d\n", a, b);
		a = a - b;
		b = a + b;
		a = b - a;
		printf("After swap  %d  %d\n", a, b);
		return 0;
}*/


