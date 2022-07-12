/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */

/*#include<stdio.h>
#include<string.h>
size_t my_strlen(char *str);
int main()
{
		char str[50];
		printf("Enter the string: ");
		scanf("%[^\n]", str);
		int len;
		len = my_strlen(str);
		printf("String contain %d characters\n", len);
		return 0;
}
size_t my_strlen(char *str)
{
		//int i = 0;
		while(str[i] != '\0')
		{
				i++;
		}
		return i;//
		char *ptr = str;
		while(*str++ != '\0');
		return str - ptr - 1;
}*/

/*#include<stdio.h>
#include<string.h>
void my_strcpy(char *dest, char *src);
int main()
{
		char str[50], dest[50];
		printf("Enter the string: ");
		scanf("%[^\n]", str);
		my_strcpy(dest, str);
		puts(dest);
		return 0;
}
void my_strcpy(char *dest, char *src)
{
		//int i = 0;
		while(src[i] != '\0')
		{
				dest[i] = src[i];
				i++;
		}
		dest[i] = src[i];
		dest[i] = '\0';//
		//while(*src != '\0')
		{
				*dest++ = *src++;
		}
		*dest = '\0';//
		//while(*dest++ = *src++);//
}*/

/*#include<stdio.h>
#include<string.h>
void my_strrev(char *str);
int main()
{
		char str[50];
		printf("Enter the string: ");
		scanf("%[^\n]", str);
		my_strrev(str);
		puts(str);
		return 0;
}
//void my_strrev(char *arr)
{
		char temp;
		int i = 0, j = strlen(arr) - 1;
		while(i < j)
		{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				i++;
				j--;
		}
}//
void my_strrev(char *str)
{
		char temp, *ptr = str + strlen(str) - 1;
		while(str < ptr)
		{
				temp = *str;
				*str = *ptr;
				*ptr = temp;
				str++;
				ptr--;
		}
}*/

/*#include<stdio.h>
#include<string.h>
int my_strcmp(char *s1, char *s2);
int main()
{
		char s1[50], s2[50];
		printf("Enter the string1: ");
		scanf("%[^\n]", s1);
		printf("Enter the string2: ");
		scanf(" %[^\n]", s2);
		int status;
		status = my_strcmp(s1, s2);
		if(status == 0)
		{
				printf("Same string\n");
		}
		else
		{
				printf("Different string\n");
				printf("%d\n", status);
		}
		return 0;
}
int my_strcmp(char *s1, char *s2)
{
		while(*s1 != '\0' && *s2 != '\0')
		{
				if(*s1 != *s2)
				{
						return *s1 - *s2;
				}
				s1++;
				s2++;
		}
		return *s1 - *s2;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
		char s1[50], s2[50];
		printf("Enter the string1: ");
		scanf("%[^\n]", s1);
		printf("Enter the string2: ");
		scanf(" %[^\n]", s2);
		int status;
		status = my_strcasecmp(s1, s2);
		if(status == 0)
		{
				printf("Same strings\n");
		}
		else
		{
				printf("Different strings\n");
				printf("%d\n", status);
		}
		return 0;
}
int my_strcasecmp(char *s1, char *s2)
{
		while(*s1 != '\0' && *s2 != '\0')
		{
				if(toupper(*s1) != toupper(*s2))
				{
						return *s1 - *s2;
				}
				s1++;
				s2++;
		}
}*/

/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int my_atoi(char *str);
int main()
{
		char str[50];
		printf("Enter the string of digits: ");
		scanf("%[^\n]", str);
		int num;
		num = my_atoi(str);
		printf("Equivalent integer is %d\n", num);
		return 0;
}
//int my_atoi(char *str)
{
		int num = 0;
		while(*str != '\0')
		{
				num = num * 10 + (*str - 48);
				str++;
		}
		return num;
}//
int my_atoi(char *str)
{
		int num = 0, flag = 1;
		if(*str == '-')
		{
				flag = -1;
				str++;
		}
		while(*str != '\0')
		{
				num = num * 10 + (*str - '0');
				str++;
		}
		return num * flag;
}*/



