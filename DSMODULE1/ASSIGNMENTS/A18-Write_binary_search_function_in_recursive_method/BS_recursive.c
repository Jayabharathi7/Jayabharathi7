#include "main.h"

//Function to search the element using binary search//
data_t binarySearch_recursive(data_t *arr, data_t size, data_t key, data_t first, data_t last)
{
    //Checking first is lesser than or equal to last//
    if(first > last)          
	return DATA_NOT_FOUND;
    int mid;
    mid = (first + last)/2;   
    //Checking key is found or not//   
    if(arr[mid] == key)    
	    return mid;
    //If key is not found and greater than midvalue, then first value is assigned with mid + 1//	    
    else if(key > arr[mid]) 
	    first = mid + 1;
    //If key is lesser than midvalue, then last value is assigned with mid - 1//	    
    else if(key < arr[mid]) 
	    last = mid - 1;
    //Function will call itself//	    
    binarySearch_recursive(arr, size, key, first, last); 
}
