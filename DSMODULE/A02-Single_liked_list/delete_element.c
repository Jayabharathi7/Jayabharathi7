#include "sll.h"

int sl_delete_element(Slist **head, data_t data)
{
    //Checking list is empty or not//
    if(*head == NULL)  
	    return FAILURE;
    //Assigning the head value to the temporary variable//	    
    Slist *temp = *head, *temp1 = NULL; 
    //Running the loop upto NULL//
    while(temp)                  
    {
            //Checking whether the given data is present in the list or not//
	    if(temp -> data == data)  
	    {
	        //Checking whether list contains single node or not//
	        if(*head == temp)      
	        {
	                //If it is head value updated//
		        *head = temp -> link;   
		        free(temp);
		        return SUCCESS;
	        }
	        //If there is multiple node, previous node will be updated//
	        temp1 -> link = temp -> link;
	        free(temp);
	        return SUCCESS;
	    }
	    temp1 = temp;
	    temp = temp -> link;
    }
    return DATA_NOT_FOUND;
}
