#include<stdio.h>
int main()
{
		int i = 1, n1, n2, count = 0;
		printf("Enter two numbers: ");
		scanf("%d %d", &n1, &n2);
		while(i <= n2)
		{
				count = count + n1;
				i++;
		}
		printf("Multiplication of two numbers: %d\n", count);
		return 0;
}


