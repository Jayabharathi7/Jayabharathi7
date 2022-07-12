/*
 * NAME       : JAYABHARATHI J
 * DATE       : 11.06.2022
 * DESCRIPTION: WAP TO GENERATE AP, GP, HP SERIES
 * INPUT      : Enter the First Number 'A': 2
 *              Enter the Common Difference / Ratio 'R': 2
 *              Enter the number of terms 'N': 5
 * OUTPUT     : AP = 2, 5, 8, 11, 14
 *              GP = 2, 6, 18, 54, 162
 *              HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
 * */

#include<stdio.h>
int main()
{
		//Initializing AP and GP values to get exact value of addition and multiplication of AP and HP//
		int ap = 0, gp = 1, n, n1, n2, i, j, k;
		//To get exact value of HP, here we use float and it will be type converting//
		float hp;
		//Reading the first number//
		printf("Enter the First Number 'A': ");
		scanf("%d", &n1);
		//Reading the common difference//
		printf("Enter the Common Difference / Ratio 'R': ");
		scanf("%d", &n2);
		//Reading the number of terms//
		printf("Enter the number of terms 'N': ");
		scanf("%d", &n);
		//If all three values are greater then zero, then enters into condition//
		if(n1 && n2 && n > 0)
		{
				ap=n1;
		        for(i = 1; i <= n; i++)
		        {
                        printf("%d, ", ap);
				        ap = ap + n2;
		        }
		        printf("\n");
		        gp=n1;
		        for(j = 1; j <= n; j++)
		        {
				        printf("%d, ", gp);
				        gp = gp * n2;	
		        }
		        printf("\n");
                ap=n1;
		        for(k = 1; k <= n; k++)
		        {
				        hp = 1/(float)ap;
				        printf("%f, ", hp);
				        ap = ap + n2;
		        }
		        printf("\n");
		}
		//If the values are less than zero, then it enters into block//
		else
		{
				printf("Invalid input\n");
		}
		return 0;
}



