#include "main.h"

//Function for binary search using iterations//
data_t binarySearch_iterative(data_t *arr, data_t size, data_t key)
{
    int mid, low = 0, high = size - 1;
    //The loop will iterate up the low value lesser than or equal to high//    
    while(low <= high)       
    {
	    mid = (low + high) / 2;
	    //If key value found, it will return mid value//       
	    if(arr[mid] == key)     
	        return mid;
	    //If key is not found, if key is lesser than mid and the high value changed to (mid - 1)//    
	    else if(key < arr[mid])  
	        high = mid - 1;
	    //If key is greater than mid then the low value changed to (mid + 1)//    
	    else if(key > arr[mid])   
	        low = mid + 1;
    }	
    return DATA_NOT_FOUND;
}
