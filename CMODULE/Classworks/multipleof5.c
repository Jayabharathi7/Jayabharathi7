#include<stdio.h>
int main()
{
	int n1 = 5, n2;
	printf("Enter the number: ");
	scanf("%d", &n2);
	if(n1%n2 == 0)
	{
		printf("Number is multiple of 5\n");
	}
	else
	{
		printf("Number is not multiple of 5\n");
	}
	return 0;
}


