#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'A' ... 'Z':
			printf("Character is uppercase\n");
			break;
		case 'a' ... 'z':
			printf("Character is lowercase\n");
			break;
		case '0' ... '9':
			printf("Character is digit\n");
			break;
		default:
			printf("None of the above\n");
	}
	return 0;
}


