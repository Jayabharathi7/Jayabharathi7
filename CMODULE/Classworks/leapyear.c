#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year: ");
        scanf("%d", &year);
	if((year % 400 == 0) || (year % 4 == 0)) 
	{
		printf("The year is leap year\n");
	}
	else if(year % 100 == 0)
	{
		printf("The year is not leap year\n");
	}
	else
	{
		printf("The year is not leap year\n");
	}
	return 0;
}

