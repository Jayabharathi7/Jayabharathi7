/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */

/*#include<stdio.h>
int add_numbers(int n1, int n2);
int main()
{
		int n1, n2, sum;
		printf("Enter n1: ");
		scanf("%d", &n1);
		printf("Enter n2: ");
		scanf("%d", &n2);
		sum = add_numbers(n1, n2);
		printf("%d\n", sum);
		return 0;
}
int add_numbers(int n1, int n2)
{
		int sum = 0;
		sum = n1 + n2;
		return sum;
}*/

/*#include<stdio.h>
int square(int n);
int main()
{
		int n, res;
		printf("Enter the n: ");
		scanf("%d", &n);
		res = square(n);
		printf("Square of num is %d\n", res);
		return 0;
}
int square(int n)
{
		int res = 0;
		res = n * n;
		return res;
}*/

/*#include<stdio.h>
int odd_even(int n);
int odd_even(int n)
{
		if(n % 2 == 0)
		{
				return 1;
		}
		else
				return 0;
}
int main()
{
		int n, res;
		printf("Enter the number: ");
		scanf("%d", &n);
		res = odd_even(n);
		if(res == 1)
		{
				printf("Num is even\n");
		}
		else
				printf("Num is odd\n");
		return 0;
}*/


/*#include<stdio.h>
int tempconv(int x);
int main()
{
		float x, res;
		printf("Enter the value: ");
		scanf("%f", &x);
		res = tempconv(x);
		printf("The degree celcius is %f\n", res);
		return 0;
}
int tempconv(int x)
{
		float c;
		c = (float)5/9*(x - 32);
		return c;
}*/


/*#include<stdio.h>
int palindrome(int n);
int main()
{
		int res, rem, rev = 0, n, original;
		printf("Enter the num: ");
		scanf("%d", &n);
		original = n;
		res = palindrome(n);
		if(res == original)
		{
				printf("Palindrome\n");
		}
		else
		{
				printf("Not palindrome\n");
		}
		return 0;
}
int palindrome(int n)
{
		int rem, rev = 0;
		while(n > 0)
		{
				rem = n % 10;
				rev = rev * 10 + rem;
				n = n / 10;
		}
		return rev;
}*/



#include<stdio.h>
int is_valid(int num);
int is_palindrome(int num);
int reverse(int num);
int main()
{
		int num;
		printf("Enter the number: ");
		scanf("%d", &num);
		is_valid(num) ? (is_palindrome(num) ? printf("Number is Palindrome\n") : printf("Number is not palindrome\n")) : printf("Invalid number\n");
		return 0;
}
int is_valid(int num)
{
		return num > 100 && num < 100000;
}
int is_palindrome(int num)
{
		return reverse(num) == num;
}
int reverse(int num)
{
		int s = 0;
		while(num != 0)
		{
				s = s * 10 + (num % 10);
				num = num / 10;
		}
		return s;
}


