#include"hash.h"

int destroy_HT(hash_t *arr, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
            //Checking the node of corresponding index value is present or not//
	    if(arr[i].value != -1) 
	    {
	        //If it is, that first node value stored as -1//
	        hash_t *temp = arr[i].link;
	        arr[i].value = -1;
	        arr[i].link = NULL;
	        while(temp)
	        {
	                //All nodes linked will be deleted//
		        hash_t *temp1 = temp -> link;
		        free(temp);
		        temp = temp1;
	        }
	    }
    }
    return SUCCESS;
}
