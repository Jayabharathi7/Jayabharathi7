#include<stdio.h>
int main()
{
	int product, num1, num2;
	printf("Enter two numbers: ");
	scanf("%d""%d", &num1, &num2);
        product = num1 * num2;
	printf("Product of two numbers is %d\n", product);
	if(product % 2 == 0)
	{
		printf("The number is even number\n");
	}
	else
	{
		printf("The number is odd number\n");
	}
	return 0;
}

