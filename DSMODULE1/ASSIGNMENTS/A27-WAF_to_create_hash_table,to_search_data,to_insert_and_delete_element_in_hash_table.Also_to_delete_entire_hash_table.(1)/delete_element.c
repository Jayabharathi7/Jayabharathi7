#include"hash.h"
//Function definition for delete element//
int delete_element(hash_t *arr, int data, int size) 
{
    //Index value will be calculated for corresponding data//
    int index = data % size;     
    if(arr[index].value != -1)
    {
            //Checking the value is present in first node or not//
	    if(arr[index].value == data) 
	    {
	        if(arr[index].link != NULL)
	        {
		        hash_t *temp2 = arr[index].link;
		        arr[index].link = temp2 -> link;
		        arr[index].value = temp2 -> value;
		        arr[index].index = temp2 -> index;
		        free(temp2);


		        return SUCCESS;
	        }
	        arr[index].value = -1;
	        return SUCCESS;
	    }
	    hash_t *temp = arr[index].link, *temp1 = temp -> link;
	    //Checking the value is present in second node or not//
	    if(arr[index].link -> value == data)
	    {
	        //If it is second node will be deleted and first node link part will be updated//
	        arr[index].link = temp -> link;
	        free(temp);
	        return SUCCESS;
	    }

	    while(temp1)
	    {
	        //Checking the value is present in remaining nodes or not//
	        if(temp1 -> value == data)    
	        {
	                //If it is, that node will be deleted and previous node will be updated//
		        temp -> link = temp1 -> link;
		        free(temp1);
		        return SUCCESS;
	        }
	        temp = temp1;
	        temp1 = temp1 -> link;
	    }
	    //After termination of loop, it will return DATA_NOT_FOUND//
	    return DATA_NOT_FOUND; 
    }
    else
	    return DATA_NOT_FOUND;
}


