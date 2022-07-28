/*
 * NAME       : JAYABHARATHI J
 * DATE       : 12.06.2022
 * DESCRIPTION: WAP TO FIND WHICH DAY OF THE YEAR 
 * INPUT      :  user@emertxe] ./day_of_the_year
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
The day is Tuesday
Test Case 2:
Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 3
The day is Wednesday
Test Case 3: 
Enter the value of 'n' : 9

Choose First Day :

1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 8
Error: Invalid input, first day should be > 0 and <= 7
Test Case 4:

Enter the value of 'n' : 0
Error: Invalid Input, n value should be > 0 and <= 365
Test Case 5:
Enter the value of 'n' : 366
Error: Invalid Input, n value should be > 0 and <= 365
 * */

#include<stdio.h>
int main()
{
		int first, n, res;
		//Reading the n value//
		printf("Enter the value of 'n': ");
		scanf("%d", &n);
		//If n value is equal to zero or greater than 365, then it prints error//
		if(n == 0 || n > 365)
		{
				printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
				return 0;
		}
		//Reading the first day//
		printf("Choose First Day: \n");
		printf("1. Sunday\n");
		printf("2. Monday\n");
		printf("3. Tuesday\n");
		printf("4. Wednesday\n");
		printf("5. Thursday\n");
		printf("6. Friday\n");
		printf("7. Saturday\n");
		printf("Enter the option to set the First Day: ");
		scanf("%d", &first);
		//Initializing first is greater than or equal to 1 and less than or equal to 7//
		if(first >= 1 && first <= 7)
		{
				if( n >= 1 && n <= 365)
				{
						//Formula to solve the result//
						res=((first+n)-1)%7;
						//Prints the day based upon result//
						switch (res)
						{
								case 1:
										printf("The day is Sunday\n");
										break;
								case 2:
										printf("The day is Monday\n");
										break;
								case 3:
										printf("The day is Tuesday\n");
										break;
								case 4:
										printf("The day is Wednesday\n");
										break;
								case 5:
										printf("The day is Thursday\n");
										break;
								case 6:
										printf("The day is Friday\n");
										break;
								case 0:
										printf("The day is Saturday\n");
										break;
						}
				}
		}
		//Error, if first is less than 1 and greater than 7//
		else
		{
				printf("Error: Invalid input, first day should be > 0 and <= 7\n");
		}
		return 0;
}



