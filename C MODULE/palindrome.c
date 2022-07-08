#include<stdio.h>
int main()
{
	int n, original, reversed = 0, remainder;
	printf("Enter an integer: ");
	scanf("%d", &n);
	original = n;
	while(n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
	    n = n/10;
	}
    if(reversed == original)
	{
	   printf("The number is palindrome\n");
    }
    else
	{
	   printf("The number is not palindrome\n");
	}
    return 0;
}

