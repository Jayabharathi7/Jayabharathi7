/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */


/*#include<stdio.h>
int main()
{
		int n, rem, sum = 0;
		printf("Enter a number: ");
		scanf("%d", &n);
		while(n > 0)
		{
				rem = n % 10;
				sum += rem;
				n = n / 10;
		}
		printf("sum of number is %d\n", sum);
		return 0;
}*/

/*#include<stdio.h>
int main()
{
		int n, prod = 1, rem;
		printf("Enter a number: ");
		scanf("%d", &n);
		while(n > 0)
		{
				rem = n % 10;
				prod = prod * rem;
				n = n / 10;
		}
		printf("Product of number is %d\n", prod);
	    return 0;
}*/


//Reverse a number//
#include<stdio.h>
int main()
{
		int n, rev = 0, rem;
		printf("Enter a number: ");
		scanf("%d", &n);
		while(n != 0)
		{
				rem = n % 10;
				rev = rev * 10 + rem;
				n /= 10;
		}
		printf("Reversed number %d\n", rev);
		return 0;
}

