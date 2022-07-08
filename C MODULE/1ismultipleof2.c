#include<stdio.h>
int main()
{
	int n1, n2;
	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);
	if(n1 % n2 == 0)
	{
		printf("First is multiple of second\n");
	}
	else
	{
		printf("First is not multiple of second\n");
	}
	return 0;
}


