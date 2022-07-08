#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	switch(n % 2)
	{
		case 0:
			printf("Number is even\n");
			break;
		case 1:
			printf("Number is odd\n");
			break;
		default:
			printf("Try again\n");
	}
	return 0;
}

