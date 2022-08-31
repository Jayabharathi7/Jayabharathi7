/*
 * NAME       : JAYABHARATHI J
 * DATE       : 29.07.2022
 * DESCRIPTION: VARIANCE CALCULATION WITH DYNAMIC ARRAYS
 * INPUT      : Test Case 1:
user@emertxe] ./variance
Enter the no.of elements : 10

Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 23
[7] -> 24
[8] -> 26
[9] -> 31
Variance is 40.000000
 * */


//Header Inclusion//
#include<stdio.h>
#include<stdlib.h>
//Function Prototype//
float variance(int [], int);
//Main Function//
int main()
{
		//Declaring the variables//
		int N, i, *arr;
		float var;
		//Reading the number of elements from the user//
		printf("Enter the no.of elements: ");
		scanf("%d", &N);
		//Allocating the memory dynamically//
		arr = malloc(N * sizeof(int));
		printf("Enter the %d elements:\n", N);
		for(i = 0; i < N; i++)
				scanf("%d", &arr[i]);
		//Function Call//
		var = variance(arr, N);
		printf("Variance is %f\n", var);
		free(arr);
}
//Function Definition//
float variance(int arr[], int size)
{
		int i, sum = 0, *dev, *dev_sq;
		float mean, variance;
		dev = malloc(size * sizeof(int));
		dev_sq = malloc(size * sizeof(int));
		//Calculating the sum and mean//
		for(i = 0; i < size; i++)
				sum = sum + arr[i];
		mean = (float)sum / size;
		//Calculating the deviation//
		for(i = 0; i < size; i++)
				dev[i] = arr[i] - mean;
		for(i = 0; i < size; i++)
				dev_sq[i] = dev[i] * dev[i];
		sum = 0;
		//Calculating the variance//
		for(i = 0; i < size; i++)
				sum = sum + dev_sq[i];
		variance = (float)sum / size;
		printf("x(input)\tD = X - Mean\tD2\n");
		//Printing the values//
		for(i = 0; i < size; i++)
				printf("%d\t\t% d\t\t%d\n", arr[i], dev[i], dev_sq[i]);
		//Freeding the memory//
		free(dev);
		free(dev_sq);
		return variance;
}

