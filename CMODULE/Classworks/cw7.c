/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */

/*#include<stdio.h>
#include<string.h>
int main()
{
		char str[20];
		int res;
		printf("Enter the string: ");
		scanf("%s[^\n]", str);
		res = strlen(str);
		printf("String length is %d\n", res);
		return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
		char str1[20];
		char str2[20];
		printf("Enter the string1: ");
		fgets(str1, 20, stdin);
		strcpy(str2, str1);
		printf("String2 is %s", str2);
		return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
		char str1[20];
		char str2[20];
		int res;
		printf("Enter the str1: ");
		scanf("%s[^\n]", str1);
		printf("Enter the str2: ");
		scanf("%s[^\n]", str2);
		//res = strcmp(str2, str1);//
	    res = strcasecmp(str2, str1);
		if(res == 0)
		{
				printf("Same string\n");
		}
		else
		{
				printf("Different string\n");
		}
		return 0;
}*/

/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
		char str1[20];
		char str2[20];
		int res, i;
		printf("Enter the string: ");
		scanf("%s[^\n]", str1);
		res = strlen(str1);
		for(i = 0; i < res; i++)
		{
				str2[res - 1 - i] = str1[i];
		}
		res = strcmp(str1, str2);
		if(res)
		{
				printf("Not Palindrome\n");
		}
		else
		{
 				printf("Palindrome\n");
		}
		return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
		char str1[20];
		char temp;
		int i, res;
		printf("Enter a string: ");
		scanf("%s[^\n]", str1);
		res = strlen(str1);
		for(i = 0; i < (res/2); i++)
		{
				temp = str1[i];
				str1[i] = str1[res - 1 - i];
				str1[res - 1 - i] = temp;
		}
		printf("After reversing = %s\n", str1);
		return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
		char str1[20];
		char str2[20];
		int n, i, res, flag = 1;
		printf("Enter a string1: ");
		scanf("%s[^\n]", str1);
		printf("Enter a string2: ");
		scanf("%s[^\n]", str2);
		printf("Enter n: ");
		scanf("%d", &n);
		if(strlen(str1) < strlen(str2))
				res = strlen(str2);
		else
				res = strlen(str1);
		if(n > res)
				n = res;
		for(i = 0; i < n; i++)
		{
				if(str1[i] != str2[i])
				{
						flag = 0;
						break;
				}
		}
		if(flag)
				puts("Equal");
		else
				puts("Not equal");
		return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
		char str1[20];
		char str2[20];
		int n, i, j = 0, res1, res2, total;
		printf("Enter string1: ");
		scanf("%s[^\n]", str1);
		printf("Enter string2: ");
		scanf("%s[^\n]", str2);
		res1 = strlen(str1);
		res2 = strlen(str2);
		total = res1 + res2;
		for(i = total - res2; i < total; i++)
		{
				str1[i] = str2[j];
				j++;
		}
		printf("%s\n", str1);
		return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
		char str[] = "www.emertxe.com/bangalore";
		char del[] = ". /";
		char *ptr;
		ptr = strtok(str, del);
		while(ptr != NULL)
		{
				puts(ptr);
				ptr = strtok(NULL, del);
		}
		return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
		char name[20], age[5], id[20], mobile[15];
		printf("Enter name: ");
		scanf("%s[^\n]", name);
		printf("Enter age: ");
		scanf("%s[^\n]", age);
		printf("Enter id: ");
		scanf("%s[^\n]", id);
		printf("Enter mobile no: ");
		scanf("%s[^\n]", mobile);
		if(strlen(mobile) != 10)
				printf("Invalid mobile no\n");
		else
		{
				printf("NAME: %s\n", name);
				printf("AGE: %s\n", age);
				printf("ID: %s\n", id);
				printf("MOBILE NO: %s\n", mobile);
		}
		return 0;
}*/

#include<stdio.h>
#include<string.h>
int main()
{
		char user1[] = "bharathi", user2[20], pass1[] = "bharathi1999", pass2[20];
		static int count = 1;
		printf("Enter username: ");
		scanf("%s[^]", user2);
		printf("Enter password: ");
		scanf("%s[^]", pass2);
		printf("\n");
		if(count < 3)
		{
				if(strcmp(user1, user2))
				{
						printf("!!!Invalid credentials\n");
						printf("!!!you have %d chance left!!!\n", 3 - count);
						count++;
						printf("\n");
						main();
				}
				else if(strcmp(pass1, pass2))
				{
						printf("!!!Invalid credentials!!!\n");
						printf("!!!you have %d chance left!!!\n", 3 - count);
						count++;
						printf("\n");
						main();
				}
				else
				{
						printf("you are successfully logged in...\n");
				}
		}
		else
		{
				printf("you have exceeded the chance\n");
		}
}




































