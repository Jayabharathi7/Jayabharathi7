/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */

/*#include<stdio.h>
int main()
{
		int count = 0, n, i;
		printf("Enter a number: ");
		scanf("%x", &n);
		for(i = 1; n != 0; n >>= 1) //n=n>>1
		{
				if(n & 01)
				{
				count++;
				}
		}
		printf("count is %d\n", count);
		return 0;
}*/

#include<stdio.h>
int main()
{
		int n, i;
		printf("Enter a number: ");
		scanf("%x", &n);
		unsigned int mask=0x80000000;
		for(i = 0; i < 32; i++)
		{
				if(n & mask)
				{
						printf("1");
				}
				else
				{
						printf("0");
				}
				mask >>= 1;
		}
		printf("\n");
}

/*#include<stdio.h>
int main()
{
		char n;
		printf("Enter the number: ");
		scanf("%hhx", &n);
		n = (unsigned char) n >> 4 | n << 4;
		printf("%hhx\n",n);
		return 0;
}*/

