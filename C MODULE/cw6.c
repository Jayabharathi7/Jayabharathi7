/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */


/*#include<stdio.h>
#include<ctype.h>
int main()
{
		char ch;
		int i = 1;
		for( ; (ch = getchar()) != EOF;)
		{
				if(ch == ' ')
				{
						if(i == 0)
						{
								putchar(toupper(ch));
								i++;
						}
				}
				else
				{
						putchar(toupper(ch));
						i = 0;
				}
		}
}*/


/*#include<stdio.h>
#include<ctype.h>
int main()
{
		char ch;
		int flag = 1;
		for( ; (ch = getchar()) != '\n'; )
		{
				if((ch == ' ' || ch == '\t') && flag == 1)
				{
						putchar(' ');
						flag = 0;
				}
				if(isalpha(ch))
				{
						flag = 1;
						putchar(ch);
				}
		}
		puts("");
		return 0;
}*/

/*#include<stdio.h>
#include<unistd.h>
int main()
{
		int i;
		for(i = 1; i <= 100; i++)
		{
				printf("\rLoading[]%d%%", i);
				fflush(stdout);
				sleep(1);
		}
		printf("\nFinished\n");
		return 0;
}*/


#include<stdio.h>
int main()
{
		if(!printf("hello "))
				printf("hello");
		else
				printf("world\n");
}



