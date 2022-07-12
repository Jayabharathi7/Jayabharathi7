#include<stdio.h>
int main()
{
		int i, j , k, l, n;
		printf("Enter the number of lines: ");
		scanf("%d", &n);
		for(i = 1; i <= n; i++)
		{
				for(j = 1; j < 4; j++)
						printf("$");
				for(k = 1; k < 4; k++)
						printf("*");
				for(l = 1; l < 4; l++)
						printf("$");
		}
		printf("\n");
		return 0;
}

