#include "sll.h"

int sl_insert_after(Slist **head, data_t g_data, data_t ndata)
{
    //Checking list is empty or not//
    if(*head == NULL)         
	    return LIST_EMPTY;
    //The value of head will be assigned to temp variable//	    
    Slist *temp = *head;      
    while(temp)
    {
            //Checking the given data is present in the list or not//
	    if(temp -> data == g_data)     
	    {
	        //Allocating the new node//
	        Slist *new = malloc(sizeof(Slist));  
	        if(new == NULL)
	   	        return FAILURE;
	   	//Updating the data in new node//        
	        new -> data = ndata;      
	        //Updating the link in new node//
	        new -> link = temp -> link;
	        //Updating the link of previous node//       
	        temp -> link = new;         
	        return SUCCESS;
	    }
	    temp = temp -> link;
    }
    return DATA_NOT_FOUND;
}
