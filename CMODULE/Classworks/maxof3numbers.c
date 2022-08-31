#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if((n1 > n2) && (n1 > n3))
		printf("Number 1 is greater\n");
	else if((n2 > n1) && (n2 > n3))
		printf("Number 2 is greater\n");
	else
		printf("Number 3 is greater\n");
	return 0;
}

