#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an character: ");
	scanf("%c", &ch);
	if((ch >= 'A') && (ch <= 'Z'))
		printf("Character is uppercase\n");
	else if((ch >= 'a') && (ch <= 'z'))
		printf("Character is lowercase\n");
	else if((ch >= '0') && (ch <= '9'))
		printf("Character is digit\n");
	else
		printf("None of the above\n");
	return 0;
}

