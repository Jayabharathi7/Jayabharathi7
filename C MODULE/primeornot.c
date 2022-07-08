#include<stdio.h>
int main()
{
	int i, n, r, count = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(i = 2; i < n; ++i)
	{
		r = n % i;
		if(r == 0)
		{
			count++;
		}
	}
	if(count == 0)
	{
		printf("Number is prime number\n");
	}
	else
	{
		printf("Not a prime number\n");
	}
}


