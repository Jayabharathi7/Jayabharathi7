/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */

#include<stdio.h>
int main()
{
		int count = 0, n;
		printf("Enter the number: ");
		scanf("%d", &n);
		while(n != 0)
		{
				n = n/10;
				count++;
		}
		printf("Digits of given number is %d\n", count);
		return 0;
}



