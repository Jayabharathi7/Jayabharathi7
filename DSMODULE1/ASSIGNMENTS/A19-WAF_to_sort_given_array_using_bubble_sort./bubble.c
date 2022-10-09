#include "main.h"

data_t bubble(data_t *arr, int size )
{
    int i, j, temp;
    //Outer loop will iterate upto size - 1 times//
    for(i = 0; i < size - 1; i++)  
    {
            //For every iteration of inner loop, adjacent elements are compared//
	    for(j = 0; j < size - i - 1; j++)
	    {
	        //If current element is greater than next//
	        if(arr[j] > arr[j+1]) 
	        {
	                //Two elements will be swapped//
		        temp = arr[j];   
		        arr[j] = arr[j+1];
		        arr[j+1] = temp;
	        }
	    }
    }
    
}
