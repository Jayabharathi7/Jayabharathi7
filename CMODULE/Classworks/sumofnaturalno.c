/*i
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */

#include<stdio.h>
int main()
{
		int i, n, sum = 0;
		printf("Enter the number: ");
		scanf("%d", &n);
		for(i = 1; i <= n; i++)
		{
				sum += i;
		}
		printf("Sum of natural numbers is %d\n", sum);
		return 0;
}

