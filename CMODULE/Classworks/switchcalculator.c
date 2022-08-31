#include<stdio.h>
int main()
{
	int n1, n2, var;
	char ch;
	printf("Enter two numbers: ");
	scanf("%d  %c %d", &n1, &ch, &n2);
	switch(ch)
	{
		case '+':
				var = n1 + n2;
				printf("Add of two numbers is %d\n", var);
			    break;
		case '-':
				var = n1 - n2;
			    printf("sub of two numbers is %d\n", var);
			    break;
		case '*':
				var = n1 * n2;
			    printf("mul of two numbers is %d\n", var);
			    break;
		case '/':
				var = n1 / n2;
				printf("div of two numbers is %d\n", var);
			    break;
		case '%':
				var = n1 % n2;
				printf("rem of two numbers is %d\n", var);
				break;
		default:
			printf("Try again\n");
	}
	return 0;
}


