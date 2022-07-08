#include<stdio.h>
int main()
{
		int i, j, k, n, space;
		printf("Enter the number of lines: ");
		scanf("%d",&n);
		space = n - 1;
		for(i = 1; i <= n; i++)
		{
				for(j = space; j >= 1; j--)
				{
						printf(" ");
				}
				space--;
				for(k = 1; k <= i; k++)
				{
						printf("* ");
				}
				printf("\n");
		}
		for(i = 1; i <= n; i++)
		{
				for(j = 1; j <= i; j++)
				{
						printf(" ");
				}
				for(k = n - i; k >= 1; k--)
				{
						printf("* "); 
				}
				printf("\n");
		}
		return 0;
}

