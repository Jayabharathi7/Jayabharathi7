/*
 * NAME       : JAYABHARATHI J
 * DATE       : 19.06.2022
 * DESCRIPTION: WAP TO CHECK N TH BIT IS SET OR NOT, IF YES, CLEAR THE M TH BIT
 * INPUT      : Enter the number: 19
 *              Enter 'N': 1
 *              Enter 'M': 4
 * OUTPUT     : Updated value of num is 3
 * */

#include<stdio.h>
int main()
{
		//Declaring the variables//
		int n, N, M;
		//Reading the number from the user//
		printf("Enter the number: ");
		scanf("%d", &n);
		//Reading N value//
		printf("Enter 'N': ");
		scanf("%d", &N);
		//Reading M value//
		printf("Enter 'M': ");
		scanf("%d", &M);
		//Checking if N th bit is set or not//
		if((1 << N) & n)
		{
				//If N th bit is setted, then clearing the M th bit//
				n = (~(1<<M) & n);
		}
		//Printing the updated value//
		printf("Updated value of num is %d\n", n);
		return 0;
}


