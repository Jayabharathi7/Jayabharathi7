#include<stdio.h>
int main()
{
		int n, n1, pow = 1, i;
		printf("Enter the number of lines: ");
		scanf("%d", &n);
		printf("Enter the series number: ");
		scanf("%d", &n1);
		for(i = 1; i < n; i++)
		{
				pow = n1 * pow;
				printf("%d \n", pow);
		}
		return 0;
}


