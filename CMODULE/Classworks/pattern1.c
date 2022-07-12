#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter number of lines: ");
	scanf("%d", &n);
	for(i = 1; i <= 5; ++i)
	{
		for(int k=i;k<n;k++)
		{
			printf(" ");
		}
		for(j = 1; j <= i; ++j)
                {
			printf("%d", j % 2);
		}
		printf("\n");
	
	}
	return 0;
}

