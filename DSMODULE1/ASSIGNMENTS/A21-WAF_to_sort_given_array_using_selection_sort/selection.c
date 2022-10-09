#include "main.h"

data_t selection(data_t *arr, data_t size)
{
    int j, current_min, current_item, temp;
    //Outer loop will iterate upto size times//
    for(j = 0; j < size; j++) 
    {
        //Current_min will be updated for every iteration//
	current_min = j;  
	for(current_item = j+1; current_item < size; current_item++)
	{
	    //Current_min is compared with all the remaining element//
	    if(arr[current_item] < arr[current_min]) 
	        //If the condition is true, current_min point out current_item//
		current_min = current_item; 
	}
	//After all comparisions, if j value is not pointing the old position//  
	if(current_min != j) 
	{
	    //It will be swapped//
	    temp = arr[j];  
	    arr[j] = arr[current_min];
	    arr[current_min] = temp;
	}
		
    }
    
}
