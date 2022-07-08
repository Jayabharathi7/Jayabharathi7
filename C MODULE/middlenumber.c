#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if(((n1 < n2) && (n1 > n3)) || ((n1 > n2) && (n1 < n3)))
	       printf("n1 is middle number\n");
	else if(((n2 < n1) && (n2 > n3)) || ((n2 > n1) && ( n2 < n3)))
	       printf("n2 is middle number\n");
	else
	       printf("n3 is middle number\n");
        return 0;
}

