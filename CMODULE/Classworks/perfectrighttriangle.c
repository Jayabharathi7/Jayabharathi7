#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&n1, &n2, &n3);
	if(n1 + n2 == n3 || n2 + n3 == n1 || n1 + n3 == n2)
	{
		printf("The triangle is perfect right triangle\n");
	}
	else
	{
		printf("The triangle is not perfect right triangle\n");
	}
	return 0;
}


