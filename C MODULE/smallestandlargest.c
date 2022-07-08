#include<stdio.h>
int main()
{
	int i, n, elements, sml, lar;
	printf("Enter total no.of.elements: ");
	scanf("%d", &elements);
	printf("The first number: ");
	scanf("%d", &n);
	lar = n;
	sml = n;
	for(i = 1; i <= elements - 1; i++)
	{
		printf("The numbers are: ");
		scanf("%d", &n);
		if(n > lar)
			lar = n;
		if(n < sml)
			sml = n;
	}
	printf("The largest number is %d\n",lar);
	printf("The smallest number is %d\n", sml);
	return 0;
}

