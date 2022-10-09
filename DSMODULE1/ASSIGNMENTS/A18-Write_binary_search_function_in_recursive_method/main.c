/*
NAME       : JAYABHARATHI J
DATE       : 18/9/2022
DESCRIPTION: A18 - Write binary search function in recursive method
SAMPLE I/P :
Enter the size of an array
5
Enter the elements of an array
1 2 3 4 5
Enter the key to search
4
INFO : Key found at the position 3

*/
#include "main.h"

int main()
{

    //Declaring the variables//
    data_t option, res, key, size;
    
    //Reading the number of elements from the user//
    printf("Enter the size of an array\n");
    scanf("%d", &size);
    
    data_t arr[size];
    //Sorting the elements for binary search//
    printf("Enter the elements of an array\n");
    for (int i = 0; i < size; i++)
    {
	    scanf("%d", &arr[i]);
    }

    printf("Enter the key to search\n");
    scanf("%d", &key);

    //Calling the function to search the element//
    if ((res = binarySearch_recursive(arr, size, key, 0, size - 1)) == DATA_NOT_FOUND)
    {
	    printf("INFO : Key not found\n");
    }
    else
    {	
	    printf("INFO : Key found at the position %d\n", res);
    }
	
    return 0;
}


