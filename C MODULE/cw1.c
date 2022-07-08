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
		int sum = 0, size, i;
		printf("Enter the number of elements: ");
		scanf("%d", &size);
		int arr[size];
		printf("Enter %d elements\n", size);
		for(i = 0; i < size; i++)
		{
				scanf("%d", &arr[i]);
		}
		for(i = 0; i < size; i++)
		{
				if(arr[i] > arr[0])
				{
						arr[0] = arr[i];
				}
		}
		printf("Largest element is %d\n", arr[0]);
		for(i = 0; i < size; i++)
		{
				if(arr[i] < arr[0])
				{
						arr[0] = arr[i];
				}
		}
		printf("Smallest element is %d\n", arr[0]);
		return 0;
}
*/

/*#include<stdio.h>
int main()
{
		int size, sum = 0, i;
		float avg;
		printf("Enter the number of elements: ");
		scanf("%d", &size);
		int arr[size];
		printf("Enter %d elements\n", size);
		for(i = 0; i < size; i++)
		{
				scanf("%d", &arr[i]);
		}
		printf("Elements are: ");
		for(i = 0; i < size; i++)
		{
				printf("%d ", arr[i]);
		}
		printf("\n");
		for(i = 0; i < size; i++)
		{
				sum = sum + arr[i];
		}
		printf("sum is %d\n", sum);
		avg = (float) sum / size;
	    printf("Average is %f\n", avg);
		return 0;
}*/

#include<stdio.h>
int main()
{
		int  i, j, temp, size;
		printf("Enter the size: ");
		scanf("%d", &size);
		int arr[size];
		printf("Enter %d elements: ", size);
		for(i = 0; i < size; i++)
		{
				scanf("%d", &arr[i]);
		}
		printf("After bubble sorting: ");
		for(i = 0; i < size - 1; i++)
		{
				for(j = 0; j < size - i - 1; j++)
				{
						if(arr[j] > arr[j + 1])
						{
								temp = arr[j];
								arr[j] = arr[j + 1];
								arr[j + 1] = temp;
						}
				}
		}
		printf("After reversing: ");
        for(i = 0; i < size - i - 1; i++)
		{
				temp = arr[i];
				arr[i] = arr[size - 1 - i];
				arr[size - 1 - i] = temp;
		}
		for(i = 0; i < size; i++)
		{
				printf("%d ", arr[i]);
		}
		printf("\n");
		return 0;
}


