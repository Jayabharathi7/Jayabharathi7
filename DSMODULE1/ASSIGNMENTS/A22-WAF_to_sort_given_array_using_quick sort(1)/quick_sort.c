#include "main.h"

//Function to sort the array in quick sort method//
int quick_sort( int *arr, int first, int last )
{
    int index;
    if(first <= last)
    {
            //Function call for partition and return value will be stored to index//
	    index = partition(arr, first, last); 
	    //Recursion call for left side array to pivot//
	    quick_sort(arr, first, index-1);  
	    //Recursion call for right side to pivot//
	    quick_sort(arr, index+1, last);  
    }

}
