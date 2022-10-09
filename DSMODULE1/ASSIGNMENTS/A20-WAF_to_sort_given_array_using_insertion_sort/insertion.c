#include "main.h"

data_t insertion(data_t *arr, data_t size)
{
    int key, i, j;
    //Outer loop will iterate upto size//
    for(i = 1; i < size; i++)  
    {
            //Key value get updated for every iteration//
	    key = arr[i];   
	    //j is pointing previous index of i for every iteration of outer loop//
	    j = i - 1;      
	    //Checking jth index value is greater than key//
	    while(j >= 0 && arr[j] > key) 
	    {
	        //If it is, it will get shifted and overwrite the jth index//
	        arr[j+1] = arr[j];
	        j--;               
	    }
	    //Key value will be stored next to current jth position//
	    arr[j+1] = key; 
    }
    
}
