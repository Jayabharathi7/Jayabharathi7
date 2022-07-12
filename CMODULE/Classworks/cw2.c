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
		/*int i, temp, size;
		printf("Enter the number of elements: ");
		scanf("%d", &size);
		int arr[size];
		printf("Enter %d array elements", size);
		for(i = 0; i < size; i++)
		{
				scanf("%d", &arr[i]);
		}
		printf("Array elements: ");
		for(i = 0; i < size; i++)
		{
				printf("%d ", arr[i]);
		}
		printf("\n");
		temp = arr[0];
		for(i = 0; i < size - 1; i++)
		{
				arr[i] = arr[i + 1];
		}
		arr[i] = temp;
		printf("Array elements after left rotate: ");
		for(i = 0; i < size; i++)
		{
				printf("%d ", arr[i]);
		}
		printf("\n");
		temp = arr[size - 1];
		for(i = size - 1; i > 0; i--)
		{
				arr[i] = arr[i - 1];
		}
		arr[i] = temp;
		printf("Array elements after right rotate: ");
		for(i = 0; i < size; i++)
		{
				printf("%d ", arr[i]);
		}
		printf("\n");*/
		int size, temp;
		printf("Enter the number of elements: ");
		scanf("%d", &size);
		int arr[size], arr1[size], i, j;
        printf("Enter %d elements 1st array", size);
		for(i = 0; i < size; i++)
		{
				scanf("%d", &arr[i]);
		}
		printf("Enter %d elements 2nd array", size);
		for(i = 0; i < size; i++)
		{
				scanf("%d", &arr1[i]);
		}
		printf("A array : ");
		for(i = 0; i < size; i++)
		{
				printf("%d ", arr[i]);
		}
		printf("\n");
		printf("B array : ");
		for(i = 0; i < size; i++)
		{
				printf("%d ", arr1[i]);
		}
		printf("\n");
		int count = 0;
		for(i = 0; i < size - 1; i++)
		{
				for(j = 0; j < size - 1 - i; j++)
				{
						if(arr1[j] > arr1[j + 1])
						{
								temp = arr1[j + 1];
								arr1[j + 1] = arr1[j];
								arr1[j] = temp;
						}
				}
		}
		for(i = 0; i < size; i++)
		{
         		if(arr[i] == arr1[j])
				{
						count++;
						continue;
				}
				else
				{
						break;
				}
		}
		if(count == size)
		{
				printf("Equal arrays\n");
		}
		else
		{
				printf("Unequal arrays\n");
		}
		return 0;
}


