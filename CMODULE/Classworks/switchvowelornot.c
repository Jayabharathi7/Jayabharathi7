#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'A':
		case 'a':
			printf("Character is vowel\n");
			break;
		case 'E':
		case 'e':
			printf("Character is vowel\n");
			break;
		case 'I':
		case 'i':
			printf("Character is vowel\n");
			break;
		case 'O':
		case 'o':
			printf("Character is vowel\n");
			break;
		case 'U':
		case 'u':
			printf("Character is vowel\n");
			break;
		default:
			printf("Not a vowel\n");
        }
	return 0;
}


