#include<stdio.h>
int main()
{
	int i,n, t1 = 0, t2 = 1;
	int nextTerm = t1 + t2;
        printf("Enter the number of terms: ");
        scanf("%d", &n);
	printf("Fibonacci series are: %d %d", t1, t2);
        for(i = 3; i <= n; i++)
	{
		printf(" %d ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return 0;
}

		
