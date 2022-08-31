#include<stdio.h>
int main()
{
		int n, pow = 1, i;
		printf("Enter the number of series: ");
		scanf("%d", &n);
		for(i = 1; i < n; i++)
		{
				pow = 2 * pow;
				printf("%d \n", pow);
		}
		return 0;
}


