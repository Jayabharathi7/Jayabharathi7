/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */


/*#include<stdio.h>
int factorial(int n);
int main()
{
		int n, ret;
		printf("Enter the num: ");
		scanf("%d", &n);
		ret = factorial(n);
		printf("Factorial of %d is %d\n", n, ret);
		return 0;
}
int factorial(int n)
{
		if(n <= 1)
		{
				return 1;
		}
		else
		{
				return n * factorial(n - 1);
		}
}*/

/*#include<stdio.h>
int sequence(int N);
int sequence(int N)
{
		int sum = N;
		if(N < 1)
				return 0;
		sum = sum + sequence(N - 1);
		return sum;
}
int main()
{
		int N, res;
		printf("Enter the num: ");
		scanf("%d", &N);
		res = sequence(N);
		printf("Sum = %d\n", res);
}*/


#include<stdio.h>
int power(int X, int Y)
{
		int result = X;
		if(Y < 1)
				return 1;
		result = result * power(X, Y - 1);
		return result;
}
int main()
{
		int X, Y, ret;
		printf("Enter x and y: ");
		scanf("%d %d", &X, &Y);
		ret = power(X, Y);
		printf("Result = %d\n", ret);
}


/*#include<stdio.h>
int sumofdigits(int num);
int sumofdigits(int num)
{
		int rem;
		if(num == 0)
				return 0;
		rem = num % 10;
		rem = rem + sumofdigits(num/10);
		return rem;
}
int main()
{
		int num, ret;
		printf("Enter the num: ");
		scanf("%d", &num);
		ret = sumofdigits(num);
		printf("Result = %d\n", ret);
}*/



