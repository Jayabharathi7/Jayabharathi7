#include<stdio.h>
int main()
{
	int n1, n2;
	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);
	if(n1 > n2)
		printf("Number 1 is greater\n");
	else if(n1 < n2)
		printf("Number 2 is greater\n");
	else
		printf("Number is equal\n");
	return 0;
}

