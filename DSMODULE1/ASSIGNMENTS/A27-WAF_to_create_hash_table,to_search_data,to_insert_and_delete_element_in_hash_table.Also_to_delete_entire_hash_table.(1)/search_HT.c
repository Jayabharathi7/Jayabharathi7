#include"hash.h"

int search_HT(hash_t *arr, int data, int size)
{
    int index = data % size;
    //Checking the value is present in first node or not//    
    if(arr[index].value == data) 
	    return SUCCESS;
    hash_t *temp = arr[index].link;
    while(temp)
    {
            //Checking the data is present in the particular node or not//
	    if(temp -> value == data)
	        return SUCCESS;
	    temp = temp -> link;
    }
    return DATA_NOT_FOUND;
}
