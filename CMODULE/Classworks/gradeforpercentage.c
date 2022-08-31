#include<stdio.h>
int main()
{
	int n1;
	printf("Enter the percentage: ");
	scanf("%d", &n1);
	if(n1 >= 90)
		printf("A grade\n");
	else if((n1 < 90) && (n1 >= 80))
		printf("B grade\n");
	else if((n1 < 80) && (n1 >= 70))
		printf("C grade\n");
	else if((n1 < 70) && (n1 >= 60))
		printf("D grade\n");
	else if((n1 < 60) && (n1 >= 50))
		printf("E grade\n");
	else
		printf("Fail\n");
	return 0;
}

